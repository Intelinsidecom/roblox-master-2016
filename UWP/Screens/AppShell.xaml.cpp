#include "pch.h"
#include "AppShell.xaml.h"
#include "HomePage.xaml.h"
#include "GamesPage.xaml.h"
#include "FriendsPage.xaml.h"
#include "CatalogPage.xaml.h"
#include "MessagesPage.xaml.h"
#include "ProfilePage.xaml.h"
#include "CharacterPage.xaml.h"
#include "InventoryPage.xaml.h"
#include "TradePage.xaml.h"
#include "GroupsPage.xaml.h"
#include "ForumPage.xaml.h"
#include "SettingsPage.xaml.h"
#include "HelpPage.xaml.h"
#include "LandingPage.xaml.h"
#include "..\Components\NavMenu.xaml.h"
#include "..\Components\WebViewPage.xaml.h"
#include "..\Roblox\RobloxSettings.h"
#include "..\Roblox\ResourceStrings.h"
#include "..\Services\LoginService.h"
#include "UWPPlatform.h"

using namespace Roblox;
using namespace Roblox::Views;
using namespace Roblox::Controls;
using namespace Roblox::Services;
using namespace Platform;
using namespace Windows::Foundation;
using namespace Windows::UI::Xaml;
using namespace Windows::UI::Xaml::Controls;
using namespace Windows::UI::Xaml::Interop;
using namespace Windows::UI::Xaml::Navigation;
using namespace Windows::UI::Core;
using namespace Windows::UI::Popups;

namespace
{
    // Steady-state page-cache cap for low-memory devices. Each cached page owns
    // a WebView whose out-of-process engine is charged to the app's
    // AppMemoryUsageLimit, so on 512 MB-class phones we keep at most this many
    // cached pages (plus the active one) to bound WebView process count.
    const size_t kLowMemMaxCachedPages = 2;
}

AppShell::AppShell()
    : m_loginService(ref new LoginService())
    , m_logoutInFlight(false)
    , m_initialSelectionDone(true)
    , m_homePage(nullptr)
    , m_lastTap()
    , m_currentDestination(NavMenuDestination::Home)
    , m_activeWebView(nullptr)
{
    InitializeComponent();

    m_backRequestedToken = SystemNavigationManager::GetForCurrentView()->BackRequested +=
        ref new EventHandler<Windows::UI::Core::BackRequestedEventArgs^>(this, &AppShell::OnBackRequested);

    if (frame != nullptr)
    {
        ShowPage(NavMenuDestination::Home);
        frame->Navigated +=
            ref new NavigatedEventHandler(this, &AppShell::OnFrameNavigated);
    }

    if (NavMenuList != nullptr)
    {
        NavMenuList->ItemInvoked +=
            ref new Windows::Foundation::EventHandler<Windows::UI::Xaml::Controls::ListViewItem^>(
                this, &AppShell::OnNavMenuItemInvoked);
        NavMenuList->ItemClick +=
            ref new ItemClickEventHandler(this, &AppShell::OnItemInvoked);
        NavMenuList->SelectionChanged +=
            ref new SelectionChangedEventHandler(this, &AppShell::OnNavMenuSelectionChanged);

        NavMenuList->SelectedIndex = 1;
    }

    m_loginService->LogoutSucceeded +=
        ref new LogoutSucceededHandler(this, &AppShell::OnLogoutSucceeded);
    m_loginService->LogoutFailed +=
        ref new LogoutFailedHandler(this, &AppShell::OnLogoutFailed);
}

void AppShell::OnNavMenuItemInvoked(Platform::Object^ sender, Windows::UI::Xaml::Controls::ListViewItem^ item)
{
    if (item == nullptr) return;
    auto tagVal = item->Tag;
    if (tagVal == nullptr) return;
    int destInt = safe_cast<int>(tagVal);
    auto destination = static_cast<NavMenuDestination>(destInt);

    if (IsTapEcho()) return;

    m_lastTap = std::chrono::steady_clock::now();
    InvokeDestination(destination);
}

void AppShell::OnItemInvoked(Platform::Object^ sender, Windows::UI::Xaml::Controls::ItemClickEventArgs^ e)
{
    auto clicked = e->ClickedItem;
    if (clicked == nullptr) return;
    auto container = dynamic_cast<Windows::UI::Xaml::Controls::ListViewItem^>(clicked);
    if (container == nullptr) return;
    auto tagVal = container->Tag;
    if (tagVal == nullptr) return;
    int destInt = safe_cast<int>(tagVal);
    auto destination = static_cast<NavMenuDestination>(destInt);

    if (IsTapEcho()) return;

    m_lastTap = std::chrono::steady_clock::now();
    InvokeDestination(destination);
}

