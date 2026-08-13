#include "pch.h"
#include "UserInput.h"

#include "UWPPlatform.h"
#include "RobloxView.h"

#include "util/KeyCode.h"
#include "util/G3DCore.h"
#include "util/Math.h"
#include "v8datamodel/InputObject.h"
#include "v8datamodel/UserInputService.h"
#include "v8datamodel/TouchInputService.h"
#include "v8datamodel/DataModelJob.h"
#include "v8tree/Service.h"
#include "rbx/TaskScheduler.h"

namespace
{

const float kTapSensitivity = 0.25f;
const int kTapTouchMoveTolerance = 20;
const long long kCursorLockTimeoutMs = 100;
const int kKeyStateSize = 1024;
} // namespace

UserInput::UserInput(RBX::DataModel* dataModel, std::function<void(const std::string&)> logCallback)
    : m_dataModel(dataModel)
    , m_logCallback(logCallback)
    , m_isMouseCaptured(false)
    , m_activeMouseButton(RBX::InputObject::TYPE_MOUSEBUTTON1)
    , m_lastMouseX(0)
    , m_lastMouseY(0)
    , m_viewWidth(0)
    , m_viewHeight(0)
    , m_hasFocus(true)
    , m_tapEventId(-1)
    , m_tapBeginX(0.0f)
    , m_tapBeginY(0.0f)
    , m_lastCenterRequestMs(0)
	, m_recentering(false)
	, m_recenterTargetX(0)
	, m_recenterTargetY(0)
    , m_uiLastMouseX(0)
    , m_uiLastMouseY(0)
    , m_pointerInsideWindow(false)
    , m_lockHidCursor(false)
	, m_loggedRecenter(false)
    , m_isShuttingDown(false)
    , m_initialized(false)
    , m_lockTimer(nullptr)
    , m_lockTickToken(Windows::Foundation::EventRegistrationToken{})
    , m_wrapMousePosition(RBX::Vector2::zero())
    , m_wrapMouseDelta(RBX::Vector2::zero())
{
    for (int i = 0; i < kKeyStateSize; ++i)
        m_keyState[i].store(false);
}

UserInput::~UserInput()
{
    shutdown();
}

void UserInput::initialize()
{
    if (m_isShuttingDown || m_initialized)
        return;

    auto window = Windows::UI::Core::CoreWindow::GetForCurrentThread();
    if (window)
    {
        m_pointerPressedToken = window->PointerPressed +=
            ref new Windows::Foundation::TypedEventHandler<Windows::UI::Core::CoreWindow^, Windows::UI::Core::PointerEventArgs^>(
                [this](Windows::UI::Core::CoreWindow^ sender, Windows::UI::Core::PointerEventArgs^ args) { onPointerPressed(sender, args); });
        m_pointerMovedToken = window->PointerMoved +=
            ref new Windows::Foundation::TypedEventHandler<Windows::UI::Core::CoreWindow^, Windows::UI::Core::PointerEventArgs^>(
                [this](Windows::UI::Core::CoreWindow^ sender, Windows::UI::Core::PointerEventArgs^ args) { onPointerMoved(sender, args); });
        m_pointerReleasedToken = window->PointerReleased +=
            ref new Windows::Foundation::TypedEventHandler<Windows::UI::Core::CoreWindow^, Windows::UI::Core::PointerEventArgs^>(
                [this](Windows::UI::Core::CoreWindow^ sender, Windows::UI::Core::PointerEventArgs^ args) { onPointerReleased(sender, args); });
        m_pointerWheelChangedToken = window->PointerWheelChanged +=
            ref new Windows::Foundation::TypedEventHandler<Windows::UI::Core::CoreWindow^, Windows::UI::Core::PointerEventArgs^>(
                [this](Windows::UI::Core::CoreWindow^ sender, Windows::UI::Core::PointerEventArgs^ args) { onPointerWheelChanged(sender, args); });


        m_keyDownToken = window->KeyDown +=
            ref new Windows::Foundation::TypedEventHandler<Windows::UI::Core::CoreWindow^, Windows::UI::Core::KeyEventArgs^>(
                [this](Windows::UI::Core::CoreWindow^ sender, Windows::UI::Core::KeyEventArgs^ args) { onKeyDown(sender, args); });
        m_keyUpToken = window->KeyUp +=
            ref new Windows::Foundation::TypedEventHandler<Windows::UI::Core::CoreWindow^, Windows::UI::Core::KeyEventArgs^>(
                [this](Windows::UI::Core::CoreWindow^ sender, Windows::UI::Core::KeyEventArgs^ args) { onKeyUp(sender, args); });

        m_activatedToken = window->Activated +=
            ref new Windows::Foundation::TypedEventHandler<Windows::UI::Core::CoreWindow^, Windows::UI::Core::WindowActivatedEventArgs^>(
                [this](Windows::UI::Core::CoreWindow^ sender, Windows::UI::Core::WindowActivatedEventArgs^ args) {
                    bool activated = (args->WindowActivationState != Windows::UI::Core::CoreWindowActivationState::Deactivated);
                    sendFocusEvent(activated);
                    if (activated) hideMouse();
                    else showMouse();
                });

        m_visibilityChangedToken = window->VisibilityChanged +=
            ref new Windows::Foundation::TypedEventHandler<Windows::UI::Core::CoreWindow^, Windows::UI::Core::VisibilityChangedEventArgs^>(
                [this](Windows::UI::Core::CoreWindow^ sender, Windows::UI::Core::VisibilityChangedEventArgs^ args) {
                    if (!args->Visible)
                    {
                        sendFocusEvent(false);
                        showMouse();
                    }
                    else
                    {
                        hideMouse();
                    }
                });

        m_pointerEnteredToken = window->PointerEntered +=
            ref new Windows::Foundation::TypedEventHandler<Windows::UI::Core::CoreWindow^, Windows::UI::Core::PointerEventArgs^>(
				[this](Windows::UI::Core::CoreWindow^ sender, Windows::UI::Core::PointerEventArgs^ args) { m_pointerInsideWindow = true; hideMouse(); });

        m_pointerExitedToken = window->PointerExited +=
            ref new Windows::Foundation::TypedEventHandler<Windows::UI::Core::CoreWindow^, Windows::UI::Core::PointerEventArgs^>(
				[this](Windows::UI::Core::CoreWindow^ sender, Windows::UI::Core::PointerEventArgs^ args) { m_pointerInsideWindow = false; showMouse(); });

        m_lockTimer = ref new Windows::UI::Xaml::DispatcherTimer();
        Windows::Foundation::TimeSpan lockInterval;
        lockInterval.Duration = 16 * 10000; // 16ms (~60Hz)
        m_lockTimer->Interval = lockInterval;
        m_lockTickToken = m_lockTimer->Tick += ref new Windows::Foundation::EventHandler<Platform::Object^>(
            [this](Platform::Object^, Platform::Object^) { onLockTick(); });
        m_lockTimer->Start();

        m_initialized = true;
    }
    else
    {
        if (m_logCallback) m_logCallback("[ERROR] Failed to get CoreWindow for event registration");
    }
}

