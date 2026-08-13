#include "pch.h"
#include "MessagesPage.xaml.h"
#include "..\Components\WebViewPage.xaml.h"
#include "..\Roblox\RobloxSettings.h"

using namespace Roblox::Views;
using namespace Roblox::Controls;
using namespace Roblox;
using namespace Platform;
using namespace Windows::UI::Xaml::Navigation;

MessagesPage::MessagesPage()
{
    InitializeComponent();

    auto settings = Roblox::RobloxSettings::GetInstance();
    pageImpl->SetPageTheme(2);
    SetDefaultUrl(settings->MessagesURL());
}
