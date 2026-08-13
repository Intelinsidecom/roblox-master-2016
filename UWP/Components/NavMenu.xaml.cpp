#include "pch.h"
#include "NavMenu.xaml.h"
#include "NavMenuItem.xaml.h"
#include "..\Screens\HomePage.xaml.h"
#include "..\Screens\GamesPage.xaml.h"
#include "..\Screens\FriendsPage.xaml.h"
#include "..\Screens\CatalogPage.xaml.h"
#include "..\Screens\MessagesPage.xaml.h"
#include "..\Screens\ProfilePage.xaml.h"
#include "..\Screens\CharacterPage.xaml.h"
#include "..\Screens\InventoryPage.xaml.h"
#include "..\Screens\TradePage.xaml.h"
#include "..\Screens\GroupsPage.xaml.h"
#include "..\Screens\ForumPage.xaml.h"
#include "..\Screens\SettingsPage.xaml.h"
#include "..\Screens\HelpPage.xaml.h"
#include "..\Roblox\RobloxSettings.h"
#include "..\Roblox\ResourceStrings.h"

using namespace Roblox;
using namespace Roblox::Controls;
using namespace Roblox::Views;
using namespace Platform;
using namespace Windows::Foundation;
using namespace Windows::UI::Xaml;
using namespace Windows::UI::Xaml::Controls;
using namespace Windows::UI::Xaml::Interop;
using namespace Windows::UI::Xaml::Media::Imaging;

NavMenu::NavMenu()
{
    auto settings = RobloxSettings::GetInstance();

    Background = ref new Windows::UI::Xaml::Media::SolidColorBrush(Windows::UI::Colors::Transparent);
    Foreground = ref new Windows::UI::Xaml::Media::SolidColorBrush(Windows::UI::Colors::White);
    IsItemClickEnabled = true;
    SelectionMode = ListViewSelectionMode::Single;
    TabIndex = 3;
    Margin = Thickness(0);

    ItemClick += ref new ItemClickEventHandler(
        [this](Object^ sender, ItemClickEventArgs^ args)
        {
            auto item = dynamic_cast<ListViewItem^>(args->ClickedItem);
            if (item != nullptr)
            {
                ItemInvoked(this, item);
            }
        });

    struct Entry
    {
        const wchar_t* labelKey;
        const wchar_t* iconOff;
        NavMenuDestination dest;
        Platform::String^ url;
        Windows::UI::Xaml::Interop::TypeName destType;
    };

    Entry entries[] = {
        { L"HomeTitle",      L"icon_home",      NavMenuDestination::Home,      settings->HomeURL(),      TypeName(HomePage::typeid) },
        { L"GamesTitle",     L"icon_game",      NavMenuDestination::Games,     settings->GamesURL(),     TypeName(GamesPage::typeid) },
        { L"FriendsTitle",   L"icon_friends",   NavMenuDestination::Friends,   settings->FriendsURL(),   TypeName(FriendsPage::typeid) },
        { L"CatalogTitle",   L"icon_catalog",   NavMenuDestination::Catalog,   settings->CatalogURL(),   TypeName(CatalogPage::typeid) },
        { L"MessagesTitle",  L"icon_messages",  NavMenuDestination::Messages,  settings->MessagesURL(),  TypeName(MessagesPage::typeid) },
        { L"ProfileTitle",   L"icon_profile",   NavMenuDestination::Profile,   settings->ProfileURL(),   TypeName(ProfilePage::typeid) },
        { L"CharacterTitle", L"icon_character", NavMenuDestination::Character, settings->CharacterURL(), TypeName(CharacterPage::typeid) },
        { L"InventoryTitle", L"icon_inventory", NavMenuDestination::Inventory, settings->InventoryURL(), TypeName(InventoryPage::typeid) },
        { L"TradeTitle",     L"icon_trade",     NavMenuDestination::Trade,     settings->TradeURL(),     TypeName(TradePage::typeid) },
        { L"GroupsTitle",    L"icon_groups",    NavMenuDestination::Groups,    settings->GroupsURL(),    TypeName(GroupsPage::typeid) },
        { L"ForumTitle",     L"icon_forum",     NavMenuDestination::Forum,     settings->ForumUrl(),     TypeName(ForumPage::typeid) },
        { L"SettingsTitle",  L"icon_settings",  NavMenuDestination::Settings,  settings->SettingsURL(),  TypeName(SettingsPage::typeid) },
        { L"HelpTitle",      L"icon_help",      NavMenuDestination::Help,      settings->HelpURL(),      TypeName(HelpPage::typeid) },
        { L"LogoutTitle",    L"icon_logout",    NavMenuDestination::Logout,    settings->LogoutURL(),    TypeName(HelpPage::typeid) }
    };

    for (int i = 0; i < 14; i++)
    {
        auto iconUri = ref new Uri(ref new String(L"ms-appx:///Assets/Shell/") + ref new String(entries[i].iconOff) + ref new String(L".png"));
        Platform::String^ label = GetResourceString(ref new String(entries[i].labelKey));
        Platform::String^ iconName = ref new String(entries[i].iconOff);
        TypeName destType = entries[i].destType;
        NavMenuItem^ item = ref new NavMenuItem(label, iconName, destType);
        item->ApplyIcon(iconUri);

        auto container = ref new ListViewItem();
        container->Content = item;
        container->Tag = PropertyValue::CreateInt32(static_cast<int>(entries[i].dest));
        container->Tapped += ref new Windows::UI::Xaml::Input::TappedEventHandler(
            [this, container](Platform::Object^ sender, Windows::UI::Xaml::Input::TappedRoutedEventArgs^ e)
            {
                ItemInvoked(this, container);
            });
        Items->Append(container);
    }

    SelectedIndex = 0;
}

void NavMenu::SetSelectedItem(Windows::UI::Xaml::Controls::ListViewItem^ item)
{
    if (item == nullptr) return;
    SelectedItem = item;
}

void NavMenu::OnApplyTemplate()
{
    __super::OnApplyTemplate();
}

void NavMenu::OnKeyDown(Windows::UI::Xaml::Input::KeyRoutedEventArgs^ e)
{
    __super::OnKeyDown(e);
}
