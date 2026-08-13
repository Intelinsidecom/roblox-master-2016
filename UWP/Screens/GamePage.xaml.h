#pragma once

#include "..\Components\Page.h"
#include "..\Components\GameClosedEventHandler.h"
#include "..\Components\GameParameters.h"
#include "..\Components\GameView.xaml.h"
#include "GamePage.g.h"

namespace Roblox
{
    [Windows::Foundation::Metadata::WebHostHidden]
    public ref class GamePage sealed
    {
    public:
        GamePage();

        void StartGame(Controls::GameParameters^ params);

        event Controls::GameClosedEventHandler^ OnGameShutDown;

    internal:
        void LeaveGame();

    private:
        void OnGameViewClosed();
        void OnGameViewReady();

        Windows::UI::Xaml::UIElement^ m_previousContent;
        GamePage^ m_selfReference;

        // Low-memory mode only: instead of keeping the AppShell (and all its
        // out-of-process WebView pages) alive for the whole game, the AppShell
        // is dropped before the engine surface swaps in and rebuilt fresh when
        // the player leaves. These two record what to bring the user back to.
        bool m_droppedShellForLowMemory;
        int m_returnDestination;
    };
}
