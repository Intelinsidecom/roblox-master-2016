#include "pch.h"
#include "HomePage.xaml.h"
#include "..\Components\WebViewPage.xaml.h"
#include "..\Roblox\RobloxSettings.h"

using namespace Roblox::Views;
using namespace Roblox::Controls;
using namespace Roblox;
using namespace Platform;
using namespace Windows::UI::Xaml::Navigation;

HomePage::HomePage()
{
    InitializeComponent();

    auto settings = Roblox::RobloxSettings::GetInstance();
    pageImpl->SetSearchType(2);
    pageImpl->SetPageTheme(1);
    SetDefaultUrl(settings->HomeURL());
}
