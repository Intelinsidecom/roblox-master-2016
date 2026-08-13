#pragma once

#include "RbxSplashScreen.g.h"

namespace Roblox
{
    ref class RobloxSettings;
    enum class UpgradeStatus;
}

namespace RobloxUWP
{
    ref class MainPage;
}

namespace Roblox
{
    namespace Views
    {
        ref class LandingPage;
    }
}
 
namespace Roblox
{
    namespace Views
    {
        [Windows::Foundation::Metadata::WebHostHidden]
        public ref class RbxSplashScreen sealed
        {
        public:
            RbxSplashScreen();
            
        protected:
            virtual void OnNavigatedTo(Windows::UI::Xaml::Navigation::NavigationEventArgs^ e) override;

        private:
            Windows::UI::Xaml::Controls::Canvas^ _splashCanvas;
            Windows::UI::Xaml::Controls::Image^ _splashImage;
            Windows::UI::Xaml::Controls::StackPanel^ _splashProgressContainer;
            Windows::UI::Xaml::Controls::TextBlock^ _splashStatusText;
            Windows::Web::Http::HttpClient^ _httpClient;
            Roblox::RobloxSettings^ _robloxSettings;
            Windows::Foundation::EventRegistrationToken _connectivityMonitorToken;
            Windows::UI::Xaml::DispatcherTimer^ _offlinePollTimer;
            bool _startupSequenceStarted;
            void BeginStartupSequence();
            void UpdateSplashLayout(Platform::Object^ sender, Windows::UI::Xaml::SizeChangedEventArgs^ e);
            void UpdateStatusText(const wchar_t* resourceId);
            void CheckConnectivity();
            void OnNetworkStatusChanged(Platform::Object^ sender);
            void OnOfflinePollTimerTick(Platform::Object^ sender, Platform::Object^ e);
            void InitializeDeviceAsync();
            void CheckForUpdatesAsync();
            void ShowUpgradeDialog(Roblox::UpgradeStatus status);
            void CheckAuthenticationAsync();
            void NavigateToNextPage(bool isAuthenticated);
            void OnUpgradeDialogStore(Windows::UI::Popups::IUICommand^ command);
            void BeginPlatformLogin();
            void BeginAuthorization();
            void BeginAuthUnlinkCheck();
            void UserAuthComplete(bool isAuthenticated);
            void PromptLogin();
            void LoginSucceeded();
            void LoginFailed();
            void TicketProcessed(bool isAuthenticated);
            void HandlePurchaseResponse(int statusCode);
            void CheckHttpStatusCode(int statusCode);
            void ReportSessionSuccess();
            void ReportSessionCrash();
            void CallEphemeralCountersAPI(Platform::String^ counterName, Platform::String^ amount);
        };
    }
}