#include "pch.h"
#include "RbxSplashScreen.xaml.h"
#include "..\\App.xaml.h"
#include "..\\Roblox\\UpgradeStatus.h"
#include "..\\Roblox\\UpgradeCallback.h"
#include "..\\Roblox\\StorePurchaseCallback.h"
#include "..\\Roblox\\RobloxSettings.h"
#include "..\\Roblox\\AuthStorage.h"
#include "..\\Roblox\\ResourceStrings.h"
#include "Screens\\AppShell.xaml.h"
#include <windows.networking.connectivity.h>

using namespace Roblox::Views;
using namespace Roblox;

using namespace Platform;
using namespace Windows::Foundation;
using namespace Windows::UI::Xaml;
using namespace Windows::UI::Xaml::Controls;
using namespace Windows::UI::Xaml::Navigation;
using namespace Windows::UI::Xaml::Media;
using namespace Windows::Web::Http;
using namespace Windows::Networking::Connectivity;
using namespace Windows::Data::Json;
using namespace concurrency;

RbxSplashScreen::RbxSplashScreen()
    : _splashCanvas(nullptr),
      _splashImage(nullptr),
      _splashProgressContainer(nullptr),
      _splashStatusText(nullptr),
      _httpClient(nullptr),
      _robloxSettings(nullptr),
      _offlinePollTimer(nullptr),
      _startupSequenceStarted(false)
{
    InitializeComponent();
}

void RbxSplashScreen::OnUpgradeDialogStore(Windows::UI::Popups::IUICommand^ command)
{
    String^ storeUrl = _robloxSettings->AppStoreUpdatesURL();
    auto uri = ref new Uri(storeUrl);
    Windows::System::Launcher::LaunchUriAsync(uri);
}

void RbxSplashScreen::OnNavigatedTo(NavigationEventArgs^ e)
{
    Page::OnNavigatedTo(e);
    BeginStartupSequence();
}

void RbxSplashScreen::BeginStartupSequence()
{
    _splashCanvas = dynamic_cast<Canvas^>(FindName("splashCanvas"));
    _splashImage = dynamic_cast<Image^>(FindName("splashImage"));
    _splashProgressContainer = dynamic_cast<StackPanel^>(FindName("splashProgressContainer"));
    _splashStatusText = dynamic_cast<TextBlock^>(FindName("splashStatusText"));

    SizeChanged += ref new SizeChangedEventHandler(this, &RbxSplashScreen::UpdateSplashLayout);
    UpdateSplashLayout(this, nullptr);

    _httpClient = ref new HttpClient();
    _httpClient->DefaultRequestHeaders->UserAgent->ParseAdd(RobloxSettings::GetInstance()->ApiUserAgent());

    _robloxSettings = RobloxSettings::GetInstance();

    _connectivityMonitorToken = Windows::Networking::Connectivity::NetworkInformation::NetworkStatusChanged +=
        ref new Windows::Networking::Connectivity::NetworkStatusChangedEventHandler(
            this, &RbxSplashScreen::OnNetworkStatusChanged);

    _offlinePollTimer = ref new Windows::UI::Xaml::DispatcherTimer();
    _offlinePollTimer->Interval = Windows::Foundation::TimeSpan{ 25000000 }; // 2.5s
    _offlinePollTimer->Tick +=
        ref new Windows::Foundation::EventHandler<Platform::Object^>(
            this, &RbxSplashScreen::OnOfflinePollTimerTick);

    CheckConnectivity();
}

void RbxSplashScreen::UpdateSplashLayout(Object^ sender, SizeChangedEventArgs^ e)
{
    (void)sender;
    (void)e;

    if (_splashCanvas == nullptr || _splashImage == nullptr)
    {
        return;
    }

    double canvasWidth = ActualWidth;
    double canvasHeight = ActualHeight;
    if (canvasWidth <= 0 || canvasHeight <= 0)
    {
        return;
    }

    const double imageWidth = 620.0;
    const double imageHeight = 300.0;
    const double reservedBottom = 110.0;
    const double top = ((canvasHeight - reservedBottom) - imageHeight) / 2.0;

    _splashImage->Width = imageWidth;
    _splashImage->Height = imageHeight;
    Canvas::SetLeft(_splashImage, (canvasWidth - imageWidth) / 2.0);
    Canvas::SetTop(_splashImage, top > 24.0 ? top : 24.0);
}

