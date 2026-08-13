#include "pch.h"
#include "WebViewPage.xaml.h"
#include "WebView.xaml.h"
#include "..\Roblox\RobloxSettings.h"
#include "..\Roblox\ResourceStrings.h"
#include "..\Services\LoginService.h"
#include "..\Screens\PurchaseBCPage.xaml.h"
#include "..\Screens\PurchaseRobuxPage.xaml.h"

using namespace Roblox;
using namespace Roblox::Controls;
using namespace Roblox::Views;
using namespace Platform;
using namespace Windows::Foundation;
using namespace Windows::UI::Xaml;
using namespace Windows::UI::Xaml::Media::Imaging;
using namespace Windows::Web::Http;
using namespace Windows::Data::Json;
using namespace concurrency;

WebViewPage::WebViewPage()
{
    InitializeComponent();

    searchType = 0;
    m_theme = 0;

    m_bcIconOff    = ref new BitmapImage(ref new Uri(L"ms-appx:///Assets/Shell/icon_BC.png"));
    m_bcIconOn     = ref new BitmapImage(ref new Uri(L"ms-appx:///Assets/Shell/icon_BC_on.png"));
    m_robuxIconOff = ref new BitmapImage(ref new Uri(L"ms-appx:///Assets/Shell/icon_ROBUX.png"));
    m_robuxIconOn  = ref new BitmapImage(ref new Uri(L"ms-appx:///Assets/Shell/icon_ROBUX_on.png"));

    volatile int forceDecode = m_bcIconOff->PixelWidth + m_bcIconOn->PixelWidth
                             + m_robuxIconOff->PixelWidth + m_robuxIconOn->PixelWidth;
    (void)forceDecode;

    btnBC_image->Source    = m_bcIconOff;
    btnRobux_image->Source  = m_robuxIconOff;

    btnRobux_balance->Text = L"";
    btnRobux_balance->Visibility = Windows::UI::Xaml::Visibility::Collapsed;

    btnBC->Click += ref new Windows::UI::Xaml::RoutedEventHandler(this, &WebViewPage::OnBCButtonClick);
    btnRobux->Click += ref new Windows::UI::Xaml::RoutedEventHandler(this, &WebViewPage::OnRobuxButtonClick);

    btnBC->PointerEntered += ref new Windows::UI::Xaml::Input::PointerEventHandler(this, &WebViewPage::OnBCPointerEntered);
    btnBC->PointerExited += ref new Windows::UI::Xaml::Input::PointerEventHandler(this, &WebViewPage::OnBCPointerExited);
    btnRobux->PointerEntered += ref new Windows::UI::Xaml::Input::PointerEventHandler(this, &WebViewPage::OnRobuxPointerEntered);
    btnRobux->PointerExited += ref new Windows::UI::Xaml::Input::PointerEventHandler(this, &WebViewPage::OnRobuxPointerExited);
    asbSearch->QuerySubmitted +=
        ref new Windows::Foundation::TypedEventHandler<Windows::UI::Xaml::Controls::AutoSuggestBox^, Windows::UI::Xaml::Controls::AutoSuggestBoxQuerySubmittedEventArgs^>(this, &WebViewPage::OnSearchQuerySubmitted);

    FetchBalance();
}

void WebViewPage::SetSearchType(int type)
{
    searchType = type;
    switch (static_cast<SearchType>(type))
    {
    case SearchType::Games:
        asbSearch->PlaceholderText = GetResourceString(L"SearchGames");
        asbSearch->Visibility = Windows::UI::Xaml::Visibility::Visible;
        break;
    case SearchType::Friends:
        asbSearch->PlaceholderText = GetResourceString(L"SearchPeople");
        asbSearch->Visibility = Windows::UI::Xaml::Visibility::Visible;
        break;
    default:
        asbSearch->Visibility = Windows::UI::Xaml::Visibility::Collapsed;
        break;
    }
}

void WebViewPage::PageWillAppear()
{
}

void WebViewPage::SetPageTheme(int theme)
{
    m_theme = theme;

    Windows::UI::Color color;
    switch (static_cast<RobloxTheme>(theme))
    {
    case RobloxTheme::Games:
        color.R = 0x02; color.G = 0xB7; color.B = 0x57; color.A = 0xFF;
        break;
    case RobloxTheme::Social:
        color.R = 0x00; color.G = 0x74; color.B = 0xBD; color.A = 0xFF;
        break;
    case RobloxTheme::Creative:
        color.R = 0xF6; color.G = 0x88; color.B = 0x02; color.A = 0xFF;
        break;
    default:
        color.R = 0x19; color.G = 0x19; color.B = 0x19; color.A = 0xFF;
        break;
    }

    pageBackground->Background = ref new Windows::UI::Xaml::Media::SolidColorBrush(color);
}

