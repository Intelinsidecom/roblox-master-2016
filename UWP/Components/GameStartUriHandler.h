//
// GameStartUriHandler — reference reconstruction of the 1.1.57 binary's
// "Roblox://games/start" protocol handler (Ghidra FUN_004bb1f0), copied
// into the remake project as documentation ONLY.
//
// LAYERING (engine vs XAML/frontend)
// ----------------------------------
// This is 100% XAML / app-shell (frontend) code, NOT engine. The classes
// it touches live in the app's own Roblox.Controls WinRT surface
// (u_Roblox.Controls.GameParameters_01033c84, u_Roblox.Controls.GameView_
// 01033d20) and the winmd projections (Roblox.GameParameters.cs,
// Roblox.GameView.cs). The engine only takes over one call later, at
// PlaceLauncher::StartGame (FUN_00541e60): that is the boundary where the
// assembled StartGameParams struct leaves the app shell.
//
//   WebView::OnNavigationStarting        (handler FUN_004babb0, registered by
//     FUN_0052b410 in the WebView ctor; "handled" out-bool @ +0x20)
//     -> FUN_004bb1f0   THIS handler
//        - path check: uri->Path  == "/games/start"
//                      (FUN_004bbbc0 = Uri::get_Path, vtable +0x34)
//        - ref new GameParameters          (FUN_0047a000)
//        - iterate uri->QueryParsed         (FUN_004bba90 = Uri::get_QueryParsed,
//                                            vtable +0x3C; an IVectorView<
//                                            IKeyValuePair<String,String>>;
//                                            per-entry key/value read via
//                                            FUN_004702e0 = get_Key (+0x18),
//                                            FUN_0046ff20 = get_Value (+0x1c))
//        - key -> setter mapping:
//              "placeid"        -> set_placeID       (+0x64)
//              "gameInstanceId" -> set_instanceID    (+0x74)
//              "userID"         -> set_userID        (+0x6c)
//              "accessCode"     -> set_accessCode    (+0x7c)
//        - isPartyLeader = false  (set_isPartyLeader +0x94)
//        - joinRequestType = -1   (set_joinRequestType +0x5c)  [default]
//        - derive joinRequestType:
//              placeID empty && userID set   -> 1   (join by user id)
//              placeID set   && accessCode   -> 2   (join by access code)
//              placeID set   && instanceID   -> 3   (join by instance id)
//              placeID set   && neither      -> 0   (join by place id)
//              placeID empty && userID empty -> -1  (unset: never launched)
//        - gate: only if get_joinRequestType != -1:
//            ref new GamePage  (FUN_00507270; sets Roblox::GamePage::vftable)
//            gamePage->StartGame(params)     (FUN_005074f0)
//              - stores params into the GameView child ((GamePage+0x8c)->+0x8c)
//              - if GameView loaded flag (+0x88) set:
//                  GameView::StartGame impl  (FUN_004a2580)
//                    reads all 8 getters (+0x58..+0x90) -> StartGameParams
//                    -> PlaceLauncher::StartGame (FUN_00541e60)  [ENGINE BOUNDARY]
//
//   All source-of-truth references below are the Ghidra FUN_*.c exports, cited
//   by function line number (the exports carry no byte addresses).
//
// NOTE: partyGuid and browserTrackerID getters ARE read by FUN_004a2580
// (+0x80, +0x88) but this handler never sets them; those fields are
// populated by the party / teleport paths, not the games/start URI.
//
// WIRING STATUS
// -------------
// NOT compiled into RobloxUWP.vcxproj. Pure reference.
//
// The live behaviour of the 1.1.57 binary (and the remake) is implemented
// in-WebView, NOT via App::OnActivated protocol activation and NOT via any
// AppxManifest <uap:Protocol> registration (the original AppxManifest has no
// protocol extension):
//   - WebView::OnNavigationStarting (FUN_004babb0) checks the navigation URI.
//   - http(s) path "/games/start" -> FUN_004bb1f0 (THIS handler).
//   - any other scheme           -> FUN_004bb790 (fallback; parses the
//     custom "robloxmobile:" launcher payload built by the site's
//     ProtocolHandlerClientInterface.js, e.g.
//     robloxmobile:1+launchmode:play+gameinfo:<json>+placelauncherurl:<url>
//     +browsertrackerid:<id>, extracts the place, cancels the navigation and
//     starts the game — never reaching the OS protocol resolution).
// The remake implements this split directly in WebView::OnNavigationStarting
// (WebView.xaml.cpp): the "/games/start" branch, plus an IsCustomScheme()
// branch that parses the robloxmobile-style payload and routes to
// GameModule::launchGame via the NativeHybrid bridge.
//

#pragma once

#include "GameParameters.h"

namespace Roblox
{
    namespace Controls
    {
        public ref class GameStartUriHandler sealed
        {
        public:
            static bool IsGameStartUri(Windows::Foundation::Uri^ uri);
            static GameParameters^ BuildGameParameters(Windows::Foundation::Uri^ uri);
        };
    }
}
