#include "pch.h"
#include "WebView.xaml.h"
#include "GameParameters.h"
#include "..\\Roblox\\NoInternetDialog.h"
#include <windows.web.h>

#include <string>

using namespace Roblox::Controls;
using namespace Platform;
using namespace Windows::Foundation;
using namespace Windows::UI::Xaml;

namespace
{
    bool IsGameStartPath(Platform::String^ path)
    {
        if (path == nullptr || path->IsEmpty())
        {
            return false;
        }

        const wchar_t* data = path->Data();
        const int length = path->Length();

        int i = 0;
        int segmentIndex = 0;

        while (i <= length)
        {
            int segmentStart = i;
            while (i < length && data[i] != L'/')
            {
                i++;
            }
            int segmentEnd = i;
            i++;

            int segmentLength = segmentEnd - segmentStart;
            if (segmentLength == 0)
            {
                if (i > length)
                {
                    break;
                }
                continue;
            }

            if (segmentIndex == 0)
            {
                if (segmentLength != 5 || wcsncmp(data + segmentStart, L"games", 5) != 0)
                {
                    return false;
                }
            }
            else if (segmentIndex == 1)
            {
                if (segmentLength != 5 || wcsncmp(data + segmentStart, L"start", 5) != 0)
                {
                    return false;
                }
            }
            else
            {
                return false;
            }

            segmentIndex++;
        }

        return segmentIndex == 2;
    }

    Platform::String^ TryGetQueryValue(Platform::String^ query, const wchar_t* name, int nameLength)
    {
        if (query == nullptr)
        {
            return nullptr;
        }

        const wchar_t* data = query->Data();
        const int length = query->Length();

        int i = (length > 0 && data[0] == L'?') ? 1 : 0;

        while (i < length)
        {
            int pairStart = i;
            while (i < length && data[i] != L'&')
            {
                i++;
            }
            int pairEnd = i;
            i++;

            int nameEnd = pairStart;
            int valueStart = -1;
            int valueEnd = pairEnd;

            for (int k = pairStart; k < pairEnd; k++)
            {
                if (data[k] == L'=')
                {
                    nameEnd = k;
                    valueStart = k + 1;
                    valueEnd = pairEnd;
                    break;
                }
            }
            if (valueStart < 0)
            {
                continue;
            }

            int nameLen = nameEnd - pairStart;
            if (nameLen != nameLength)
            {
                continue;
            }

            bool match = true;
            for (int k = 0; k < nameLength; k++)
            {
                wchar_t a = data[pairStart + k];
                if (a >= L'A' && a <= L'Z')
                {
                    a += (L'a' - L'A');
                }
                if (a != name[k])
                {
                    match = false;
                    break;
                }
            }

            if (match)
            {
                return ref new Platform::String(data + valueStart, static_cast<unsigned int>(valueEnd - valueStart));
            }
        }

        return nullptr;
    }

    bool IsCustomScheme(Platform::String^ scheme)
    {
        if (scheme == nullptr || scheme->IsEmpty())
        {
            return false;
        }

        const wchar_t* data = scheme->Data();
        const int length = scheme->Length();

        static const struct { const wchar_t* text; int len; } known[] = {
            { L"http", 4 }, { L"https", 5 }, { L"about", 5 },
            { L"data", 4 }, { L"javascript", 10 }, { L"blob", 4 },
            { L"ms-appx", 7 }, { L"ms-appdata", 10 }, { L"res", 3 },
        };

        for (int i = 0; i < sizeof(known) / sizeof(known[0]); i++)
        {
            if (length != known[i].len)
            {
                continue;
            }

            bool same = true;
            for (int k = 0; k < length; k++)
            {
                wchar_t a = data[k];
                if (a >= L'A' && a <= L'Z')
                {
                    a += (L'a' - L'A');
                }
                if (a != known[i].text[k])
                {
                    same = false;
                    break;
                }
            }

            if (same)
            {
                return false;
            }
        }

        return true;
    }

    Platform::String^ TryGetProtocolParam(Platform::String^ payload, const wchar_t* name, int nameLength)
    {
        if (payload == nullptr)
        {
            return nullptr;
        }

        const wchar_t* data = payload->Data();
        const int length = payload->Length();

        int i = 0;
        while (i < length)
        {
            int tokenStart = i;
            while (i < length && data[i] != L'+')
            {
                i++;
            }
            int tokenEnd = i;
            i++;

            int nameEnd = tokenStart;
            int valueStart = -1;
            for (int k = tokenStart; k < tokenEnd; k++)
            {
                if (data[k] == L':')
                {
                    nameEnd = k;
                    valueStart = k + 1;
                    break;
                }
            }
            if (valueStart < 0)
            {
                continue;
            }

            int nameLen = nameEnd - tokenStart;
            if (nameLen != nameLength)
            {
                continue;
            }

            bool match = true;
            for (int k = 0; k < nameLength; k++)
            {
                wchar_t a = data[tokenStart + k];
                if (a >= L'A' && a <= L'Z')
                {
                    a += (L'a' - L'A');
                }
                if (a != name[k])
                {
                    match = false;
                    break;
                }
            }

            if (match)
            {
                return ref new Platform::String(data + valueStart, tokenEnd - valueStart);
            }
        }

        return nullptr;
    }

