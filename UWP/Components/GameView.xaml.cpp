#include "pch.h"
#include "GameView.xaml.h"

#include <cstdlib>
#include <string>
#include <thread>

#include "UWPPlatform.h"
#include "PlaceLauncher.h"
#include "KeyboardController.h"
#include "UserInput.h"

#include "util/standardout.h"

using namespace Roblox::Controls;
using namespace Windows::UI::Xaml;
using namespace Windows::UI::Xaml::Controls;
using namespace Windows::UI::Xaml::Input;
using namespace Windows::UI::ViewManagement;
using namespace Windows::System;

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
    , m_keyboardActive(false)
    , m_inputPane(nullptr)
    , m_chatKeyDownToken{0}
    , m_chatLostFocusToken{0}
    , m_chatTextChangedToken{0}
    , m_inputPaneShowingToken{0}
    , m_inputPaneHidingToken{0}
{
    InitializeComponent();

    // Reuse ChatTextBox as the on-screen text input target: when a Roblox
    // TextBox is focused, this native box captures the touch keyboard input and
    // the engine receives the typed text through KeyboardController.
    try
    {
        m_inputPane = Windows::UI::ViewManagement::InputPane::GetForCurrentView();
        if (m_inputPane)
        {
            m_inputPaneShowingToken = m_inputPane->Showing +=
                ref new Windows::Foundation::TypedEventHandler<Windows::UI::ViewManagement::InputPane^, Windows::UI::ViewManagement::InputPaneVisibilityEventArgs^>(
                    this, &GameView::OnInputPaneShowing);
            m_inputPaneHidingToken = m_inputPane->Hiding +=
                ref new Windows::Foundation::TypedEventHandler<Windows::UI::ViewManagement::InputPane^, Windows::UI::ViewManagement::InputPaneVisibilityEventArgs^>(
                    this, &GameView::OnInputPaneHiding);
        }
    }
    catch (Platform::Exception^) { }
    catch (...) { }

    m_chatTextChangedToken = ChatTextBox->TextChanged +=
        ref new Windows::UI::Xaml::Controls::TextChangedEventHandler(this, &GameView::OnChatTextBoxTextChanged);
    m_chatLostFocusToken = ChatTextBox->LostFocus +=
        ref new Windows::UI::Xaml::RoutedEventHandler(this, &GameView::OnChatTextBoxLostFocus);
    m_chatKeyDownToken = ChatTextBox->KeyDown +=
        ref new Windows::UI::Xaml::Input::KeyEventHandler(this, &GameView::OnChatTextBoxKeyDown);
}

GameView::~GameView()
{
    LeaveGame();
    DetachTextInputBridge();
}

void GameView::InstallTextInputBridge()
{
    KeyboardController::GetInstance().setShowTextInputHandler(
        [this](bool show, std::wstring initialText) { ShowOrHideTextInput(show, initialText); });
}

void GameView::DetachTextInputBridge()
{
    if (m_chatTextChangedToken.Value != 0)
    {
        ChatTextBox->TextChanged -= m_chatTextChangedToken;
        m_chatTextChangedToken.Value = 0;
    }
    if (m_chatLostFocusToken.Value != 0)
    {
        ChatTextBox->LostFocus -= m_chatLostFocusToken;
        m_chatLostFocusToken.Value = 0;
    }
    if (m_chatKeyDownToken.Value != 0)
    {
        ChatTextBox->KeyDown -= m_chatKeyDownToken;
        m_chatKeyDownToken.Value = 0;
    }
    if (m_inputPane)
    {
        if (m_inputPaneShowingToken.Value != 0)
        {
            m_inputPane->Showing -= m_inputPaneShowingToken;
            m_inputPaneShowingToken.Value = 0;
        }
        if (m_inputPaneHidingToken.Value != 0)
        {
            m_inputPane->Hiding -= m_inputPaneHidingToken;
            m_inputPaneHidingToken.Value = 0;
        }
    }

    KeyboardController::GetInstance().setShowTextInputHandler(nullptr);
}

