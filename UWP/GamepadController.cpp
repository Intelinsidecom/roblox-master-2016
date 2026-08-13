#include "pch.h"
#include "GamepadController.h"

#include <boost/bind.hpp>

#include "reflection/Type.h"
#include "util/G3DCore.h"
#include "v8datamodel/DataModel.h"
#include "v8datamodel/GamepadService.h"
#include "v8datamodel/UserInputService.h"
#include "v8tree/Service.h"

using namespace Platform;
using namespace Windows::Foundation;
using namespace Windows::Foundation::Collections;
using namespace Windows::Gaming::Input;
using namespace Windows::UI::Xaml;

GamepadController::GamepadController(RBX::DataModel* dataModel)
    : m_dataModel(dataModel)
    , m_pollTimer(nullptr)
{
    m_gamepadAddedToken.Value = 0;
    m_gamepadRemovedToken.Value = 0;

    connectedControllerMap[RBX::InputObject::TYPE_GAMEPAD1] = false;
    connectedControllerMap[RBX::InputObject::TYPE_GAMEPAD2] = false;
    connectedControllerMap[RBX::InputObject::TYPE_GAMEPAD3] = false;
    connectedControllerMap[RBX::InputObject::TYPE_GAMEPAD4] = false;
    connectedControllerMap[RBX::InputObject::TYPE_GAMEPAD5] = false;
    connectedControllerMap[RBX::InputObject::TYPE_GAMEPAD6] = false;
    connectedControllerMap[RBX::InputObject::TYPE_GAMEPAD7] = false;
    connectedControllerMap[RBX::InputObject::TYPE_GAMEPAD8] = false;
}

GamepadController::~GamepadController()
{
    shutdown();
}

void GamepadController::initialize()
{
    if (m_pollTimer == nullptr)
    {
        m_pollTimer = ref new DispatcherTimer();
        TimeSpan interval;
        interval.Duration = 330000; // 33ms
        m_pollTimer->Interval = interval;
        m_pollTickToken = m_pollTimer->Tick += ref new EventHandler<Object^>(
            [this](Object^, Object^) { pollGamepads(); });
    }
    m_pollTimer->Start();

    if (m_gamepadAddedToken.Value == 0)
    {
        m_gamepadAddedToken = Gamepad::GamepadAdded += ref new EventHandler<Gamepad^>(
            [this](Object^, Gamepad^) { pollGamepads(); });
        m_gamepadRemovedToken = Gamepad::GamepadRemoved += ref new EventHandler<Gamepad^>(
            [this](Object^, Gamepad^) { pollGamepads(); });
    }

    pollGamepads();

    if (RBX::DataModel* dataModel = m_dataModel)
    {
        dataModel->submitTask(boost::bind(&GamepadController::bindToDataModel, this), RBX::DataModelJob::Write);
    }
}

void GamepadController::shutdown()
{
    if (m_pollTimer != nullptr)
    {
        m_pollTimer->Stop();
        m_pollTimer->Tick -= m_pollTickToken;
        m_pollTimer = nullptr;
    }

    if (m_gamepadAddedToken.Value != 0)
    {
        Gamepad::GamepadAdded -= m_gamepadAddedToken;
        Gamepad::GamepadRemoved -= m_gamepadRemovedToken;
        m_gamepadAddedToken.Value = 0;
        m_gamepadRemovedToken.Value = 0;
    }

    updateInputConnection.disconnect();
    getSupportedGamepadKeyCodesConnection.disconnect();

    m_gamepads.clear();
    m_previousReadings.clear();
    deviceIdToGamepadId.clear();
    connectedControllerMap.clear();
    gamepadSupportedKeyCodes.clear();
}

void GamepadController::bindToDataModel()
{
    if (RBX::UserInputService* inputService = getUserInputService())
    {
        updateInputConnection = inputService->updateInputSignal.connect(boost::bind(&GamepadController::processControllerBufferMap, this));
        getSupportedGamepadKeyCodesConnection = inputService->getSupportedGamepadKeyCodesSignal.connect(boost::bind(&GamepadController::getSupportedGamepadKeyCodes, this, _1));
    }
}

RBX::UserInputService* GamepadController::getUserInputService()
{
    if (RBX::DataModel* dataModel = m_dataModel)
    {
        return RBX::ServiceProvider::find<RBX::UserInputService>(dataModel);
    }
    return NULL;
}