void UserInput::shutdown()
{
    m_isShuttingDown = true;

    auto window = Windows::UI::Core::CoreWindow::GetForCurrentThread();
    if (window)
    {
        window->PointerPressed -= m_pointerPressedToken;
        window->PointerMoved -= m_pointerMovedToken;
        window->PointerReleased -= m_pointerReleasedToken;
        window->PointerWheelChanged -= m_pointerWheelChangedToken;
        window->KeyDown -= m_keyDownToken;
        window->KeyUp -= m_keyUpToken;
        window->Activated -= m_activatedToken;
        window->VisibilityChanged -= m_visibilityChangedToken;
        window->PointerEntered -= m_pointerEnteredToken;
        window->PointerExited -= m_pointerExitedToken;

        if (m_lockTimer)
        {
            m_lockTimer->Stop();
            m_lockTimer->Tick -= m_lockTickToken;
            m_lockTimer = nullptr;
        }
    }

    m_initialized = false;
}

void UserInput::setViewportSize(int width, int height)
{
    m_viewWidth = width;
    m_viewHeight = height;
}

void UserInput::setLogCallback(std::function<void(const std::string&)> callback)
{
    m_logCallback = callback;
}

void UserInput::centerCursor()
{
    long long now = std::chrono::duration_cast<std::chrono::milliseconds>(
        std::chrono::steady_clock::now().time_since_epoch()).count();
    m_lastCenterRequestMs.store(now);
}

bool UserInput::isCursorLockActive() const
{
    long long lastRequest = m_lastCenterRequestMs.load();
    if (lastRequest == 0)
        return false;

    long long now = std::chrono::duration_cast<std::chrono::milliseconds>(
        std::chrono::steady_clock::now().time_since_epoch()).count();

    return (now - lastRequest) <= kCursorLockTimeoutMs;
}

bool UserInput::isLockActive() const
{
    if (RBX::UwpInput::wrapMode.load() == RBX::UserInputService::WRAP_NONEANDCENTER)
        return true;

    return isCursorLockActive();
}

void UserInput::applyCursorLock(bool active)
{
    if (active == m_lockHidCursor)
        return;

    m_lockHidCursor = active;
    if (m_logCallback)
        m_logCallback(active ? "[lock] engaged: hiding pointer" : "[lock] released: showing pointer");

    if (active)
        seedWrapMousePosition();

	if (active || !m_pointerInsideWindow)
		hideMouse();
	else
        showMouse();
}