void AppShell::OnNavMenuSelectionChanged(Platform::Object^ sender, Windows::UI::Xaml::Controls::SelectionChangedEventArgs^ e)
{
    auto listView = dynamic_cast<ListView^>(sender);
    if (listView == nullptr) return;
    auto selected = listView->SelectedItem;
    if (selected == nullptr) return;
    auto container = dynamic_cast<ListViewItem^>(selected);
    if (container == nullptr) return;
    auto tagVal = container->Tag;
    if (tagVal == nullptr) return;
    int destInt = safe_cast<int>(tagVal);
    auto destination = static_cast<NavMenuDestination>(destInt);

    if (IsTapEcho()) return;

    if (!m_initialSelectionDone)
    {
        m_initialSelectionDone = true;
        return;
    }

    m_lastTap = std::chrono::steady_clock::now();
    InvokeDestination(destination);
}

bool AppShell::IsTapEcho()
{
    return std::chrono::steady_clock::now() - m_lastTap < std::chrono::milliseconds(500);
}

void AppShell::InvokeDestination(NavMenuDestination destination)
{

    if (destination == NavMenuDestination::Logout)
    {
        if (m_logoutInFlight) return;

        auto window = Window::Current;
        if (window == nullptr || window->Dispatcher == nullptr)
        {
            m_logoutInFlight = true;
            m_loginService->LogoutAsync();
            return;
        }

        window->Dispatcher->RunAsync(
            Windows::UI::Core::CoreDispatcherPriority::High,
            ref new Windows::UI::Core::DispatchedHandler([this]()
        {

            String^ title           = GetResourceString(L"LogoutTitle");
            String^ message         = GetResourceString(L"LogoutMessage");
            String^ logoutButtonText = GetResourceString(L"LogoutAction");
            String^ cancelButtonText = GetResourceString(L"CancelTitle");

            try
            {
                auto dialog = ref new MessageDialog(message, title);

                auto cancelCommand = ref new UICommand(cancelButtonText);
                cancelCommand->Invoked =
                    ref new UICommandInvokedHandler([this](IUICommand^)
                {
                    m_logoutInFlight = false;
                });
                dialog->Commands->Append(cancelCommand);

                auto logoutCommand = ref new UICommand(logoutButtonText);
                logoutCommand->Invoked =
                    ref new UICommandInvokedHandler(
                        [this](IUICommand^)
                {
                    if (m_logoutInFlight) return;
                    m_logoutInFlight = true;
                    m_loginService->LogoutAsync();
                });
                dialog->Commands->Append(logoutCommand);

                dialog->DefaultCommandIndex = 0;
                dialog->CancelCommandIndex  = 1;
                dialog->ShowAsync();
            }
            catch (Exception^ ex)
            {
                OutputDebugStringW(ex->Message->Data());
                OutputDebugStringW(L"\n");

                if (!m_logoutInFlight)
                {
                    m_logoutInFlight = true;
                    m_loginService->LogoutAsync();
                }
            }
        }));
        return;
    }

    if (frame == nullptr) return;

    if (destination == m_currentDestination)
    {
        int key = static_cast<int>(destination);
        auto it = m_pageCache.find(key);
        if (it != m_pageCache.end())
        {
            auto robloxPage = dynamic_cast<Roblox::Controls::Page^>(it->second);
            if (robloxPage != nullptr)
            {
                robloxPage->LoadDefaultUrl();
                return;
            }
        }
    }

    ShowPage(destination);
}

void AppShell::ShowPage(NavMenuDestination destination)
{
    if (frame == nullptr) return;

    int key = static_cast<int>(destination);
    auto it = m_pageCache.find(key);

    Windows::UI::Xaml::Controls::Page^ page = nullptr;
    bool fresh = false;
    if (it == m_pageCache.end())
    {
        page = CreatePage(destination);
        m_pageCache[key] = page;
        fresh = true;
    }
    else
    {
        page = it->second;
    }

    frame->Content = page;
    m_currentDestination = destination;

    // Update the LRU order (back = most recently used).
    for (auto it = m_pageCacheOrder.begin(); it != m_pageCacheOrder.end(); ++it)
    {
        if (*it == key)
        {
            m_pageCacheOrder.erase(it);
            break;
        }
    }
    m_pageCacheOrder.push_back(key);

    if (fresh)
    {
        auto robloxPage = dynamic_cast<Roblox::Controls::Page^>(page);
        if (robloxPage != nullptr)
        {
            robloxPage->LoadDefaultUrl();
        }
    }

    auto homePage = dynamic_cast<HomePage^>(page);
    if (homePage != nullptr)
    {
        m_homePage = homePage;
    }

    auto activeWebView = GetActiveWebView(page);
    if (m_activeWebView != activeWebView)
    {
        if (m_activeWebView != nullptr)
        {
            m_activeWebView->onNavigationCompleted -= m_navCompletedToken;
        }
        m_activeWebView = activeWebView;
        if (m_activeWebView != nullptr)
        {
            m_navCompletedToken = m_activeWebView->onNavigationCompleted +=
                ref new OnNavigationCompletedHandler(this, &AppShell::OnActiveWebViewNavigationCompleted);
        }
    }

    // Low-memory devices: bound the page cache so browsing never accumulates
    // WebView processes beyond the cap. The frontend memory-pressure handler
    // (UWPPlatform::ShedFrontendMemory) can tighten this further while the app
    // is under AppMemoryUsageLimit pressure.
    if (UWPPlatform::GetInstance().IsLowMemoryDevice())
    {
        EvictCachedPages(kLowMemMaxCachedPages);
    }

    UpdateBackButtonState();
}

