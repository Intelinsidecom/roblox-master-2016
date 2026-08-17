#include "pch.h"
#include "SignupService.h"
#include "..\\Roblox\\RobloxSettings.h"

using namespace Roblox::Services;
using namespace Windows::Foundation;
using namespace Windows::Foundation::Collections;
using namespace Windows::Web::Http;
using namespace Windows::Data::Json;
using namespace Platform;
using namespace concurrency;

SignupService::SignupService()
    : isSignupInProgress(false)
{
    httpClient = ref new HttpClient();
    cookieJar = ref new Platform::Collections::Map<String^, String^>();
}

void SignupService::ParseSingleCookie(const std::wstring& cookieStr)
{
    size_t equalPos = cookieStr.find(L'=');
    if (equalPos == std::wstring::npos) return;

    std::wstring name = cookieStr.substr(0, equalPos);
    std::wstring value = cookieStr.substr(equalPos + 1);

    size_t start = name.find_first_not_of(L" \t\r\n");
    if (start != std::wstring::npos) name = name.substr(start);
    size_t end = name.find_last_not_of(L" \t\r\n");
    if (end != std::wstring::npos) name = name.substr(0, end + 1);

    start = value.find_first_not_of(L" \t\r\n");
    if (start != std::wstring::npos) value = value.substr(start);
    end = value.find_last_not_of(L" \t\r\n");
    if (end != std::wstring::npos) value = value.substr(0, end + 1);

    if (name.empty()) return;

    Platform::String^ nameStr = ref new Platform::String(name.c_str());
    Platform::String^ valueStr = ref new Platform::String(value.c_str());

    cookieJar->Insert(nameStr, valueStr);

    if (nameStr->Equals("X-CSRF-TOKEN"))
    {
        csrfToken = valueStr;
    }
}

void SignupService::UpdateCookiesFromResponse(HttpResponseMessage^ response)
{
    if (!response->Headers->HasKey("Set-Cookie")) return;

    String^ raw = response->Headers->Lookup("Set-Cookie");
    if (raw == nullptr || raw->IsEmpty()) return;

    std::wstring combined(raw->Data());

    size_t pos = 0;
    while (pos < combined.size())
    {
        size_t nextCookie = std::wstring::npos;
        size_t searchPos = pos;
        while (searchPos < combined.size())
        {
            size_t commaPos = combined.find(L", ", searchPos);
            if (commaPos == std::wstring::npos) break;

            size_t afterComma = commaPos + 2;
            if (afterComma < combined.size())
            {
                wchar_t c = combined[afterComma];
                if ((c >= L'A' && c <= L'Z') || (c >= L'a' && c <= L'z') ||
                    (c >= L'0' && c <= L'9') || c == L'.' || c == L'_')
                {
                    nextCookie = commaPos;
                    break;
                }
            }
            searchPos = commaPos + 1;
        }

        std::wstring entry;
        if (nextCookie != std::wstring::npos)
        {
            entry = combined.substr(pos, nextCookie - pos);
            pos = nextCookie + 2;
        }
        else
        {
            entry = combined.substr(pos);
            pos = combined.size();
        }

        size_t start = entry.find_first_not_of(L" \t\r\n");
        if (start == std::wstring::npos) continue;
        entry = entry.substr(start);
        size_t end2 = entry.find_last_not_of(L" \t\r\n");
        if (end2 != std::wstring::npos) entry = entry.substr(0, end2 + 1);

        size_t semi = entry.find(L';');
        if (semi != std::wstring::npos)
            entry = entry.substr(0, semi);

        ParseSingleCookie(entry);
    }
}

void SignupService::AddCookiesToRequest(HttpRequestMessage^ request)
{
    String^ cookieString = "";
    for (auto pair : cookieJar)
    {
        cookieString += pair->Key + "=" + pair->Value + "; ";
    }
    if (cookieString->Length() > 0)
    {
        request->Headers->Append("Cookie", cookieString);
    }

    if (csrfToken != nullptr && !csrfToken->IsEmpty())
    {
        request->Headers->Append("X-CSRF-TOKEN", csrfToken);
    }
}

IAsyncOperation<String^>^ SignupService::ValidateUsernameAsync(String^ username)
{
    return create_async([this, username]() -> String^
    {
        try
        {
            String^ url = Roblox::RobloxSettings::GetInstance()->UsernameValidationURL(Uri::EscapeComponent(username));
            HttpRequestMessage^ request = ref new HttpRequestMessage(HttpMethod::Get, ref new Uri(url));
            AddCookiesToRequest(request);

            HttpResponseMessage^ response = create_task(httpClient->SendRequestAsync(request)).get();
            UpdateCookiesFromResponse(response);

            if (response->StatusCode == HttpStatusCode::Ok)
            {
                String^ content = create_task(response->Content->ReadAsStringAsync()).get();
                return content;
            }
            return nullptr;
        }
        catch (Exception^ ex)
        {
            return nullptr;
        }
    });
}