void RbxSplashScreen::UpdateStatusText(const wchar_t* resourceId)
{
    if (_splashStatusText != nullptr)
    {
        _splashStatusText->Text = GetResourceString(ref new String(resourceId));
    }
}

void RbxSplashScreen::CheckConnectivity()
{
    auto profile = NetworkInformation::GetInternetConnectionProfile();
    if (profile == nullptr ||
        profile->GetNetworkConnectivityLevel() != NetworkConnectivityLevel::InternetAccess)
    {
        UpdateStatusText(L"InternetConnectionRequired");

        if (_offlinePollTimer != nullptr && !_offlinePollTimer->IsEnabled)
        {
            _offlinePollTimer->Start();
        }
        return;
    }

    if (_offlinePollTimer != nullptr && _offlinePollTimer->IsEnabled)
    {
        _offlinePollTimer->Stop();
    }

    if (_startupSequenceStarted)
    {
        return;
    }
    _startupSequenceStarted = true;

    InitializeDeviceAsync();
}

void RbxSplashScreen::OnOfflinePollTimerTick(Platform::Object^ sender, Platform::Object^ e)
{
    (void)sender;
    (void)e;
    CheckConnectivity();
}

void RbxSplashScreen::OnNetworkStatusChanged(Platform::Object^ sender)
{
    (void)sender;
    Dispatcher->RunAsync(Windows::UI::Core::CoreDispatcherPriority::Normal,
        ref new Windows::UI::Core::DispatchedHandler([this]()
    {
        CheckConnectivity();
    }));
}

void RbxSplashScreen::InitializeDeviceAsync()
{
    UpdateStatusText(L"SplashInitializingDevice");

    String^ deviceInitUrl = _robloxSettings->InitializeDeviceURL();

    auto httpContent = ref new HttpStringContent(L"");
    create_task(_httpClient->PostAsync(ref new Uri(deviceInitUrl), httpContent)).then([this](task<HttpResponseMessage^> previousTask)
    {
        try
        {
            HttpResponseMessage^ response = previousTask.get();
            response->EnsureSuccessStatusCode();
            create_task(response->Content->ReadAsStringAsync()).then([this](task<String^> contentTask)
            {
                try
                {
                    String^ responseString = contentTask.get();
                    OutputDebugStringW(L"Device Initialize : ");
                    OutputDebugStringW(responseString->Data());
                    OutputDebugStringW(L"\n");

                    CheckForUpdatesAsync();
                }
                catch (Exception^ ex)
                {
                    OutputDebugStringW(L"Device initialization content read failed: ");
                    OutputDebugStringW(ex->Message->Data());
                    OutputDebugStringW(L"\n");
                    CheckForUpdatesAsync();
                }
            });
        }
        catch (Exception^ ex)
        {
            OutputDebugStringW(L"Device initialization failed: ");
            OutputDebugStringW(ex->Message->Data());
            OutputDebugStringW(L"\n");
            CheckForUpdatesAsync();
        }
    });
}

void RbxSplashScreen::CheckForUpdatesAsync()
{
    UpdateStatusText(L"SplashCheckUpdate");

    String^ versionCheckUrl = _robloxSettings->UpgradeCheckURL();

    create_task(_httpClient->GetStringAsync(ref new Uri(versionCheckUrl))).then([this](task<String^> previousTask)
    {
        try
        {
            String^ response = previousTask.get();

            try
            {
                JsonObject^ json = JsonObject::Parse(response);
                if (json->HasKey("data"))
                {
                    JsonObject^ data = json->GetNamedObject("data");
                    if (data->HasKey("UpgradeAction"))
                    {
                        String^ upgradeAction = data->GetNamedString("UpgradeAction");

                        if (upgradeAction == "Required")
                        {
                            ShowUpgradeDialog(Roblox::UpgradeStatus::Required);
                            return;
                        }
                        else if (upgradeAction == "Recommended")
                        {
                            ShowUpgradeDialog(Roblox::UpgradeStatus::Recommended);
                            return;
                        }
                    }
                }
            }
            catch (Platform::COMException^ comEx)
            {
                OutputDebugStringW(L"JSON parsing error: ");
                OutputDebugStringW(comEx->Message->Data());
                OutputDebugStringW(L"\n");
            }

            CheckAuthenticationAsync();
        }
        catch (Exception^ ex)
        {
            OutputDebugStringW(L"Version check failed: ");
            OutputDebugStringW(ex->Message->Data());
            OutputDebugStringW(L"\n");
            CheckAuthenticationAsync();
        }
    });
}