    GameParameters^ TryExtractSchemeGameStart(Windows::Foundation::Uri^ uri)
    {
        if (uri == nullptr)
        {
            return nullptr;
        }

        Platform::String^ full = uri->ToString();
        if (full == nullptr)
        {
            return nullptr;
        }

        const wchar_t* data = full->Data();
        const int length = full->Length();

        int colon = -1;
        for (int i = 0; i < length; i++)
        {
            if (data[i] == L':')
            {
                colon = i;
                break;
            }
        }
        if (colon < 0)
        {
            return nullptr;
        }

        Platform::String^ payload = ref new Platform::String(data + colon + 1, length - colon - 1);

        Platform::String^ placeId = nullptr;
        Platform::String^ launcherUrl = TryGetProtocolParam(payload, L"placelauncherurl", 16);
        if (launcherUrl != nullptr)
        {
            try
            {
                Platform::String^ decoded = Windows::Foundation::Uri::UnescapeComponent(launcherUrl);
                if (decoded != nullptr && !decoded->IsEmpty())
                {
                    Windows::Foundation::Uri^ parsed = ref new Windows::Foundation::Uri(decoded);
                    placeId = TryGetQueryValue(parsed->Query, L"placeId", 7);
                }
            }
            catch (Platform::Exception^)
            {
            }
        }
        if (placeId == nullptr || placeId->IsEmpty())
        {
            placeId = TryGetProtocolParam(payload, L"placeid", 7);
        }
        if (placeId == nullptr || placeId->IsEmpty())
        {
            return nullptr;
        }

        GameParameters^ params = ref new GameParameters();
        params->placeID = placeId;
        params->instanceID = TryGetProtocolParam(payload, L"gameInstanceId", 14);
        params->userID = TryGetProtocolParam(payload, L"userID", 6);
        params->accessCode = TryGetProtocolParam(payload, L"accessCode", 10);
        params->browserTrackerID = TryGetProtocolParam(payload, L"browsertrackerid", 16);
        return params;
    }

    void AppendJsonString(std::wstring& json, const wchar_t* name, Platform::String^ value)
    {
        if (value == nullptr || value->IsEmpty())
        {
            return;
        }

        json += L", \"";
        json += name;
        json += L"\": \"";
        json += value->Data();
        json += L"\"";
    }

    bool IsNetworkWebError(Windows::Web::WebErrorStatus status)
    {
        switch (status)
        {
        case Windows::Web::WebErrorStatus::ServerUnreachable:
        case Windows::Web::WebErrorStatus::Timeout:
        case Windows::Web::WebErrorStatus::ConnectionAborted:
        case Windows::Web::WebErrorStatus::ConnectionReset:
        case Windows::Web::WebErrorStatus::Disconnected:
        case Windows::Web::WebErrorStatus::CannotConnect:
        case Windows::Web::WebErrorStatus::HostNameNotResolved:
        case Windows::Web::WebErrorStatus::RedirectFailed:
            return true;
        default:
            return false;
        }
    }
}

WebView::WebView()
    : _defaultUrl(nullptr)
    , m_bridge(nullptr)
{
    InitializeComponent();

    WebViewImpl->NavigationStarting +=
        ref new TypedEventHandler<Windows::UI::Xaml::Controls::WebView^, Windows::UI::Xaml::Controls::WebViewNavigationStartingEventArgs^>(
            this, &WebView::OnNavigationStarting);
    WebViewImpl->NavigationCompleted +=
        ref new TypedEventHandler<Windows::UI::Xaml::Controls::WebView^, Windows::UI::Xaml::Controls::WebViewNavigationCompletedEventArgs^>(
            this, &WebView::OnNavigationCompleted);

    m_bridge = ref new Roblox::NativeHybrid::Bridge(WebViewImpl);

    progressRing->IsActive = false;
    progressRingBackground->Visibility = Windows::UI::Xaml::Visibility::Collapsed;
}

Windows::Foundation::Uri^ WebView::Source::get()
{
    return WebViewImpl->Source;
}

void WebView::Source::set(Windows::Foundation::Uri^ value)
{
    WebViewImpl->Navigate(value);
}

void WebView::SetDefaultUrl(Platform::String^ url)
{
    _defaultUrl = url;
}

void WebView::LoadDefaultUrl()
{
    if (_defaultUrl != nullptr && !_defaultUrl->IsEmpty())
    {
        WebViewImpl->Navigate(ref new Windows::Foundation::Uri(_defaultUrl));
    }
}

