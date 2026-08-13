#include "pch.h"
#include "GameStartUriHandler.h"

using namespace Roblox::Controls;
using namespace Windows::Foundation;

//
// Mirrors FUN_004bb1f0's path gate: the binary extracted the URI path via
// Uri::get_Path (FUN_004bbbc0, vtable +0x34) and compared it ordinal-wise
// against L"/games/start" (FUN_004bb1f0.c:65-71).
//
bool GameStartUriHandler::IsGameStartUri(Uri^ uri)
{
    if (uri == nullptr)
    {
        return false;
    }

    Platform::String^ path = uri->Path;
    return path != nullptr && path->Equals("/games/start");
}

//
// Reconstructs FUN_004bb1f0's GameParameters population. The binary
// iterated uri->QueryParsed (FUN_004bba90, vtable +0x3c) — an
// IVectorView<KeyValuePair<String,String>> — and matched each key with a
// case-sensitive ordinal compare against the four literals below.
//
// The object is only handed to GamePage::StartGame (FUN_005074f0, which
// forwards it to the GameView child) when joinRequestType ends up != -1;
// BuildGameParameters returns a fully derived object either way, so the
// caller must apply the same gate.
//
GameParameters^ GameStartUriHandler::BuildGameParameters(Uri^ uri)
{
    GameParameters^ params = ref new GameParameters();

    // set_isPartyLeader(0)  /  set_joinRequestType(-1) — the defaults the
    // binary writes before looking at any query field (FUN_004bb1f0.c:117-118).
    params->isPartyLeader = false;
    params->joinRequestType = -1;

    if (uri == nullptr)
    {
        return params;
    }

    for (auto entry : uri->QueryParsed)
    {
        // Each element is IKeyValuePair<String,String>: get_Key at vtable
        // +0x18 (FUN_004702e0), get_Value at +0x1c (FUN_0046ff20).
        Platform::String^ name = entry->Key;
        Platform::String^ value = entry->Value;

        if (name->Equals("placeid"))
        {
            params->placeID = value;
        }
        else if (name->Equals("gameInstanceId"))
        {
            params->instanceID = value;
        }
        else if (name->Equals("userID"))
        {
            params->userID = value;
        }
        else if (name->Equals("accessCode"))
        {
            params->accessCode = value;
        }
    }

    // joinRequestType derivation, order-matched to the decompiled logic
    // (FUN_004bb1f0.c:116-166). Reads back through the getters, just like the
    // binary does:
    //   1 = join by user id     (placeID absent,  userID present)
    //   2 = join by access code (placeID present, accessCode present)
    //   3 = join by instance id (placeID present, no accessCode, instanceID)
    //   0 = join by place id    (placeID present, no accessCode, no instanceID)
    //  -1 = nothing usable      (placeID absent,  userID absent)
    if (params->placeID == nullptr || params->placeID->IsEmpty())
    {
        if (params->userID != nullptr && !params->userID->IsEmpty())
        {
            params->joinRequestType = 1;
        }
    }
    else if (params->accessCode != nullptr && !params->accessCode->IsEmpty())
    {
        params->joinRequestType = 2;
    }
    else if (params->instanceID != nullptr && !params->instanceID->IsEmpty())
    {
        params->joinRequestType = 3;
    }
    else
    {
        params->joinRequestType = 0;
    }

    return params;
}
