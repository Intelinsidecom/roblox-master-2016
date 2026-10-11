#include "stdafx.h"
#include "ControllerBuffer.h"

#include "v8datamodel/DataModel.h"
#include "v8datamodel/GamepadService.h"
#include "XboxGameController.h"

using namespace Windows::Foundation::Collections;
using namespace RBX;

using GamepadReading = Windows::Gaming::Input::GamepadReading;
using GamepadButtons = Windows::Gaming::Input::GamepadButtons;

#define INPUT_POLLING_HZ 90.0f

ControllerBuffer::ControllerBuffer() :
	xboxGameController(NULL)
{}

void ControllerBuffer::updateBuffer()
{
	if (xboxGameController == nullptr)
	{
		return;
	}

	boost::mutex::scoped_lock lock(changeInputBufferMutex);

	IVectorView<Windows::Gaming::Input::Gamepad^>^ gamepads = Windows::Gaming::Input::Gamepad::Gamepads;

	for ( unsigned int i = 0; i < gamepads->Size; ++i )
	{
		int rbxGamepadInt = xboxGameController->getRbxGamepadIntFromGamepad(gamepads->GetAt(i));

		if (rbxGamepadInt >= 0)
		{
			GamepadReading reading = gamepads->GetAt(i)->GetCurrentReading();

			bufferGamepadButtons(rbxGamepadInt, reading);
			bufferGamepadAxis(rbxGamepadInt, reading);
		}
	}
}

void ControllerBuffer::processButton(InputObject::UserInputType userInputType, const RBX::KeyCode buttonCode, const int buttonState)
{
	if (buttonCode == SDLK_UNKNOWN || userInputType == InputObject::TYPE_NONE)
	{
		return;
	}

	InputObject::UserInputState newState = (buttonState == 1) ? InputObject::INPUT_STATE_BEGIN : InputObject::INPUT_STATE_END;
	GamepadValue gamepadButtonCombo(userInputType, buttonCode);
	GamepadValueState newGamepadButtonState(Vector3(0,0,buttonState), newState);

	if (bufferedInput.find(gamepadButtonCombo) == bufferedInput.end() ||
		bufferedInput[gamepadButtonCombo].back().first != newGamepadButtonState.first)
	{
		bufferedInput[gamepadButtonCombo].push_back(newGamepadButtonState);
	}
}

void ControllerBuffer::bufferGamepadButtons(const int controllerIndex, const GamepadReading& gamepadReading)
{
	InputObject::UserInputType gamepadType = GamepadService::getGamepadEnumForInt(controllerIndex);

	const unsigned int pressed = static_cast<unsigned int>(gamepadReading.Buttons);
	const auto down = [pressed](GamepadButtons button) -> int
	{
		return (pressed & static_cast<unsigned int>(button)) ? 1 : 0;
	};

	processButton(gamepadType, SDLK_GAMEPAD_BUTTONA, down(GamepadButtons::A));
	processButton(gamepadType, SDLK_GAMEPAD_BUTTONB, down(GamepadButtons::B));
	processButton(gamepadType, SDLK_GAMEPAD_BUTTONX, down(GamepadButtons::X));
	processButton(gamepadType, SDLK_GAMEPAD_BUTTONY, down(GamepadButtons::Y));

	processButton(gamepadType, SDLK_GAMEPAD_DPADLEFT, down(GamepadButtons::DPadLeft));
	processButton(gamepadType, SDLK_GAMEPAD_DPADRIGHT, down(GamepadButtons::DPadRight));
	processButton(gamepadType, SDLK_GAMEPAD_DPADUP, down(GamepadButtons::DPadUp));
	processButton(gamepadType, SDLK_GAMEPAD_DPADDOWN, down(GamepadButtons::DPadDown));

	processButton(gamepadType, SDLK_GAMEPAD_BUTTONL1, down(GamepadButtons::LeftShoulder));
	processButton(gamepadType, SDLK_GAMEPAD_BUTTONR1, down(GamepadButtons::RightShoulder));
	processButton(gamepadType, SDLK_GAMEPAD_BUTTONL3, down(GamepadButtons::LeftThumbstick));
	processButton(gamepadType, SDLK_GAMEPAD_BUTTONR3, down(GamepadButtons::RightThumbstick));

	processButton(gamepadType, SDLK_GAMEPAD_BUTTONSTART, down(GamepadButtons::Menu));
	processButton(gamepadType, SDLK_GAMEPAD_BUTTONSELECT, down(GamepadButtons::View));
}


void ControllerBuffer::processAxis(RBX::InputObject::UserInputType userInputType, const RBX::KeyCode axisCode, const Vector3 axisValue)
{
	if (axisCode == SDLK_UNKNOWN || userInputType == InputObject::TYPE_NONE)
	{
		return;
	}

	RBX::InputObject::UserInputState newState = RBX::InputObject::INPUT_STATE_CHANGE;
	if (axisValue == G3D::Vector3::zero())
	{
		newState = RBX::InputObject::INPUT_STATE_END;
	}
	else if (axisValue.z >= 1.0f)
	{
		newState = RBX::InputObject::INPUT_STATE_BEGIN;
	}

	GamepadValue gamepadAxisCombo(userInputType, axisCode);
	GamepadValueState newGamepadAxisState(axisValue, newState);

	if (bufferedInput.find(gamepadAxisCombo) == bufferedInput.end() ||
		bufferedInput[gamepadAxisCombo].back().first != newGamepadAxisState.first)
	{
		bufferedInput[gamepadAxisCombo].push_back(newGamepadAxisState);
	}
}
void ControllerBuffer::bufferGamepadAxis(const int controllerIndex, const GamepadReading& gamepadReading)
{
	InputObject::UserInputType gamepadType = GamepadService::getGamepadEnumForInt(controllerIndex);

	processAxis(gamepadType, SDLK_GAMEPAD_THUMBSTICK1, Vector3(gamepadReading.LeftThumbstickX, gamepadReading.LeftThumbstickY, 0));
	processAxis(gamepadType, SDLK_GAMEPAD_THUMBSTICK2, Vector3(gamepadReading.RightThumbstickX, gamepadReading.RightThumbstickY, 0));

	processAxis(gamepadType, SDLK_GAMEPAD_BUTTONL2, Vector3(0, 0, gamepadReading.LeftTrigger));
	processAxis(gamepadType, SDLK_GAMEPAD_BUTTONR2, Vector3(0, 0, gamepadReading.RightTrigger));
}


ControllerBuffer::GamepadValueBufferMap ControllerBuffer::getBufferedInput()
{
	GamepadValueBufferMap tmpMap;
	{
		boost::mutex::scoped_lock lock(changeInputBufferMutex);
		bufferedInput.swap(tmpMap);
	}

	return tmpMap;
}

float ControllerBuffer::getPollingMsec()
{
	return (1.0f/INPUT_POLLING_HZ) * 1000.0f;
}
