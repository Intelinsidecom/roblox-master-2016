#include "pch.h"
#include "InputManager.h"

using namespace Roblox;
using namespace Platform;
using namespace Windows::Devices::Input;
using namespace Windows::Devices::Sensors;
using namespace Windows::Foundation;
using namespace Windows::Gaming::Input;
using namespace Windows::System;
using namespace Windows::UI;
using namespace Windows::UI::Core;
using namespace Windows::UI::Input;
using namespace Windows::UI::Xaml;

InputManager::InputManager(CoreWindow^ window)
    : m_window(window)
    , m_mouseX(0)
    , m_mouseY(0)
    , m_lastKeyCode(0)
    , m_lastGamepadButtons(0)
    , m_mousePressed(false)
    , m_listenersRegistered(false)
    , m_accelerometer(nullptr)
    , m_orientationSensor(nullptr)
    , m_accelerationX(0.0f)
    , m_accelerationY(0.0f)
    , m_accelerationZ(0.0f)
    , m_orientationW(1.0f)
    , m_orientationX(0.0f)
    , m_orientationY(0.0f)
    , m_orientationZ(0.0f)
{
    for (int i = 0; i < 5; i++)
    {
        m_gestureRecognizers[i] = ref new GestureRecognizer();
        m_gestureRecognizers[i]->GestureSettings = static_cast<GestureSettings>(
            static_cast<unsigned int>(GestureSettings::Tap) |
            static_cast<unsigned int>(GestureSettings::Hold) |
            static_cast<unsigned int>(GestureSettings::Drag) |
            static_cast<unsigned int>(GestureSettings::ManipulationTranslateX) |
            static_cast<unsigned int>(GestureSettings::ManipulationTranslateY));
        m_gesturePointerIds[i] = 0;

        m_gestureTokens[i][0] = m_gestureRecognizers[i]->Tapped += ref new TypedEventHandler<GestureRecognizer^, TappedEventArgs^>(this, &InputManager::OnGestureTapped);
        m_gestureTokens[i][1] = m_gestureRecognizers[i]->Holding += ref new TypedEventHandler<GestureRecognizer^, HoldingEventArgs^>(this, &InputManager::OnGestureHolding);
        m_gestureTokens[i][2] = m_gestureRecognizers[i]->Dragging += ref new TypedEventHandler<GestureRecognizer^, DraggingEventArgs^>(this, &InputManager::OnGestureDragging);
        m_gestureTokens[i][3] = m_gestureRecognizers[i]->ManipulationStarted += ref new TypedEventHandler<GestureRecognizer^, ManipulationStartedEventArgs^>(this, &InputManager::OnManipulationStarted);
        m_gestureTokens[i][4] = m_gestureRecognizers[i]->ManipulationUpdated += ref new TypedEventHandler<GestureRecognizer^, ManipulationUpdatedEventArgs^>(this, &InputManager::OnManipulationUpdated);
        m_gestureTokens[i][5] = m_gestureRecognizers[i]->ManipulationCompleted += ref new TypedEventHandler<GestureRecognizer^, ManipulationCompletedEventArgs^>(this, &InputManager::OnManipulationCompleted);
    }
}

InputManager::~InputManager()
{
    UnregisterListeners();
    m_window = nullptr;
    m_mouseDevice = nullptr;
    m_gamepad = nullptr;
    m_gamepadPollTimer = nullptr;
}

