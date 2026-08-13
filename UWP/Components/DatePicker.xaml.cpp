#include "pch.h"
#include "DatePicker.xaml.h"

using namespace Roblox::Controls;
using namespace Windows::Foundation;
using namespace Windows::UI::Xaml;

DatePicker::DatePicker()
{
    InitializeComponent();
    this->DatePickerImpl->DateChanged += ref new Windows::Foundation::EventHandler<Windows::UI::Xaml::Controls::DatePickerValueChangedEventArgs^>(this, &DatePicker::OnDateChanged);
}

Windows::Foundation::DateTime DatePicker::Date::get()
{
    return this->DatePickerImpl->Date;
}

void DatePicker::Date::set(Windows::Foundation::DateTime value)
{
    this->DatePickerImpl->Date = value;
}

Windows::Foundation::DateTime DatePicker::MinYear::get()
{
    return this->DatePickerImpl->MinYear;
}

void DatePicker::MinYear::set(Windows::Foundation::DateTime value)
{
    this->DatePickerImpl->MinYear = value;
}

Windows::Foundation::DateTime DatePicker::MaxYear::get()
{
    return this->DatePickerImpl->MaxYear;
}

void DatePicker::MaxYear::set(Windows::Foundation::DateTime value)
{
    this->DatePickerImpl->MaxYear = value;
}

void DatePicker::OnDateChanged(Platform::Object^ sender, Windows::UI::Xaml::Controls::DatePickerValueChangedEventArgs^ e)
{
    if (e->NewDate.UniversalTime != 0)
    {
        this->UnselectedDateMask->Visibility = Windows::UI::Xaml::Visibility::Collapsed;
    }
    else
    {
        this->UnselectedDateMask->Visibility = Windows::UI::Xaml::Visibility::Visible;
    }

    DateChanged(this, e);
}
