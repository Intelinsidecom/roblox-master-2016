#pragma once

namespace Roblox
{
    namespace Controls
    {
        private enum class NavMenuDestination
        {
            Home = 0,
            Games = 1,
            Friends = 2,
            Catalog = 3,
            Messages = 4,
            Profile = 5,
            Character = 6,
            Inventory = 7,
            Trade = 8,
            Groups = 9,
            Forum = 10,
            Settings = 11,
            Help = 12,
            Logout = 13
        };

        public ref class NavMenu sealed : public Windows::UI::Xaml::Controls::ListView
        {
        public:
            NavMenu();

            void SetSelectedItem(Windows::UI::Xaml::Controls::ListViewItem^ item);

            event Windows::Foundation::EventHandler<Windows::UI::Xaml::Controls::ListViewItem^>^ ItemInvoked;

        protected:
            virtual void OnApplyTemplate() override;
            virtual void OnKeyDown(Windows::UI::Xaml::Input::KeyRoutedEventArgs^ e) override;
        };
    }
}
