#include "pch.h"
#include "GameView.xaml.h"

#include <cstdlib>
#include <string>
#include <thread>

#include "UWPPlatform.h"
#include "PlaceLauncher.h"

#include "util/standardout.h"

using namespace Roblox::Controls;
using namespace Windows::UI::Xaml;

namespace
{
std::string ToUtf8(Platform::String^ str)
{
    if (str == nullptr || str->IsEmpty())
        return std::string();

    std::wstring w(str->Begin(), str->End());
    return std::string(w.begin(), w.end());
}
} // namespace

GameView::GameView()
    : m_isGameRunning(false)
{
    InitializeComponent();
}

GameView::~GameView()
{
    LeaveGame();
}

void GameView::StartGame(GameParameters^ params)
{
    if (m_isGameRunning)
        return;

    m_isGameRunning = true;
    rbxSwapChain->Visibility = Windows::UI::Xaml::Visibility::Visible;
    ChatTextBox->Visibility = Windows::UI::Xaml::Visibility::Collapsed;

    // Bind the engine marshaller to the UI thread, register the render surface
    // and install the leave-game callback (fired by the engine "Exit" verb).
    UWPPlatform::GetInstance().initialize();
    UWPPlatform::GetInstance().setSwapChainPanel(rbxSwapChain);
    UWPPlatform::GetInstance().setLeaveGameCallback([this]() { LeaveGame(); });

    // The engine runs the join on a background thread; the page stays on the
    // previous screen until the engine signals it has a renderable scene, then
    // we surface the game. On a failed join we tear down and restore instead of
    // leaving a blank page. Both callbacks are invoked on the UI thread.
    UWPPlatform::GetInstance().setGameReadyCallback([this]()
    {
        if (m_isGameRunning)
            OnGameReady();
    });
    UWPPlatform::GetInstance().setGameFailedCallback([this]() { LeaveGame(); });

    unsigned int viewWidth = 800;
    unsigned int viewHeight = 600;
    getUWPFramebufferSize(&viewWidth, &viewHeight);

    StartGameParams sgp;
    sgp.view = static_cast<void*>(getUWPSwapChainPanel());
    sgp.viewWidth = viewWidth;
    sgp.viewHeight = viewHeight;
    sgp.placeId = _wtoi(params->placeID->Data());
    sgp.userId = _wtoi(params->userID->Data());
    sgp.accessCode = ToUtf8(params->accessCode);
    sgp.gameId = ToUtf8(params->instanceID);
    sgp.joinRequestType = static_cast<JoinGameRequest>(params->joinRequestType);
    sgp.isTouchDevice = isUWPWindowsPhone();

    Platform::String^ installPath = Windows::ApplicationModel::Package::Current->InstalledLocation->Path;
    std::wstring wInstall(installPath->Begin(), installPath->End());
    sgp.assetFolderPath = std::string(wInstall.begin(), wInstall.end()) + "\\content";

    // Run the engine launch (settings + HTTP join + renderer init) off the UI
    // thread so the XAML frame stays responsive while the marshaller keeps
    // draining the engine's render callbacks.
    std::thread launchThread([sgp]()
    {
        try
        {
            PlaceLauncher::getPlaceLauncher().startGame(sgp);
        }
        catch (const std::exception& e)
        {
            RBX::StandardOut::singleton()->printf(RBX::MESSAGE_ERROR, "GameView::StartGame failed: %s", e.what());
            UWPPlatform::GetInstance().fireGameFailed();
        }
        catch (...)
        {
            RBX::StandardOut::singleton()->printf(RBX::MESSAGE_ERROR, "GameView::StartGame failed: unknown exception");
            UWPPlatform::GetInstance().fireGameFailed();
        }
    });
    launchThread.detach();
}

void GameView::LeaveGame()
{
    if (!m_isGameRunning)
        return;

    m_isGameRunning = false;

    try
    {
        PlaceLauncher::getPlaceLauncher().leaveGame(true);
    }
    catch (...)
    {
    }

    OnGameShutDown();
}

bool GameView::IsGameRunning()
{
    return m_isGameRunning;
}

void GameView::PresentGameLeaveMenu()
{
    ChatTextBox->Visibility = Windows::UI::Xaml::Visibility::Visible;
}