void WebView::Refresh()
{
    WebViewImpl->Refresh();
}

void WebView::GoBack()
{
    if (WebViewImpl->CanGoBack)
    {
        WebViewImpl->GoBack();
    }
}

void WebView::Clear()
{
    // Navigate to a blank document so the out-of-process WebView (Edge/wwahost)
    // process charged to the app's memory budget can be released. This must be
    // done in addition to dropping references: only after the WebView navigates
    // away from the heavy remote page will the separate process tear down its
    // scripts/render tree. Kept safe reentrant for the LowMemMode paths below.
    try
    {
        if (WebViewImpl != nullptr)
        {
            WebViewImpl->Navigate(ref new Windows::Foundation::Uri(L"about:blank"));
        }
    }
    catch (Platform::Exception^)
    {
    }

    HideLoadingIndicator();
}

void WebView::ShowLoadingIndicator()
{
    progressRing->IsActive = true;
    progressRingBackground->Visibility = Windows::UI::Xaml::Visibility::Visible;
}

void WebView::HideLoadingIndicator()
{
    progressRing->IsActive = false;
    progressRingBackground->Visibility = Windows::UI::Xaml::Visibility::Collapsed;
}

void WebView::SetVisibility(Windows::UI::Xaml::Visibility visibility)
{
    this->Visibility = visibility;
}

bool WebView::CanGoBack::get()
{
    return WebViewImpl->CanGoBack;
}

void WebView::OnNavigationStarting(Windows::UI::Xaml::Controls::WebView^ sender, Windows::UI::Xaml::Controls::WebViewNavigationStartingEventArgs^ e)
{
    auto profile = Windows::Networking::Connectivity::NetworkInformation::GetInternetConnectionProfile();
    if (profile == nullptr ||
        profile->GetNetworkConnectivityLevel() != Windows::Networking::Connectivity::NetworkConnectivityLevel::InternetAccess)
    {
        e->Cancel = true;
        Roblox::NoInternetDialog::Show();
        return;
    }

    ShowLoadingIndicator();
    onNavigationStarting(e->Uri != nullptr ? e->Uri->ToString() : nullptr, e);

    if (e->Uri == nullptr)
    {
        return;
    }

    if (IsGameStartPath(e->Uri->Path))
    {
        Platform::String^ placeId = TryGetQueryValue(e->Uri->Query, L"placeid", 7);
        if (placeId != nullptr && !placeId->IsEmpty())
        {
            LaunchGame(
                placeId,
                TryGetQueryValue(e->Uri->Query, L"userID", 6),
                TryGetQueryValue(e->Uri->Query, L"gameInstanceId", 14),
                TryGetQueryValue(e->Uri->Query, L"accessCode", 10),
                TryGetQueryValue(e->Uri->Query, L"browserTrackerId", 16),
                nullptr);
            e->Cancel = true;
            HideLoadingIndicator();
            return;
        }
    }
    else if (IsCustomScheme(e->Uri->SchemeName))
    {
        GameParameters^ params = TryExtractSchemeGameStart(e->Uri);
        if (params != nullptr)
        {
            LaunchGame(params->placeID, params->userID, params->instanceID, params->accessCode, params->browserTrackerID, params->partyGuid);
            e->Cancel = true;
            HideLoadingIndicator();
            return;
        }
    }
}

void WebView::LaunchGame(Platform::String^ placeId, Platform::String^ userId, Platform::String^ instanceId, Platform::String^ accessCode, Platform::String^ browserTrackerId, Platform::String^ partyGuid)
{
    if (m_bridge == nullptr || placeId == nullptr || placeId->IsEmpty())
    {
        return;
    }

    std::wstring json = L"{ \"moduleId\": \"Game\", \"functionName\": \"launchGame\", \"params\": { \"placeId\": \"";
    json += placeId->Data();
    json += L"\"";
    AppendJsonString(json, L"userId", userId);
    AppendJsonString(json, L"instanceId", instanceId);
    AppendJsonString(json, L"accessCode", accessCode);
    AppendJsonString(json, L"browserTrackerId", browserTrackerId);
    AppendJsonString(json, L"partyGuid", partyGuid);
    json += L" } }";

    m_bridge->nativeCallback(ref new Platform::String(json.c_str()));
}

void WebView::OnNavigationCompleted(Windows::UI::Xaml::Controls::WebView^ sender, Windows::UI::Xaml::Controls::WebViewNavigationCompletedEventArgs^ e)
{
    HideLoadingIndicator();

    if (!e->IsSuccess && IsNetworkWebError(e->WebErrorStatus))
    {
        Roblox::NoInternetDialog::Show();
    }

    onNavigationCompleted(e->Uri != nullptr ? e->Uri->ToString() : nullptr, e);
}