RBX::GamepadService* GamepadController::getGamepadService()
{
    if (RBX::DataModel* dataModel = m_dataModel)
    {
        return RBX::ServiceProvider::create<RBX::GamepadService>(dataModel);
    }
    return NULL;
}

bool GamepadController::vectorContains(const std::vector<Gamepad^>& pads, Gamepad^ pad)
{
    for (size_t i = 0; i < pads.size(); ++i)
    {
        if (pads[i] == pad)
        {
            return true;
        }
    }
    return false;
}

void GamepadController::pollGamepads()
{
    IVectorView<Gamepad^>^ pads = Gamepad::Gamepads;
    unsigned int count = pads->Size;

    std::vector<Gamepad^> current;
    for (unsigned int i = 0; i < count; ++i)
    {
        current.push_back(pads->GetAt(i));
    }

    bool padSetChanged = (current.size() != m_gamepads.size());

    for (size_t i = 0; i < current.size(); ++i)
    {
        if (!vectorContains(m_gamepads, current[i]))
        {
            handleGamepadConnect(static_cast<int>(i));
            padSetChanged = true;
        }
    }

    for (size_t i = 0; i < m_gamepads.size(); ++i)
    {
        if (!vectorContains(current, m_gamepads[i]))
        {
            handleGamepadDisconnect(static_cast<int>(i));
            padSetChanged = true;
        }
    }

    if (padSetChanged)
    {
        // A pad connected/disconnected: re-sync the device list and reset the
        // previous-reading baseline. On normal ticks the baseline is preserved
        // so button press/release transitions can be diffed across polls.
        m_gamepads = current;
        m_previousReadings.assign(m_gamepads.size(), GamepadReading());
    }

    for (size_t i = 0; i < m_gamepads.size(); ++i)
    {
        readAndBuffer(m_gamepads[i], static_cast<int>(i), m_previousReadings[i]);
    }
}

void GamepadController::readAndBuffer(Gamepad^ gamepad, int deviceId, GamepadReading& previous)
{
    GamepadReading reading = gamepad->GetCurrentReading();

    unsigned int changedButtons = static_cast<unsigned int>(reading.Buttons) ^ static_cast<unsigned int>(previous.Buttons);
    if (changedButtons != 0)
    {
        static const GamepadButtons buttonTable[] =
        {
            GamepadButtons::A,
            GamepadButtons::B,
            GamepadButtons::X,
            GamepadButtons::Y,
            GamepadButtons::LeftShoulder,
            GamepadButtons::RightShoulder,
            GamepadButtons::View,
            GamepadButtons::Menu,
            GamepadButtons::DPadUp,
            GamepadButtons::DPadDown,
            GamepadButtons::DPadLeft,
            GamepadButtons::DPadRight,
            GamepadButtons::LeftThumbstick,
            GamepadButtons::RightThumbstick
        };

        for (int i = 0; i < _countof(buttonTable); ++i)
        {
            unsigned int mask = static_cast<unsigned int>(buttonTable[i]);
            if ((changedButtons & mask) != 0)
            {
                RBX::KeyCode rbxKeycode = mapGamepadButtonToKeyCode(buttonTable[i]);
                if (rbxKeycode != RBX::SDLK_UNKNOWN)
                {
                    handleGamepadButtonInput(deviceId, rbxKeycode,
                        ((static_cast<unsigned int>(reading.Buttons) & mask) != 0) ? 1 : 0);
                }
            }
        }
    }

    if (reading.LeftTrigger != previous.LeftTrigger)
    {
        handleGamepadAxisInput(deviceId, RBX::SDLK_GAMEPAD_BUTTONL2, 0, 0, reading.LeftTrigger);
    }
    if (reading.RightTrigger != previous.RightTrigger)
    {
        handleGamepadAxisInput(deviceId, RBX::SDLK_GAMEPAD_BUTTONR2, 0, 0, reading.RightTrigger);
    }
    if (reading.LeftThumbstickX != previous.LeftThumbstickX || reading.LeftThumbstickY != previous.LeftThumbstickY)
    {
        handleGamepadAxisInput(deviceId, RBX::SDLK_GAMEPAD_THUMBSTICK1, reading.LeftThumbstickX, reading.LeftThumbstickY, 0);
    }
    if (reading.RightThumbstickX != previous.RightThumbstickX || reading.RightThumbstickY != previous.RightThumbstickY)
    {
        handleGamepadAxisInput(deviceId, RBX::SDLK_GAMEPAD_THUMBSTICK2, reading.RightThumbstickX, reading.RightThumbstickY, 0);
    }

    previous = reading;
}