void GameView::ShowOrHideTextInput(bool show, std::wstring initialText)
{
    if (show)
    {
        if (m_keyboardActive)
            return;

        m_keyboardActive = true;
        ChatTextBox->Text = ref new Platform::String(initialText.c_str());
        ChatTextBox->Visibility = Windows::UI::Xaml::Visibility::Visible;
        ChatTextBox->Focus(Windows::UI::Xaml::FocusState::Programmatic);

        if (m_inputPane)
            m_inputPane->TryShow();

        if (UserInput* ui = PlaceLauncher::getPlaceLauncher().getUserInput())
            ui->setTextInputActive(true);
    }
    else
    {
        if (!m_keyboardActive)
            return;

        m_keyboardActive = false;
        ChatTextBox->Visibility = Windows::UI::Xaml::Visibility::Collapsed;

        if (m_inputPane)
            m_inputPane->TryHide();

        if (UserInput* ui = PlaceLauncher::getPlaceLauncher().getUserInput())
            ui->setTextInputActive(false);
    }
}

void GameView::OnChatTextBoxTextChanged(Platform::Object^ /*sender*/, Windows::UI::Xaml::Controls::TextChangedEventArgs^ /*args*/)
{
    if (!m_keyboardActive)
        return;

    KeyboardController::GetInstance().onTextChanged(ChatTextBox->Text);
}

void GameView::OnChatTextBoxKeyDown(Platform::Object^ /*sender*/, Windows::UI::Xaml::Input::KeyRoutedEventArgs^ args)
{
    if (!m_keyboardActive)
        return;

    if (args->Key == Windows::System::VirtualKey::Enter)
    {
        args->Handled = true;
        KeyboardController::GetInstance().onTextCommitted(ChatTextBox->Text, true);
        ShowOrHideTextInput(false, L"");
    }
}

void GameView::OnChatTextBoxLostFocus(Platform::Object^ /*sender*/, Windows::UI::Xaml::RoutedEventArgs^ /*args*/)
{
    if (!m_keyboardActive)
        return;

    KeyboardController::GetInstance().onTextCommitted(ChatTextBox->Text, false);
}

void GameView::OnInputPaneShowing(Windows::UI::ViewManagement::InputPane^ /*sender*/, Windows::UI::ViewManagement::InputPaneVisibilityEventArgs^ args)
{
    if (!m_keyboardActive)
        return;

    // Keep the input bar above the keyboard.
    args->EnsuredFocusedElementInView = true;
    ChatTextBox->Margin = Windows::UI::Xaml::Thickness(0, 0, 0, args->OccludedRect.Height);
}

void GameView::OnInputPaneHiding(Windows::UI::ViewManagement::InputPane^ /*sender*/, Windows::UI::ViewManagement::InputPaneVisibilityEventArgs^ /*args*/)
{
    if (!m_keyboardActive)
        return;

    // The touch keyboard was dismissed while editing; commit what was typed so
    // the engine releases focus (the double-commit guard swallows the
    // subsequent focus-loss event).
    ChatTextBox->Margin = Windows::UI::Xaml::Thickness(0, 0, 0, 0);
    KeyboardController::GetInstance().onTextCommitted(ChatTextBox->Text, false);
    ShowOrHideTextInput(false, L"");
}

void GameView::StartGame(GameParameters^ params)
{
    if (m_isGameRunning)
        return;

    m_isGameRunning = true;
    rbxSwapChain->Visibility = Windows::UI::Xaml::Visibility::Visible;
    ChatTextBox->Visibility = Windows::UI::Xaml::Visibility::Collapsed;

    InstallTextInputBridge();

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

    ShowOrHideTextInput(false, L"");
    KeyboardController::GetInstance().setShowTextInputHandler(nullptr);

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
