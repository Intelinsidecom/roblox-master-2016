#pragma once

#include "LandingPage.g.h"
#include "LoginPage.xaml.h"
#include "SignupPage.xaml.h"

namespace Roblox
{
    namespace Views
    {
        [Windows::Foundation::Metadata::WebHostHidden]
        public ref class LandingPage sealed
        {
        public:
            LandingPage();

        protected:
            virtual void OnNavigatedTo(Windows::UI::Xaml::Navigation::NavigationEventArgs^ e) override;

        private:
            void OnLoginButtonClick(Platform::Object^ sender, Windows::UI::Xaml::RoutedEventArgs^ e);
            void OnSignupButtonClick(Platform::Object^ sender, Windows::UI::Xaml::RoutedEventArgs^ e);
            void OnPlayNowButtonClick(Platform::Object^ sender, Windows::UI::Xaml::RoutedEventArgs^ e);
            void ShowLoginDialog();
            void ShowSignupDialog();
            void OnCloseLandingPageShowAppShell();

            LoginPage^ m_loginPage;
            SignupPage^ m_signupPage;
            bool m_hasAuthenticated;
        };
    }
}