void UserInput::onLockTick()
{
	if (m_isShuttingDown)
		return;

	const bool active = isLockActive();
	applyCursorLock(active);
	if (!active)
		return;

	auto window = Windows::UI::Core::CoreWindow::GetForCurrentThread();
	if (!window)
		return;

	Windows::Foundation::Point pos = window->PointerPosition;
	Windows::Foundation::Rect bounds = window->Bounds;
	const float cx = bounds.X + bounds.Width * 0.5f;
	const float cy = bounds.Y + bounds.Height * 0.5f;
	if (pos.X < cx - 2.0f || pos.X > cx + 2.0f || pos.Y < cy - 2.0f || pos.Y > cy + 2.0f)
		recenterCursor();
}

void UserInput::recenterCursor()
{
	auto window = Windows::UI::Core::CoreWindow::GetForCurrentThread();
	if (!window)
		return;

	Windows::Foundation::Rect bounds = window->Bounds;

	int targetX = static_cast<int>(bounds.Width * 0.5f);
	int targetY = static_cast<int>(bounds.Height * 0.5f);

	if (!m_loggedRecenter)
	{
		m_loggedRecenter = true;
		if (m_logCallback) m_logCallback("[lock] recenterCursor: pinning pointer to window center");
	}

	m_recentering = true;
	m_recenterTargetX = targetX;
	m_recenterTargetY = targetY;
	m_uiLastMouseX = targetX;
	m_uiLastMouseY = targetY;
	m_lastMouseX = targetX;
	m_lastMouseY = targetY;

	window->PointerPosition = Windows::Foundation::Point(
		bounds.X + bounds.Width * 0.5f,
		bounds.Y + bounds.Height * 0.5f);
}

RBX::Vector2 UserInput::getCursorPosition()
{
    return RBX::Vector2(static_cast<float>(m_lastMouseX.load()), static_cast<float>(m_lastMouseY.load()));
}

RBX::Vector2 UserInput::getWindowCenter() const
{
    auto window = Windows::UI::Core::CoreWindow::GetForCurrentThread();
    if (window)
    {
        Windows::Foundation::Rect bounds = window->Bounds;
        return RBX::Vector2(bounds.Width * 0.5f, bounds.Height * 0.5f);
    }
    return RBX::Vector2(static_cast<float>(m_viewWidth) * 0.5f, static_cast<float>(m_viewHeight) * 0.5f);
}

RBX::Vector2 UserInput::getGameCursorPositionInternal() const
{
    return getWindowCenter() + m_wrapMousePosition;
}

void UserInput::doWrapMouse(const RBX::Vector2& delta, RBX::Vector2& wrapMouseDelta)
{
    wrapMouseDelta = RBX::Vector2::zero();

    switch (RBX::UserInputService::WrapMode(RBX::UwpInput::wrapMode.load()))
    {
    case RBX::UserInputService::WRAP_NONEANDCENTER:
        m_wrapMousePosition = RBX::Vector2::zero();
    case RBX::UserInputService::WRAP_NONE:
    case RBX::UserInputService::WRAP_CENTER:
        wrapMouseDelta += delta;
        break;
    case RBX::UserInputService::WRAP_HYBRID:
        wrapMouseDelta += delta;
        break;
    case RBX::UserInputService::WRAP_AUTO:
    default:
        m_wrapMousePosition += delta;
        break;
    }
}

void UserInput::seedWrapMousePosition()
{
    auto window = Windows::UI::Core::CoreWindow::GetForCurrentThread();
    if (!window)
        return;

    Windows::Foundation::Rect bounds = window->Bounds;
    Windows::Foundation::Point pos = window->PointerPosition;

    RBX::Vector2 center(bounds.X + bounds.Width * 0.5f, bounds.Y + bounds.Height * 0.5f);
    RBX::Vector2 pointer(pos.X, pos.Y);

    m_wrapMousePosition = RBX::Math::expandVector2(pointer - center, -10);
}

bool UserInput::keyDown(RBX::KeyCode code) const
{
    int index = static_cast<int>(code);
    if (index < 0 || index >= kKeyStateSize)
        return false;

    return m_keyState[index].load();
}

void UserInput::setKeyState(RBX::KeyCode code, RBX::ModCode modCode, char modifiedKey, bool isDown)
{
    int index = static_cast<int>(code);
    if (index >= 0 && index < kKeyStateSize)
        m_keyState[index].store(isDown);

    if (!m_dataModel)
        return;

    m_dataModel->submitTask([this, code, modCode, modifiedKey, isDown](RBX::DataModel* dm)
    {
        RBX::UserInputService* userInputService = RBX::ServiceProvider::find<RBX::UserInputService>(dm);
        if (!userInputService)
            return;

        userInputService->setKeyState(code, modCode, modifiedKey, isDown);

        shared_ptr<RBX::InputObject> keyInput = RBX::Creatable<RBX::Instance>::create<RBX::InputObject>(
            RBX::InputObject::TYPE_KEYBOARD,
            isDown ? RBX::InputObject::INPUT_STATE_BEGIN : RBX::InputObject::INPUT_STATE_END,
            code,
            modCode,
            modifiedKey,
            dm
        );

        userInputService->fireInputEvent(keyInput, NULL);
    }, RBX::DataModelJob::Write);
}

