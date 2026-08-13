#pragma once

namespace Roblox
{
    namespace Services
    {
        private enum class LoginFailureReason
        {
            Unknown     = 0,
            Captcha     = 1,
            NoUserId    = -1,
            Forbidden   = 3,
        };

        private delegate void LoginSucceededHandler();
        private delegate void LoginFailedHandler(LoginFailureReason errorCode, int httpStatus);
        private delegate void LogoutSucceededHandler();
        private delegate void LogoutFailedHandler(int httpStatus);

        private ref class LoginService sealed
        {
        public:
            LoginService();

            static LoginService^ GetInstance();

            Windows::Foundation::IAsyncOperation<bool>^ BeginPlatformLoginAsync(Platform::String^ username, Platform::String^ password);

            Platform::String^ SessionToken();
            Platform::String^ AuthenticatedUserId();
            Platform::String^ AuthenticatedUserName();

            int RobuxBalance();
            void SetRobuxBalance(int value);

            Platform::String^ LastServerMessage();

            bool IsLoginInProgress();
            void SetLoginInProgress(bool value);

            event LoginSucceededHandler^ LoginSucceeded;
            event LoginFailedHandler^ LoginFailed;

            Windows::Foundation::IAsyncOperation<bool>^ LogoutAsync();

            event LogoutSucceededHandler^ LogoutSucceeded;
            event LogoutFailedHandler^ LogoutFailed;

        private:
            Windows::Web::Http::HttpClient^ m_httpClient;
            Windows::Foundation::Collections::IMap<Platform::String^, Platform::String^>^ m_cookieJar;
            Windows::UI::Core::CoreDispatcher^ m_uiDispatcher;
            Platform::String^ m_sessionToken;
            Platform::String^ m_userId;
            Platform::String^ m_userName;
            Platform::String^ m_lastServerMessage;
            bool m_loginInProgress;
            int m_robuxBalance;

            void UpdateCookiesFromResponse(Windows::Web::Http::HttpResponseMessage^ response);
            void AddCookiesToRequest(Windows::Web::Http::HttpRequestMessage^ request);
            void RunOnUiThread(Windows::UI::Core::DispatchedHandler^ handler);
            void RaiseSucceeded();
            void RaiseFailed(LoginFailureReason errorCode, int httpStatus);
            void ClearAuthStateAndCookies();
            void RaiseLogoutSucceeded();
            void RaiseLogoutFailed(int httpStatus);
        };
    }
}