RBX::KeyCode GamepadController::mapGamepadButtonToKeyCode(GamepadButtons button)
{
    switch (button)
    {
    case GamepadButtons::A:
        return RBX::SDLK_GAMEPAD_BUTTONA;
    case GamepadButtons::B:
        return RBX::SDLK_GAMEPAD_BUTTONB;
    case GamepadButtons::X:
        return RBX::SDLK_GAMEPAD_BUTTONX;
    case GamepadButtons::Y:
        return RBX::SDLK_GAMEPAD_BUTTONY;
    case GamepadButtons::LeftShoulder:
        return RBX::SDLK_GAMEPAD_BUTTONL1;
    case GamepadButtons::RightShoulder:
        return RBX::SDLK_GAMEPAD_BUTTONR1;
    case GamepadButtons::View:
        return RBX::SDLK_GAMEPAD_BUTTONSELECT;
    case GamepadButtons::Menu:
        return RBX::SDLK_GAMEPAD_BUTTONSTART;
    case GamepadButtons::DPadUp:
        return RBX::SDLK_GAMEPAD_DPADUP;
    case GamepadButtons::DPadDown:
        return RBX::SDLK_GAMEPAD_DPADDOWN;
    case GamepadButtons::DPadLeft:
        return RBX::SDLK_GAMEPAD_DPADLEFT;
    case GamepadButtons::DPadRight:
        return RBX::SDLK_GAMEPAD_DPADRIGHT;
    case GamepadButtons::LeftThumbstick:
        return RBX::SDLK_GAMEPAD_BUTTONL3;
    case GamepadButtons::RightThumbstick:
        return RBX::SDLK_GAMEPAD_BUTTONR3;
    default:
        break;
    }

    return RBX::SDLK_UNKNOWN;
}

RBX::InputObject::UserInputType GamepadController::mapDeviceIdToControllerEnum(int deviceId)
{
    if (deviceIdToGamepadId.find(deviceId) != deviceIdToGamepadId.end())
    {
        return deviceIdToGamepadId[deviceId];
    }

    // find first free gamepad slot
    for (RBX::InputObject::UserInputType controllerNum = RBX::InputObject::TYPE_GAMEPAD1;
         controllerNum <= RBX::InputObject::TYPE_GAMEPAD8;
         controllerNum = static_cast<RBX::InputObject::UserInputType>(controllerNum + 1))
    {
        if (!connectedControllerMap[controllerNum])
        {
            connectedControllerMap[controllerNum] = true;
            deviceIdToGamepadId[deviceId] = controllerNum;
            return controllerNum;
        }
    }

    return RBX::InputObject::TYPE_NONE;
}

void GamepadController::handleGamepadConnect(int deviceId)
{
    RBX::InputObject::UserInputType controllerNum = mapDeviceIdToControllerEnum(deviceId);
    if (controllerNum == RBX::InputObject::TYPE_NONE)
    {
        return;
    }

    shared_ptr<RBX::Reflection::ValueArray> supportedKeyCodes(new RBX::Reflection::ValueArray());
    supportedKeyCodes->push_back(RBX::SDLK_GAMEPAD_THUMBSTICK1);
    supportedKeyCodes->push_back(RBX::SDLK_GAMEPAD_THUMBSTICK2);
    supportedKeyCodes->push_back(RBX::SDLK_GAMEPAD_BUTTONA);
    supportedKeyCodes->push_back(RBX::SDLK_GAMEPAD_BUTTONB);
    supportedKeyCodes->push_back(RBX::SDLK_GAMEPAD_BUTTONX);
    supportedKeyCodes->push_back(RBX::SDLK_GAMEPAD_BUTTONY);
    supportedKeyCodes->push_back(RBX::SDLK_GAMEPAD_BUTTONL1);
    supportedKeyCodes->push_back(RBX::SDLK_GAMEPAD_BUTTONR1);
    supportedKeyCodes->push_back(RBX::SDLK_GAMEPAD_BUTTONL2);
    supportedKeyCodes->push_back(RBX::SDLK_GAMEPAD_BUTTONR2);
    supportedKeyCodes->push_back(RBX::SDLK_GAMEPAD_BUTTONL3);
    supportedKeyCodes->push_back(RBX::SDLK_GAMEPAD_BUTTONR3);
    supportedKeyCodes->push_back(RBX::SDLK_GAMEPAD_BUTTONSTART);
    supportedKeyCodes->push_back(RBX::SDLK_GAMEPAD_BUTTONSELECT);
    supportedKeyCodes->push_back(RBX::SDLK_GAMEPAD_DPADLEFT);
    supportedKeyCodes->push_back(RBX::SDLK_GAMEPAD_DPADRIGHT);
    supportedKeyCodes->push_back(RBX::SDLK_GAMEPAD_DPADUP);
    supportedKeyCodes->push_back(RBX::SDLK_GAMEPAD_DPADDOWN);

    {
        boost::mutex::scoped_lock lock(supportedControllerKeyCodeMutex);
        gamepadSupportedKeyCodes[controllerNum] = supportedKeyCodes;
    }

    if (RBX::UserInputService* inputService = getUserInputService())
    {
        inputService->safeFireGamepadConnected(controllerNum);
    }
}