bool UserInput::isGamepadVirtualKey(int vk)
{
    return (vk >= 212 && vk <= 219) || (vk >= 131 && vk <= 135) ||
           vk == 195 || vk == 196;
}

RBX::KeyCode UserInput::mapVirtualKeyToKeyCode(int vk)
{
    if (vk >= 'A' && vk <= 'Z')
        return (RBX::KeyCode)(vk + 32);

    if (vk >= '0' && vk <= '9')
        return (RBX::KeyCode)vk;

    switch (vk)
    {
        case (int)Windows::System::VirtualKey::Space:     return RBX::SDLK_SPACE;
        case (int)Windows::System::VirtualKey::Enter:     return RBX::SDLK_RETURN;
        case (int)Windows::System::VirtualKey::Escape:    return RBX::SDLK_ESCAPE;
        case (int)Windows::System::VirtualKey::Tab:       return RBX::SDLK_TAB;
        case (int)Windows::System::VirtualKey::Back:      return RBX::SDLK_BACKSPACE;
        case (int)Windows::System::VirtualKey::Delete:    return RBX::SDLK_DELETE;
        case (int)Windows::System::VirtualKey::Insert:    return RBX::SDLK_INSERT;
        case (int)Windows::System::VirtualKey::Home:      return RBX::SDLK_HOME;
        case (int)Windows::System::VirtualKey::End:       return RBX::SDLK_END;
        case (int)Windows::System::VirtualKey::PageUp:    return RBX::SDLK_PAGEUP;
        case (int)Windows::System::VirtualKey::PageDown:  return RBX::SDLK_PAGEDOWN;
        case (int)Windows::System::VirtualKey::CapitalLock: return RBX::SDLK_CAPSLOCK;
        case (int)Windows::System::VirtualKey::Left:      return RBX::SDLK_LEFT;
        case (int)Windows::System::VirtualKey::Right:     return RBX::SDLK_RIGHT;
        case (int)Windows::System::VirtualKey::Up:        return RBX::SDLK_UP;
        case (int)Windows::System::VirtualKey::Down:      return RBX::SDLK_DOWN;
        case (int)Windows::System::VirtualKey::Shift:     return RBX::SDLK_LSHIFT;
        case (int)Windows::System::VirtualKey::Control:   return RBX::SDLK_LCTRL;
        case (int)Windows::System::VirtualKey::Menu:      return RBX::SDLK_LALT;
        case (int)Windows::System::VirtualKey::F1:  return RBX::SDLK_F1;
        case (int)Windows::System::VirtualKey::F2:  return RBX::SDLK_F2;
        case (int)Windows::System::VirtualKey::F3:  return RBX::SDLK_F3;
        case (int)Windows::System::VirtualKey::F4:  return RBX::SDLK_F4;
        case (int)Windows::System::VirtualKey::F5:  return RBX::SDLK_F5;
        case (int)Windows::System::VirtualKey::F6:  return RBX::SDLK_F6;
        case (int)Windows::System::VirtualKey::F7:  return RBX::SDLK_F7;
        case (int)Windows::System::VirtualKey::F8:  return RBX::SDLK_F8;
        case (int)Windows::System::VirtualKey::F9:  return RBX::SDLK_F9;
        case (int)Windows::System::VirtualKey::F10: return RBX::SDLK_F10;
        case (int)Windows::System::VirtualKey::F11: return RBX::SDLK_F11;
        case (int)Windows::System::VirtualKey::F12: return RBX::SDLK_F12;
        case (int)Windows::System::VirtualKey::NumberPad0: return RBX::SDLK_KP0;
        case (int)Windows::System::VirtualKey::NumberPad1: return RBX::SDLK_KP1;
        case (int)Windows::System::VirtualKey::NumberPad2: return RBX::SDLK_KP2;
        case (int)Windows::System::VirtualKey::NumberPad3: return RBX::SDLK_KP3;
        case (int)Windows::System::VirtualKey::NumberPad4: return RBX::SDLK_KP4;
        case (int)Windows::System::VirtualKey::NumberPad5: return RBX::SDLK_KP5;
        case (int)Windows::System::VirtualKey::NumberPad6: return RBX::SDLK_KP6;
        case (int)Windows::System::VirtualKey::NumberPad7: return RBX::SDLK_KP7;
        case (int)Windows::System::VirtualKey::NumberPad8: return RBX::SDLK_KP8;
        case (int)Windows::System::VirtualKey::NumberPad9: return RBX::SDLK_KP9;
        case 0xBA: return RBX::SDLK_SEMICOLON;
        case 0xBB: return RBX::SDLK_EQUALS;
        case 0xBC: return RBX::SDLK_COMMA;
        case 0xBD: return RBX::SDLK_MINUS;
        case 0xBE: return RBX::SDLK_PERIOD;
        case 0xBF: return RBX::SDLK_SLASH;
        case 0xC0: return RBX::SDLK_BACKQUOTE;
        case 0xDB: return RBX::SDLK_LEFTBRACKET;
        case 0xDC: return RBX::SDLK_BACKSLASH;
        case 0xDD: return RBX::SDLK_RIGHTBRACKET;
        case 0xDE: return RBX::SDLK_QUOTE;

        default:
            return RBX::SDLK_UNKNOWN;
    }
}

