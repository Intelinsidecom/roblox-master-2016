#include "pch.h"
#include "PurchaseRobuxPage.xaml.h"
#include "..\Components\WebView.xaml.h"
#include "..\Roblox\RobloxSettings.h"
#include "..\Roblox\ResourceStrings.h"
#include "..\Services\LoginService.h"

using namespace Roblox::Views;
using namespace Roblox::Controls;
using namespace Roblox;

using namespace Platform;
using namespace Windows::Foundation;
using namespace Windows::UI::Xaml;
using namespace Windows::UI::Xaml::Controls;
using namespace Windows::UI::Xaml::Media::Imaging;

PurchaseRobuxPage::PurchaseRobuxPage()
{
    InitializeComponent();

    txtTitle->Text = GetResourceString(L"PurchaseRobuxTitle");

    int robux = Roblox::Services::LoginService::GetInstance()->RobuxBalance();
    txtBalance->Text = L"R$ " + robux.ToString();

    btnClose_image->Source =
        ref new BitmapImage(ref new Uri(L"ms-appx:///Assets/Shell/cancelButton.png"));

    btnClose->Click += ref new RoutedEventHandler(this, &PurchaseRobuxPage::OnCloseButtonClick);

    auto settings = RobloxSettings::GetInstance();
    wvContent->Source = ref new Uri(settings->PurchaseRobuxURL());
}

void PurchaseRobuxPage::OnCloseButtonClick(Object^ sender, RoutedEventArgs^ e)
{
    this->Hide();
}
