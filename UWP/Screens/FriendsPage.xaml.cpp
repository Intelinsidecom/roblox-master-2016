#include "pch.h"
#include "FriendsPage.xaml.h"
#include "..\Components\WebViewPage.xaml.h"
#include "..\Roblox\RobloxSettings.h"

using namespace Roblox::Views;
using namespace Roblox::Controls;
using namespace Roblox;
using namespace Platform;
using namespace Windows::UI::Xaml::Navigation;

FriendsPage::FriendsPage()
{
    InitializeComponent();

    auto settings = Roblox::RobloxSettings::GetInstance();
    pageImpl->SetSearchType(2);
    pageImpl->SetPageTheme(2);
    SetDefaultUrl(settings->FriendsURL());
}
