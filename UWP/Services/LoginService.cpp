#include "pch.h"
#include "LoginService.h"
#include "..\Roblox\RobloxSettings.h"
#include "..\Roblox\AuthStorage.h"

using namespace Roblox::Services;
using namespace Platform;
using namespace Windows::Foundation;
using namespace Windows::Foundation::Collections;
using namespace Windows::Web::Http;
using namespace Windows::Web::Http::Headers;
using namespace Windows::Data::Json;
using namespace Windows::UI::Xaml;
using namespace concurrency;

static const wchar_t* kRobloSecurityCookieName = L".ROBLOSECURITY";

namespace
{
    Windows::UI::Core::CoreDispatcher^ CaptureUiThreadDispatcher()
    {
        auto window = Windows::UI::Xaml::Window::Current;
        if (window != nullptr && window->Dispatcher != nullptr)
        {
            return window->Dispatcher;
        }
        auto coreWindow = Windows::UI::Core::CoreWindow::GetForCurrentThread();
        if (coreWindow != nullptr) return coreWindow->Dispatcher;
        return nullptr;
    }
}

namespace
{
    LoginService^ g_loginInstance = nullptr;
}

LoginService^ LoginService::GetInstance()
{
    if (g_loginInstance == nullptr)
    {
        g_loginInstance = ref new LoginService();
    }
    return g_loginInstance;
}

LoginService::LoginService()
    : m_httpClient(ref new HttpClient())
    , m_cookieJar(ref new Platform::Collections::Map<String^, String^>())
    , m_uiDispatcher(CaptureUiThreadDispatcher())
    , m_sessionToken(nullptr)
    , m_userId(nullptr)
    , m_userName(nullptr)
    , m_lastServerMessage(nullptr)
    , m_loginInProgress(false)
    , m_robuxBalance(0)
{
    m_httpClient->DefaultRequestHeaders->UserAgent->ParseAdd(
        Roblox::RobloxSettings::GetInstance()->ApiUserAgent());

    if (m_uiDispatcher == nullptr)
    {
        m_uiDispatcher = CaptureUiThreadDispatcher();
    }
}

void LoginService::UpdateCookiesFromResponse(HttpResponseMessage^ response)
{
    if (!response->Headers->HasKey(L"Set-Cookie")) return;
    auto cookies = response->Headers->Lookup(L"Set-Cookie");
    if (cookies == nullptr) return;

    auto raw = cookies->Data();
    if (raw == nullptr || raw[0] == L'\0') return;

    std::wstring cookieStr(raw);

    size_t start = 0;
    while (start < cookieStr.size())
    {
        auto end = cookieStr.find(L';', start);
        if (end == std::wstring::npos) end = cookieStr.size();
        auto seg = cookieStr.substr(start, end - start);

        auto eq = seg.find(L'=');
        if (eq != std::wstring::npos)
        {
            auto name = seg.substr(0, eq);
            auto value = seg.substr(eq + 1);
            while (!name.empty() && (name.front() == L' ' || name.front() == L'\t')) name.erase(name.begin());
            while (!name.empty() && (name.back() == L' ' || name.back() == L'\t')) name.pop_back();
            while (!value.empty() && (value.front() == L' ' || value.front() == L'\t')) value.erase(value.begin());
            while (!value.empty() && (value.back() == L' ' || value.back() == L'\t')) value.pop_back();

            if (!name.empty())
            {
                String^ nameStr  = ref new String(name.c_str());
                String^ valueStr = ref new String(value.c_str());
                m_cookieJar->Insert(nameStr, valueStr);
                if (nameStr->Equals(ref new String(kRobloSecurityCookieName)))
                {
                    m_sessionToken = valueStr;
                }
            }
        }
        if (end >= cookieStr.size()) break;
        start = end + 1;
        while (start < cookieStr.size() && cookieStr[start] == L' ') start++;
    }
}

void LoginService::AddCookiesToRequest(HttpRequestMessage^ request)
{
    if (m_cookieJar->Size == 0) return;

    String^ cookieString = L"";
    for (auto pair : m_cookieJar)
    {
        if (cookieString->Length() > 0) cookieString += L"; ";
        cookieString += pair->Key + L"=" + pair->Value;
    }
    if (cookieString->Length() > 0)
    {
        request->Headers->Append(L"Cookie", cookieString);
    }
}

bool LoginService::IsLoginInProgress() { return m_loginInProgress; }
void LoginService::SetLoginInProgress(bool value) { m_loginInProgress = value; }

