#pragma once

#include "Main.g.h"

namespace WP
{
    public ref class Main sealed
    {
    public:
        Main();
        virtual ~Main();

        void SaveInternalState(Windows::Foundation::Collections::IPropertySet^ state);
        void LoadInternalState(Windows::Foundation::Collections::IPropertySet^ state);

        void ShowOverlay(Platform::String^ name);
        void HideOverlay();

    private:
        void OnRendering(Platform::Object^ sender, Platform::Object^ args);
        void OnSwapChainPanelSizeChanged(Platform::Object^ sender, Windows::UI::Xaml::SizeChangedEventArgs^ e);

        bool m_engineActive;
        bool m_engineStarted;
    };
}
