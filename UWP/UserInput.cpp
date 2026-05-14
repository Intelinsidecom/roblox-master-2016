#include "stdafx.h"
#include "UserInput.h"

#include "v8datamodel/UserInputService.h"
#include "v8datamodel/DataModelJob.h"
#include "rbx/TaskScheduler.h"

#include <SDL.h>

UserInput::UserInput(RBX::DataModel* dataModel, Marshaller* marshaller, std::function<void(const std::string&)> logCallback)
    : m_dataModel(dataModel)
    , m_marshaller(marshaller)
    , m_logCallback(logCallback)
    , m_isMouseCaptured(false)
    , m_isMouseInside(false)
    , m_lastMouseX(0)
    , m_lastMouseY(0)
    , m_viewWidth(0)
    , m_viewHeight(0)
    , m_hasFocus(true)
{
}

UserInput::~UserInput()
{
    shutdown();
}

void UserInput::initialize()
{
    auto window = Windows::UI::Core::CoreWindow::GetForCurrentThread();
    if (window)
    {
        m_pointerPressedToken = window->PointerPressed += ref new Windows::Foundation::TypedEventHandler<Windows::UI::Core::CoreWindow^, Windows::UI::Core::PointerEventArgs^>(
            [this](Windows::UI::Core::CoreWindow^ sender, Windows::UI::Core::PointerEventArgs^ args) { onPointerPressed(sender, args); });
        m_pointerMovedToken = window->PointerMoved += ref new Windows::Foundation::TypedEventHandler<Windows::UI::Core::CoreWindow^, Windows::UI::Core::PointerEventArgs^>(
            [this](Windows::UI::Core::CoreWindow^ sender, Windows::UI::Core::PointerEventArgs^ args) { onPointerMoved(sender, args); });
        m_pointerReleasedToken = window->PointerReleased += ref new Windows::Foundation::TypedEventHandler<Windows::UI::Core::CoreWindow^, Windows::UI::Core::PointerEventArgs^>(
            [this](Windows::UI::Core::CoreWindow^ sender, Windows::UI::Core::PointerEventArgs^ args) { onPointerReleased(sender, args); });
        m_pointerWheelChangedToken = window->PointerWheelChanged += ref new Windows::Foundation::TypedEventHandler<Windows::UI::Core::CoreWindow^, Windows::UI::Core::PointerEventArgs^>(
            [this](Windows::UI::Core::CoreWindow^ sender, Windows::UI::Core::PointerEventArgs^ args) { onPointerWheelChanged(sender, args); });
        m_keyDownToken = window->KeyDown += ref new Windows::Foundation::TypedEventHandler<Windows::UI::Core::CoreWindow^, Windows::UI::Core::KeyEventArgs^>(
            [this](Windows::UI::Core::CoreWindow^ sender, Windows::UI::Core::KeyEventArgs^ args) { onKeyDown(sender, args); });
        m_keyUpToken = window->KeyUp += ref new Windows::Foundation::TypedEventHandler<Windows::UI::Core::CoreWindow^, Windows::UI::Core::KeyEventArgs^>(
            [this](Windows::UI::Core::CoreWindow^ sender, Windows::UI::Core::KeyEventArgs^ args) { onKeyUp(sender, args); });
        
    m_activatedToken = window->Activated += ref new Windows::Foundation::TypedEventHandler<Windows::UI::Core::CoreWindow^, Windows::UI::Core::WindowActivatedEventArgs^>(
        [this](Windows::UI::Core::CoreWindow^ sender, Windows::UI::Core::WindowActivatedEventArgs^ args) {
            bool activated = (args->WindowActivationState != Windows::UI::Core::CoreWindowActivationState::Deactivated);
            m_marshaller->submit([this, activated]() {
                sendFocusEvent(activated);
                if (activated) hideMouse();
                else showMouse();
            });
        });

    window->VisibilityChanged += ref new Windows::Foundation::TypedEventHandler<Windows::UI::Core::CoreWindow^, Windows::UI::Core::VisibilityChangedEventArgs^>(
        [this](Windows::UI::Core::CoreWindow^ sender, Windows::UI::Core::VisibilityChangedEventArgs^ args) {
            bool visible = args->Visible;
            m_marshaller->submit([this, visible]() {
                if (!visible)
                {
                    sendFocusEvent(false);
                    showMouse();
                }
                else
                {
                    hideMouse();
                }
            });
        });

    window->PointerEntered += ref new Windows::Foundation::TypedEventHandler<Windows::UI::Core::CoreWindow^, Windows::UI::Core::PointerEventArgs^>(
        [this](Windows::UI::Core::CoreWindow^ sender, Windows::UI::Core::PointerEventArgs^ args) {
            m_marshaller->submit([this]() { hideMouse(); });
        });

    window->PointerExited += ref new Windows::Foundation::TypedEventHandler<Windows::UI::Core::CoreWindow^, Windows::UI::Core::PointerEventArgs^>(
        [this](Windows::UI::Core::CoreWindow^ sender, Windows::UI::Core::PointerEventArgs^ args) {
            m_marshaller->submit([this]() { showMouse(); });
        });

    }
    else
    {
        if (m_logCallback) m_logCallback("[ERROR] Failed to get CoreWindow for event registration");
    }
}