IAsyncOperation<String^>^ SignupService::ValidatePasswordAsync(String^ password, String^ username)
{
    return create_async([this, password, username]() -> String^
    {
        try
        {
            String^ url = Roblox::RobloxSettings::GetInstance()->PasswordValidationURL(Uri::EscapeComponent(username), Uri::EscapeComponent(password));
            HttpRequestMessage^ request = ref new HttpRequestMessage(HttpMethod::Get, ref new Uri(url));
            AddCookiesToRequest(request);

            HttpResponseMessage^ response = create_task(httpClient->SendRequestAsync(request)).get();
            UpdateCookiesFromResponse(response);

            if (response->StatusCode == HttpStatusCode::Ok)
            {
                String^ content = create_task(response->Content->ReadAsStringAsync()).get();
                return content;
            }
            return nullptr;
        }
        catch (Exception^ ex)
        {
            return nullptr;
        }
    });
}

IAsyncOperation<String^>^ SignupService::GetRecommendedUsernameAsync(String^ usernameToTry)
{
    return create_async([this, usernameToTry]() -> String^
    {
        try
        {
            String^ url = Roblox::RobloxSettings::GetInstance()->UsernameSuggestionURL(Uri::EscapeComponent(usernameToTry));
            HttpRequestMessage^ request = ref new HttpRequestMessage(HttpMethod::Get, ref new Uri(url));
            AddCookiesToRequest(request);

            HttpResponseMessage^ response = create_task(httpClient->SendRequestAsync(request)).get();
            UpdateCookiesFromResponse(response);

            if (response->StatusCode == HttpStatusCode::Ok)
            {
                String^ content = create_task(response->Content->ReadAsStringAsync()).get();
                return content;
            }
            return nullptr;
        }
        catch (Exception^ ex)
        {
            return nullptr;
        }
    });
}

IAsyncOperation<String^>^ SignupService::BeginPlatformSignupAsync(String^ username, String^ password, String^ birthday, String^ gender)
{
    return create_async([this, username, password, birthday, gender]() -> String^
    {
        if (isSignupInProgress)
        {
            return nullptr;
        }

        isSignupInProgress = true;

        try
        {
            String^ url = Roblox::RobloxSettings::GetInstance()->SignupV1URL();
            HttpRequestMessage^ request = ref new HttpRequestMessage(HttpMethod::Post, ref new Uri(url));

            String^ formData = "username=" + Uri::EscapeComponent(username) +
                             "&password=" + Uri::EscapeComponent(password) +
                             "&birthday=" + Uri::EscapeComponent(birthday) +
                             "&gender=" + Uri::EscapeComponent(gender);

            request->Content = ref new HttpStringContent(formData);
            request->Content->Headers->ContentType = ref new Windows::Web::Http::Headers::HttpMediaTypeHeaderValue("application/x-www-form-urlencoded");

            AddCookiesToRequest(request);

            HttpResponseMessage^ response = create_task(httpClient->SendRequestAsync(request)).get();
            UpdateCookiesFromResponse(response);

            isSignupInProgress = false;

            if (response->StatusCode == HttpStatusCode::Ok)
            {
                String^ content = create_task(response->Content->ReadAsStringAsync()).get();
                return content;
            }
            return nullptr;
        }
        catch (Exception^ ex)
        {
            isSignupInProgress = false;
            return nullptr;
        }
    });
}

IAsyncOperation<String^>^ SignupService::BeginPlatformSignupWithCaptchaAsync(String^ username, String^ password, String^ birthday, String^ gender, String^ captchaToken, String^ captchaAnswer)
{
    return create_async([this, username, password, birthday, gender, captchaToken, captchaAnswer]() -> String^
    {
        if (isSignupInProgress)
        {
            return nullptr;
        }
        isSignupInProgress = true;
        try
        {
            String^ url = Roblox::RobloxSettings::GetInstance()->SignupCaptchaValidateURL();
            HttpRequestMessage^ request = ref new HttpRequestMessage(HttpMethod::Post, ref new Uri(url));

            String^ formData =
                "username=" + Uri::EscapeComponent(username) +
                "&birthday=" + Uri::EscapeComponent(birthday) +
                "&gender=" + Uri::EscapeComponent(gender) +
                "&recaptcha_challenge_field=" + Uri::EscapeComponent(captchaToken) +
                "&recaptcha_response_field=" + Uri::EscapeComponent(captchaAnswer);

            request->Content = ref new HttpStringContent(formData);
            request->Content->Headers->ContentType =
                ref new Windows::Web::Http::Headers::HttpMediaTypeHeaderValue(
                    "application/x-www-form-urlencoded");

            AddCookiesToRequest(request);

            HttpResponseMessage^ response = create_task(httpClient->SendRequestAsync(request)).get();
            UpdateCookiesFromResponse(response);

            isSignupInProgress = false;

            if (response->StatusCode == HttpStatusCode::Ok)
            {
                String^ content = create_task(response->Content->ReadAsStringAsync()).get();
                return content;
            }
            return nullptr;
        }
        catch (Exception^ ex)
        {
            isSignupInProgress = false;
            return nullptr;
        }
    });
}