void LoginService::RunOnUiThread(Windows::UI::Core::DispatchedHandler^ handler)
{
    if (m_uiDispatcher != nullptr)
    {
        m_uiDispatcher->RunAsync(Windows::UI::Core::CoreDispatcherPriority::Normal, handler);
        return;
    }
    auto dispatcher = CaptureUiThreadDispatcher();
    if (dispatcher != nullptr)
    {
        m_uiDispatcher = dispatcher;
        m_uiDispatcher->RunAsync(Windows::UI::Core::CoreDispatcherPriority::Normal, handler);
        return;
    }
    auto window = Windows::UI::Xaml::Window::Current;
    if (window != nullptr && window->Dispatcher != nullptr)
    {
        window->Dispatcher->RunAsync(Windows::UI::Core::CoreDispatcherPriority::Normal, handler);
    }
}

String^ LoginService::SessionToken()         { return m_sessionToken; }
String^ LoginService::AuthenticatedUserId()  { return m_userId; }
String^ LoginService::AuthenticatedUserName(){ return m_userName; }
String^ LoginService::LastServerMessage()    { return m_lastServerMessage; }
int     LoginService::RobuxBalance()         { return m_robuxBalance; }
void    LoginService::SetRobuxBalance(int value) { m_robuxBalance = value; }

void LoginService::RaiseSucceeded()
{
    if (m_sessionToken != nullptr && !m_sessionToken->IsEmpty())
    {
        AuthStorage::Save(m_sessionToken, m_userId, m_userName);
    }
    LoginSucceeded();
}

void LoginService::RaiseFailed(LoginFailureReason errorCode, int httpStatus)
{
    LoginFailed(errorCode, httpStatus);
}

void LoginService::ClearAuthStateAndCookies()
{
    m_userId = nullptr;
    m_userName = nullptr;
    m_sessionToken = nullptr;
    m_robuxBalance = 0;
    m_cookieJar->Clear();
    AuthStorage::Clear();
}

void LoginService::RaiseLogoutSucceeded()
{
    LogoutSucceeded();
}

void LoginService::RaiseLogoutFailed(int httpStatus)
{
    LogoutFailed(httpStatus);
}

IAsyncOperation<bool>^ LoginService::LogoutAsync()
{
    return create_async([this]() -> bool
    {
        try
        {
            auto settings = Roblox::RobloxSettings::GetInstance();
            String^ url = settings->LogoutURL();

            auto request = ref new HttpRequestMessage(HttpMethod::Get, ref new Uri(url));

            String^ cookie = AuthStorage::SessionCookie();
            if (cookie != nullptr && !cookie->IsEmpty())
            {
                String^ cookieHeader = ref new String(kRobloSecurityCookieName) +
                                       L"=" + cookie;
                request->Headers->Append(L"Cookie", cookieHeader);
            }

            request->Headers->UserAgent->ParseAdd(
                Roblox::RobloxSettings::GetInstance()->ApiUserAgent());

            create_task(m_httpClient->SendRequestAsync(request))
                .then([this](task<HttpResponseMessage^> previousTask)
            {
                try
                {
                    HttpResponseMessage^ response = previousTask.get();
                    int statusCode = (int)response->StatusCode;

                    if (statusCode >= 200 && statusCode < 300)
                    {
                        RunOnUiThread(ref new Windows::UI::Core::DispatchedHandler(
                            [this]() {
                                ClearAuthStateAndCookies();
                                RaiseLogoutSucceeded();
                            }));
                    }
                    else
                    {
                        RunOnUiThread(ref new Windows::UI::Core::DispatchedHandler(
                            [this, statusCode]() {
                                RaiseLogoutFailed(statusCode);
                            }));
                    }
                }
                catch (Exception^)
                {
                    RunOnUiThread(ref new Windows::UI::Core::DispatchedHandler(
                        [this]() {
                            RaiseLogoutFailed(0);
                        }));
                }
            });

            return true;
        }
        catch (Exception^)
        {
            RunOnUiThread(ref new Windows::UI::Core::DispatchedHandler(
                [this]() {
                    RaiseLogoutFailed(0);
                }));
            return false;
        }
    });
}