void UserInput::shutdown()
{
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
    }
}

void UserInput::setViewportSize(int width, int height)
{
    m_viewWidth = width;
    m_viewHeight = height;
}


void UserInput::processKeyboardEvent(const SDL_KeyboardEvent& event)
{
    if (!m_dataModel)
        return;

    RBX::DataModel::LegacyLock lock(m_dataModel, RBX::DataModelJob::Write);

    RBX::UserInputService* userInputService = RBX::ServiceProvider::find<RBX::UserInputService>(m_dataModel);
    if (!userInputService)
        return;

    RBX::KeyCode keyCode = static_cast<RBX::KeyCode>(event.keysym.sym);
    bool isDown = (event.state == SDL_PRESSED);
    
    RBX::ModCode modCode = RBX::KMOD_NONE;
    if (event.keysym.mod & KMOD_CTRL)
        modCode = static_cast<RBX::ModCode>(modCode | RBX::KMOD_LCTRL);
    if (event.keysym.mod & KMOD_SHIFT)
        modCode = static_cast<RBX::ModCode>(modCode | RBX::KMOD_LSHIFT);
    if (event.keysym.mod & KMOD_ALT)
        modCode = static_cast<RBX::ModCode>(modCode | RBX::KMOD_LALT);

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
        m_dataModel
    );

    keyInput->setScanCode(static_cast<SDL_Scancode>(event.keysym.scancode));
    userInputService->fireInputEvent(keyInput, NULL);
}