void WebViewPage::SetPageTitle(Platform::String^ title)
{
    PageTitle = title;
}

void WebViewPage::SetPurchaseButtonsEnabled(bool isEnabled)
{
    (void)isEnabled;
}

void WebViewPage::Search_QueryHelper(Platform::String^ searchText, bool replaceQuery)
{
    (void)searchText;
    (void)replaceQuery;
}

Roblox::Controls::WebView^ WebViewPage::GetWebView()
{
    return wvContent;
}

Platform::String^ WebViewPage::PageTitle::get()
{
    return m_pageTitle;
}

void WebViewPage::PageTitle::set(Platform::String^ value)
{
    m_pageTitle = value;
}

void WebViewPage::OnBCButtonClick(Platform::Object^ sender, Windows::UI::Xaml::RoutedEventArgs^ e)
{
    auto popup = ref new PurchaseBCPage();
    popup->ShowAsync();
}

void WebViewPage::OnRobuxButtonClick(Platform::Object^ sender, Windows::UI::Xaml::RoutedEventArgs^ e)
{
    auto popup = ref new PurchaseRobuxPage();
    popup->ShowAsync();
}

void WebViewPage::OnBCPointerEntered(Platform::Object^ sender, Windows::UI::Xaml::Input::PointerRoutedEventArgs^ e)
{
    if (m_bcIconOn != nullptr) btnBC_image->Source = m_bcIconOn;
}

void WebViewPage::OnBCPointerExited(Platform::Object^ sender, Windows::UI::Xaml::Input::PointerRoutedEventArgs^ e)
{
    if (m_bcIconOff != nullptr) btnBC_image->Source = m_bcIconOff;
}

void WebViewPage::OnRobuxPointerEntered(Platform::Object^ sender, Windows::UI::Xaml::Input::PointerRoutedEventArgs^ e)
{
    if (m_robuxIconOn != nullptr) btnRobux_image->Source = m_robuxIconOn;
}

void WebViewPage::OnRobuxPointerExited(Platform::Object^ sender, Windows::UI::Xaml::Input::PointerRoutedEventArgs^ e)
{
    if (m_robuxIconOff != nullptr) btnRobux_image->Source = m_robuxIconOff;
}

void WebViewPage::OnSearchQuerySubmitted(Windows::UI::Xaml::Controls::AutoSuggestBox^ sender, Windows::UI::Xaml::Controls::AutoSuggestBoxQuerySubmittedEventArgs^ e)
{
    auto settings = RobloxSettings::GetInstance();
    String^ term = e->QueryText;
    if (term == nullptr || term->IsEmpty()) return;

    if (searchType == 1)
    {
        wvContent->Source = ref new Uri(settings->SearchGamesURL(term));
    }
    else if (searchType == 2)
    {
        wvContent->Source = ref new Uri(settings->SearchUsersURL(term));
    }
}

void WebViewPage::FetchBalance()
{
    auto settings = RobloxSettings::GetInstance();
    auto httpClient = ref new HttpClient();
    auto localThis = this;
    auto balanceLocal = btnRobux_balance;

    create_task(httpClient->GetAsync(ref new Uri(settings->BalanceApiURL())))
        .then([balanceLocal, localThis](task<HttpResponseMessage^> previousTask)
    {
        try
        {
            HttpResponseMessage^ response = previousTask.get();
            if (response == nullptr) return;
            create_task(response->Content->ReadAsStringAsync())
                .then([balanceLocal, localThis](task<String^> bodyTask)
            {
                try
                {
                    String^ body = bodyTask.get();
                    if (body == nullptr || body->IsEmpty()) return;

                    JsonObject^ root;
                    if (!JsonObject::TryParse(body, &root)) return;

                    int robux = 0;
                    if (root->HasKey(L"robux"))
                    {
                        robux = static_cast<int>(root->GetNamedNumber(L"robux"));
                    }

                    localThis->Dispatcher->RunAsync(
                        Windows::UI::Core::CoreDispatcherPriority::Normal,
                        ref new Windows::UI::Core::DispatchedHandler([balanceLocal, robux]()
                    {
                        auto text = robux.ToString();
                        balanceLocal->Text = text;
                        balanceLocal->Visibility = Windows::UI::Xaml::Visibility::Collapsed;

                        Roblox::Services::LoginService::GetInstance()->SetRobuxBalance(robux);
                    }));
                }
                catch (Exception^)
                {
                }
            });
        }
        catch (Exception^)
        {
        }
    });
}
