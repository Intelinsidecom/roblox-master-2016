#include "stdafx.h"
#include "XboxGameController.h"

#include <vector>

#include "reflection/type.h"
#include "v8datamodel/DataModel.h"
#include "v8datamodel/UserInputService.h"
#include "v8datamodel/GamepadService.h"

using namespace boost;
using namespace RBX;

using namespace Windows::Foundation;
using namespace Windows::Foundation::Collections;

XboxGameController::XboxGameController(shared_ptr<RBX::DataModel> newDM, shared_ptr<ControllerBuffer> newControllerBuffer) :
	controllerBuffer(newControllerBuffer)
{
	currentVibration.LeftMotor = 0;
	currentVibration.RightMotor = 0;
	currentVibration.LeftTrigger = 0;
	currentVibration.RightTrigger = 0;

	controllerBuffer->setXboxGameController(this);
	initializedControllerGuidMap = false;

	setDataModel(newDM);
}

void XboxGameController::handleNewGamepad(Windows::Gaming::Input::Gamepad^ gamepad)
{
	int rbxGamepadInt = getRbxGamepadIntFromGamepad(gamepad);

	if (rbxGamepadInt >= 0)
	{
		gamepadConnectedMap[rbxGamepadInt].isConnected = true;
		gamepadConnectedMap[rbxGamepadInt].guid = (uint64)rbxGamepadInt;

		fireGamepadConnectedEvent(rbxGamepadInt);
	}
}

void XboxGameController::handleGamepadRemove(Windows::Gaming::Input::Gamepad^ gamepad)
{
	IVectorView<Windows::Gaming::Input::Gamepad^>^ gamepads = Windows::Gaming::Input::Gamepad::Gamepads;
	const int remaining = (int)gamepads->Size;

	for (std::map<int, ControllerInfo>::iterator iter = gamepadConnectedMap.begin(); iter != gamepadConnectedMap.end(); )
	{
		if (iter->second.isConnected && iter->first >= remaining)
		{
			const int controllerIndex = iter->first;
			iter = gamepadConnectedMap.erase(iter);

			fireGamepadDisconnectedEvent(controllerIndex);
		}
		else
		{
			++iter;
		}
	}
}

void XboxGameController::setupGamepadHandling()
{
	// first clear out all old data
	Windows::Gaming::Input::Gamepad::GamepadAdded -= gamepadAddedEvent;
	Windows::Gaming::Input::Gamepad::GamepadRemoved -= gamepadRemovedEvent;

	gamepadConnectedMap.clear();

	// now lets setup all existing gamepads
	IVectorView<Windows::Gaming::Input::Gamepad^>^ gamepads = Windows::Gaming::Input::Gamepad::Gamepads;
	for ( unsigned int i = 0; i < gamepads->Size; ++i )
	{
		handleNewGamepad(gamepads->GetAt(i));
	}

	gamepadAddedEvent = Windows::Gaming::Input::Gamepad::GamepadAdded += ref new EventHandler<Windows::Gaming::Input::Gamepad^ >( [=]( Platform::Object^ , Windows::Gaming::Input::Gamepad^ args )
	{
		handleNewGamepad(args);
	});
	gamepadRemovedEvent = Windows::Gaming::Input::Gamepad::GamepadRemoved += ref new EventHandler<Windows::Gaming::Input::Gamepad^ >( [=]( Platform::Object^ , Windows::Gaming::Input::Gamepad^ args )
	{
		handleGamepadRemove(args);
	});
}

void XboxGameController::resetControllerGuidMap()
{
	initializedControllerGuidMap = false;
	xboxLiveIdToRBXGamepadType.clear();
}