void UserInput::processMouseEvent(const SDL_Event& event)
{
    if (!m_dataModel)
        return;

    RBX::DataModel::LegacyLock lock(m_dataModel, RBX::DataModelJob::Write);

    RBX::UserInputService* userInputService = RBX::ServiceProvider::find<RBX::UserInputService>(m_dataModel);
    if (!userInputService)
        return;

    if (event.type == SDL_MOUSEMOTION)
    {
        int x = event.motion.x;
        int y = event.motion.y;
        int dx = event.motion.xrel;
        int dy = event.motion.yrel;

        RBX::Vector3 position(static_cast<float>(x), static_cast<float>(y), 0.0f);
        RBX::Vector3 delta(static_cast<float>(dx), static_cast<float>(dy), 0.0f);

        shared_ptr<RBX::InputObject> mouseMove = RBX::Creatable<RBX::Instance>::create<RBX::InputObject>(
            RBX::InputObject::TYPE_MOUSEMOVEMENT,
            RBX::InputObject::INPUT_STATE_CHANGE,
            position,
            delta,
            m_dataModel
        );
        userInputService->fireInputEvent(mouseMove, NULL);

        if (dx != 0 || dy != 0)
        {
            shared_ptr<RBX::InputObject> mouseDelta = RBX::Creatable<RBX::Instance>::create<RBX::InputObject>(
                RBX::InputObject::TYPE_MOUSEDELTA,
                RBX::InputObject::INPUT_STATE_CHANGE,
                position,
                delta,
                m_dataModel
            );
            userInputService->fireInputEvent(mouseDelta, NULL);
        }

        m_lastMouseX = x;
        m_lastMouseY = y;
    }
    else if (event.type == SDL_MOUSEBUTTONDOWN || event.type == SDL_MOUSEBUTTONUP)
    {
        RBX::InputObject::UserInputType buttonType;
        switch (event.button.button)
        {
            case SDL_BUTTON_LEFT: buttonType = RBX::InputObject::TYPE_MOUSEBUTTON1; break;
            case SDL_BUTTON_RIGHT: buttonType = RBX::InputObject::TYPE_MOUSEBUTTON2; break;
            case SDL_BUTTON_MIDDLE: buttonType = RBX::InputObject::TYPE_MOUSEBUTTON3; break;
            default: return;
        }

        RBX::Vector3 position(static_cast<float>(event.button.x), static_cast<float>(event.button.y), 0.0f);
        bool isDown = (event.type == SDL_MOUSEBUTTONDOWN);
        RBX::InputObject::UserInputState inputState = isDown ? RBX::InputObject::INPUT_STATE_BEGIN : RBX::InputObject::INPUT_STATE_END;

        shared_ptr<RBX::InputObject> mouseButton = RBX::Creatable<RBX::Instance>::create<RBX::InputObject>(
            buttonType, inputState, position, RBX::Vector3::zero(), m_dataModel
        );
        userInputService->fireInputEvent(mouseButton, NULL);

        if (event.button.button == SDL_BUTTON_LEFT && isDown)
        {
            sendFocusEvent(true);
        }
    }
    else if (event.type == SDL_MOUSEWHEEL)
    {
        int mouseX, mouseY;
        SDL_GetMouseState(&mouseX, &mouseY);
        RBX::Vector3 position(static_cast<float>(mouseX), static_cast<float>(mouseY), static_cast<float>(event.wheel.y));

        shared_ptr<RBX::InputObject> mouseWheel = RBX::Creatable<RBX::Instance>::create<RBX::InputObject>(
            RBX::InputObject::TYPE_MOUSEWHEEL,
            RBX::InputObject::INPUT_STATE_CHANGE,
            position,
            RBX::Vector3::zero(),
            m_dataModel
        );
        userInputService->fireInputEvent(mouseWheel, NULL);
    }
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
    {
        return;
    }

    if (isGamepadVirtualKey(vk))
    {
        return;
    }

    RBX::KeyCode sym = mapVirtualKeyToKeyCode(vk);
    if (sym == RBX::SDLK_UNKNOWN)
    {
        return;
    }

    if (m_keyDownState[vk])
    {
        return;
    }
    m_keyDownState[vk] = true;

    SDL_Event event;
    event.type = SDL_KEYDOWN;
    event.key.type = SDL_KEYDOWN;
    event.key.state = SDL_PRESSED;
    event.key.keysym.sym = (SDL_Keycode)sym;
    event.key.keysym.scancode = SDL_GetScancodeFromKey(event.key.keysym.sym);
    event.key.keysym.mod = 0;
    event.key.repeat = 0;

    SDL_PushEvent(&event);
}

void UserInput::onKeyUp(Windows::UI::Core::CoreWindow^ sender, Windows::UI::Core::KeyEventArgs^ args)
{
    args->Handled = true;
    int vk = (int)args->VirtualKey;

    if (isGamepadVirtualKey(vk))
    {
        return;
    }

    if (!m_keyDownState[vk])
    {
        return;
    }
    m_keyDownState[vk] = false;

    RBX::KeyCode sym = mapVirtualKeyToKeyCode(vk);
    if (sym == RBX::SDLK_UNKNOWN)
        return;

    SDL_Event event;
    event.type = SDL_KEYUP;
    event.key.type = SDL_KEYUP;
    event.key.state = SDL_RELEASED;
    event.key.keysym.sym = (SDL_Keycode)sym;
    event.key.keysym.scancode = SDL_GetScancodeFromKey(event.key.keysym.sym);
    event.key.keysym.mod = 0;

    SDL_PushEvent(&event);
}

