#include "pch.h"
#include "PurchaseBCPage.xaml.h"
#include "..\Components\WebView.xaml.h"
#include "..\Roblox\RobloxSettings.h"
#include "..\Roblox\ResourceStrings.h"

using namespace Roblox::Views;
using namespace Roblox::Controls;
using namespace Roblox;

using namespace Platform;
using namespace Windows::Foundation;
using namespace Windows::UI::Xaml;
using namespace Windows::UI::Xaml::Controls;
using namespace Windows::UI::Xaml::Media::Imaging;

PurchaseBCPage::PurchaseBCPage()
{
    InitializeComponent();

    txtTitle->Text = GetResourceString(L"PurchaseBCTitle");

    if (txtBalance != nullptr)
    {
        txtBalance->Visibility = Windows::UI::Xaml::Visibility::Collapsed;
    }

    btnClose_image->Source =
        ref new BitmapImage(ref new Uri(L"ms-appx:///Assets/Shell/cancelButton.png"));

    btnClose->Click += ref new RoutedEventHandler(this, &PurchaseBCPage::OnCloseButtonClick);

    auto settings = RobloxSettings::GetInstance();
    wvContent->Source = ref new Uri(settings->PurchaseBCURL());
}

void PurchaseBCPage::OnCloseButtonClick(Object^ sender, RoutedEventArgs^ e)
{
    this->Hide();
}
