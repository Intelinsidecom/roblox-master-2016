#include "pch.h"
#include "CharacterPage.xaml.h"
#include "..\Components\WebViewPage.xaml.h"
#include "..\Roblox\RobloxSettings.h"

using namespace Roblox::Views;
using namespace Roblox::Controls;
using namespace Roblox;
using namespace Platform;
using namespace Windows::UI::Xaml::Navigation;

CharacterPage::CharacterPage()
{
    InitializeComponent();

    auto settings = Roblox::RobloxSettings::GetInstance();
    pageImpl->SetPageTheme(3);
    SetDefaultUrl(settings->CharacterURL());
}