void GamepadController::handleGamepadDisconnect(int deviceId)
{
    if (deviceIdToGamepadId.find(deviceId) != deviceIdToGamepadId.end())
    {
        RBX::InputObject::UserInputType controllerNum = deviceIdToGamepadId[deviceId];
        deviceIdToGamepadId.erase(deviceId);
        connectedControllerMap[controllerNum] = false;

        {
            boost::mutex::scoped_lock lock(supportedControllerKeyCodeMutex);
            gamepadSupportedKeyCodes.erase(controllerNum);
        }

        if (RBX::UserInputService* inputService = getUserInputService())
        {
            inputService->safeFireGamepadDisconnected(controllerNum);
        }
    }
}

void GamepadController::handleGamepadButtonInput(int deviceId, RBX::KeyCode rbxKeycode, int buttonState)
{
    if (deviceIdToGamepadId.find(deviceId) == deviceIdToGamepadId.end())
    {
        return;
    }

    const RBX::InputObject::UserInputType gamepadEnum = deviceIdToGamepadId[deviceId];

    boost::mutex::scoped_lock lock(controllerBufferMutex);
    G3D::Vector3 newValue(0, 0, static_cast<float>(buttonState));

    if (controllerBufferMap[gamepadEnum][rbxKeycode].empty() ||
        controllerBufferMap[gamepadEnum][rbxKeycode].back() != newValue)
    {
        controllerBufferMap[gamepadEnum][rbxKeycode].push_back(newValue);
    }
}

void GamepadController::handleGamepadAxisInput(int deviceId, RBX::KeyCode rbxKeycode, float newValueX, float newValueY, float newValueZ)
{
    if (deviceIdToGamepadId.find(deviceId) == deviceIdToGamepadId.end())
    {
        return;
    }

    const RBX::InputObject::UserInputType gamepadEnum = deviceIdToGamepadId[deviceId];

    boost::mutex::scoped_lock lock(controllerBufferMutex);
    G3D::Vector3 newValue(newValueX, newValueY, newValueZ);

    if (controllerBufferMap[gamepadEnum][rbxKeycode].empty() ||
        controllerBufferMap[gamepadEnum][rbxKeycode].back() != newValue)
    {
        controllerBufferMap[gamepadEnum][rbxKeycode].push_back(newValue);
    }
}