void UserInput::onKeyDown(Windows::UI::Core::CoreWindow^ sender, Windows::UI::Core::KeyEventArgs^ args)
{
    args->Handled = true;
    int vk = (int)args->VirtualKey;

    if (args->KeyStatus.WasKeyDown)
        return;

    if (isGamepadVirtualKey(vk))
        return;

    if (m_keyDownState[vk])
        return;
    m_keyDownState[vk] = true;

    RBX::KeyCode keyCode = mapVirtualKeyToKeyCode(vk);
    if (keyCode != RBX::SDLK_UNKNOWN)
    {
        int index = static_cast<int>(keyCode);
        if (index >= 0 && index < kKeyStateSize)
            m_keyState[index].store(true);
    }

    fireKeyEvent(vk, true, (int)args->KeyStatus.ScanCode);
}

void UserInput::onKeyUp(Windows::UI::Core::CoreWindow^ sender, Windows::UI::Core::KeyEventArgs^ args)
{
    args->Handled = true;
    int vk = (int)args->VirtualKey;

    if (isGamepadVirtualKey(vk))
        return;

    if (!m_keyDownState[vk])
        return;
    m_keyDownState[vk] = false;

    RBX::KeyCode keyCode = mapVirtualKeyToKeyCode(vk);
    if (keyCode != RBX::SDLK_UNKNOWN)
    {
        int index = static_cast<int>(keyCode);
        if (index >= 0 && index < kKeyStateSize)
            m_keyState[index].store(false);
    }

    fireKeyEvent(vk, false, (int)args->KeyStatus.ScanCode);
}

void UserInput::fireKeyEvent(int vk, bool isDown, int scanCode)
{
    if (!m_dataModel)
        return;

    RBX::ModCode modCode = RBX::KMOD_NONE;
    auto window = Windows::UI::Core::CoreWindow::GetForCurrentThread();
    if (window)
    {
        if ((window->GetKeyState(Windows::System::VirtualKey::Shift) & Windows::UI::Core::CoreVirtualKeyStates::Down) == Windows::UI::Core::CoreVirtualKeyStates::Down)
            modCode = static_cast<RBX::ModCode>(modCode | RBX::KMOD_LSHIFT);
        if ((window->GetKeyState(Windows::System::VirtualKey::Control) & Windows::UI::Core::CoreVirtualKeyStates::Down) == Windows::UI::Core::CoreVirtualKeyStates::Down)
            modCode = static_cast<RBX::ModCode>(modCode | RBX::KMOD_LCTRL);
        if ((window->GetKeyState(Windows::System::VirtualKey::Menu) & Windows::UI::Core::CoreVirtualKeyStates::Down) == Windows::UI::Core::CoreVirtualKeyStates::Down)
            modCode = static_cast<RBX::ModCode>(modCode | RBX::KMOD_LALT);
    }

    m_dataModel->submitTask([this, vk, isDown, modCode](RBX::DataModel* dm)
    {
        RBX::UserInputService* userInputService = RBX::ServiceProvider::find<RBX::UserInputService>(dm);
        if (!userInputService)
            return;

        RBX::KeyCode keyCode = mapVirtualKeyToKeyCode(vk);
        if (keyCode == RBX::SDLK_UNKNOWN)
            return;

        char modifiedKey = 0;
        if (keyCode >= 32 && keyCode <= 126)
        {
            modifiedKey = (char)keyCode;
        }
        else if (keyCode >= RBX::SDLK_KP0 && keyCode <= RBX::SDLK_KP9)
        {
            modifiedKey = (char)('0' + (keyCode - RBX::SDLK_KP0));
        }

        userInputService->setKeyState(keyCode, modCode, modifiedKey, isDown);

        shared_ptr<RBX::InputObject> keyInput = RBX::Creatable<RBX::Instance>::create<RBX::InputObject>(
            RBX::InputObject::TYPE_KEYBOARD,
            isDown ? RBX::InputObject::INPUT_STATE_BEGIN : RBX::InputObject::INPUT_STATE_END,
            keyCode,
            modCode,
            modifiedKey,
            dm
        );

        userInputService->fireInputEvent(keyInput, NULL);
    }, RBX::DataModelJob::Write);
}