void InputManager::registerListeners()
{
    if (m_listenersRegistered || m_window == nullptr)
    {
        return;
    }

    m_pointerPressedToken = m_window->PointerPressed += ref new TypedEventHandler<CoreWindow^, PointerEventArgs^>(this, &InputManager::OnPointerPressed);
    m_pointerMovedToken = m_window->PointerMoved += ref new TypedEventHandler<CoreWindow^, PointerEventArgs^>(this, &InputManager::OnPointerMoved);
    m_pointerReleasedToken = m_window->PointerReleased += ref new TypedEventHandler<CoreWindow^, PointerEventArgs^>(this, &InputManager::OnPointerReleased);
    m_pointerEnteredToken = m_window->PointerEntered += ref new TypedEventHandler<CoreWindow^, PointerEventArgs^>(this, &InputManager::OnPointerEntered);
    m_pointerExitedToken = m_window->PointerExited += ref new TypedEventHandler<CoreWindow^, PointerEventArgs^>(this, &InputManager::OnPointerExited);
    m_pointerWheelChangedToken = m_window->PointerWheelChanged += ref new TypedEventHandler<CoreWindow^, PointerEventArgs^>(this, &InputManager::OnPointerWheelChanged);
    m_keyDownToken = m_window->KeyDown += ref new TypedEventHandler<CoreWindow^, KeyEventArgs^>(this, &InputManager::OnKeyDown);
    m_keyUpToken = m_window->KeyUp += ref new TypedEventHandler<CoreWindow^, KeyEventArgs^>(this, &InputManager::OnKeyUp);
    m_characterReceivedToken = m_window->CharacterReceived += ref new TypedEventHandler<CoreWindow^, CharacterReceivedEventArgs^>(this, &InputManager::OnCharacterReceived);

    m_mouseDevice = MouseDevice::GetForCurrentView();
    if (m_mouseDevice != nullptr)
    {
        m_mouseMovedToken = m_mouseDevice->MouseMoved += ref new TypedEventHandler<MouseDevice^, MouseEventArgs^>(this, &InputManager::OnMouseMoved);
    }

    m_gamepadAddedToken = Gamepad::GamepadAdded += ref new EventHandler<Gamepad^>(this, &InputManager::OnGamepadAdded);
    m_gamepadRemovedToken = Gamepad::GamepadRemoved += ref new EventHandler<Gamepad^>(this, &InputManager::OnGamepadRemoved);

    m_listenersRegistered = true;
}

void InputManager::setCurrentMousePos(int x, int y)
{
    m_mouseX = x;
    m_mouseY = y;
}

void InputManager::startSensorListening()
{
    m_accelerometer = Windows::Devices::Sensors::Accelerometer::GetDefault();
    if (m_accelerometer != nullptr)
    {
        m_accelerometerToken = m_accelerometer->ReadingChanged += ref new TypedEventHandler<Windows::Devices::Sensors::Accelerometer^, Windows::Devices::Sensors::AccelerometerReadingChangedEventArgs^>(this, &InputManager::OnAccelerometerReadingChanged);
    }

    m_orientationSensor = Windows::Devices::Sensors::OrientationSensor::GetDefault();
    if (m_orientationSensor != nullptr)
    {
        m_orientationSensorToken = m_orientationSensor->ReadingChanged += ref new TypedEventHandler<Windows::Devices::Sensors::OrientationSensor^, Windows::Devices::Sensors::OrientationSensorReadingChangedEventArgs^>(this, &InputManager::OnOrientationReadingChanged);
    }
}

void InputManager::OnAccelerometerReadingChanged(Windows::Devices::Sensors::Accelerometer^ sender, Windows::Devices::Sensors::AccelerometerReadingChangedEventArgs^ args)
{
    m_accelerationX = args->Reading->AccelerationX;
    m_accelerationY = args->Reading->AccelerationY;
    m_accelerationZ = args->Reading->AccelerationZ;
}

void InputManager::OnOrientationReadingChanged(Windows::Devices::Sensors::OrientationSensor^ sender, Windows::Devices::Sensors::OrientationSensorReadingChangedEventArgs^ args)
{
    m_orientationW = args->Reading->Quaternion->W;
    m_orientationX = args->Reading->Quaternion->X;
    m_orientationY = args->Reading->Quaternion->Y;
    m_orientationZ = args->Reading->Quaternion->Z;
}

