#pragma once

#include "..\Components\Page.h"
#include "AppShell.g.h"
#include "..\Components\NavMenu.xaml.h"
#include "..\Services\LoginService.h"
#include "..\Roblox\OnNavigationCompletedHandler.h"
#include <chrono>
#include <map>
#include <vector>

namespace Roblox
{
    namespace Controls
    {
        enum class NavMenuDestination : int;
    }
}

namespace Roblox
{
    namespace Views
    {
        ref class HomePage;
    }
}

namespace Roblox
{
    [Windows::Foundation::Metadata::WebHostHidden]
    public ref class AppShell sealed
    {
    public:
        AppShell();

        property Windows::UI::Xaml::Controls::Frame^ AppFrame
        {
            Windows::UI::Xaml::Controls::Frame^ get();
        }

        void ResetToDefaults();

        property int CurrentDestination
        {
            int get() { return static_cast<int>(m_currentDestination); }
        }

        void NavigateToDestination(int destination);
        void ReleaseWebViews();
        void EvictCachedPages(size_t maxCount);

    internal:
        static void RefreshBackButtonState();

    protected:
        virtual void OnNavigatedTo(Windows::UI::Xaml::Navigation::NavigationEventArgs^ e) override;

    private:
        void OnNavMenuItemInvoked(Platform::Object^ sender, Windows::UI::Xaml::Controls::ListViewItem^ item);
        void OnItemInvoked(Platform::Object^ sender, Windows::UI::Xaml::Controls::ItemClickEventArgs^ e);
        void OnNavMenuSelectionChanged(Platform::Object^ sender, Windows::UI::Xaml::Controls::SelectionChangedEventArgs^ e);
        void InvokeDestination(Roblox::Controls::NavMenuDestination destination);
        bool IsTapEcho();
        void ShowPage(Roblox::Controls::NavMenuDestination destination);
        Windows::UI::Xaml::Controls::Page^ CreatePage(Roblox::Controls::NavMenuDestination destination);
        void OnFrameNavigated(Platform::Object^ sender, Windows::UI::Xaml::Navigation::NavigationEventArgs^ e);

        void OnLogoutSucceeded();
        void OnLogoutFailed(int httpStatus);

        bool IsActiveShell();
        Roblox::Controls::WebView^ GetActiveWebView(Windows::UI::Xaml::Controls::Page^ page);
        void UpdateBackButtonState();
        void OnActiveWebViewNavigationCompleted(Platform::String^ uri, Windows::UI::Xaml::Controls::WebViewNavigationCompletedEventArgs^ e);
        void OnBackRequested(Platform::Object^ sender, Windows::UI::Core::BackRequestedEventArgs^ e);

        Roblox::Services::LoginService^ m_loginService;
        bool m_logoutInFlight;
        bool m_initialSelectionDone;
        Roblox::Views::HomePage^ m_homePage;
        std::chrono::steady_clock::time_point m_lastTap;
        Roblox::Controls::NavMenuDestination m_currentDestination;
        std::map<int, Windows::UI::Xaml::Controls::Page^> m_pageCache;
        std::vector<int> m_pageCacheOrder;
        Roblox::Controls::WebView^ m_activeWebView;
        Windows::Foundation::EventRegistrationToken m_backRequestedToken;
        Windows::Foundation::EventRegistrationToken m_navCompletedToken;
    };
}
