#pragma once

#include "Command.h"
#include "ModuleFunction.h"

namespace Roblox
{
    namespace NativeHybrid
    {
        [Windows::Foundation::Metadata::WebHostHidden]
        public ref class Module : Windows::UI::Xaml::DependencyObject
        {
        public:
            Platform::String^ GetName();
            bool HasFunction(Platform::String^ functionName);
            void ExecuteCommand(Command^ command);

        protected:
            void RegisterFunction(Platform::String^ functionName, ModuleFunction^ functionInstance);

        internal:
            Module();
            Platform::String^ m_name;
            Windows::Foundation::Collections::IMap<Platform::String^, ModuleFunction^>^ m_functions;
        };
    }
}