void XboxGameController::setDataModel(shared_ptr<RBX::DataModel> newDM)
{
	dataModel = newDM;

	setupGamepadHandling();

	if ( RBX::UserInputService* inputService = RBX::ServiceProvider::find<UserInputService>(newDM.get()) )
	{
		getSupportedGamepadKeyCodesConnection.disconnect();
		getSupportedGamepadKeyCodesConnection = inputService->getSupportedGamepadKeyCodesSignal.connect(boost::bind(&XboxGameController::findAvailableGamepadKeyCodesAndSet, this, _1));

		updateInputConnection.disconnect();
		updateInputConnection = inputService->updateInputSignal.connect(boost::bind(&XboxGameController::processControllerBuffer, this));
	}

	if ( RBX::HapticService* hapticService = RBX::ServiceProvider::create<HapticService>(newDM.get()) )
	{
		setEnabledVibrationMotorsConnection.disconnect();
		setVibrationMotorConnection.disconnect();

		setEnabledVibrationMotorsConnection = hapticService->setEnabledVibrationMotorsSignal.connect(boost::bind(&XboxGameController::setVibrationMotorsEnabled, this, _1));
		setVibrationMotorConnection = hapticService->setVibrationMotorSignal.connect(boost::bind(&XboxGameController::setVibrationMotor, this, _1, _2, _3));
	}
}
int XboxGameController::getRbxGamepadIntFromGamepad(Windows::Gaming::Input::Gamepad^ gamepad)
{
	IVectorView<Windows::Gaming::Input::Gamepad^>^ gamepads = Windows::Gaming::Input::Gamepad::Gamepads;
	for ( unsigned int i = 0; i < gamepads->Size; ++i )
	{
		if (gamepads->GetAt(i) == gamepad)
		{
			return (int)i;
		}
	}

	return -1;
}

void XboxGameController::remapXboxLiveIdToRBXGamepadId(Platform::String^ xboxLiveId, unsigned long long controllerId, RBX::InputObject::UserInputType gamepadType)
{
	// todo: actually do remapping instead of blowing away mapping and adding one in (need this now for xbox cert)
	xboxLiveIdToRBXGamepadType.clear();
	std::pair<Platform::String^,unsigned long long> liveIdControllerIdPair(xboxLiveId,controllerId);
	xboxLiveIdToRBXGamepadType[liveIdControllerIdPair] = gamepadType;
	initializedControllerGuidMap = true;
}

bool XboxGameController::getRBXGamepadFromXboxLiveId(Platform::String^ xboxLiveId, unsigned long long controllerId, RBX::InputObject::UserInputType& gamepadEnum, int& rbxGamepadInt)
{
	std::pair<Platform::String^,unsigned long long> liveIdControllerIdPair(xboxLiveId, controllerId);

	std::map<std::pair<Platform::String^, unsigned long long>, RBX::InputObject::UserInputType>::iterator iter = xboxLiveIdToRBXGamepadType.find(liveIdControllerIdPair);
	if (iter == xboxLiveIdToRBXGamepadType.end())
	{
		return false;
	}

	gamepadEnum = iter->second;
	rbxGamepadInt = RBX::GamepadService::getGamepadIntForEnum(gamepadEnum);

	return true;
}

void XboxGameController::updateVibration()
{
	ControllerInfo& mappedPad = gamepadConnectedMap[RBX::GamepadService::getGamepadIntForEnum(RBX::InputObject::TYPE_GAMEPAD1)];

	if (!mappedPad.isConnected)
	{
		return;
	}

	const uint64 gamepadGuid = mappedPad.guid;
	IVectorView<Windows::Gaming::Input::Gamepad^>^ gamepads = Windows::Gaming::Input::Gamepad::Gamepads;

	for ( unsigned int i = 0; i < gamepads->Size; ++i )
	{
		if ((uint64)i == gamepadGuid)
		{
			gamepads->GetAt(i)->Vibration = currentVibration;
			break;
		}
	}
}

