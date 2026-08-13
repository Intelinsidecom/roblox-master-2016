#include "pch.h"
#include "Command.h"
#include "Bridge.h"
#include <windows.data.json.h>

using namespace Roblox::NativeHybrid;
using namespace Windows::Data::Json;

Command::Command(Bridge^ bridgeRef)
    : m_bridge(bridgeRef)
    , m_callbackID(nullptr)
    , m_params(nullptr)
    , m_functionName(nullptr)
    , m_moduleID(nullptr)
{
}
Platform::String^ Command::CallbackID::get() { return m_callbackID; }
void Command::CallbackID::set(Platform::String^ value) { m_callbackID = value; }

JsonObject^ Command::Params::get() { return m_params; }
void Command::Params::set(JsonObject^ value) { m_params = value; }

Platform::String^ Command::FunctionName::get() { return m_functionName; }
void Command::FunctionName::set(Platform::String^ value) { m_functionName = value; }

Platform::String^ Command::ModuleID::get() { return m_moduleID; }
void Command::ModuleID::set(Platform::String^ value) { m_moduleID = value; }

void Command::ExecuteCallback(bool success, JsonObject^ params)
{
    auto bridge = m_bridge.Resolve<Bridge>();
    if (bridge != nullptr)
    {
        bridge->ExecuteCallback(m_callbackID, success, params);
    }
}
