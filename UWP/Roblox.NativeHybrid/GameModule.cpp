#include "pch.h"
#include "GameModule.h"
#include "..\Components\GameParameters.h"
#include "..\Screens\GamePage.xaml.h"
#include <windows.data.json.h>

using namespace Roblox::NativeHybrid;
using namespace Roblox::Controls;
using namespace Windows::Data::Json;

GameModule::GameModule()
{
    m_name = "Game";
    RegisterFunction("launchGame", ref new ModuleFunction(this, &GameModule::LaunchGame));
}

void GameModule::LaunchGame(Command^ command)
{
    auto params = ref new GameParameters();
    if (command != nullptr && command->Params != nullptr)
    {
        JsonObject^ json = command->Params;
        params->joinRequestType = static_cast<int>(json->GetNamedNumber(L"joinRequestType", 0));
        params->placeID = json->GetNamedString(L"placeId", L"");
        params->userID = json->GetNamedString(L"userId", L"");
        params->instanceID = json->GetNamedString(L"instanceId", L"");
        params->accessCode = json->GetNamedString(L"accessCode", L"");
        params->partyGuid = json->GetNamedString(L"partyGuid", L"");
        params->browserTrackerID = json->GetNamedString(L"browserTrackerID", L"");
        params->isPartyLeader = json->GetNamedBoolean(L"isPartyLeader", false);
    }

    auto page = ref new Roblox::GamePage();
    if (command != nullptr)
    {
        page->OnGameShutDown += ref new GameClosedEventHandler([command]() {
            command->ExecuteCallback(true, nullptr);
        });
    }

    page->StartGame(params);
}
