#pragma once

#include "PurchaseRobuxPage.g.h"

namespace Roblox
{
    ref class RobloxSettings;

    namespace Controls
    {
        ref class WebView;
    }
}

namespace Roblox
{
    namespace Views
    {
        [Windows::Foundation::Metadata::WebHostHidden]
        public ref class PurchaseRobuxPage sealed
        {
        public:
            PurchaseRobuxPage();

        private:
            void OnCloseButtonClick(Platform::Object^ sender, Windows::UI::Xaml::RoutedEventArgs^ e);
        };
    }
}