void GamepadController::processControllerBufferMap()
{
    BufferedGamepadStates tempControllerBufferMap;
    {
        boost::mutex::scoped_lock lock(controllerBufferMutex);
        controllerBufferMap.swap(tempControllerBufferMap);
    }

    for (int gamepadNum = RBX::InputObject::TYPE_GAMEPAD1; gamepadNum <= RBX::InputObject::TYPE_GAMEPAD8; ++gamepadNum)
    {
        RBX::InputObject::UserInputType gamepadEnum = static_cast<RBX::InputObject::UserInputType>(gamepadNum);

        BufferedGamepadState gamepadBufferState = tempControllerBufferMap[gamepadEnum];

        if (RBX::GamepadService* gamepadService = getGamepadService())
        {
            RBX::Gamepad rbxGamepad = gamepadService->getGamepadState(RBX::GamepadService::getGamepadIntForEnum(gamepadEnum));

            for (BufferedGamepadState::iterator iter = gamepadBufferState.begin(); iter != gamepadBufferState.end(); ++iter)
            {
                shared_ptr<RBX::InputObject> keyInputObject = rbxGamepad[(*iter).first];
                std::vector<G3D::Vector3> positions = (*iter).second;

                for (std::vector<G3D::Vector3>::iterator vecIter = positions.begin(); vecIter != positions.end(); ++vecIter)
                {
                    bool isButton = false;
                    RBX::InputObject::UserInputState state = RBX::InputObject::INPUT_STATE_NONE;

                    switch (keyInputObject->getKeyCode())
                    {
                    case RBX::SDLK_GAMEPAD_BUTTONR2:
                    case RBX::SDLK_GAMEPAD_BUTTONL2:
                        {
                            if ((*vecIter).z >= 1.0f)
                            {
                                state = RBX::InputObject::INPUT_STATE_BEGIN;
                            }
                            else if ((*vecIter).z <= 0.0f)
                            {
                                state = RBX::InputObject::INPUT_STATE_END;
                            }
                            else
                            {
                                state = RBX::InputObject::INPUT_STATE_CHANGE;
                            }
                            break;
                        }
                    case RBX::SDLK_GAMEPAD_BUTTONA:
                    case RBX::SDLK_GAMEPAD_BUTTONB:
                    case RBX::SDLK_GAMEPAD_BUTTONX:
                    case RBX::SDLK_GAMEPAD_BUTTONY:
                    case RBX::SDLK_GAMEPAD_BUTTONR1:
                    case RBX::SDLK_GAMEPAD_BUTTONL1:
                    case RBX::SDLK_GAMEPAD_BUTTONR3:
                    case RBX::SDLK_GAMEPAD_BUTTONL3:
                    case RBX::SDLK_GAMEPAD_BUTTONSTART:
                    case RBX::SDLK_GAMEPAD_DPADDOWN:
                    case RBX::SDLK_GAMEPAD_DPADUP:
                    case RBX::SDLK_GAMEPAD_DPADLEFT:
                    case RBX::SDLK_GAMEPAD_DPADRIGHT:
                        {
                            isButton = true;
                            state = ((*vecIter).z > 0.0f) ? RBX::InputObject::INPUT_STATE_BEGIN : RBX::InputObject::INPUT_STATE_END;
                            break;
                        }
                    case RBX::SDLK_GAMEPAD_THUMBSTICK1:
                    case RBX::SDLK_GAMEPAD_THUMBSTICK2:
                        {
                            state = (*vecIter) == G3D::Vector3::zero() ? RBX::InputObject::INPUT_STATE_END : RBX::InputObject::INPUT_STATE_CHANGE;
                            break;
                        }
                    default:
                        break;
                    }

                    if (state != RBX::InputObject::INPUT_STATE_NONE)
                    {
                        G3D::Vector3 newPosition = (*vecIter);
                        if (isButton) // don't use pressure sensitive values to keep consistent behavior on all platforms
                        {
                            (newPosition.z > 0.0f) ? newPosition.z = 1.0f : newPosition.z = 0.0f;
                        }

                        bool shouldFireEvent = true;
                        if (keyInputObject->getRawPosition() != newPosition)
                        {
                            keyInputObject->setDelta(newPosition - keyInputObject->getRawPosition());
                            keyInputObject->setPosition(newPosition);
                        }
                        else
                        {
                            shouldFireEvent = false;
                        }

                        if (state != RBX::InputObject::INPUT_STATE_NONE)
                        {
                            keyInputObject->setInputState(state);
                        }

                        if (shouldFireEvent)
                        {
                            if (RBX::UserInputService* inputService = getUserInputService())
                            {
                                inputService->dangerousFireInputEvent(keyInputObject, NULL);
                            }
                        }
                    }
                }
            }
        }
    }
}

void GamepadController::getSupportedGamepadKeyCodes(RBX::InputObject::UserInputType gamepadEnum)
{
    if (RBX::UserInputService* inputService = getUserInputService())
    {
        boost::mutex::scoped_lock lock(supportedControllerKeyCodeMutex);
        inputService->setSupportedGamepadKeyCodes(gamepadEnum, gamepadSupportedKeyCodes[gamepadEnum]);
    }
}