void InputManager::OnPointerPressed(CoreWindow^ sender, PointerEventArgs^ args)
{
    PointerPoint^ point = args->CurrentPoint;
    if (point->PointerDevice->PointerDeviceType == PointerDeviceType::Touch)
    {
        m_mouseX = static_cast<int>(point->Position.X);
        m_mouseY = static_cast<int>(point->Position.Y);
        m_mousePressed = true;
        int index = GetGestureRecognizerForPointer(point->PointerId, true);
        if (index >= 0)
        {
            m_gestureRecognizers[index]->ProcessDownEvent(point);
        }
        return;
    }

    if (point->PointerDevice->PointerDeviceType == PointerDeviceType::Mouse)
    {
        m_mouseX = static_cast<int>(point->Position.X);
        m_mouseY = static_cast<int>(point->Position.Y);
        m_mousePressed = true;
    }
}

void InputManager::OnPointerMoved(CoreWindow^ sender, PointerEventArgs^ args)
{
    PointerPoint^ point = args->CurrentPoint;
    if (point->PointerDevice->PointerDeviceType == PointerDeviceType::Touch)
    {
        int index = GetGestureRecognizerForPointer(point->PointerId, false);
        if (index >= 0)
        {
            auto points = ref new Platform::Collections::Vector<PointerPoint^>();
            points->Append(point);
            m_gestureRecognizers[index]->ProcessMoveEvents(points);
        }
        return;
    }

    if (point->PointerDevice->PointerDeviceType == PointerDeviceType::Mouse)
    {
        m_mouseX = static_cast<int>(point->Position.X);
        m_mouseY = static_cast<int>(point->Position.Y);
    }
}

void InputManager::OnPointerReleased(CoreWindow^ sender, PointerEventArgs^ args)
{
    PointerPoint^ point = args->CurrentPoint;
    if (point->PointerDevice->PointerDeviceType == PointerDeviceType::Touch)
    {
        int index = GetGestureRecognizerForPointer(point->PointerId, false);
        if (index >= 0)
        {
            m_gestureRecognizers[index]->ProcessUpEvent(point);
            m_gesturePointerIds[index] = 0;
        }
        m_mousePressed = false;
        return;
    }

    if (point->PointerDevice->PointerDeviceType == PointerDeviceType::Mouse)
    {
        m_mouseX = static_cast<int>(point->Position.X);
        m_mouseY = static_cast<int>(point->Position.Y);
        m_mousePressed = false;
    }
}

void InputManager::OnPointerEntered(CoreWindow^ sender, PointerEventArgs^ args)
{
}

void InputManager::OnPointerExited(CoreWindow^ sender, PointerEventArgs^ args)
{
    PointerPoint^ point = args->CurrentPoint;
    int index = GetGestureRecognizerForPointer(point->PointerId, false);
    if (index >= 0)
    {
        m_gestureRecognizers[index]->ProcessUpEvent(point);
        m_gesturePointerIds[index] = 0;
    }
}

void InputManager::OnPointerWheelChanged(CoreWindow^ sender, PointerEventArgs^ args)
{
}

void InputManager::OnKeyDown(CoreWindow^ sender, KeyEventArgs^ args)
{
    int keyCode = MapVirtualKeyToRoblox(args->VirtualKey);
    if (keyCode != m_lastKeyCode)
    {
        m_lastKeyCode = keyCode;
    }
}

void InputManager::OnKeyUp(CoreWindow^ sender, KeyEventArgs^ args)
{
    int keyCode = MapVirtualKeyToRoblox(args->VirtualKey);
    if (keyCode == m_lastKeyCode)
    {
        m_lastKeyCode = 0;
    }
}

void InputManager::OnCharacterReceived(CoreWindow^ sender, CharacterReceivedEventArgs^ args)
{
}

void InputManager::OnMouseMoved(MouseDevice^ sender, MouseEventArgs^ args)
{
    m_mouseX += args->MouseDelta.X;
    m_mouseY += args->MouseDelta.Y;
}

void InputManager::OnGamepadAdded(Object^ sender, Gamepad^ gamepad)
{
    m_gamepad = gamepad;
    m_lastGamepadButtons = 0;

    if (m_gamepadPollTimer == nullptr)
    {
        m_gamepadPollTimer = ref new DispatcherTimer();
        TimeSpan interval;
        interval.Duration = 330000;
        m_gamepadPollTimer->Interval = interval;
        m_gamepadPollTimer->Tick += ref new EventHandler<Object^>(this, &InputManager::OnGamepadPollTick);
    }
    m_gamepadPollTimer->Start();
    ReadGamepadState();
}

