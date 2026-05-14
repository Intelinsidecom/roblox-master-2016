#pragma once

#include "stdafx.h"
#include "Marshaller.h"
#include "SDL.h"
#include <map>

namespace RBX
{
    class DataModel;
    class UserInputService;
}

class UserInput
{
public:
    UserInput(RBX::DataModel* dataModel, Marshaller* marshaller, std::function<void(const std::string&)> logCallback = nullptr);
    ~UserInput();

    void initialize();
    void shutdown();
    void processKeyboardEvent(const SDL_KeyboardEvent& event);
    void processMouseEvent(const SDL_Event& event);
    void onPointerPressed(Windows::UI::Core::CoreWindow^ sender, Windows::UI::Core::PointerEventArgs^ args);
    void onPointerMoved(Windows::UI::Core::CoreWindow^ sender, Windows::UI::Core::PointerEventArgs^ args);
    void onPointerReleased(Windows::UI::Core::CoreWindow^ sender, Windows::UI::Core::PointerEventArgs^ args);
    void onPointerWheelChanged(Windows::UI::Core::CoreWindow^ sender, Windows::UI::Core::PointerEventArgs^ args);
    void onKeyDown(Windows::UI::Core::CoreWindow^ sender, Windows::UI::Core::KeyEventArgs^ args);
    void onKeyUp(Windows::UI::Core::CoreWindow^ sender, Windows::UI::Core::KeyEventArgs^ args);
    Windows::Foundation::EventRegistrationToken m_pointerPressedToken;
    Windows::Foundation::EventRegistrationToken m_pointerMovedToken;
    Windows::Foundation::EventRegistrationToken m_pointerReleasedToken;
    Windows::Foundation::EventRegistrationToken m_pointerWheelChangedToken;
    Windows::Foundation::EventRegistrationToken m_keyDownToken;
    Windows::Foundation::EventRegistrationToken m_keyUpToken;
    Windows::Foundation::EventRegistrationToken m_activatedToken;
    void sendFocusEvent(bool hasFocus);
    void hideMouse();
    void showMouse();
    void setViewportSize(int width, int height);
    void setLogCallback(std::function<void(const std::string&)> callback);

private:
    RBX::DataModel* m_dataModel;
    Marshaller* m_marshaller;
    bool m_isMouseCaptured;
    bool m_isMouseInside;
    int m_lastMouseX;
    int m_lastMouseY;
    int m_viewWidth;
    int m_viewHeight;
    bool m_hasFocus;
    std::map<int, bool> m_keyDownState;
    std::function<void(const std::string&)> m_logCallback;
    bool isGamepadVirtualKey(int vk);
    RBX::KeyCode mapVirtualKeyToKeyCode(int vk);
};
