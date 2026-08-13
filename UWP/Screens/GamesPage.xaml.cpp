#include "pch.h"
#include "GamesPage.xaml.h"
#include "..\Components\WebViewPage.xaml.h"
#include "..\Roblox\RobloxSettings.h"

using namespace Roblox::Views;
using namespace Roblox::Controls;
using namespace Roblox;
using namespace Platform;

GamesPage::GamesPage()
{
    InitializeComponent();

    auto settings = Roblox::RobloxSettings::GetInstance();
    pageImpl->SetSearchType(1);
    pageImpl->SetPageTheme(1);
    SetDefaultUrl(settings->GamesURL());
}
