#pragma once

#include "LoginPage.g.h"
#include "..\Roblox\CloseLandingPageShowAppShell.h"
#include "..\Services\LoginService.h"

namespace Roblox
{
    namespace Views
    {
        [Windows::Foundation::Metadata::WebHostHidden]
        public ref class LoginPage sealed
        {
        public:
            LoginPage();

            property Roblox::CloseLandingPageShowAppShell^ closeLandingPageHandler;

        private:
            void OnLoginSucceeded();
            void OnLoginFailed(Roblox::Services::LoginFailureReason errorCode, int httpStatus);

            void OnLoginButtonClick(Platform::Object^ sender, Windows::UI::Xaml::RoutedEventArgs^ e);
            void OnCancelButtonClick(Platform::Object^ sender, Windows::UI::Xaml::RoutedEventArgs^ e);
            void OnSignupButtonClick(Platform::Object^ sender, Windows::UI::Xaml::RoutedEventArgs^ e);

            Roblox::Services::LoginService^ m_loginService;
            bool m_closeHandled;
        };
    }
}
