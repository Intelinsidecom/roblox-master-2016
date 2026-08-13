#pragma once

#include <vector>
#include <boost/unordered_map.hpp>
#include <boost/thread/mutex.hpp>

#include "rbx/signal.h"
#include "reflection/Type.h"
#include "util/KeyCode.h"
#include "v8datamodel/InputObject.h"

namespace RBX
{
    class DataModel;
    class UserInputService;
    class GamepadService;

    typedef boost::unordered_map<RBX::KeyCode, boost::shared_ptr<RBX::InputObject> > Gamepad;
}

// Native Windows::Gaming::Input gamepad driver.
// Polls connected gamepads on the UI thread and pushes changes into a
// mutex-guarded buffer which is drained on the DataModel thread via
// UserInputService::updateInputSignal (see processControllerBufferMap).
class GamepadController
{
public:
    GamepadController(RBX::DataModel* dataModel);
    ~GamepadController();

    void initialize(); // must be called on the UI thread (via FunctionMarshaller)
    void shutdown();   // disconnects signals / stops polling

private:
    typedef std::vector<G3D::Vector3> KeycodeInputs;
    typedef boost::unordered_map<RBX::KeyCode, KeycodeInputs> BufferedGamepadState;
    typedef boost::unordered_map<RBX::InputObject::UserInputType, BufferedGamepadState> BufferedGamepadStates;

    void bindToDataModel();

    void pollGamepads();
    void readAndBuffer(Windows::Gaming::Input::Gamepad^ gamepad, int deviceId, Windows::Gaming::Input::GamepadReading& previous);

    void handleGamepadConnect(int deviceId);
    void handleGamepadDisconnect(int deviceId);
    void handleGamepadButtonInput(int deviceId, RBX::KeyCode rbxKeycode, int buttonState);
    void handleGamepadAxisInput(int deviceId, RBX::KeyCode rbxKeycode, float newValueX, float newValueY, float newValueZ);

    void processControllerBufferMap();
    void getSupportedGamepadKeyCodes(RBX::InputObject::UserInputType gamepadEnum);

    RBX::InputObject::UserInputType mapDeviceIdToControllerEnum(int deviceId);
    RBX::UserInputService* getUserInputService();
    RBX::GamepadService* getGamepadService();

    static RBX::KeyCode mapGamepadButtonToKeyCode(Windows::Gaming::Input::GamepadButtons button);
    static bool vectorContains(const std::vector<Windows::Gaming::Input::Gamepad^>& pads, Windows::Gaming::Input::Gamepad^ pad);

    RBX::DataModel* m_dataModel;

    Windows::UI::Xaml::DispatcherTimer^ m_pollTimer;
    Windows::Foundation::EventRegistrationToken m_pollTickToken;
    Windows::Foundation::EventRegistrationToken m_gamepadAddedToken;
    Windows::Foundation::EventRegistrationToken m_gamepadRemovedToken;

    std::vector<Windows::Gaming::Input::Gamepad^> m_gamepads;
    std::vector<Windows::Gaming::Input::GamepadReading> m_previousReadings;

    boost::unordered_map<int, RBX::InputObject::UserInputType> deviceIdToGamepadId;
    boost::unordered_map<RBX::InputObject::UserInputType, bool> connectedControllerMap;
    boost::unordered_map<RBX::InputObject::UserInputType, shared_ptr<const RBX::Reflection::ValueArray> > gamepadSupportedKeyCodes;
    boost::mutex supportedControllerKeyCodeMutex;

    BufferedGamepadStates controllerBufferMap;
    boost::mutex controllerBufferMutex;

    rbx::signals::scoped_connection updateInputConnection;
    rbx::signals::scoped_connection getSupportedGamepadKeyCodesConnection;
};
