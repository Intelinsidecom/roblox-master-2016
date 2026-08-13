#include "pch.h"
#include "TradePage.xaml.h"
#include "..\Components\WebViewPage.xaml.h"
#include "..\Roblox\RobloxSettings.h"

using namespace Roblox::Views;
using namespace Roblox::Controls;
using namespace Roblox;
using namespace Platform;
using namespace Windows::UI::Xaml::Navigation;

TradePage::TradePage()
{
    InitializeComponent();

    auto settings = Roblox::RobloxSettings::GetInstance();
    pageImpl->SetPageTheme(2);
    SetDefaultUrl(settings->TradeURL());
}
