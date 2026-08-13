#pragma once

#include "Components\DatePicker.g.h"
#include "Components\DateChangedHandler.h"

namespace Roblox
{
    namespace Controls
    {
        [Windows::Foundation::Metadata::WebHostHidden]
        public ref class DatePicker sealed
        {
        public:
            DatePicker();

            property Windows::Foundation::DateTime Date
            {
                Windows::Foundation::DateTime get();
                void set(Windows::Foundation::DateTime value);
            }

            property Windows::Foundation::DateTime MinYear
            {
                Windows::Foundation::DateTime get();
                void set(Windows::Foundation::DateTime value);
            }

            property Windows::Foundation::DateTime MaxYear
            {
                Windows::Foundation::DateTime get();
                void set(Windows::Foundation::DateTime value);
            }

            event Roblox::Controls::DateChangedHandler^ DateChanged;

        private:
            void OnDateChanged(Platform::Object^ sender, Windows::UI::Xaml::Controls::DatePickerValueChangedEventArgs^ e);
            void OnDatePickerOpened(Platform::Object^ sender, Platform::Object^ e);
        };
    }
}