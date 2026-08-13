#pragma once

namespace Roblox
{
    public ref class InputManager sealed
    {
    public:
        InputManager(Windows::UI::Core::CoreWindow^ window);

        virtual ~InputManager();

        void registerListeners();
        void startSensorListening();
        void setCurrentMousePos(int x, int y);

    internal:
        property bool ListenersRegistered { bool get(); }
        property int MouseX { int get(); }
        property int MouseY { int get(); }
        property int LastKeyCode { int get(); }
        property bool MousePressed { bool get(); }

    private:
        void UnregisterListeners();
        void ReadGamepadState();
        void ReleaseAllGamepadButtons();
        int GetGestureRecognizerForPointer(unsigned int pointerId, bool bind);
        static int MapVirtualKeyToRoblox(Windows::System::VirtualKey key);
        static int MapGamepadButtonToKeyCode(Windows::Gaming::Input::GamepadButtons button);

        void OnPointerPressed(Windows::UI::Core::CoreWindow^ sender, Windows::UI::Core::PointerEventArgs^ args);
        void OnPointerMoved(Windows::UI::Core::CoreWindow^ sender, Windows::UI::Core::PointerEventArgs^ args);
        void OnPointerReleased(Windows::UI::Core::CoreWindow^ sender, Windows::UI::Core::PointerEventArgs^ args);
        void OnPointerEntered(Windows::UI::Core::CoreWindow^ sender, Windows::UI::Core::PointerEventArgs^ args);
        void OnPointerExited(Windows::UI::Core::CoreWindow^ sender, Windows::UI::Core::PointerEventArgs^ args);
        void OnPointerWheelChanged(Windows::UI::Core::CoreWindow^ sender, Windows::UI::Core::PointerEventArgs^ args);
        void OnKeyDown(Windows::UI::Core::CoreWindow^ sender, Windows::UI::Core::KeyEventArgs^ args);
        void OnKeyUp(Windows::UI::Core::CoreWindow^ sender, Windows::UI::Core::KeyEventArgs^ args);
        void OnCharacterReceived(Windows::UI::Core::CoreWindow^ sender, Windows::UI::Core::CharacterReceivedEventArgs^ args);

        void OnMouseMoved(Windows::Devices::Input::MouseDevice^ sender, Windows::Devices::Input::MouseEventArgs^ args);

        void OnAccelerometerReadingChanged(Windows::Devices::Sensors::Accelerometer^ sender, Windows::Devices::Sensors::AccelerometerReadingChangedEventArgs^ args);
        void OnOrientationReadingChanged(Windows::Devices::Sensors::OrientationSensor^ sender, Windows::Devices::Sensors::OrientationSensorReadingChangedEventArgs^ args);

        void OnGamepadAdded(Platform::Object^ sender, Windows::Gaming::Input::Gamepad^ gamepad);
        void OnGamepadRemoved(Platform::Object^ sender, Windows::Gaming::Input::Gamepad^ gamepad);
        void OnGamepadPollTick(Platform::Object^ sender, Platform::Object^ e);

        void OnGestureTapped(Windows::UI::Input::GestureRecognizer^ sender, Windows::UI::Input::TappedEventArgs^ args);
        void OnGestureHolding(Windows::UI::Input::GestureRecognizer^ sender, Windows::UI::Input::HoldingEventArgs^ args);
        void OnGestureDragging(Windows::UI::Input::GestureRecognizer^ sender, Windows::UI::Input::DraggingEventArgs^ args);
        void OnManipulationStarted(Windows::UI::Input::GestureRecognizer^ sender, Windows::UI::Input::ManipulationStartedEventArgs^ args);
        void OnManipulationUpdated(Windows::UI::Input::GestureRecognizer^ sender, Windows::UI::Input::ManipulationUpdatedEventArgs^ args);
        void OnManipulationCompleted(Windows::UI::Input::GestureRecognizer^ sender, Windows::UI::Input::ManipulationCompletedEventArgs^ args);

        Windows::UI::Core::CoreWindow^ m_window;
        Windows::UI::Input::GestureRecognizer^ m_gestureRecognizers[5];
        unsigned int m_gesturePointerIds[5];

        Windows::Foundation::EventRegistrationToken m_pointerPressedToken;
        Windows::Foundation::EventRegistrationToken m_pointerMovedToken;
        Windows::Foundation::EventRegistrationToken m_pointerReleasedToken;
        Windows::Foundation::EventRegistrationToken m_pointerEnteredToken;
        Windows::Foundation::EventRegistrationToken m_pointerExitedToken;
        Windows::Foundation::EventRegistrationToken m_pointerWheelChangedToken;
        Windows::Foundation::EventRegistrationToken m_keyDownToken;
        Windows::Foundation::EventRegistrationToken m_keyUpToken;
        Windows::Foundation::EventRegistrationToken m_characterReceivedToken;
        Windows::Foundation::EventRegistrationToken m_gestureTokens[5][6];
        Windows::Foundation::EventRegistrationToken m_mouseMovedToken;
        Windows::Foundation::EventRegistrationToken m_gamepadAddedToken;
        Windows::Foundation::EventRegistrationToken m_gamepadRemovedToken;

        Windows::Devices::Input::MouseDevice^ m_mouseDevice;
        Windows::Gaming::Input::Gamepad^ m_gamepad;
        Windows::UI::Xaml::DispatcherTimer^ m_gamepadPollTimer;
        Windows::Devices::Sensors::Accelerometer^ m_accelerometer;
        Windows::Devices::Sensors::OrientationSensor^ m_orientationSensor;
        Windows::Foundation::EventRegistrationToken m_accelerometerToken;
        Windows::Foundation::EventRegistrationToken m_orientationSensorToken;

        float m_accelerationX;
        float m_accelerationY;
        float m_accelerationZ;
        float m_orientationW;
        float m_orientationX;
        float m_orientationY;
        float m_orientationZ;

        int m_mouseX;
        int m_mouseY;
        int m_lastKeyCode;
        unsigned int m_lastGamepadButtons;
        bool m_mousePressed;

        bool m_listenersRegistered;
    };
}
