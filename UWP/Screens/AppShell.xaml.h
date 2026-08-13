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

        // Read-only view of the currently active nav destination (as its int
        // value, see Roblox::Controls::NavMenuDestination). Used by the game
        // layer to restore the page the user was on after rebuilding the
        // AppShell on leave-game in low-memory mode.
        property int CurrentDestination
        {
            int get() { return static_cast<int>(m_currentDestination); }
        }

        // Navigate the rebuilt AppShell to a nav destination (its int value).
        void NavigateToDestination(int destination);

        // Low-memory mode: tears down every cached WebView page (each backed
        // by an out-of-process WebView process charged against the UWP app's
        // AppMemoryUsageLimit) and blanks the active WebView, so the XAML UI
        // layer holds no remote content while a native game runs. The caller is
        // expected to drop its AppShell reference afterwards and rebuild a new
        // AppShell on leave-game.
        void ReleaseWebViews();

        // Memory-aware page cache: evicts cached WebView pages until at most
        // maxCount remain, always keeping the page currently shown in the frame
        // (oldest-first via an LRU order). Called on low-memory devices in
        // ShowPage and by the frontend memory-pressure handler so the process
        // stays under AppMemoryUsageLimit during browsing.
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
        std::vector<int> m_pageCacheOrder; // LRU order (back = most recently used)
        Roblox::Controls::WebView^ m_activeWebView;
        Windows::Foundation::EventRegistrationToken m_backRequestedToken;
        Windows::Foundation::EventRegistrationToken m_navCompletedToken;
    };
}
