#pragma once

#include "Components\GameView.g.h"
#include "GameClosedEventHandler.h"
#include "GameParameters.h"

namespace Roblox
{
    namespace Controls
    {
        [Windows::Foundation::Metadata::WebHostHidden]
        public ref class GameView sealed
        {
        public:
            GameView();

            void StartGame(GameParameters^ params);
            void LeaveGame();
            bool IsGameRunning();
            void PresentGameLeaveMenu();

            event GameClosedEventHandler^ OnGameShutDown;
            event GameClosedEventHandler^ OnGameReady;

        private:
            ~GameView();

            bool m_isGameRunning;
        };
    }
}