void XboxGameController::processControllerBuffer()
{
	shared_ptr<RBX::DataModel> sharedDM = dataModel.lock();
	if (!sharedDM)
	{
		return;
	}

	GamepadService* gamepadService = RBX::ServiceProvider::find<GamepadService>(sharedDM.get());
	if (!gamepadService)
	{
		return;
	}

	UserInputService* inputService = RBX::ServiceProvider::find<UserInputService>(sharedDM.get());
	if (!inputService)
	{
		return;
	}

	ControllerBuffer::GamepadValueBufferMap bufferMap = controllerBuffer->getBufferedInput();
	for (ControllerBuffer::GamepadValueBufferMap::iterator iter = bufferMap.begin(); iter != bufferMap.end(); ++iter)
	{
		RBX::Gamepad gamepad = gamepadService->getGamepadState(GamepadService::getGamepadIntForEnum((*iter).first.first));
		RBX::KeyCode keyCode = (*iter).first.second;
		ControllerBuffer::GamepadValueStateHistoryVector historyVector = (*iter).second;

		for (ControllerBuffer::GamepadValueStateHistoryVector::iterator historyIter = historyVector.begin(); historyIter != historyVector.end(); ++historyIter)
		{
			InputObject::UserInputState newState = (*historyIter).second;
			Vector3 newValue =  (*historyIter).first;

			G3D::Vector3 lastPos = gamepad[keyCode]->getPosition();

			if (lastPos != newValue)
			{
				gamepad[keyCode]->setPosition(newValue);

				RBX::InputObject::UserInputState currentState = RBX::InputObject::INPUT_STATE_CHANGE;
				if (newValue == G3D::Vector3::zero())
				{
					currentState = RBX::InputObject::INPUT_STATE_END;
				}
				else if (newValue.z >= 1.0f)
				{
					currentState = RBX::InputObject::INPUT_STATE_BEGIN;
				}

				gamepad[keyCode]->setDelta(newValue - lastPos);
				gamepad[keyCode]->setInputState(currentState);

				inputService->dangerousFireInputEvent(gamepad[keyCode], NULL);
			}
		}
	}

	updateVibration();
}

void XboxGameController::fireGamepadConnectedEvent(const int controllerIndex)
{
	if (shared_ptr<RBX::DataModel> sharedDM = dataModel.lock())
	{
		if (RBX::UserInputService* inputService = RBX::ServiceProvider::find<RBX::UserInputService>(sharedDM.get()))
		{
			inputService->safeFireGamepadConnected(RBX::GamepadService::getGamepadEnumForInt(controllerIndex));
		}
	}
}

void XboxGameController::fireGamepadDisconnectedEvent(const int controllerIndex)
{
	if (shared_ptr<RBX::DataModel> sharedDM = dataModel.lock())
	{
		if (RBX::UserInputService* inputService = RBX::ServiceProvider::find<RBX::UserInputService>(sharedDM.get()))
		{
			inputService->safeFireGamepadDisconnected(RBX::GamepadService::getGamepadEnumForInt(controllerIndex));
		}
	}
}

uint64 XboxGameController::getGamepadGuid(const InputObject::UserInputType rbxGamepadId)
{
	return gamepadConnectedMap[RBX::GamepadService::getGamepadIntForEnum(rbxGamepadId)].guid;
}

