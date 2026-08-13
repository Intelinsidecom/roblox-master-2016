#pragma once

namespace Roblox
{
    namespace Services
    {
        private ref class SignupService sealed
        {
        public:
            SignupService();

            Windows::Foundation::IAsyncOperation<Platform::String^>^ ValidateUsernameAsync(Platform::String^ username);
            Windows::Foundation::IAsyncOperation<Platform::String^>^ ValidatePasswordAsync(Platform::String^ password, Platform::String^ username);
            Windows::Foundation::IAsyncOperation<Platform::String^>^ GetRecommendedUsernameAsync(Platform::String^ usernameToTry);
            Windows::Foundation::IAsyncOperation<Platform::String^>^ BeginPlatformSignupAsync(Platform::String^ username, Platform::String^ password, Platform::String^ birthday, Platform::String^ gender);
            Windows::Foundation::IAsyncOperation<Platform::String^>^ BeginPlatformSignupWithCaptchaAsync(Platform::String^ username, Platform::String^ password, Platform::String^ birthday, Platform::String^ gender, Platform::String^ captchaToken, Platform::String^ captchaAnswer);
            Windows::Foundation::IAsyncOperation<Platform::String^>^ AcquireCaptchaTokenAsync();
            Windows::Foundation::IAsyncOperation<bool>^ BeginAuthorizationAsync();
            Windows::Foundation::IAsyncOperation<bool>^ ServiceLoginAuthAsync(Platform::String^ username, Platform::String^ password);
            Windows::Foundation::IAsyncOperation<Platform::String^>^ IssueAuthSubTokenAsync();
            Windows::Foundation::IAsyncOperation<bool>^ AuthSubRequestAsync(Platform::String^ token);
            void SetCookie(Platform::String^ name, Platform::String^ value);
            Platform::String^ GetCookie(Platform::String^ name);
            void DeleteCookie(Platform::String^ name);
            void ClearAllCookies();

        private:
            Windows::Web::Http::HttpClient^ httpClient;
            Windows::Foundation::Collections::IMap<Platform::String^, Platform::String^>^ cookieJar;
            Platform::String^ csrfToken;
            Platform::String^ sessionToken;
            bool isSignupInProgress;

            Platform::String^ GetBaseUrl();
            void UpdateCookiesFromResponse(Windows::Web::Http::HttpResponseMessage^ response);
            void AddCookiesToRequest(Windows::Web::Http::HttpRequestMessage^ request);
        };
    }
}
