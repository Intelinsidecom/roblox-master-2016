#include "pch.h"
#include "GamePage.xaml.h"
#include "AppShell.xaml.h"
#include "UWPPlatform.h"

using namespace Roblox;
using namespace Roblox::Controls;
using namespace Windows::UI::Xaml;
using namespace Windows::UI::Xaml::Controls;
using namespace Windows::UI::Xaml::Navigation;
using namespace Windows::UI::Core;

GamePage::GamePage()
    : m_previousContent(nullptr)
    , m_droppedShellForLowMemory(false)
    , m_returnDestination(0)
{
    InitializeComponent();

    gameViewControl->OnGameShutDown +=
        ref new GameClosedEventHandler(this, &GamePage::OnGameViewClosed);
    gameViewControl->OnGameReady +=
        ref new GameClosedEventHandler(this, &GamePage::OnGameViewReady);
}

void GamePage::StartGame(GameParameters^ params)
{
    m_previousContent = Window::Current->Content;

    auto nav = SystemNavigationManager::GetForCurrentView();
    if (nav != nullptr)
    {
        nav->AppViewBackButtonVisibility = AppViewBackButtonVisibility::Collapsed;
    }

    // Low-memory devices (e.g. Lumia 625, 512 MB): the AppShell pins one
    // out-of-process WebView process *per* cached nav page, each counted
    // against AppMemoryUsageLimit. Keeping them alive for the whole game
    // session is what pushes a 512 MB phone over the cap right after the join
    // resolves. Tear them down now (navigate to about:blank + drop the page
    // cache + drop the shell reference) and rebuild a fresh AppShell on leave.
    //
    // Window::Current->Content is the host Frame (App.xaml.cpp EnsureRootFrame)
    // whose Content is the AppShell, so unwrap one level before casting.
    if (UWPPlatform::GetInstance().ShouldDropShellForGame())
    {
        auto hostFrame = dynamic_cast<Windows::UI::Xaml::Controls::Frame^>(m_previousContent);
        auto shell = (hostFrame != nullptr)
            ? dynamic_cast<AppShell^>(hostFrame->Content)
            : nullptr;
        if (shell != nullptr)
        {
            m_returnDestination = shell->CurrentDestination;
            shell->ReleaseWebViews();
            hostFrame->Content = nullptr;
            m_droppedShellForLowMemory = true;
        }
    }

    // Keep ourselves alive while the engine joins on a background thread: the
    // content swap is deferred until the engine is render-ready (OnGameReady),
    // so nothing in the visual tree references this page during the load.
    m_selfReference = this;

    gameViewControl->StartGame(params);
}

void GamePage::LeaveGame()
{
    gameViewControl->LeaveGame();
}

void GamePage::OnGameViewReady()
{
    if (m_previousContent != nullptr)
    {
        // Swap in the game page only once the engine is render-ready, so the
        // user never sees the blank swap-chain surface while the engine loads
        // (parity with the original client, which showed the already-loaded
        // game after its synchronous join returned).
        Window::Current->Content = this;
    }
    else if (m_droppedShellForLowMemory)
    {
        // The shell was dropped for LowMemMode; swap in the bare game surface.
        Window::Current->Content = this;
    }
}

void GamePage::OnGameViewClosed()
{
    if (m_droppedShellForLowMemory)
    {
        // Rebuild a fresh AppShell so pages reload from scratch (auth cookie is
        // persisted in AuthStorage, so no re-login). Bringing the user back to
        // the page they launched from requires one explicit nav call after the
        // shell's constructor selects its default menu item. m_previousContent
        // is still the host Frame, so re-nest the rebuilt shell inside it to
        // keep the Frame->AppShell structure the shell's own code expects.
        auto rebuilt = ref new AppShell();
        auto hostFrame = dynamic_cast<Windows::UI::Xaml::Controls::Frame^>(m_previousContent);
        if (hostFrame != nullptr)
        {
            hostFrame->Content = rebuilt;
            Window::Current->Content = hostFrame;
        }
        else
        {
            Window::Current->Content = rebuilt;
        }
        rebuilt->NavigateToDestination(m_returnDestination);
        m_droppedShellForLowMemory = false;
        m_previousContent = nullptr;
    }
    else if (m_previousContent != nullptr)
    {
        Window::Current->Content = m_previousContent;
        m_previousContent = nullptr;
    }

    m_selfReference = nullptr;

    AppShell::RefreshBackButtonState();

    OnGameShutDown();
}
