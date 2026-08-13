#pragma once

#include "Components\WebView.g.h"
#include "Roblox\OnNavigationStartingHandler.h"
#include "Roblox\OnNavigationCompletedHandler.h"
#include "..\Roblox.NativeHybrid\Bridge.h"

namespace Roblox
{
    namespace Controls
    {
        [Windows::Foundation::Metadata::WebHostHidden]
        public ref class WebView sealed
        {
        public:
            WebView();

            property Windows::Foundation::Uri^ Source
            {
                Windows::Foundation::Uri^ get();
                void set(Windows::Foundation::Uri^ value);
            }

            void SetDefaultUrl(Platform::String^ url);
            void LoadDefaultUrl();

            property bool CanGoBack
            {
                bool get();
            }

            void GoBack();
            void Refresh();

            // Tear down the out-of-process WebView content so the separate
            // WebView (Edge/wwahost) process charged to the app's memory budget
            // is released. Used by LowMemMode before/while a native game runs so
            // the XAML UI layer does not pin dozens of MB on 512 MB phones.
            void Clear();

            void ShowLoadingIndicator();
            void HideLoadingIndicator();
            void SetVisibility(Windows::UI::Xaml::Visibility visibility);

            event Roblox::OnNavigationStartingHandler^ onNavigationStarting;
            event Roblox::OnNavigationCompletedHandler^ onNavigationCompleted;

        private:
            Platform::String^ _defaultUrl;
            Roblox::NativeHybrid::Bridge^ m_bridge;
            void OnNavigationStarting(Windows::UI::Xaml::Controls::WebView^ sender, Windows::UI::Xaml::Controls::WebViewNavigationStartingEventArgs^ e);
            void OnNavigationCompleted(Windows::UI::Xaml::Controls::WebView^ sender, Windows::UI::Xaml::Controls::WebViewNavigationCompletedEventArgs^ e);
            void LaunchGame(Platform::String^ placeId, Platform::String^ userId, Platform::String^ instanceId, Platform::String^ accessCode, Platform::String^ browserTrackerId, Platform::String^ partyGuid);
        };
    }
}