IAsyncOperation<String^>^ SignupService::AcquireCaptchaTokenAsync()
{
    return create_async([this]() -> String^
    {
        try
        {
            String^ url = Roblox::RobloxSettings::GetInstance()->CaptchaURL();
            HttpRequestMessage^ request =
                ref new HttpRequestMessage(HttpMethod::Get, ref new Uri(url));
            AddCookiesToRequest(request);
            HttpResponseMessage^ response =
                create_task(httpClient->SendRequestAsync(request)).get();
            UpdateCookiesFromResponse(response);
            if (response->StatusCode == HttpStatusCode::Ok)
            {
                String^ body = create_task(response->Content->ReadAsStringAsync()).get();
                if (body != nullptr && !body->IsEmpty())
                {
                    try
                    {
                        JsonObject^ json = JsonObject::Parse(body);
                        if (json->HasKey("token"))
                        {
                            return json->GetNamedString("token");
                        }
                        if (json->HasKey("captchaToken"))
                        {
                            return json->GetNamedString("captchaToken");
                        }
                    }
                    catch (Platform::Exception^)
                    {
                    }
                    return body;
                }
            }
            return nullptr;
        }
        catch (Exception^)
        {
            return nullptr;
        }
    });
}

IAsyncOperation<bool>^ SignupService::BeginAuthorizationAsync()
{
    return create_async([this]() -> bool
    {
        try
        {
            String^ url = Roblox::RobloxSettings::GetInstance()->GetBaseApiURL() + "/auth/begin";
            HttpRequestMessage^ request =
                ref new HttpRequestMessage(HttpMethod::Post, ref new Uri(url));
            AddCookiesToRequest(request);
            HttpResponseMessage^ response =
                create_task(httpClient->SendRequestAsync(request)).get();
            UpdateCookiesFromResponse(response);
            return response->StatusCode == HttpStatusCode::Ok;
        }
        catch (Exception^)
        {
            return false;
        }
    });
}

IAsyncOperation<bool>^ SignupService::ServiceLoginAuthAsync(String^ username, String^ password)
{
    return create_async([this, username, password]() -> bool
    {
        try
        {
            String^ url = Roblox::RobloxSettings::GetInstance()->GetBaseApiURL() + "/accounts/serviceloginauth";
            HttpRequestMessage^ request =
                ref new HttpRequestMessage(HttpMethod::Post, ref new Uri(url));
            String^ formData = "username=" + Uri::EscapeComponent(username) +
                             "&password=" + Uri::EscapeComponent(password);
            request->Content = ref new HttpStringContent(formData);
            request->Content->Headers->ContentType =
                ref new Windows::Web::Http::Headers::HttpMediaTypeHeaderValue("application/x-www-form-urlencoded");
            AddCookiesToRequest(request);
            HttpResponseMessage^ response =
                create_task(httpClient->SendRequestAsync(request)).get();
            UpdateCookiesFromResponse(response);
            return response->StatusCode == HttpStatusCode::Ok;
        }
        catch (Exception^)
        {
            return false;
        }
    });
}

IAsyncOperation<String^>^ SignupService::IssueAuthSubTokenAsync()
{
    return create_async([this]() -> String^
    {
        try
        {
            String^ url = Roblox::RobloxSettings::GetInstance()->GetBaseApiURL() + "/issue_auth_sub_token";
            HttpRequestMessage^ request =
                ref new HttpRequestMessage(HttpMethod::Post, ref new Uri(url));
            AddCookiesToRequest(request);
            HttpResponseMessage^ response =
                create_task(httpClient->SendRequestAsync(request)).get();
            UpdateCookiesFromResponse(response);
            if (response->StatusCode == HttpStatusCode::Ok)
            {
                return create_task(response->Content->ReadAsStringAsync()).get();
            }
            return nullptr;
        }
        catch (Exception^)
        {
            return nullptr;
        }
    });
}

IAsyncOperation<bool>^ SignupService::AuthSubRequestAsync(String^ token)
{
    return create_async([this, token]() -> bool
    {
        try
        {
            String^ url = Roblox::RobloxSettings::GetInstance()->GetBaseApiURL() + "/auth_sub_request?token=" + Uri::EscapeComponent(token);
            HttpRequestMessage^ request =
                ref new HttpRequestMessage(HttpMethod::Post, ref new Uri(url));
            AddCookiesToRequest(request);
            HttpResponseMessage^ response =
                create_task(httpClient->SendRequestAsync(request)).get();
            UpdateCookiesFromResponse(response);
            return response->StatusCode == HttpStatusCode::Ok;
        }
        catch (Exception^)
        {
            return false;
        }
    });
}

void SignupService::SetCookie(String^ name, String^ value)
{
    cookieJar->Insert(name, value);
}

String^ SignupService::GetCookie(String^ name)
{
    if (cookieJar->HasKey(name))
    {
        return cookieJar->Lookup(name);
    }
    return nullptr;
}

void SignupService::DeleteCookie(String^ name)
{
    if (cookieJar->HasKey(name))
    {
        cookieJar->Remove(name);
    }
}

IMap<String^, String^>^ SignupService::GetAllCookies()
{
    return cookieJar;
}

void SignupService::ClearAllCookies()
{
    cookieJar->Clear();
    csrfToken = nullptr;
    sessionToken = nullptr;
}
