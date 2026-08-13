#include "pch.h"
#include "Module.h"

using namespace Roblox::NativeHybrid;
using namespace Platform::Collections;
using namespace Windows::Foundation::Collections;

Module::Module()
    : m_name(nullptr)
    , m_functions(ref new Map<Platform::String^, ModuleFunction^>())
{
}

Platform::String^ Module::GetName()
{
    return m_name;
}

bool Module::HasFunction(Platform::String^ functionName)
{
    if (functionName == nullptr || m_functions == nullptr)
    {
        return false;
    }
    return m_functions->HasKey(functionName);
}

void Module::ExecuteCommand(Command^ command)
{
    if (command == nullptr || m_functions == nullptr)
    {
        return;
    }

    Platform::String^ functionName = command->FunctionName;
    if (functionName == nullptr || functionName->IsEmpty())
    {
        return;
    }

    if (!m_functions->HasKey(functionName))
    {
        return;
    }

    ModuleFunction^ functionInstance = m_functions->Lookup(functionName);
    if (functionInstance != nullptr)
    {
        functionInstance(command);
    }
}

void Module::RegisterFunction(Platform::String^ functionName, ModuleFunction^ functionInstance)
{
    if (functionName == nullptr || functionInstance == nullptr || m_functions == nullptr)
    {
        return;
    }
    m_functions->Insert(functionName, functionInstance);
}
