#include "pch.h"
#include "SignupService.h"

using namespace Roblox::Services;
using namespace Windows::Foundation;
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

String^ SignupService::GetBaseUrl()
{
    return "https://api.freblx.xyz";
}

void SignupService::UpdateCookiesFromResponse(HttpResponseMessage^ response)
{
    if (response->Headers->HasKey("Set-Cookie"))
    {
        String^ cookieHeader = response->Headers->Lookup("Set-Cookie");
        std::wstring cookieStr(cookieHeader->Data());
        
        size_t pos = 0;
        size_t semicolonPos;
        while ((semicolonPos = cookieStr.find(';', pos)) != std::wstring::npos)
        {
            std::wstring cookie = cookieStr.substr(pos, semicolonPos - pos);
            
            size_t equalPos = cookie.find('=');
            if (equalPos != std::wstring::npos)
            {
                std::wstring name = cookie.substr(0, equalPos);
                std::wstring value = cookie.substr(equalPos + 1);
                
                size_t start = name.find_first_not_of(L" \t\r\n");
                if (start != std::wstring::npos) name = name.substr(start);
                size_t end = name.find_last_not_of(L" \t\r\n");
                if (end != std::wstring::npos) name = name.substr(0, end + 1);
                
                start = value.find_first_not_of(L" \t\r\n");
                if (start != std::wstring::npos) value = value.substr(start);
                end = value.find_last_not_of(L" \t\r\n");
                if (end != std::wstring::npos) value = value.substr(0, end + 1);
                
                Platform::String^ nameStr = ref new Platform::String(name.c_str());
                Platform::String^ valueStr = ref new Platform::String(value.c_str());
                
                cookieJar->Insert(nameStr, valueStr);

                if (nameStr->Equals(".ROBLOSECURITY") || nameStr->Equals("X-CSRF-TOKEN"))
                {
                    csrfToken = valueStr;
                }
            }
            pos = semicolonPos + 1;
        }
        
        if (pos < cookieStr.length())
        {
            std::wstring cookie = cookieStr.substr(pos);
            size_t equalPos = cookie.find('=');
            if (equalPos != std::wstring::npos)
            {
                std::wstring name = cookie.substr(0, equalPos);
                std::wstring value = cookie.substr(equalPos + 1);
                
                Platform::String^ nameStr = ref new Platform::String(name.c_str());
                Platform::String^ valueStr = ref new Platform::String(value.c_str());
                
                cookieJar->Insert(nameStr, valueStr);
                
                if (nameStr->Equals(".ROBLOSECURITY") || nameStr->Equals("X-CSRF-TOKEN"))
                {
                    csrfToken = valueStr;
                }
            }
        }
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
            String^ url = GetBaseUrl() + "/signup/is-username-valid?username=" + Uri::EscapeComponent(username);
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
            String^ url = GetBaseUrl() + "/signup/is-password-valid?username=" + Uri::EscapeComponent(username) + "&password=" + Uri::EscapeComponent(password);
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
            String^ url = GetBaseUrl() + "/UserCheck/getrecommendedusername?usernameToTry=" + Uri::EscapeComponent(usernameToTry);
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
            String^ url = GetBaseUrl() + "/signup/v1";
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
            String^ url = GetBaseUrl() + "/signup/captcha/validate";
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
            String^ url = GetBaseUrl() + "/captcha";
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
            String^ url = GetBaseUrl() + "/auth/begin";
            HttpRequestMessage^ request = ref new HttpRequestMessage(HttpMethod::Post, ref new Uri(url));
            AddCookiesToRequest(request);

            HttpResponseMessage^ response = create_task(httpClient->SendRequestAsync(request)).get();
            UpdateCookiesFromResponse(response);

            return response->StatusCode == HttpStatusCode::Ok;
        }
        catch (Exception^ ex)
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
            String^ url = GetBaseUrl() + "/accounts/serviceloginauth";
            HttpRequestMessage^ request = ref new HttpRequestMessage(HttpMethod::Post, ref new Uri(url));
            
            String^ formData = "username=" + Uri::EscapeComponent(username) +
                             "&password=" + Uri::EscapeComponent(password);
            
            request->Content = ref new HttpStringContent(formData);
            request->Content->Headers->ContentType = ref new Windows::Web::Http::Headers::HttpMediaTypeHeaderValue("application/x-www-form-urlencoded");
            
            AddCookiesToRequest(request);

            HttpResponseMessage^ response = create_task(httpClient->SendRequestAsync(request)).get();
            UpdateCookiesFromResponse(response);

            return response->StatusCode == HttpStatusCode::Ok;
        }
        catch (Exception^ ex)
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
            String^ url = GetBaseUrl() + "/issue_auth_sub_token";
            HttpRequestMessage^ request = ref new HttpRequestMessage(HttpMethod::Post, ref new Uri(url));
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

IAsyncOperation<bool>^ SignupService::AuthSubRequestAsync(String^ token)
{
    return create_async([this, token]() -> bool
    {
        try
        {
            String^ url = GetBaseUrl() + "/auth_sub_request?token=" + Uri::EscapeComponent(token);
            HttpRequestMessage^ request = ref new HttpRequestMessage(HttpMethod::Post, ref new Uri(url));
            AddCookiesToRequest(request);

            HttpResponseMessage^ response = create_task(httpClient->SendRequestAsync(request)).get();
            UpdateCookiesFromResponse(response);

            return response->StatusCode == HttpStatusCode::Ok;
        }
        catch (Exception^ ex)
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

void SignupService::ClearAllCookies()
{
    cookieJar->Clear();
    csrfToken = nullptr;
    sessionToken = nullptr;
}