void UserInput::onPointerPressed(Windows::UI::Core::CoreWindow^ sender, Windows::UI::Core::PointerEventArgs^ args)
{
    if (args->CurrentPoint->PointerDevice->PointerDeviceType == Windows::Devices::Input::PointerDeviceType::Touch)
    {
        handleTouch(sender, args, RBX::InputObject::INPUT_STATE_BEGIN);
        return;
    }

    float x = static_cast<float>(args->CurrentPoint->Position.X);
    float y = static_cast<float>(args->CurrentPoint->Position.Y);

    if (isLockActive())
    {
        RBX::Vector2 pos = getGameCursorPositionInternal();
        x = pos.x;
        y = pos.y;
    }

    m_lastMouseX = static_cast<int>(x);
    m_lastMouseY = static_cast<int>(y);
    m_uiLastMouseX = static_cast<int>(x);
    m_uiLastMouseY = static_cast<int>(y);
    m_isMouseCaptured = true;

    if (!args->CurrentPoint->Properties->IsLeftButtonPressed &&
        !args->CurrentPoint->Properties->IsRightButtonPressed &&
        !args->CurrentPoint->Properties->IsMiddleButtonPressed)
        return;

    RBX::InputObject::UserInputType buttonType = RBX::InputObject::TYPE_MOUSEBUTTON1;
    if (args->CurrentPoint->Properties->IsLeftButtonPressed)
        buttonType = RBX::InputObject::TYPE_MOUSEBUTTON1;
    else if (args->CurrentPoint->Properties->IsRightButtonPressed)
        buttonType = RBX::InputObject::TYPE_MOUSEBUTTON2;
    else if (args->CurrentPoint->Properties->IsMiddleButtonPressed)
        buttonType = RBX::InputObject::TYPE_MOUSEBUTTON3;
    m_activeMouseButton = buttonType;

    firePointerButtonEvent(x, y, true, buttonType);
}

void UserInput::onPointerReleased(Windows::UI::Core::CoreWindow^ sender, Windows::UI::Core::PointerEventArgs^ args)
{
    if (args->CurrentPoint->PointerDevice->PointerDeviceType == Windows::Devices::Input::PointerDeviceType::Touch)
    {
        handleTouch(sender, args, RBX::InputObject::INPUT_STATE_END);
        return;
    }

    float x = static_cast<float>(args->CurrentPoint->Position.X);
    float y = static_cast<float>(args->CurrentPoint->Position.Y);
    m_isMouseCaptured = false;

    if (isLockActive())
    {
        RBX::Vector2 pos = getGameCursorPositionInternal();
        x = pos.x;
        y = pos.y;
    }

    firePointerButtonEvent(x, y, false, m_activeMouseButton);
}

void UserInput::onPointerMoved(Windows::UI::Core::CoreWindow^ sender, Windows::UI::Core::PointerEventArgs^ args)
{
    if (args->CurrentPoint->PointerDevice->PointerDeviceType == Windows::Devices::Input::PointerDeviceType::Touch)
    {
        handleTouch(sender, args, RBX::InputObject::INPUT_STATE_CHANGE);
        return;
    }

    float x = static_cast<float>(args->CurrentPoint->Position.X);
    float y = static_cast<float>(args->CurrentPoint->Position.Y);
    int ix = static_cast<int>(x);
    int iy = static_cast<int>(y);

	if (m_recentering &&
		ix >= m_recenterTargetX - 2 && ix <= m_recenterTargetX + 2 &&
		iy >= m_recenterTargetY - 2 && iy <= m_recenterTargetY + 2)
	{
		m_recentering = false;
		m_uiLastMouseX = ix;
		m_uiLastMouseY = iy;
		m_lastMouseX = ix;
		m_lastMouseY = iy;
		return;
	}
	m_recentering = false;

    int dx = ix - m_uiLastMouseX;
    int dy = iy - m_uiLastMouseY;
    m_uiLastMouseX = ix;
    m_uiLastMouseY = iy;

    const bool lockActive = isLockActive();
    applyCursorLock(lockActive);

    if (lockActive)
    {
        RBX::Vector2 wrapMouseDelta;
        doWrapMouse(RBX::Vector2(static_cast<float>(dx), static_cast<float>(dy)), wrapMouseDelta);

        RBX::Vector2 pos = getGameCursorPositionInternal();
        m_lastMouseX = static_cast<int>(pos.x);
        m_lastMouseY = static_cast<int>(pos.y);

        firePointerMoveEvent(pos.x, pos.y, static_cast<int>(wrapMouseDelta.x), static_cast<int>(wrapMouseDelta.y));

        recenterCursor();
    }
    else
    {
        m_lastMouseX = ix;
        m_lastMouseY = iy;

        firePointerMoveEvent(x, y, dx, dy);
    }
}