void InputManager::OnGamepadRemoved(Object^ sender, Gamepad^ gamepad)
{
    if (m_gamepad == gamepad)
    {
        ReleaseAllGamepadButtons();
        m_gamepad = nullptr;
        if (m_gamepadPollTimer != nullptr)
        {
            m_gamepadPollTimer->Stop();
        }
    }
}

void InputManager::OnGamepadPollTick(Object^ sender, Object^ e)
{
    ReadGamepadState();
}

void InputManager::ReadGamepadState()
{
    if (m_gamepad == nullptr)
    {
        return;
    }

    GamepadReading reading = m_gamepad->GetCurrentReading();
    unsigned int rawButtons = static_cast<unsigned int>(reading.Buttons);
    unsigned int newMask = 0;

    static const GamepadButtons buttonTable[] =
    {
        GamepadButtons::A,
        GamepadButtons::B,
        GamepadButtons::X,
        GamepadButtons::Y,
        GamepadButtons::RightShoulder,
        GamepadButtons::LeftShoulder,
        GamepadButtons::View,
        GamepadButtons::Menu,
        GamepadButtons::DPadUp,
        GamepadButtons::DPadDown,
        GamepadButtons::DPadLeft,
        GamepadButtons::DPadRight,
        GamepadButtons::LeftThumbstick,
        GamepadButtons::RightThumbstick
    };

    for (int i = 0; i < _countof(buttonTable); i++)
    {
        if ((rawButtons & static_cast<unsigned int>(buttonTable[i])) != 0)
        {
            int code = MapGamepadButtonToKeyCode(buttonTable[i]);
            if (code >= 1001 && code <= 1017)
            {
                newMask |= 1u << (code - 1001);
            }
        }
    }

    if (reading.LeftTrigger > 0.5f)
    {
        newMask |= 1u << (1008 - 1001);
    }
    if (reading.RightTrigger > 0.5f)
    {
        newMask |= 1u << (1007 - 1001);
    }

    m_lastGamepadButtons = newMask;
}

void InputManager::ReleaseAllGamepadButtons()
{
    m_lastGamepadButtons = 0;
}

void InputManager::OnGestureTapped(GestureRecognizer^ sender, TappedEventArgs^ args)
{
    m_mouseX = static_cast<int>(args->Position.X);
    m_mouseY = static_cast<int>(args->Position.Y);
}

void InputManager::OnGestureHolding(GestureRecognizer^ sender, HoldingEventArgs^ args)
{
}

void InputManager::OnGestureDragging(GestureRecognizer^ sender, DraggingEventArgs^ args)
{
    m_mouseX = static_cast<int>(args->Position.X);
    m_mouseY = static_cast<int>(args->Position.Y);
}

void InputManager::OnManipulationStarted(GestureRecognizer^ sender, ManipulationStartedEventArgs^ args)
{
    m_mouseX = static_cast<int>(args->Position.X);
    m_mouseY = static_cast<int>(args->Position.Y);
}

void InputManager::OnManipulationUpdated(GestureRecognizer^ sender, ManipulationUpdatedEventArgs^ args)
{
    m_mouseX = static_cast<int>(args->Position.X);
    m_mouseY = static_cast<int>(args->Position.Y);
}

void InputManager::OnManipulationCompleted(GestureRecognizer^ sender, ManipulationCompletedEventArgs^ args)
{
    m_mouseX = static_cast<int>(args->Position.X);
    m_mouseY = static_cast<int>(args->Position.Y);
}

