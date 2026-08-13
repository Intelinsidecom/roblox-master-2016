#pragma once

#include "CaptchaModal.g.h"
#include "../Roblox/OnCaptchaSolved.h"

namespace Roblox
{
    ref class RobloxSettings;
}

namespace Roblox
{
    namespace Views
    {
        [Windows::Foundation::Metadata::WebHostHidden]
        public ref class CaptchaModal sealed
        {
        public:
            CaptchaModal(int type, Platform::String^ username);

            property Roblox::OnCaptchaSolved^ OnCaptchaSolvedHandler
            {
                Roblox::OnCaptchaSolved^ get();
                void set(Roblox::OnCaptchaSolved^ value);
            }

        private:
            void InitializeFor(Platform::String^ token, bool useWebViewFallback);
            Windows::Foundation::IAsyncOperation<byte>^ ShowAsync(Platform::String^ captchaToken, Roblox::OnCaptchaSolved^ solvedHandler);
            void CancelCaptcha();

            void OnAcceptButtonClick(Platform::Object^ sender, Windows::UI::Xaml::RoutedEventArgs^ e);
            void OnCancelButtonClick(Platform::Object^ sender, Windows::UI::Xaml::RoutedEventArgs^ e);
            void OnCloseButtonClick(Platform::Object^ sender, Windows::UI::Xaml::RoutedEventArgs^ e);
            void OnRefreshButtonClick(Platform::Object^ sender, Windows::UI::Xaml::RoutedEventArgs^ e);
            void OnTextBoxKeyDown(Platform::Object^ sender, Windows::UI::Xaml::Input::KeyRoutedEventArgs^ e);
            void OnWebViewNavigationFailed(Platform::Object^ sender,
                                           Windows::UI::Xaml::Controls::WebViewNavigationFailedEventArgs^ e);

            void RaiseSolved(byte wasCaptchaSolved);
            void RaiseCancelled();
            void RefreshImageFromToken();

            int m_type;
            Platform::String^ m_username;
            Platform::String^ _captchaToken;
            bool _useWebViewFallback;
            Roblox::RobloxSettings^ _robloxSettings;
            Roblox::OnCaptchaSolved^ m_solvedHandler;
            bool _solvedFired;
        };
    }
}