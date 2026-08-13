#pragma once

#include <map>
#include <set>
#include <chrono>
#include <functional>
#include <atomic>

#include "util/KeyCode.h"
#include "util/UserInputBase.h"
#include "v8datamodel/InputObject.h"

namespace RBX
{
    class DataModel;
    class UserInputService;
}

namespace Windows
{
    namespace UI
    {
        namespace Xaml
        {
            ref class DispatcherTimer;
        }
    }
}

class UserInput : public RBX::UserInputBase
{
public:
    UserInput(RBX::DataModel* dataModel, std::function<void(const std::string&)> logCallback = nullptr);
    ~UserInput();

    void initialize();
    void shutdown();
    void setViewportSize(int width, int height);
    void sendFocusEvent(bool hasFocus);
    void hideMouse();
    void showMouse();
    void setLogCallback(std::function<void(const std::string&)> callback);

    RBX::DataModel* getDataModel() const { return m_dataModel; }

    void centerCursor() override;
    bool keyDown(RBX::KeyCode code) const override;
    void setKeyState(RBX::KeyCode code, RBX::ModCode modCode, char modifiedKey, bool isDown) override;

protected:
    RBX::Vector2 getCursorPosition() override;

private:
    void onPointerPressed(Windows::UI::Core::CoreWindow^ sender, Windows::UI::Core::PointerEventArgs^ args);
    void onPointerMoved(Windows::UI::Core::CoreWindow^ sender, Windows::UI::Core::PointerEventArgs^ args);
    void onPointerReleased(Windows::UI::Core::CoreWindow^ sender, Windows::UI::Core::PointerEventArgs^ args);
    void onPointerWheelChanged(Windows::UI::Core::CoreWindow^ sender, Windows::UI::Core::PointerEventArgs^ args);
    void onMouseMoved(Windows::Devices::Input::MouseDevice^ sender, Windows::Devices::Input::MouseEventArgs^ args);
    void onKeyDown(Windows::UI::Core::CoreWindow^ sender, Windows::UI::Core::KeyEventArgs^ args);
    void onKeyUp(Windows::UI::Core::CoreWindow^ sender, Windows::UI::Core::KeyEventArgs^ args);

    void fireKeyEvent(int vk, bool isDown, int scanCode);
    void firePointerButtonEvent(float x, float y, bool isDown, RBX::InputObject::UserInputType buttonType);
    void firePointerMoveEvent(float x, float y, int dx, int dy);
    void firePointerWheelEvent(int wheelDelta);
    void handleTouch(Windows::UI::Core::CoreWindow^ sender, Windows::UI::Core::PointerEventArgs^ args, RBX::InputObject::UserInputState state);
    void sendWorkspaceEvent(float x, float y);

    bool isGamepadVirtualKey(int vk);
    RBX::KeyCode mapVirtualKeyToKeyCode(int vk);

    bool isCursorLockActive() const;
    bool isLockActive() const;
    void applyCursorLock(bool active);
    void onLockTick();
	void recenterCursor();
    void doWrapMouse(const RBX::Vector2& delta, RBX::Vector2& wrapMouseDelta);
    RBX::Vector2 getGameCursorPositionInternal() const;
    RBX::Vector2 getWindowCenter() const;
    void seedWrapMousePosition();
    RBX::DataModel* m_dataModel;
    bool m_isMouseCaptured;
    RBX::InputObject::UserInputType m_activeMouseButton;
    std::atomic<int> m_lastMouseX;
    std::atomic<int> m_lastMouseY;
    int m_viewWidth;
    int m_viewHeight;
    bool m_hasFocus;
    std::map<int, bool> m_keyDownState;
    std::function<void(const std::string&)> m_logCallback;

    std::atomic<long long> m_lastCenterRequestMs;
	bool m_recentering;
	int m_recenterTargetX;
	int m_recenterTargetY;
    int m_uiLastMouseX;
    int m_uiLastMouseY;
    std::atomic<bool> m_keyState[1024];

    bool m_pointerInsideWindow;
    bool m_lockHidCursor;
	bool m_loggedRecenter;
    std::atomic<bool> m_isShuttingDown;
    bool m_initialized;
    Windows::UI::Xaml::DispatcherTimer^ m_lockTimer;
    Windows::Foundation::EventRegistrationToken m_lockTickToken;

    RBX::Vector2 m_wrapMousePosition;
    RBX::Vector2 m_wrapMouseDelta;

    std::set<unsigned int> m_activeTouchIds;
    int m_tapEventId;
    float m_tapBeginX;
    float m_tapBeginY;
    std::chrono::steady_clock::time_point m_tapStartTime;

    Windows::Foundation::EventRegistrationToken m_pointerPressedToken;
    Windows::Foundation::EventRegistrationToken m_pointerMovedToken;
    Windows::Foundation::EventRegistrationToken m_pointerReleasedToken;
    Windows::Foundation::EventRegistrationToken m_pointerWheelChangedToken;
    Windows::Foundation::EventRegistrationToken m_mouseMovedToken;
    Windows::Foundation::EventRegistrationToken m_keyDownToken;
    Windows::Foundation::EventRegistrationToken m_keyUpToken;
    Windows::Foundation::EventRegistrationToken m_activatedToken;
    Windows::Foundation::EventRegistrationToken m_visibilityChangedToken;
    Windows::Foundation::EventRegistrationToken m_pointerExitedToken;
    Windows::Foundation::EventRegistrationToken m_pointerEnteredToken;
};