void RbxSplashScreen::ShowUpgradeDialog(Roblox::UpgradeStatus status)
{
    String^ title;
    String^ message;
    bool showNotNowButton = true;

    if (status == Roblox::UpgradeStatus::Required)
    {
        title = GetResourceString(L"UpgradeRequiredTitle");
        message = GetResourceString(L"UpgradeRequiredMessage");
        showNotNowButton = false;
    }
    else
    {
        title = GetResourceString(L"UpgradeRecommendedTitle");
        message = GetResourceString(L"UpgradeRecommenedMessage");
        showNotNowButton = true;
    }

    auto dialog = ref new Windows::UI::Popups::MessageDialog(message, title);

    String^ upgradeButtonText = GetResourceString(L"UpgradeButtonUpgrade");
    auto upgradeCommand = ref new Windows::UI::Popups::UICommand(upgradeButtonText);
    upgradeCommand->Invoked =
        ref new Windows::UI::Popups::UICommandInvokedHandler(this, &RbxSplashScreen::OnUpgradeDialogStore);
    dialog->Commands->Append(upgradeCommand);

    if (showNotNowButton)
    {
        String^ notNowButtonText = GetResourceString(L"UpgradeButtonNotNow");
        auto notNowCommand = ref new Windows::UI::Popups::UICommand(notNowButtonText);
        notNowCommand->Invoked =
            ref new Windows::UI::Popups::UICommandInvokedHandler(
                [this](Windows::UI::Popups::IUICommand^) { CheckAuthenticationAsync(); });
        dialog->Commands->Append(notNowCommand);
    }

    dialog->ShowAsync();
}

void RbxSplashScreen::CheckAuthenticationAsync()
{
    UpdateStatusText(L"SplashCheckAuthentication");

    String^ accountInfoUrl = _robloxSettings->AccountInfoApiURL();

    String^ persistedCookie = AuthStorage::SessionCookie();

    auto request = ref new HttpRequestMessage(
        HttpMethod::Get,
        ref new Uri(accountInfoUrl));

    if (persistedCookie != nullptr && !persistedCookie->IsEmpty())
    {
        String^ cookieHeader = String::Concat(L".ROBLOSECURITY=", persistedCookie);
        request->Headers->Append(L"Cookie", cookieHeader);
    }

    create_task(_httpClient->SendRequestAsync(request)).then([this](task<HttpResponseMessage^> previousTask)
    {
        try
        {
            HttpResponseMessage^ response = previousTask.get();
            int statusCode = (int)response->StatusCode;

            if (statusCode != 200)
            {
                if (statusCode == 401)
                {
                    AuthStorage::Clear();
                }
                NavigateToNextPage(false);
                return;
            }

            create_task(response->Content->ReadAsStringAsync()).then([this](task<String^> bodyTask)
            {
                String^ responseBody = nullptr;
                try
                {
                    responseBody = bodyTask.get();
                }
                catch (Exception^)
                {
                    NavigateToNextPage(false);
                    return;
                }

                if (responseBody == nullptr || responseBody->IsEmpty())
                {
                    NavigateToNextPage(false);
                    return;
                }

                bool isAuthenticated = false;
                String^ seenUsername = nullptr;
                bool parseable = true;
                try
                {
                    JsonObject^ json = JsonObject::Parse(responseBody);

                    if (json->HasKey("username"))
                    {
                        seenUsername = json->GetNamedString("username");
                        isAuthenticated =
                            (seenUsername != nullptr &&
                             !seenUsername->IsEmpty());
                    }
                }
                catch (Exception^ ex)
                {
                    OutputDebugStringW(L"Auth check body parse failed: ");
                    OutputDebugStringW(ex->Message->Data());
                    OutputDebugStringW(L"\n");
                    parseable = false;
                }

                if (isAuthenticated && seenUsername != nullptr)
                {
                    AuthStorage::Save(AuthStorage::SessionCookie(),
                                      AuthStorage::UserId(),
                                      seenUsername);
                }

                if (!parseable)
                {
                    NavigateToNextPage(false);
                    return;
                }

                NavigateToNextPage(isAuthenticated);
            });
        }
        catch (Exception^ ex)
        {
            OutputDebugStringW(L"Authentication check transport error: ");
            OutputDebugStringW(ex->Message->Data());
            OutputDebugStringW(L"\n");
            NavigateToNextPage(false);
        }
    });
}