void UserInput::onPointerWheelChanged(Windows::UI::Core::CoreWindow^ sender, Windows::UI::Core::PointerEventArgs^ args)
{
    int wheelDelta = args->CurrentPoint->Properties->MouseWheelDelta / 120;
    firePointerWheelEvent(wheelDelta);

}

void UserInput::firePointerButtonEvent(float x, float y, bool isDown, RBX::InputObject::UserInputType buttonType)
{
    if (!m_dataModel)
        return;

    auto window = Windows::UI::Core::CoreWindow::GetForCurrentThread();
    if (!window)
        return;

    m_dataModel->submitTask([this, x, y, isDown, buttonType](RBX::DataModel* dm)
    {
        RBX::UserInputService* userInputService = RBX::ServiceProvider::find<RBX::UserInputService>(dm);
        if (!userInputService)
            return;

        RBX::Vector3 position(x, y, 0.0f);
        RBX::InputObject::UserInputState inputState = isDown ? RBX::InputObject::INPUT_STATE_BEGIN : RBX::InputObject::INPUT_STATE_END;

        shared_ptr<RBX::InputObject> mouseButton = RBX::Creatable<RBX::Instance>::create<RBX::InputObject>(
            buttonType, inputState, position, RBX::Vector3::zero(), dm
        );
        userInputService->fireInputEvent(mouseButton, NULL);

        if (isDown)
        {
            sendFocusEvent(true);
        }
    }, RBX::DataModelJob::Write);
}

void UserInput::firePointerMoveEvent(float x, float y, int dx, int dy)
{
    if (!m_dataModel)
        return;

    m_dataModel->submitTask([this, x, y, dx, dy](RBX::DataModel* dm)
    {
        RBX::UserInputService* userInputService = RBX::ServiceProvider::find<RBX::UserInputService>(dm);
        if (!userInputService)
            return;

        RBX::Vector3 position(x, y, 0.0f);
        RBX::Vector3 delta(static_cast<float>(dx), static_cast<float>(dy), 0.0f);

        shared_ptr<RBX::InputObject> mouseMove = RBX::Creatable<RBX::Instance>::create<RBX::InputObject>(
            RBX::InputObject::TYPE_MOUSEMOVEMENT,
            RBX::InputObject::INPUT_STATE_CHANGE,
            position,
            delta,
            dm
        );
        userInputService->fireInputEvent(mouseMove, NULL);

        if (dx != 0 || dy != 0)
        {
            shared_ptr<RBX::InputObject> mouseDelta = RBX::Creatable<RBX::Instance>::create<RBX::InputObject>(
                RBX::InputObject::TYPE_MOUSEDELTA,
                RBX::InputObject::INPUT_STATE_CHANGE,
                position,
                delta,
                dm
            );
            userInputService->fireInputEvent(mouseDelta, NULL);
        }
    }, RBX::DataModelJob::Write);
}

void UserInput::firePointerWheelEvent(int wheelDelta)
{
    if (!m_dataModel)
        return;

    m_dataModel->submitTask([this, wheelDelta](RBX::DataModel* dm)
    {
        RBX::UserInputService* userInputService = RBX::ServiceProvider::find<RBX::UserInputService>(dm);
        if (!userInputService)
            return;

        RBX::Vector3 position(static_cast<float>(m_lastMouseX.load()), static_cast<float>(m_lastMouseY.load()), static_cast<float>(wheelDelta));

        shared_ptr<RBX::InputObject> mouseWheel = RBX::Creatable<RBX::Instance>::create<RBX::InputObject>(
            RBX::InputObject::TYPE_MOUSEWHEEL,
            RBX::InputObject::INPUT_STATE_CHANGE,
            position,
            RBX::Vector3::zero(),
            dm
        );
        userInputService->fireInputEvent(mouseWheel, NULL);
    }, RBX::DataModelJob::Write);
}

