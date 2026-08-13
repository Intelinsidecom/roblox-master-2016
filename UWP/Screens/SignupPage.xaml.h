#pragma once

#include "SignupPage.g.h"
#include "../Services/SignupService.h"
#include "../Roblox\CloseLandingPageShowAppShell.h"
#include "Components/DatePicker.g.h"

namespace Roblox
{
    namespace Views
    {
        private enum class UsernameValidationFailureReason
        {
            None = 0,
            Empty = 1,
            Taken = 3,
            StartsOrEndsWithUnderscore = 4,
            ContainsDoubleUnderscore = 5,
            TooShort = 6,
            TooLong = 7,
            InvalidCharacters = 8,
            ServerUnreachable = 9
        };

        private enum class SignupFailureReason
        {
            UsernameTaken = 0,
            UsernameInvalid = 1,
            BirthdayInvalid = 2,
            PasswordInvalid = 3,
            GenderInvalid = 4,
            Captcha = 100,
            None = 999
        };

        private enum class SignupClientCheckResult
        {
            None = 0,
            UsernameEmpty,
            PasswordEmpty,
            PasswordConfirmEmpty,
            PasswordMismatch,
            PasswordSameAsUsername,
            PasswordTooShort,
            GenderNotSelected,
            BirthdayInvalid
        };

        [Windows::Foundation::Metadata::WebHostHidden]
        public ref class SignupPage sealed
        {
        public:
            SignupPage();

            property Roblox::CloseLandingPageShowAppShell^ closeLandingPageHandler;

        private:
            void OnSignupButtonClick(Platform::Object^ sender, Windows::UI::Xaml::RoutedEventArgs^ e);
            void OnCancelButtonClick(Platform::Object^ sender, Windows::UI::Xaml::RoutedEventArgs^ e);
            void OnLoginButtonClick(Platform::Object^ sender, Windows::UI::Xaml::RoutedEventArgs^ e);
            void OnBirthdayDateChanged(Platform::Object^ sender, Windows::UI::Xaml::Controls::DatePickerValueChangedEventArgs^ e);
            void OnPasswordLostFocus(Platform::Object^ sender, Windows::UI::Xaml::RoutedEventArgs^ e);
            void OnConfirmPasswordLostFocus(Platform::Object^ sender, Windows::UI::Xaml::RoutedEventArgs^ e);
            void OnUsernameLostFocus(Platform::Object^ sender, Windows::UI::Xaml::RoutedEventArgs^ e);

            UsernameValidationFailureReason ValidateUsername(Platform::String^ username);
            SignupClientCheckResult ValidatePassword(Platform::String^ password, Platform::String^ confirmPassword, Platform::String^ username);
            SignupClientCheckResult ValidatePasswordForFirstBox(Platform::String^ password, Platform::String^ username);
            SignupClientCheckResult ValidateConfirmPassword(Platform::String^ password, Platform::String^ confirmPassword);
            SignupClientCheckResult ValidateGender();
            SignupClientCheckResult ValidateBirthday();

            Windows::Foundation::IAsyncOperation<SignupFailureReason>^ ExecuteFullSignupFlow();

            concurrency::task<byte> PromptCaptchaAsync(Platform::String^ captchaToken);

            UsernameValidationFailureReason ParseUsernameValidationReason(Platform::String^ jsonResponse);
            UsernameValidationFailureReason TryDecodeReasonsArray(Windows::Data::Json::JsonObject^ json);
            void OnUsernameValidationResponse(Roblox::Views::UsernameValidationFailureReason reason, int statusCode);

            SignupFailureReason ParseSignupFailureArray(Platform::String^ jsonResponse);

            void ShowError(Platform::String^ message);
            void ClearError();
            Platform::String^ GetValidationErrorMessage(SignupFailureReason reason);
            Platform::String^ GetClientCheckErrorMessage(SignupClientCheckResult reason);
            Platform::String^ GetUsernameValidationErrorMessage(UsernameValidationFailureReason reason);
            Platform::String^ GetBirthdayString();
            Platform::String^ GetGenderString();
            void NavigateToHomePage();
            void SetFieldValidation(Windows::UI::Xaml::Controls::Control^ control, bool isValid);
            void ClearFieldValidation(Windows::UI::Xaml::Controls::Control^ control);

            void RunOnUiThread(Windows::UI::Core::DispatchedHandler^ handler);

            bool m_isSignupInProgress;
            Services::SignupService^ signupService;
        };
    }
}
