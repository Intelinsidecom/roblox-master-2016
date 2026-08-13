#pragma once

#include "Command.h"
#include "GameModule.h"
#include "SocialModule.h"

namespace Roblox
{
    namespace NativeHybrid
    {
        [Windows::Foundation::Metadata::WebHostHidden]
        public ref class Bridge sealed
        {
        public:
            Bridge(Windows::UI::Xaml::Controls::WebView^ webview);

            virtual ~Bridge();

        internal:
            void nativeCallback(Platform::String^ message);
            void ExecuteCallback(Platform::String^ callbackId, bool success, Windows::Data::Json::JsonObject^ params);

        private:
            void OnScriptNotify(Platform::Object^ sender, Windows::UI::Xaml::Controls::NotifyEventArgs^ e);
            void ExecuteCommand(Command^ command);

            Windows::UI::Xaml::Controls::WebView^ m_webView;
            GameModule^ m_gameModule;
            SocialModule^ m_socialModule;
        };
    }
}
