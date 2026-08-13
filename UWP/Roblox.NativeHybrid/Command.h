#pragma once

#include "ModuleFunction.h"

namespace Roblox
{
    namespace NativeHybrid
    {
        ref class Bridge;

        [Windows::Foundation::Metadata::WebHostHidden]
        public ref class Command sealed
        {
        public:
            Command(Bridge^ bridgeRef);

            property Platform::String^ CallbackID
            {
                Platform::String^ get();
                void set(Platform::String^ value);
            }

            property Windows::Data::Json::JsonObject^ Params
            {
                Windows::Data::Json::JsonObject^ get();
                void set(Windows::Data::Json::JsonObject^ value);
            }

            property Platform::String^ FunctionName
            {
                Platform::String^ get();
                void set(Platform::String^ value);
            }

            property Platform::String^ ModuleID
            {
                Platform::String^ get();
                void set(Platform::String^ value);
            }

            void ExecuteCallback(bool success, Windows::Data::Json::JsonObject^ params);

        private:
            // Held weakly so a pending command does not pin the launching
            // WebView (Bridge -> WebViewImpl) alive for the whole game session.
            // The UI layer drops the AppShell in LowMemMode at game start; a
            // strong ref here would keep the out-of-process WebView engine
            // resident and defeat the memory budget.
            Platform::WeakReference m_bridge;
            Platform::String^ m_callbackID;
            Windows::Data::Json::JsonObject^ m_params;
            Platform::String^ m_functionName;
            Platform::String^ m_moduleID;
        };
    }
}
