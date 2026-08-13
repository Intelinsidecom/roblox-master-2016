#include "pch.h"
#include "NavMenuItem.xaml.h"

using namespace Roblox::Controls;
using namespace Platform;
using namespace Windows::Foundation;
using namespace Windows::UI::Xaml;
using namespace Windows::UI::Xaml::Media::Imaging;

NavMenuItem::NavMenuItem(Platform::String^ label, Platform::String^ iconName, Windows::UI::Xaml::Interop::TypeName destPage)
    : m_iconTitle(iconName)
    , m_destPage(destPage)
{
    InitializeComponent();

    SetTitle(label);
}

void NavMenuItem::ToggleIconImage(bool isOn)
{
    IconImage->Opacity = isOn ? 1.0 : 0.6;
}

void NavMenuItem::SetNotification(unsigned int total)
{
    if (total == 0)
    {
        NotificationBackground->Visibility = Windows::UI::Xaml::Visibility::Collapsed;
    }
    else
    {
        IconBadge->Text = total.ToString();
        NotificationBackground->Visibility = Windows::UI::Xaml::Visibility::Visible;
    }
}

void NavMenuItem::SetTitle(Platform::String^ titleLabel)
{
    m_iconTitle = titleLabel;
    if (titleLabel == nullptr) titleLabel = L"";
    IconLabel->Text = titleLabel;
}

Platform::String^ NavMenuItem::iconTitle::get()
{
    return m_iconTitle;
}

void NavMenuItem::iconTitle::set(Platform::String^ value)
{
    m_iconTitle = value;
    SetTitle(value);
}

Windows::UI::Xaml::Interop::TypeName NavMenuItem::destPage::get()
{
    return m_destPage;
}

void NavMenuItem::destPage::set(Windows::UI::Xaml::Interop::TypeName value)
{
    m_destPage = value;
}

void NavMenuItem::ApplyIcon(Windows::Foundation::Uri^ uri)
{
    if (uri != nullptr)
    {
        IconImage->Source = ref new BitmapImage(uri);
    }
}
