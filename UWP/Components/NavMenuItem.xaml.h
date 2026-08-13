#pragma once

#include "Components\NavMenuItem.g.h"

namespace Roblox
{
    namespace Controls
    {
        [Windows::Foundation::Metadata::WebHostHidden]
        public ref class NavMenuItem sealed
        {
        public:
            NavMenuItem(Platform::String^ label, Platform::String^ iconName, Windows::UI::Xaml::Interop::TypeName destPage);

            void ToggleIconImage(bool isOn);
            void SetNotification(unsigned int total);
            void SetTitle(Platform::String^ titleLabel);

            property Platform::String^ iconTitle
            {
                Platform::String^ get();
                void set(Platform::String^ value);
            }

            property Windows::UI::Xaml::Interop::TypeName destPage
            {
                Windows::UI::Xaml::Interop::TypeName get();
                void set(Windows::UI::Xaml::Interop::TypeName value);
            }

        internal:
            void ApplyIcon(Windows::Foundation::Uri^ uri);

        private:
            Platform::String^ m_iconTitle;
            Windows::UI::Xaml::Interop::TypeName m_destPage;
        };
    }
}