void UserInput::handleTouch(Windows::UI::Core::CoreWindow^ sender, Windows::UI::Core::PointerEventArgs^ args, RBX::InputObject::UserInputState state)
{
    if (!m_dataModel)
        return;

    unsigned int pointerId = args->CurrentPoint->PointerId;
    float x = static_cast<float>(args->CurrentPoint->Position.X);
    float y = static_cast<float>(args->CurrentPoint->Position.Y);

    bool isTap = false;
    switch (state)
    {
    case RBX::InputObject::INPUT_STATE_BEGIN:
        if (!m_activeTouchIds.insert(pointerId).second)
            return;
        if (m_tapEventId < 0)
        {
            m_tapEventId = static_cast<int>(pointerId);
            m_tapBeginX = x;
            m_tapBeginY = y;
            m_tapStartTime = std::chrono::steady_clock::now();
        }
        break;
    case RBX::InputObject::INPUT_STATE_CHANGE:
        if (m_activeTouchIds.find(pointerId) == m_activeTouchIds.end())
            return;
        if (m_tapEventId == static_cast<int>(pointerId))
        {
            float dx = x - m_tapBeginX;
            float dy = y - m_tapBeginY;
            if (dx * dx + dy * dy > kTapTouchMoveTolerance * kTapTouchMoveTolerance)
            {
                m_tapEventId = -1;
            }
        }
        break;
    case RBX::InputObject::INPUT_STATE_END:
    case RBX::InputObject::INPUT_STATE_CANCEL:
        if (m_activeTouchIds.erase(pointerId) == 0)
            return;
        if (m_tapEventId == static_cast<int>(pointerId))
        {
            if (state == RBX::InputObject::INPUT_STATE_END)
            {
                std::chrono::duration<float> elapsed = std::chrono::steady_clock::now() - m_tapStartTime;
                if (elapsed.count() <= kTapSensitivity)
                {
                    isTap = true;
                }
            }
            m_tapEventId = -1;
        }
        break;
    default:
        return;
    }

    void* touchKey = reinterpret_cast<void*>(static_cast<uintptr_t>(pointerId));
    m_dataModel->submitTask([this, touchKey, x, y, state, isTap](RBX::DataModel* dm)
    {
        RBX::TouchInputService* touchInputService = RBX::ServiceProvider::find<RBX::TouchInputService>(dm);
        if (!touchInputService)
        {
            touchInputService = RBX::ServiceProvider::create<RBX::TouchInputService>(dm);
        }

        if (touchInputService)
        {
            touchInputService->addTouchToBuffer(touchKey, RBX::Vector3(x, y, 0.0f), state);
        }

        if (isTap)
        {
            sendWorkspaceEvent(x, y);
        }
    }, RBX::DataModelJob::Write);
}

void UserInput::sendWorkspaceEvent(float x, float y)
{
    if (!m_dataModel)
        return;

    RBX::UserInputService* userInputService = RBX::ServiceProvider::find<RBX::UserInputService>(m_dataModel);
    if (!userInputService)
        return;

    RBX::Vector3 touchPosition(x, y, 0.0f);
    shared_ptr<RBX::InputObject> fakeMouseDownEvent = RBX::Creatable<RBX::Instance>::create<RBX::InputObject>(
        RBX::InputObject::TYPE_MOUSEBUTTON1,
        RBX::InputObject::INPUT_STATE_BEGIN,
        touchPosition,
        RBX::Vector3::zero(),
        m_dataModel
    );
    userInputService->processToolEvent(fakeMouseDownEvent);

    shared_ptr<RBX::InputObject> fakeMouseUpEvent = RBX::Creatable<RBX::Instance>::create<RBX::InputObject>(
        RBX::InputObject::TYPE_MOUSEBUTTON1,
        RBX::InputObject::INPUT_STATE_END,
        touchPosition,
        RBX::Vector3::zero(),
        m_dataModel
    );
    userInputService->processToolEvent(fakeMouseUpEvent);
}

void UserInput::sendFocusEvent(bool hasFocus)
{
    if (!m_dataModel)
        return;

    m_dataModel->submitTask([this, hasFocus](RBX::DataModel* dm)
    {
        RBX::InputObject::UserInputState state = hasFocus ? RBX::InputObject::INPUT_STATE_BEGIN : RBX::InputObject::INPUT_STATE_END;

        shared_ptr<RBX::InputObject> focusEvent = RBX::Creatable<RBX::Instance>::create<RBX::InputObject>(
            RBX::InputObject::TYPE_FOCUS,
            state,
            RBX::Vector3::zero(),
            RBX::Vector3::zero(),
            dm
        );

        if (RBX::UserInputService* userInputService = RBX::ServiceProvider::find<RBX::UserInputService>(dm))
        {
            userInputService->fireInputEvent(focusEvent, NULL);
        }

        m_hasFocus = hasFocus;
    }, RBX::DataModelJob::Write);
}

void UserInput::hideMouse()
{
    auto window = Windows::UI::Core::CoreWindow::GetForCurrentThread();
    if (window)
    {
        window->PointerCursor = nullptr;
    }
}

void UserInput::showMouse()
{
    auto window = Windows::UI::Core::CoreWindow::GetForCurrentThread();
    if (window)
    {
        window->PointerCursor = ref new Windows::UI::Core::CoreCursor(Windows::UI::Core::CoreCursorType::Arrow, 0);
    }
}
