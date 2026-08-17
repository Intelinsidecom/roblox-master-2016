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

            void InstallTextInputBridge();
            void DetachTextInputBridge();
            void ShowOrHideTextInput(bool show, std::wstring initialText);

            void OnChatTextBoxKeyDown(Platform::Object^ sender, Windows::UI::Xaml::Input::KeyRoutedEventArgs^ args);
            void OnChatTextBoxLostFocus(Platform::Object^ sender, Windows::UI::Xaml::RoutedEventArgs^ args);
            void OnChatTextBoxTextChanged(Platform::Object^ sender, Windows::UI::Xaml::Controls::TextChangedEventArgs^ args);
            void OnInputPaneShowing(Windows::UI::ViewManagement::InputPane^ sender, Windows::UI::ViewManagement::InputPaneVisibilityEventArgs^ args);
            void OnInputPaneHiding(Windows::UI::ViewManagement::InputPane^ sender, Windows::UI::ViewManagement::InputPaneVisibilityEventArgs^ args);

            bool m_isGameRunning;
            bool m_keyboardActive;
            Windows::UI::ViewManagement::InputPane^ m_inputPane;
            Windows::Foundation::EventRegistrationToken m_chatKeyDownToken;
            Windows::Foundation::EventRegistrationToken m_chatLostFocusToken;
            Windows::Foundation::EventRegistrationToken m_chatTextChangedToken;
            Windows::Foundation::EventRegistrationToken m_inputPaneShowingToken;
            Windows::Foundation::EventRegistrationToken m_inputPaneHidingToken;
        };
    }
}
