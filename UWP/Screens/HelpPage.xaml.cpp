#include "pch.h"
#include "HelpPage.xaml.h"
#include "..\Components\WebViewPage.xaml.h"
#include "..\Roblox\RobloxSettings.h"

using namespace Roblox::Views;
using namespace Roblox::Controls;
using namespace Roblox;
using namespace Platform;
using namespace Windows::UI::Xaml::Navigation;

HelpPage::HelpPage()
{
    InitializeComponent();

    auto settings = Roblox::RobloxSettings::GetInstance();
    SetDefaultUrl(settings->HelpURL());
}