void AppShell::NavigateToDestination(int destination)
{
    // Reset the tap-echo guard so the very first nav request after a rebuild is
    // honored (the guard suppresses rapid duplicate taps in normal browsing).
    m_lastTap = std::chrono::steady_clock::time_point();
    InvokeDestination(static_cast<NavMenuDestination>(destination));
}

void AppShell::ReleaseWebViews()
{
    // Blanks every cached WebView page and drops the page cache entirely so the
    // separate out-of-process WebView processes (charged to the app's
    // AppMemoryUsageLimit on UWP) can be torn down. On 512 MB phones a handful
    // of live WebView pages is the difference between a playable game and an
    // OOM crash at join time, so the game layer calls this before swapping to
    // the engine surface and rebuilds the AppShell on leave-game.
    if (m_activeWebView != nullptr)
    {
        try { m_activeWebView->onNavigationCompleted -= m_navCompletedToken; }
        catch (Platform::Exception^) { }
        try { m_activeWebView->Clear(); }
        catch (Platform::Exception^) { }
        m_activeWebView = nullptr;
    }

    for (auto& kv : m_pageCache)
    {
        auto robloxPage = dynamic_cast<Roblox::Controls::Page^>(kv.second);
        if (robloxPage != nullptr)
        {
            try
            {
                auto webview = robloxPage->GetActiveWebView();
                if (webview != nullptr)
                    webview->Clear();
            }
            catch (Platform::Exception^) { }
        }
    }

    m_pageCache.clear();
    m_homePage = nullptr;

    // Drop the frame's current page too so no cached page (and its WebView
    // tree) lingers solely because the frame holds it.
    if (frame != nullptr)
    {
        try { frame->Content = nullptr; } catch (Platform::Exception^) { }
    }

    auto nav = SystemNavigationManager::GetForCurrentView();
    if (nav != nullptr)
    {
        // Unsubscribe the back-request handler: the system singleton would
        // otherwise hold the dropped AppShell (and its LoginService/NavMenu)
        // alive for the rest of the process.
        try { nav->BackRequested -= m_backRequestedToken; } catch (Platform::Exception^) { }
        nav->AppViewBackButtonVisibility = AppViewBackButtonVisibility::Collapsed;
    }

    m_pageCacheOrder.clear();
}

void AppShell::EvictCachedPages(size_t maxCount)
{
    // Always keep the page currently shown in the frame; only background pages
    // (which may own a live WebView process each) are evicted.
    const int activeKey = static_cast<int>(m_currentDestination);

    size_t toEvict = (m_pageCache.size() > maxCount) ? (m_pageCache.size() - maxCount) : 0;
    if (toEvict == 0)
    {
        return;
    }

    // Walk the LRU order (oldest first); tolerate stale entries by verifying
    // each key against the cache before touching its WebView.
    for (auto it = m_pageCacheOrder.begin(); it != m_pageCacheOrder.end() && toEvict > 0; )
    {
        int key = *it;
        it = m_pageCacheOrder.erase(it);
        if (key == activeKey)
        {
            continue;
        }

        auto pageIt = m_pageCache.find(key);
        if (pageIt == m_pageCache.end())
        {
            continue;
        }

        auto robloxPage = dynamic_cast<Roblox::Controls::Page^>(pageIt->second);
        if (robloxPage != nullptr)
        {
            try
            {
                auto webview = robloxPage->GetActiveWebView();
                if (webview != nullptr)
                {
                    webview->Clear();
                }
            }
            catch (Platform::Exception^) { }
        }

        m_pageCache.erase(pageIt);
        toEvict--;
    }
}