void UserInput::onPointerPressed(Windows::UI::Core::CoreWindow^ sender, Windows::UI::Core::PointerEventArgs^ args)
{
    int x = (int)args->CurrentPoint->Position.X;
    int y = (int)args->CurrentPoint->Position.Y;
    m_lastMouseX = x;
    m_lastMouseY = y;
    m_isMouseInside = true;

    SDL_Event event;
    event.type = SDL_MOUSEBUTTONDOWN;
    event.button.type = SDL_MOUSEBUTTONDOWN;
    event.button.state = SDL_PRESSED;
    event.button.x = x;
    event.button.y = y;

    if (args->CurrentPoint->Properties->IsLeftButtonPressed) event.button.button = SDL_BUTTON_LEFT;
    else if (args->CurrentPoint->Properties->IsRightButtonPressed) event.button.button = SDL_BUTTON_RIGHT;
    else if (args->CurrentPoint->Properties->IsMiddleButtonPressed) event.button.button = SDL_BUTTON_MIDDLE;
    else return;

    SDL_PushEvent(&event);
}

void UserInput::onPointerReleased(Windows::UI::Core::CoreWindow^ sender, Windows::UI::Core::PointerEventArgs^ args)
{
    SDL_Event event;
    event.type = SDL_MOUSEBUTTONUP;
    event.button.type = SDL_MOUSEBUTTONUP;
    event.button.state = SDL_RELEASED;
    event.button.x = (int)args->CurrentPoint->Position.X;
    event.button.y = (int)args->CurrentPoint->Position.Y;

    if (!args->CurrentPoint->Properties->IsLeftButtonPressed) event.button.button = SDL_BUTTON_LEFT;
    else if (!args->CurrentPoint->Properties->IsRightButtonPressed) event.button.button = SDL_BUTTON_RIGHT;
    else if (!args->CurrentPoint->Properties->IsMiddleButtonPressed) event.button.button = SDL_BUTTON_MIDDLE;

    SDL_PushEvent(&event);
}

void UserInput::onPointerMoved(Windows::UI::Core::CoreWindow^ sender, Windows::UI::Core::PointerEventArgs^ args)
{
    int x = (int)args->CurrentPoint->Position.X;
    int y = (int)args->CurrentPoint->Position.Y;

    SDL_Event event;
    event.type = SDL_MOUSEMOTION;
    event.motion.type = SDL_MOUSEMOTION;
    event.motion.x = x;
    event.motion.y = y;
    event.motion.xrel = x - m_lastMouseX;
    event.motion.yrel = y - m_lastMouseY;

    m_lastMouseX = x;
    m_lastMouseY = y;
    m_isMouseInside = true;

    SDL_PushEvent(&event);
}

void UserInput::onPointerWheelChanged(Windows::UI::Core::CoreWindow^ sender, Windows::UI::Core::PointerEventArgs^ args)
{
    SDL_Event event;
    event.type = SDL_MOUSEWHEEL;
    event.wheel.type = SDL_MOUSEWHEEL;
    event.wheel.y = args->CurrentPoint->Properties->MouseWheelDelta / 120; // Standard wheel notch
    SDL_PushEvent(&event);
}

void UserInput::sendFocusEvent(bool hasFocus)
{
    if (!m_dataModel)
        return;

    RBX::DataModel::LegacyLock lock(m_dataModel, RBX::DataModelJob::Write);

    RBX::InputObject::UserInputState state = hasFocus ? RBX::InputObject::INPUT_STATE_BEGIN : RBX::InputObject::INPUT_STATE_END;

    shared_ptr<RBX::InputObject> focusEvent = RBX::Creatable<RBX::Instance>::create<RBX::InputObject>(
        RBX::InputObject::TYPE_FOCUS,
        state,
        RBX::Vector3::zero(),
        RBX::Vector3::zero(),
        m_dataModel
    );

    if (RBX::UserInputService* userInputService = RBX::ServiceProvider::find<RBX::UserInputService>(m_dataModel))
    {
        userInputService->fireInputEvent(focusEvent, NULL);
    }

    m_hasFocus = hasFocus;
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
