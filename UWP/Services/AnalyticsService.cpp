#include "pch.h"
#include "AnalyticsService.h"
#include "Roblox\robloxsettings.h"

using namespace Roblox;
using namespace Platform;
using namespace Windows::Foundation;
using namespace Windows::Web::Http;
using namespace Windows::Web::Http::Headers;
using namespace concurrency;

namespace Roblox
{
    static const wchar_t* kAnalyticsApiKey = L"76E5A40C-3AE1-4028-9F10-7C62520BD94F";
    static AnalyticsService^ g_analyticsInstance = nullptr;
}

AnalyticsService::AnalyticsService(String^ apiKey)
    : apiKey(apiKey)
{
}

AnalyticsService^ AnalyticsService::GetInstance()
{
    if (g_analyticsInstance == nullptr)
    {
        g_analyticsInstance = ref new AnalyticsService(ref new String(kAnalyticsApiKey));
    }
    return g_analyticsInstance;
}

void AnalyticsService::Initialize()
{
    if (g_analyticsInstance == nullptr)
    {
        g_analyticsInstance = ref new AnalyticsService(ref new String(kAnalyticsApiKey));
    }
}

void AnalyticsService::RaiseFatal(HRESULT hr)
{
    if (hr < 0)
    {
        throw ref new COMException(hr);
    }
}

void AnalyticsService::SendCounter(String^ counterName, int32 amount)
{
    String^ url = RobloxSettings::GetInstance()->AnalyticsEphemeralURL(
        apiKey,
        counterName,
        amount.ToString());

    auto client = ref new HttpClient();
    Uri^ requestUri = ref new Uri(url);
    HttpRequestMessage^ request = ref new HttpRequestMessage(HttpMethod::Post, requestUri);

    String^ body = "counterName=" + counterName + "&amount=" + amount.ToString();
    HttpStringContent^ content = ref new HttpStringContent(body);
    content->Headers->ContentType = ref new HttpMediaTypeHeaderValue("application/x-www-form-urlencoded");
    request->Content = content;

    create_task(client->SendRequestAsync(request))
        .then([](HttpResponseMessage^ response) -> HttpResponseMessage^
        {
            return response;
        })
        .then([](task<HttpResponseMessage^> finished)
        {
            try
            {
                HttpResponseMessage^ response = finished.get();
                (void)response;
            }
            catch (Platform::Exception^)
            {
            }
        });
}

void AnalyticsService::ReportSession(bool isCrash, String^ counterName, int32 amount)
{
    (void)isCrash;
    SendCounter(counterName, amount);
}

void AnalyticsService::ReportFocusEvent(bool gained, int32 amount)
{
    String^ focusCounter = gained
        ? ref new String(L"FocusGained")
        : ref new String(L"FocusLost");
    SendCounter(focusCounter, amount);
}