void XboxGameController::findAvailableGamepadKeyCodesAndSet(RBX::InputObject::UserInputType gamepadType)
{
	if (shared_ptr<RBX::DataModel> sharedDM = dataModel.lock())
	{
		if (RBX::UserInputService* inputService = RBX::ServiceProvider::find<RBX::UserInputService>(sharedDM.get()))
		{
			shared_ptr<RBX::Reflection::ValueArray> availableGamepadKeyCodes(new RBX::Reflection::ValueArray());

			availableGamepadKeyCodes->push_back(RBX::SDLK_GAMEPAD_BUTTONA);
			availableGamepadKeyCodes->push_back(RBX::SDLK_GAMEPAD_BUTTONB);
			availableGamepadKeyCodes->push_back(RBX::SDLK_GAMEPAD_BUTTONX);
			availableGamepadKeyCodes->push_back(RBX::SDLK_GAMEPAD_BUTTONY);

			availableGamepadKeyCodes->push_back(RBX::SDLK_GAMEPAD_BUTTONL1);
			availableGamepadKeyCodes->push_back(RBX::SDLK_GAMEPAD_BUTTONR1);
			availableGamepadKeyCodes->push_back(RBX::SDLK_GAMEPAD_BUTTONL2);
			availableGamepadKeyCodes->push_back(RBX::SDLK_GAMEPAD_BUTTONR2);
			availableGamepadKeyCodes->push_back(RBX::SDLK_GAMEPAD_BUTTONL3);
			availableGamepadKeyCodes->push_back(RBX::SDLK_GAMEPAD_BUTTONR3);

			availableGamepadKeyCodes->push_back(RBX::SDLK_GAMEPAD_THUMBSTICK1);
			availableGamepadKeyCodes->push_back(RBX::SDLK_GAMEPAD_THUMBSTICK2);

			availableGamepadKeyCodes->push_back(RBX::SDLK_GAMEPAD_DPADUP);
			availableGamepadKeyCodes->push_back(RBX::SDLK_GAMEPAD_DPADDOWN);
			availableGamepadKeyCodes->push_back(RBX::SDLK_GAMEPAD_DPADLEFT);
			availableGamepadKeyCodes->push_back(RBX::SDLK_GAMEPAD_DPADRIGHT);

			availableGamepadKeyCodes->push_back(RBX::SDLK_GAMEPAD_BUTTONSELECT);
			availableGamepadKeyCodes->push_back(RBX::SDLK_GAMEPAD_BUTTONSTART);

			inputService->setSupportedGamepadKeyCodes(gamepadType, availableGamepadKeyCodes);
		}
	}
}

void XboxGameController::setVibrationMotorsEnabled(RBX::InputObject::UserInputType gamepadType)
{
	if (gamepadType != InputObject::TYPE_GAMEPAD1)
	{
		return;
	}

	if (shared_ptr<DataModel> dm = dataModel.lock())
	{
		if ( RBX::HapticService* hapticService = RBX::ServiceProvider::create<HapticService>(dm.get()) )
		{
			hapticService->setEnabledVibrationMotors(gamepadType, RBX::HapticService::MOTOR_LARGE, true);
			hapticService->setEnabledVibrationMotors(gamepadType, RBX::HapticService::MOTOR_SMALL, true);
			hapticService->setEnabledVibrationMotors(gamepadType, RBX::HapticService::MOTOR_LEFTTRIGGER, true);
			hapticService->setEnabledVibrationMotors(gamepadType, RBX::HapticService::MOTOR_RIGHTTRIGGER, true);
		}
	}
}
void XboxGameController::setVibrationMotor(RBX::InputObject::UserInputType gamepadType, RBX::HapticService::VibrationMotor vibrationMotor, shared_ptr<const RBX::Reflection::Tuple> args)
{
	if (!args)
	{
		return;
	}
	if (args->values.size() <= 0)
	{
		return;
	}

	if (gamepadType == InputObject::TYPE_GAMEPAD1)
	{
		float newMotorValue = 0.0f;
		RBX::Reflection::Variant newValue = args->values[0];
		if (newValue.isFloat())
		{
			newMotorValue = newValue.get<float>();
			newMotorValue = G3D::clamp(newMotorValue, 0.0f, 1.0f);
		}
		else // no valid number in first position, lets bail
		{
			RBX::StandardOut::singleton()->printf(RBX::MESSAGE_ERROR, "First value to HapticService:SetMotor is not a valid number (must be a number between 0-1)");
			return;
		}

		switch (vibrationMotor)
		{
		case RBX::HapticService::MOTOR_LARGE:
			currentVibration.LeftMotor = newMotorValue;
			break;
		case RBX::HapticService::MOTOR_SMALL:
			currentVibration.RightMotor = newMotorValue;
			break;
		case RBX::HapticService::MOTOR_LEFTTRIGGER:
			currentVibration.LeftTrigger = newMotorValue;
			break;
		case RBX::HapticService::MOTOR_RIGHTTRIGGER:
			currentVibration.RightTrigger = newMotorValue;
			break;
		default:
			break;
		}
	}
}