IAsyncOperation<bool>^ LoginService::BeginPlatformLoginAsync(String^ username, String^ password)
{
    return create_async([this, username, password]() -> bool
    {
        if (m_loginInProgress)
        {
            return false;
        }
        m_loginInProgress = true;

        try
        {
            auto settings = Roblox::RobloxSettings::GetInstance();
            String^ url = settings->LoginURL(username, password);

            auto request = ref new HttpRequestMessage(HttpMethod::Post, ref new Uri(url));

            auto content = ref new HttpStringContent(L"");
            content->Headers->ContentType =
                ref new HttpMediaTypeHeaderValue(L"application/x-www-form-urlencoded");
            request->Content = content;

            AddCookiesToRequest(request);

            create_task(m_httpClient->SendRequestAsync(request))
                .then([this](task<HttpResponseMessage^> previousTask)
            {
                try
                {
                    HttpResponseMessage^ response = previousTask.get();
                    UpdateCookiesFromResponse(response);
                    int statusCode = (int)response->StatusCode;

                    if (statusCode == 200)
                    {
                        create_task(response->Content->ReadAsStringAsync())
                            .then([this, statusCode](task<String^> bodyTask)
                        {
                            try
                            {
                                String^ body = bodyTask.get();
                                if (body == nullptr || body->IsEmpty())
                                {
                                    if (m_sessionToken != nullptr &&
                                        !m_sessionToken->IsEmpty())
                                    {
                                        RunOnUiThread(ref new Windows::UI::Core::DispatchedHandler(
                                            [this]() {
                                                RaiseSucceeded();
                                                m_loginInProgress = false;
                                            }));
                                    }
                                    else
                                    {
                                        RunOnUiThread(ref new Windows::UI::Core::DispatchedHandler(
                                            [this, statusCode]() {
                                                RaiseFailed(LoginFailureReason::NoUserId, statusCode);
                                                m_loginInProgress = false;
                                            }));
                                    }
                                    return;
                                }

                                bool hasUserId = false;
                                try
                                {
                                    JsonObject^ json = JsonObject::Parse(body);

                                    if (json->HasKey(L"userId"))
                                    {
                                        m_userId = json->GetNamedString(L"userId");
                                        hasUserId = true;
                                    }
                                    if (json->HasKey(L"UserName"))
                                    {
                                        m_userName = json->GetNamedString(L"UserName");
                                    }
                                    else if (json->HasKey(L"username"))
                                    {
                                        m_userName = json->GetNamedString(L"username");
                                    }
                                }
                                catch (Platform::Exception^) {}

                                bool cookieSessionPresent =
                                    (m_sessionToken != nullptr &&
                                     !m_sessionToken->IsEmpty());

                                if (hasUserId || cookieSessionPresent)
                                {
                                    RunOnUiThread(ref new Windows::UI::Core::DispatchedHandler(
                                        [this]() {
                                            RaiseSucceeded();
                                            m_loginInProgress = false;
                                        }));
                                }
                                else
                                {
                                    RunOnUiThread(ref new Windows::UI::Core::DispatchedHandler(
                                        [this, statusCode]() {
                                            RaiseFailed(LoginFailureReason::NoUserId, statusCode);
                                            m_loginInProgress = false;
                                        }));
                                }
                            }
                            catch (Exception^)
                            {
                                bool cookieSessionPresent =
                                    (m_sessionToken != nullptr &&
                                     !m_sessionToken->IsEmpty());
                                RunOnUiThread(ref new Windows::UI::Core::DispatchedHandler(
                                    [this, statusCode, cookieSessionPresent]() {
                                        m_lastServerMessage = nullptr;
                                        if (cookieSessionPresent)
                                            RaiseSucceeded();
                                        else
                                            RaiseFailed(LoginFailureReason::NoUserId, statusCode);
                                        m_loginInProgress = false;
                                    }));
                            }
                        });
                        return;
                    }

                    if (statusCode == 403)
                    {
                        create_task(response->Content->ReadAsStringAsync())
                            .then([this, statusCode](task<String^> bodyTask)
                        {
                            try
                            {
                                String^ body = bodyTask.get();
                                String^ message = nullptr;
                                bool hasMessageKey = false;

                                if (body != nullptr && !body->IsEmpty())
                                {
                                    try
                                    {
                                        JsonObject^ json = JsonObject::Parse(body);

                                        if (json->HasKey(L"message"))
                                        {
                                            hasMessageKey = true;
                                            message = json->GetNamedString(L"message");
                                        }
                                        else if (json->HasKey(L"errors"))
                                        {
                                            auto arr = json->GetNamedArray(L"errors");
                                            if (arr != nullptr && arr->Size > 0)
                                            {
                                                auto first = arr->GetAt(0);
                                                JsonObject^ firstObj =
                                                    dynamic_cast<JsonObject^>(first);
                                                if (firstObj != nullptr &&
                                                    firstObj->HasKey(L"message"))
                                                {
                                                    hasMessageKey = true;
                                                    message =
                                                        firstObj->GetNamedString(L"message");
                                                }
                                            }
                                        }
                                    }
                                    catch (Platform::Exception^) {}
                                }

                                auto capturedMessage = message;

                                if (!hasMessageKey)
                                {
                                    RunOnUiThread(ref new Windows::UI::Core::DispatchedHandler(
                                        [this, statusCode]() {
                                            m_lastServerMessage = nullptr;
                                            RaiseFailed(LoginFailureReason::Forbidden, statusCode);
                                            m_loginInProgress = false;
                                        }));
                                    return;
                                }

                                if (message != nullptr && message->Equals(L"Captcha"))
                                {
                                    RunOnUiThread(ref new Windows::UI::Core::DispatchedHandler(
                                        [this, statusCode, capturedMessage]() {
                                            m_lastServerMessage = capturedMessage;
                                            RaiseFailed(LoginFailureReason::Captcha, statusCode);
                                            m_loginInProgress = false;
                                        }));
                                    return;
                                }

                                if (message == nullptr || message->IsEmpty())
                                {
                                    RunOnUiThread(ref new Windows::UI::Core::DispatchedHandler(
                                        [this]() {
                                            RaiseSucceeded();
                                            m_loginInProgress = false;
                                        }));
                                    return;
                                }

                                RunOnUiThread(ref new Windows::UI::Core::DispatchedHandler(
                                    [this, statusCode, capturedMessage]() {
                                        m_lastServerMessage = capturedMessage;
                                        RaiseFailed(LoginFailureReason::Forbidden, statusCode);
                                        m_loginInProgress = false;
                                    }));
                            }
                            catch (Exception^)
                            {
                                RunOnUiThread(ref new Windows::UI::Core::DispatchedHandler(
                                    [this]() {
                                        m_lastServerMessage = nullptr;
                                        RaiseSucceeded();
                                        m_loginInProgress = false;
                                    }));
                            }
                        });
                        return;
                    }

                    create_task(response->Content->ReadAsStringAsync())
                        .then([this, statusCode](task<String^> bodyTask)
                    {
                        String^ forwardedMessage = nullptr;
                        try
                        {
                            String^ body = bodyTask.get();
                            if (body != nullptr && !body->IsEmpty())
                            {
                                try
                                {
                                    JsonObject^ json = JsonObject::Parse(body);
                                    if (json->HasKey(L"message"))
                                    {
                                        forwardedMessage = json->GetNamedString(L"message");
                                    }
                                    else if (json->HasKey(L"errors"))
                                    {
                                        auto arr = json->GetNamedArray(L"errors");
                                        if (arr->Size > 0)
                                        {
                                            auto first = arr->GetAt(0);
                                            JsonObject^ firstObj = dynamic_cast<JsonObject^>(first);
                                            if (firstObj != nullptr && firstObj->HasKey(L"message"))
                                            {
                                                forwardedMessage = firstObj->GetNamedString(L"message");
                                            }
                                        }
                                    }
                                }
                                catch (Platform::Exception^) {}
                            }
                        }
                        catch (Exception^) {}

                        auto captured = forwardedMessage;
                        RunOnUiThread(ref new Windows::UI::Core::DispatchedHandler(
                            [this, statusCode, captured]() {
                                if (captured != nullptr && !captured->IsEmpty())
                                {
                                    m_lastServerMessage = captured;
                                }
                                else
                                {
                                    m_lastServerMessage = nullptr;
                                }
                                RaiseFailed(LoginFailureReason::Unknown, statusCode);
                                m_loginInProgress = false;
                            }));
                    });
                    return;
                }
                catch (Exception^)
                {
                    int transportStatus = 0;
                    RunOnUiThread(ref new Windows::UI::Core::DispatchedHandler(
                        [this, transportStatus]() {
                            m_lastServerMessage = nullptr;
                            RaiseFailed(LoginFailureReason::Unknown, transportStatus);
                            m_loginInProgress = false;
                        }));
                }
            });

            return true;
        }
        catch (Exception^)
        {
            m_loginInProgress = false;
            return false;
        }
    });
}