void RbxSplashScreen::NavigateToNextPage(bool isAuthenticated)
{
    auto frame = this->Frame;
    if (frame == nullptr)
    {
        return;
    }

    auto currentPage = frame->Content;
    if (currentPage == nullptr)
    {
        return;
    }

    auto currentSplashScreen = dynamic_cast<RbxSplashScreen^>(currentPage);
    if (currentSplashScreen == nullptr)
    {
        return;
    }

    auto dispatcher = this->Dispatcher;
    if (dispatcher == nullptr)
    {
        return;
    }

    dispatcher->RunAsync(Windows::UI::Core::CoreDispatcherPriority::Normal,
        ref new Windows::UI::Core::DispatchedHandler([this, isAuthenticated]()
    {
        auto frame = this->Frame;
        if (frame == nullptr)
        {
            return;
        }

        try
        {
            if (_offlinePollTimer != nullptr)
            {
                _offlinePollTimer->Stop();
            }
            if (_connectivityMonitorToken.Value != 0)
            {
                Windows::Networking::Connectivity::NetworkInformation::NetworkStatusChanged -= _connectivityMonitorToken;
                _connectivityMonitorToken = Windows::Foundation::EventRegistrationToken();
            }

            if (isAuthenticated)
            {
                frame->Content = ref new Roblox::AppShell();
            }
            else
            {
                frame->Navigate(Windows::UI::Xaml::Interop::TypeName(Roblox::Views::LandingPage::typeid));
            }
        }
        catch (Exception^ ex)
        {
            OutputDebugStringW(L"Navigation failed: ");
            OutputDebugStringW(ex->Message->Data());
            OutputDebugStringW(L"\n");
        }
    }));
}

void RbxSplashScreen::BeginPlatformLogin()
{
    UpdateStatusText(L"BeginPlatformLogin");
}

void RbxSplashScreen::BeginAuthorization()
{
    UpdateStatusText(L"BeginAuthorization");
}

void RbxSplashScreen::BeginAuthUnlinkCheck()
{
    UpdateStatusText(L"BeginAuthUnlinkCheck");
}

void RbxSplashScreen::UserAuthComplete(bool isAuthenticated)
{
    if (isAuthenticated)
    {
        LoginSucceeded();
    }
    else
    {
        LoginFailed();
    }
}

void RbxSplashScreen::PromptLogin()
{
    UpdateStatusText(L"PromptLogin");
}

void RbxSplashScreen::LoginSucceeded()
{
    UpdateStatusText(L"LoginSucceeded");
    NavigateToNextPage(true);
}

void RbxSplashScreen::LoginFailed()
{
    UpdateStatusText(L"LoginFailed");
    NavigateToNextPage(false);
}

void RbxSplashScreen::TicketProcessed(bool isAuthenticated)
{
    UserAuthComplete(isAuthenticated);
}

void RbxSplashScreen::CheckHttpStatusCode(int statusCode)
{
    if (statusCode != 200)
    {
        HandlePurchaseResponse(statusCode);
    }
}

void RbxSplashScreen::HandlePurchaseResponse(int statusCode)
{
    switch (statusCode)
    {
        case 200:
            break;
        case 400:
            break;
        case 401:
            break;
        case 403:
            break;
        case 404:
            break;
        case 500:
            break;
        default:
            break;
    }
}

void RbxSplashScreen::ReportSessionSuccess()
{
}

void RbxSplashScreen::ReportSessionCrash()
{
    CallEphemeralCountersAPI(L"UWP-ROBLOXPlayer-Session-Inferred-Crash", L"1");
}

void RbxSplashScreen::CallEphemeralCountersAPI(Platform::String^ counterName, Platform::String^ amount)
{
    Platform::String^ apiKey = L"76E5A40C-3AE1-4028-9F10-7C62520BD94F";
    Platform::String^ url = _robloxSettings->AnalyticsEphemeralURL(apiKey, counterName, amount);
    
    create_task(_httpClient->PostAsync(ref new Uri(url), nullptr)).then([this](task<HttpResponseMessage^> previousTask)
    {
        try
        {
            HttpResponseMessage^ response = previousTask.get();
            int statusCode = (int)response->StatusCode;
            CheckHttpStatusCode(statusCode);
        }
        catch (Exception^ ex)
        {
            OutputDebugStringW(L"Ephemeral counters API call failed: ");
            OutputDebugStringW(ex->Message->Data());
            OutputDebugStringW(L"\n");
        }
    });
}