int InputManager::GetGestureRecognizerForPointer(unsigned int pointerId, bool bind)
{
    for (int i = 0; i < 5; i++)
    {
        if (m_gesturePointerIds[i] == pointerId)
        {
            return i;
        }
    }

    if (bind)
    {
        for (int i = 0; i < 5; i++)
        {
            if (m_gesturePointerIds[i] == 0)
            {
                m_gesturePointerIds[i] = pointerId;
                return i;
            }
        }
    }

    return -1;
}

int InputManager::MapVirtualKeyToRoblox(VirtualKey key)
{
    return static_cast<int>(key);
}

int InputManager::MapGamepadButtonToKeyCode(GamepadButtons button)
{
    switch (button)
    {
    case GamepadButtons::A: return 1001;
    case GamepadButtons::B: return 1002;
    case GamepadButtons::X: return 1003;
    case GamepadButtons::Y: return 1004;
    case GamepadButtons::RightShoulder: return 1005;
    case GamepadButtons::LeftShoulder: return 1006;
    case GamepadButtons::View: return 1009;
    case GamepadButtons::Menu: return 1010;
    case GamepadButtons::DPadUp: return 1011;
    case GamepadButtons::DPadDown: return 1012;
    case GamepadButtons::DPadLeft: return 1013;
    case GamepadButtons::DPadRight: return 1014;
    case GamepadButtons::LeftThumbstick: return 1015;
    case GamepadButtons::RightThumbstick: return 1016;
    default: return -1;
    }
}

bool InputManager::ListenersRegistered::get()
{
    return m_listenersRegistered;
}

int InputManager::MouseX::get()
{
    return m_mouseX;
}

int InputManager::MouseY::get()
{
    return m_mouseY;
}

int InputManager::LastKeyCode::get()
{
    return m_lastKeyCode;
}

bool InputManager::MousePressed::get()
{
    return m_mousePressed;
}

void InputManager::UnregisterListeners()
{
    try
    {
        if (m_gamepadPollTimer != nullptr)
        {
            m_gamepadPollTimer->Stop();
            m_gamepadPollTimer = nullptr;
        }

        if (m_listenersRegistered && m_window != nullptr)
        {
            m_window->PointerPressed -= m_pointerPressedToken;
            m_window->PointerMoved -= m_pointerMovedToken;
            m_window->PointerReleased -= m_pointerReleasedToken;
            m_window->PointerEntered -= m_pointerEnteredToken;
            m_window->PointerExited -= m_pointerExitedToken;
            m_window->PointerWheelChanged -= m_pointerWheelChangedToken;
            m_window->KeyDown -= m_keyDownToken;
            m_window->KeyUp -= m_keyUpToken;
            m_window->CharacterReceived -= m_characterReceivedToken;
        }

        for (int i = 0; i < 5; i++)
        {
            if (m_gestureRecognizers[i] != nullptr)
            {
                m_gestureRecognizers[i]->Tapped -= m_gestureTokens[i][0];
                m_gestureRecognizers[i]->Holding -= m_gestureTokens[i][1];
                m_gestureRecognizers[i]->Dragging -= m_gestureTokens[i][2];
                m_gestureRecognizers[i]->ManipulationStarted -= m_gestureTokens[i][3];
                m_gestureRecognizers[i]->ManipulationUpdated -= m_gestureTokens[i][4];
                m_gestureRecognizers[i]->ManipulationCompleted -= m_gestureTokens[i][5];
            }
        }

        if (m_listenersRegistered && m_mouseDevice != nullptr)
        {
            m_mouseDevice->MouseMoved -= m_mouseMovedToken;
        }

        if (m_listenersRegistered)
        {
            Gamepad::GamepadAdded -= m_gamepadAddedToken;
            Gamepad::GamepadRemoved -= m_gamepadRemovedToken;
        }

        if (m_accelerometer != nullptr)
        {
            m_accelerometer->ReadingChanged -= m_accelerometerToken;
            m_accelerometer = nullptr;
        }

        if (m_orientationSensor != nullptr)
        {
            m_orientationSensor->ReadingChanged -= m_orientationSensorToken;
            m_orientationSensor = nullptr;
        }
    }
    catch (...)
    {
    }

    m_listenersRegistered = false;
}