Windows::UI::Xaml::Controls::Page^ AppShell::CreatePage(NavMenuDestination destination)
{
    switch (destination)
    {
    case NavMenuDestination::Home:      return ref new HomePage();
    case NavMenuDestination::Games:     return ref new GamesPage();
    case NavMenuDestination::Friends:   return ref new FriendsPage();
    case NavMenuDestination::Catalog:   return ref new CatalogPage();
    case NavMenuDestination::Messages:  return ref new MessagesPage();
    case NavMenuDestination::Profile:   return ref new ProfilePage();
    case NavMenuDestination::Character: return ref new CharacterPage();
    case NavMenuDestination::Inventory: return ref new InventoryPage();
    case NavMenuDestination::Trade:     return ref new TradePage();
    case NavMenuDestination::Groups:    return ref new GroupsPage();
    case NavMenuDestination::Forum:     return ref new ForumPage();
    case NavMenuDestination::Settings:  return ref new SettingsPage();
    case NavMenuDestination::Help:      return ref new HelpPage();
    default:                            return ref new HomePage();
    }
}

void AppShell::OnLogoutSucceeded()
{
    m_logoutInFlight = false;

    auto nav = SystemNavigationManager::GetForCurrentView();
    if (nav != nullptr)
    {
        nav->AppViewBackButtonVisibility = AppViewBackButtonVisibility::Collapsed;
        nav->BackRequested -= m_backRequestedToken;
    }

    auto frame = this->Frame;
    if (frame == nullptr) return;
    frame->Content = ref new Roblox::Views::LandingPage();
}

void AppShell::OnLogoutFailed(int httpStatus)
{
    m_logoutInFlight = false;
}

Frame^ AppShell::AppFrame::get()
{
    return frame;
}

void AppShell::ResetToDefaults()
{
    if (frame != nullptr)
    {
        m_pageCache.erase(static_cast<int>(NavMenuDestination::Home));
        ShowPage(NavMenuDestination::Home);
        m_homePage = dynamic_cast<HomePage^>(frame->Content);
    }
}

void AppShell::OnFrameNavigated(Platform::Object^ sender, NavigationEventArgs^ e)
{
    auto homePage = dynamic_cast<HomePage^>(frame->Content);
    if (homePage != nullptr)
    {
        m_homePage = homePage;
    }
}

void AppShell::OnNavigatedTo(NavigationEventArgs^ e)
{
    __super::OnNavigatedTo(e);
}

bool AppShell::IsActiveShell()
{
    auto window = Window::Current;
    if (window == nullptr) return false;
    auto hostFrame = dynamic_cast<Windows::UI::Xaml::Controls::Frame^>(window->Content);
    return (hostFrame != nullptr) && (hostFrame->Content == this);
}

Roblox::Controls::WebView^ AppShell::GetActiveWebView(Windows::UI::Xaml::Controls::Page^ page)
{
    auto robloxPage = dynamic_cast<Roblox::Controls::Page^>(page);
    if (robloxPage == nullptr)
    {
        return nullptr;
    }
    return robloxPage->GetActiveWebView();
}

void AppShell::UpdateBackButtonState()
{
    auto nav = SystemNavigationManager::GetForCurrentView();
    if (nav == nullptr) return;

    if (!IsActiveShell())
    {
        nav->AppViewBackButtonVisibility = AppViewBackButtonVisibility::Collapsed;
        return;
    }

    bool canGoBack = (m_activeWebView != nullptr) && m_activeWebView->CanGoBack;
    nav->AppViewBackButtonVisibility =
        canGoBack ? AppViewBackButtonVisibility::Visible : AppViewBackButtonVisibility::Collapsed;
}

void AppShell::OnActiveWebViewNavigationCompleted(Platform::String^ uri, Windows::UI::Xaml::Controls::WebViewNavigationCompletedEventArgs^ e)
{
    (void)uri;
    (void)e;
    UpdateBackButtonState();
}

void AppShell::OnBackRequested(Platform::Object^ sender, Windows::UI::Core::BackRequestedEventArgs^ e)
{
    (void)sender;
    if (!IsActiveShell()) return;

    if (m_activeWebView != nullptr && m_activeWebView->CanGoBack)
    {
        m_activeWebView->GoBack();
        if (e != nullptr)
        {
            e->Handled = true;
        }
    }
}

void AppShell::RefreshBackButtonState()
{
    auto window = Window::Current;
    if (window == nullptr) return;

    auto hostFrame = dynamic_cast<Windows::UI::Xaml::Controls::Frame^>(window->Content);
    auto shell = (hostFrame != nullptr) ? dynamic_cast<AppShell^>(hostFrame->Content) : nullptr;

    auto nav = SystemNavigationManager::GetForCurrentView();
    if (nav == nullptr) return;

    if (shell == nullptr)
    {
        nav->AppViewBackButtonVisibility = AppViewBackButtonVisibility::Collapsed;
        return;
    }

    shell->UpdateBackButtonState();
}
