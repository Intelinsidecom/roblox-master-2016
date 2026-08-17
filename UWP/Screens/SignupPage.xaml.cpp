#include "pch.h"
#include "SignupPage.xaml.h"
#include "CaptchaModal.xaml.h"
#include "AppShell.xaml.h"
#include "..\\Roblox\\OnCaptchaSolved.h"
#include "..\\Roblox\\AuthStorage.h"
#include "..\\Services\\LoginService.h"
#include "Components/DatePicker.xaml.h"

using namespace Roblox::Views;
using namespace Windows::UI::Xaml;
using namespace Windows::UI::Xaml::Controls;
using namespace Windows::UI::Core;
using namespace Windows::Foundation;
using namespace Windows::Data::Json;
using namespace Platform;
using namespace concurrency;

SignupPage::SignupPage()
    : m_isSignupInProgress(false)
{
    InitializeComponent();

    signupService = ref new Services::SignupService();

    signup_button->Click += ref new RoutedEventHandler(this, &SignupPage::OnSignupButtonClick);
    cancel_button->Click += ref new RoutedEventHandler(this, &SignupPage::OnCancelButtonClick);
    login_button->Click += ref new RoutedEventHandler(this, &SignupPage::OnLoginButtonClick);

    password_textbox->LostFocus += ref new RoutedEventHandler(this, &SignupPage::OnPasswordLostFocus);
    confirm_password_textbox->LostFocus += ref new RoutedEventHandler(this, &SignupPage::OnConfirmPasswordLostFocus);
    username_textbox->LostFocus += ref new RoutedEventHandler(this, &SignupPage::OnUsernameLostFocus);

    Windows::Globalization::Calendar^ calendar = ref new Windows::Globalization::Calendar();
    calendar->Year = 2000;
    calendar->Month = 1;
    calendar->Day = 1;
    birthday_picker->Date = calendar->GetDateTime();

    ClearError();
}

void SignupPage::OnBirthdayDateChanged(Platform::Object^ sender, Windows::UI::Xaml::Controls::DatePickerValueChangedEventArgs^ e)
{
    ClearError();
    ClearFieldValidation(birthday_picker);
}

void SignupPage::OnSignupButtonClick(Platform::Object^ sender, Windows::UI::Xaml::RoutedEventArgs^ e)
{
    if (m_isSignupInProgress)
    {
        ShowError("PlatformSignup is already in progress");
        return;
    }

    ClearError();

    String^ username = username_textbox->Text;
    String^ password = password_textbox->Password;
    String^ confirmPassword = confirm_password_textbox->Password;

    UsernameValidationFailureReason usernameReason = ValidateUsername(username);
    if (usernameReason != UsernameValidationFailureReason::None)
    {
        ShowError(GetUsernameValidationErrorMessage(usernameReason));
        return;
    }

    SignupClientCheckResult passwordReason = ValidatePassword(password, confirmPassword, username);
    if (passwordReason != SignupClientCheckResult::None)
    {
        ShowError(GetClientCheckErrorMessage(passwordReason));
        return;
    }

    SignupClientCheckResult genderReason = ValidateGender();
    if (genderReason != SignupClientCheckResult::None)
    {
        ShowError(GetClientCheckErrorMessage(genderReason));
        return;
    }

    SignupClientCheckResult birthdayReason = ValidateBirthday();
    if (birthdayReason != SignupClientCheckResult::None)
    {
        ShowError(GetClientCheckErrorMessage(birthdayReason));
        return;
    }

    m_isSignupInProgress = true;

    String^ birthday = GetBirthdayString();
    String^ gender = GetGenderString();

    create_task(ExecuteFullSignupFlow(username, password, birthday, gender))
        .then([this](SignupFailureReason reason)
    {
        m_isSignupInProgress = false;

        RunOnUiThread(ref new DispatchedHandler([this, reason]()
        {
            if (reason == SignupFailureReason::None)
            {
                ClearError();
            }
            else
            {
                ShowError(GetValidationErrorMessage(reason));
            }
        }));
    });
}

void SignupPage::OnCancelButtonClick(Platform::Object^ sender, Windows::UI::Xaml::RoutedEventArgs^ e)
{
    this->Hide();
}

void SignupPage::OnLoginButtonClick(Platform::Object^ sender, Windows::UI::Xaml::RoutedEventArgs^ e)
{
    this->Hide();
}

IAsyncOperation<SignupFailureReason>^ SignupPage::ExecuteFullSignupFlow(
    String^ username,
    String^ password,
    String^ birthday,
    String^ gender)
{
    return create_async([this, username, password, birthday, gender]() -> SignupFailureReason
    {
        try
        {
            String^ usernameValidation = create_task(signupService->ValidateUsernameAsync(username)).get();
            if (usernameValidation == nullptr)
            {
                m_isSignupInProgress = false;
                return SignupFailureReason::UsernameInvalid;
            }

            UsernameValidationFailureReason usernameReason = ParseUsernameValidationReason(usernameValidation);
            OnUsernameValidationResponse(usernameReason, /*statusCode*/ 200);

            if (usernameReason == UsernameValidationFailureReason::Taken)
            {
                m_isSignupInProgress = false;
                return SignupFailureReason::UsernameTaken;
            }
            if (usernameReason == UsernameValidationFailureReason::ServerUnreachable)
            {
                m_isSignupInProgress = false;
                return SignupFailureReason::UsernameInvalid;
            }
            if (usernameReason != UsernameValidationFailureReason::None)
            {
                m_isSignupInProgress = false;
                return SignupFailureReason::UsernameInvalid;
            }

            String^ passwordValidation = create_task(signupService->ValidatePasswordAsync(password, username)).get();

            bool passwordValid = false;
            if (passwordValidation != nullptr)
            {
                try
                {
                    JsonObject^ passwordJson = JsonObject::Parse(passwordValidation);
                    if (passwordJson->HasKey("IsValid"))
                    {
                        passwordValid = passwordJson->GetNamedBoolean("IsValid");
                    }
                }
                catch (Platform::Exception^)
                {
                    passwordValid = false;
                }
            }

            if (!passwordValid)
            {
                m_isSignupInProgress = false;
                return SignupFailureReason::PasswordInvalid;
            }

            String^ signupResponse = nullptr;
            bool signupSuccess = false;
            try
            {
                signupResponse = create_task(signupService->BeginPlatformSignupAsync(username, password, birthday, gender)).get();
                signupSuccess = (signupResponse != nullptr);
            }
            catch (Platform::Exception^)
            {
                signupSuccess = false;
            }

            if (!signupSuccess)
            {
                m_isSignupInProgress = false;
                if (signupResponse == nullptr)
                {
                    return SignupFailureReason::UsernameInvalid;
                }
            }

            SignupFailureReason mapped = ParseSignupFailureArray(signupResponse);
            if (mapped != SignupFailureReason::None)
            {
                m_isSignupInProgress = false;
                if (mapped == SignupFailureReason::Captcha)
                {
                    try
                    {
                        Platform::String^ token = create_task(
                            signupService->AcquireCaptchaTokenAsync()).get();
                        if (token != nullptr)
                        {
                            byte answered = PromptCaptchaAsync(token).get();
                            if (answered != 0)
                            {
                                m_isSignupInProgress = true;
                                Platform::String^ retryResp = create_task(
                                    signupService->BeginPlatformSignupWithCaptchaAsync(
                                        username, password, birthday, gender,
                                        token, nullptr)).get();
                                m_isSignupInProgress = false;
                                SignupFailureReason retryMapped =
                                    ParseSignupFailureArray(retryResp);
                                if (retryMapped == SignupFailureReason::None)
                                {
                                    return FinalizeSignupSuccess(retryResp, username);
                                }
                                return retryMapped;
                            }
                        }
                    }
                    catch (Platform::Exception^)
                    {
                    }
                    return SignupFailureReason::Captcha;
                }
                return mapped;
            }

            return FinalizeSignupSuccess(signupResponse, username);
        }
        catch (Platform::Exception^ ex)
        {
            m_isSignupInProgress = false;
            return SignupFailureReason::UsernameInvalid;
        }
    });
}

SignupFailureReason SignupPage::FinalizeSignupSuccess(String^ signupResponse, String^ username)
{
    String^ userId = nullptr;
    String^ userName = username;

    if (signupResponse != nullptr && !signupResponse->IsEmpty())
    {
        try
        {
            JsonObject^ json = JsonObject::Parse(signupResponse);
            if (json->HasKey("userId"))
            {
                JsonValue^ userIdValue = json->GetNamedValue("userId");
                if (userIdValue != nullptr)
                {
                    if (userIdValue->ValueType == JsonValueType::Number)
                    {
                        userId = userIdValue->ToString();
                    }
                    else if (userIdValue->ValueType == JsonValueType::String)
                    {
                        userId = userIdValue->GetString();
                    }
                }
            }
            if (json->HasKey("username"))
            {
                String^ parsedName = json->GetNamedString("username");
                if (parsedName != nullptr && !parsedName->IsEmpty())
                {
                    userName = parsedName;
                }
            }
        }
        catch (Platform::Exception^)
        {
        }
    }

    try
    {
        create_task(signupService->BeginAuthorizationAsync()).get();
    }
    catch (Platform::Exception^)
    {
    }

    auto loginService = Roblox::Services::LoginService::GetInstance();
    loginService->MergeCookies(signupService->GetAllCookies());

    String^ sessionCookie = loginService->SessionToken();
    if (sessionCookie == nullptr || sessionCookie->IsEmpty())
    {
        sessionCookie = signupService->GetCookie(".ROBLOSECURITY");
    }
    if (sessionCookie == nullptr || sessionCookie->IsEmpty())
    {
        sessionCookie = Roblox::AuthStorage::SessionCookie();
    }

    RunOnUiThread(ref new DispatchedHandler([this, sessionCookie, userId, userName]()
    {
        Roblox::AuthStorage::Save(sessionCookie, userId, userName);
        NavigateToHomePage();
    }));

    return SignupFailureReason::None;
}

UsernameValidationFailureReason SignupPage::ParseUsernameValidationReason(String^ jsonResponse)
{
    if (jsonResponse == nullptr || jsonResponse->IsEmpty())
    {
        return UsernameValidationFailureReason::ServerUnreachable;
    }

    JsonObject^ json;
    try
    {
        json = JsonObject::Parse(jsonResponse);
    }
    catch (Platform::Exception^)
    {
        return UsernameValidationFailureReason::ServerUnreachable;
    }

    if (json == nullptr)
    {
        return UsernameValidationFailureReason::ServerUnreachable;
    }

    if (json->HasKey("IsValid"))
    {
        bool isValid = false;
        bool gotValue = false;
        try
        {
            isValid = json->GetNamedBoolean("IsValid");
            gotValue = true;
        }
        catch (Platform::Exception^)
        {
            gotValue = false;
        }

        if (gotValue)
        {
            return isValid
                ? UsernameValidationFailureReason::None
                : UsernameValidationFailureReason::ServerUnreachable;
        }
    }

    UsernameValidationFailureReason arrayResult = TryDecodeReasonsArray(json);
    return arrayResult;
}

UsernameValidationFailureReason SignupPage::TryDecodeReasonsArray(JsonObject^ json)
{
    if (json == nullptr || !json->HasKey("reasons"))
    {
        return UsernameValidationFailureReason::ServerUnreachable;
    }

    JsonArray^ reasons = nullptr;
    try
    {
        reasons = json->GetNamedArray("reasons");
    }
    catch (Platform::Exception^)
    {
        return UsernameValidationFailureReason::ServerUnreachable;
    }

    if (reasons == nullptr)
    {
        return UsernameValidationFailureReason::ServerUnreachable;
    }

    if (reasons->Size == 0)
    {
        return UsernameValidationFailureReason::None;
    }

    for (unsigned int i = 0; i < reasons->Size; i++)
    {
        String^ entry = nullptr;
        try
        {
            entry = reasons->GetStringAt(i);
        }
        catch (Platform::Exception^)
        {
            try
            {
                JsonObject^ obj = reasons->GetObjectAt(i);
                if (obj->HasKey("Value"))
                {
                    entry = obj->GetNamedString("Value");
                }
            }
            catch (Platform::Exception^)
            {
                continue;
            }
        }

        if (entry == nullptr || entry->IsEmpty())
        {
            continue;
        }

        if (entry == "UsernameTaken" || entry == "Already_Taken")
        {
            return UsernameValidationFailureReason::Taken;
        }
        if (entry == "UsernameInvalid" || entry == "Invalid")
        {
            return UsernameValidationFailureReason::InvalidCharacters;
        }
        if (entry == "TooShort")
        {
            return UsernameValidationFailureReason::TooShort;
        }
        if (entry == "TooLong")
        {
            return UsernameValidationFailureReason::TooLong;
        }
        if (entry == "Captcha")
        {
            continue;
        }
    }

    return UsernameValidationFailureReason::None;
}

void SignupPage::OnUsernameValidationResponse(UsernameValidationFailureReason reason, int statusCode)
{
    (void)reason;
    (void)statusCode;
}

SignupFailureReason SignupPage::ParseSignupFailureArray(String^ jsonResponse)
{
    if (jsonResponse == nullptr || jsonResponse->IsEmpty())
    {
        return SignupFailureReason::None;
    }

    JsonObject^ root;
    try
    {
        root = JsonObject::Parse(jsonResponse);
    }
    catch (Platform::Exception^)
    {
        return SignupFailureReason::None;
    }

    JsonArray^ errors = nullptr;
    if (root->HasKey("reasons"))
    {
        try
        {
            errors = root->GetNamedArray("reasons");
        }
        catch (Platform::Exception^)
        {
            errors = nullptr;
        }
    }

    if (errors == nullptr || errors->Size == 0)
    {
        return SignupFailureReason::None;
    }

    static const int ReasonCount = 6;
    Platform::String^ reasonStrings[ReasonCount] =
    {
        ref new Platform::String(L"UsernameTaken"),
        ref new Platform::String(L"UsernameInvalid"),
        ref new Platform::String(L"BirthdayInvalid"),
        ref new Platform::String(L"PasswordInvalid"),
        ref new Platform::String(L"GenderInvalid"),
        ref new Platform::String(L"Captcha")
    };
    SignupFailureReason reasonValues[ReasonCount] =
    {
        SignupFailureReason::UsernameTaken,
        SignupFailureReason::UsernameInvalid,
        SignupFailureReason::BirthdayInvalid,
        SignupFailureReason::PasswordInvalid,
        SignupFailureReason::GenderInvalid,
        SignupFailureReason::Captcha
    };

    for (unsigned int i = 0; i < errors->Size; i++)
    {
        String^ entry;
        try
        {
            entry = errors->GetStringAt(i);
        }
        catch (Platform::Exception^)
        {
            try
            {
                JsonObject^ obj = errors->GetObjectAt(i);
                if (obj->HasKey("Value"))
                {
                    entry = obj->GetNamedString("Value");
                }
                else
                {
                    continue;
                }
            }
            catch (Platform::Exception^)
            {
                continue;
            }
        }

        if (entry == nullptr)
        {
            continue;
        }

        for (int r = 0; r < ReasonCount; r++)
        {
            if (entry == reasonStrings[r])
            {
                return reasonValues[r];
            }
        }
    }

    return SignupFailureReason::None;
}

UsernameValidationFailureReason SignupPage::ValidateUsername(String^ username)
{
    if (username == nullptr || username->IsEmpty())
    {
        return UsernameValidationFailureReason::Empty;
    }

    if (username->Length() < 3)
    {
        return UsernameValidationFailureReason::TooShort;
    }

    if (username->Length() > 20)
    {
        return UsernameValidationFailureReason::TooLong;
    }

    std::wstring usernameStr(username->Data());
    for (wchar_t c : usernameStr)
    {
        if (!((c >= L'A' && c <= L'Z') || (c >= L'a' && c <= L'z') || (c >= L'0' && c <= L'9') || c == L'_'))
        {
            return UsernameValidationFailureReason::InvalidCharacters;
        }
    }

    if (usernameStr.length() > 0 && (usernameStr[0] == L'_' || usernameStr[usernameStr.length() - 1] == L'_'))
    {
        return UsernameValidationFailureReason::StartsOrEndsWithUnderscore;
    }

    if (usernameStr.find(L"__") != std::wstring::npos)
    {
        return UsernameValidationFailureReason::ContainsDoubleUnderscore;
    }

    return UsernameValidationFailureReason::None;
}

SignupClientCheckResult SignupPage::ValidatePassword(String^ password, String^ confirmPassword, String^ username)
{
    if (password == nullptr || password->IsEmpty())
    {
        return SignupClientCheckResult::PasswordEmpty;
    }

    if (password->Length() < 8)
    {
        return SignupClientCheckResult::PasswordTooShort;
    }

    if (confirmPassword == nullptr || confirmPassword->IsEmpty())
    {
        return SignupClientCheckResult::PasswordConfirmEmpty;
    }

    if (!password->Equals(confirmPassword))
    {
        return SignupClientCheckResult::PasswordMismatch;
    }

    if (username != nullptr && password->Equals(username))
    {
        return SignupClientCheckResult::PasswordSameAsUsername;
    }

    return SignupClientCheckResult::None;
}

SignupClientCheckResult SignupPage::ValidatePasswordForFirstBox(String^ password, String^ username)
{
    if (password == nullptr || password->IsEmpty())
    {
        return SignupClientCheckResult::PasswordEmpty;
    }

    if (password->Length() < 8)
    {
        return SignupClientCheckResult::PasswordTooShort;
    }

    if (username != nullptr && password->Equals(username))
    {
        return SignupClientCheckResult::PasswordSameAsUsername;
    }

    return SignupClientCheckResult::None;
}

SignupClientCheckResult SignupPage::ValidateConfirmPassword(String^ password, String^ confirmPassword)
{
    if (confirmPassword == nullptr || confirmPassword->IsEmpty())
    {
        return SignupClientCheckResult::PasswordConfirmEmpty;
    }

    if (password != nullptr && !password->Equals(confirmPassword))
    {
        return SignupClientCheckResult::PasswordMismatch;
    }

    return SignupClientCheckResult::None;
}

SignupClientCheckResult SignupPage::ValidateGender()
{
    if (!male_button->IsChecked && !female_button->IsChecked)
    {
        return SignupClientCheckResult::GenderNotSelected;
    }
    return SignupClientCheckResult::None;
}

SignupClientCheckResult SignupPage::ValidateBirthday()
{
    if (birthday_picker->Date.UniversalTime == 0)
    {
        return SignupClientCheckResult::BirthdayInvalid;
    }
    return SignupClientCheckResult::None;
}

void SignupPage::ShowError(String^ message)
{
    status_display->Text = message;
    status_display->Foreground = ref new Windows::UI::Xaml::Media::SolidColorBrush(Windows::UI::Colors::Red);
}

void SignupPage::ClearError()
{
    status_display->Text = "";
}

String^ SignupPage::GetValidationErrorMessage(SignupFailureReason reason)
{
    switch (reason)
    {
    case SignupFailureReason::UsernameTaken:
        return "Your username is taken. Please select another.";
    case SignupFailureReason::UsernameInvalid:
        return "Your username is invalid. Please select another.";
    case SignupFailureReason::BirthdayInvalid:
        return "Please select a valid birthday.";
    case SignupFailureReason::PasswordInvalid:
        return "Your password is invalid. Please select another.";
    case SignupFailureReason::GenderInvalid:
        return "Please select your gender.";
    case SignupFailureReason::Captcha:
        return "Please solve the captcha to proceed.";
    case SignupFailureReason::None:
    default:
        return "An unknown error occurred - please try again.";
    }
}

String^ SignupPage::GetClientCheckErrorMessage(SignupClientCheckResult reason)
{
    switch (reason)
    {
    case SignupClientCheckResult::UsernameEmpty:
        return "You must enter a username!";
    case SignupClientCheckResult::PasswordEmpty:
        return "You must enter a password!";
    case SignupClientCheckResult::PasswordConfirmEmpty:
        return "You must confirm your password!";
    case SignupClientCheckResult::PasswordMismatch:
        return "Your passwords do not match!";
    case SignupClientCheckResult::PasswordSameAsUsername:
        return "Your password cannot be the same as your username!";
    case SignupClientCheckResult::PasswordTooShort:
        return "Password must be at least 8 characters.";
    case SignupClientCheckResult::GenderNotSelected:
        return "Please select your gender.";
    case SignupClientCheckResult::BirthdayInvalid:
        return "Please select a valid birthday.";
    case SignupClientCheckResult::None:
    default:
        return "";
    }
}

String^ SignupPage::GetUsernameValidationErrorMessage(UsernameValidationFailureReason reason)
{
    switch (reason)
    {
    case UsernameValidationFailureReason::Empty:
        return "You must enter a username!";
    case UsernameValidationFailureReason::InvalidCharacters:
        return "Only a-z, A-Z, 0-9, and _ are allowed in usernames";
    case UsernameValidationFailureReason::Taken:
        return "Your username is taken. Please select another.";
    case UsernameValidationFailureReason::StartsOrEndsWithUnderscore:
        return "Usernames cannot start or end with an underscore.";
    case UsernameValidationFailureReason::ContainsDoubleUnderscore:
        return "Usernames cannot contain a double underscore.";
    case UsernameValidationFailureReason::TooShort:
    case UsernameValidationFailureReason::TooLong:
        return "Names must be 3 to 20 characters long.";
    case UsernameValidationFailureReason::ServerUnreachable:
        return "App could not contact server - please try again.";
    case UsernameValidationFailureReason::None:
    default:
        return "";
    }
}

String^ SignupPage::GetBirthdayString()
{
    if (birthday_picker->Date.UniversalTime == 0)
    {
        return "";
    }
    
    Windows::Globalization::Calendar^ calendar = ref new Windows::Globalization::Calendar();
    calendar->SetDateTime(birthday_picker->Date);
    
    return calendar->MonthAsNumericString() + "/" + calendar->DayAsString() + "/" + calendar->YearAsString();
}

String^ SignupPage::GetGenderString()
{
    if (male_button->IsChecked)
    {
        return "Male";
    }
    else if (female_button->IsChecked)
    {
        return "Female";
    }
    return "";
}

void SignupPage::NavigateToHomePage()
{
    this->Hide();

if (closeLandingPageHandler != nullptr)
        {
            closeLandingPageHandler();
            return;
        }
    }

void SignupPage::OnPasswordLostFocus(Platform::Object^ sender, Windows::UI::Xaml::RoutedEventArgs^ e)
{
    String^ password = password_textbox->Password;
    String^ confirmPassword = confirm_password_textbox->Password;
    String^ username = username_textbox->Text;

    (void)confirmPassword;

    SignupClientCheckResult reason = ValidatePasswordForFirstBox(password, username);
    if (reason != SignupClientCheckResult::None)
    {
        SetFieldValidation(password_textbox, false);
        ShowError(GetClientCheckErrorMessage(reason));
        return;
    }

    create_task(signupService->ValidatePasswordAsync(password, username))
        .then([this](Platform::String^ response) -> void
    {
        Platform::String^ unableToContactMsg =
            L"App was unable to contact server - please check your Internet connection.";

        if (response == nullptr)
        {
            RunOnUiThread(ref new DispatchedHandler([this, unableToContactMsg]()
            {
                SetFieldValidation(password_textbox, false);
                ShowError(unableToContactMsg);
            }));
            return;
        }

        JsonObject^ json;
        bool parsedOk = false;
        bool isValid = false;
        Platform::String^ serverErrorMessage = nullptr;
        try
        {
            json = JsonObject::Parse(response);
            if (json != nullptr)
            {
                parsedOk = true;
                if (json->HasKey("IsValid"))
                {
                    isValid = json->GetNamedBoolean("IsValid");
                }
                if (json->HasKey("ErrorMessage"))
                {
                    serverErrorMessage = json->GetNamedString("ErrorMessage");
                }
            }
        }
        catch (Platform::Exception^)
        {
        }

        if (parsedOk && json->HasKey("IsValid") && isValid)
        {
            RunOnUiThread(ref new DispatchedHandler([this]()
            {
                SetFieldValidation(password_textbox, true);
                ClearError();
            }));
            return;
        }

        Platform::String^ uiMessage = unableToContactMsg;
        if (serverErrorMessage != nullptr && !serverErrorMessage->IsEmpty())
        {
            uiMessage = serverErrorMessage;
        }

        RunOnUiThread(ref new DispatchedHandler([this, uiMessage]()
        {
            SetFieldValidation(password_textbox, false);
            ShowError(uiMessage);
        }));
    });
}

void SignupPage::OnConfirmPasswordLostFocus(Platform::Object^ sender, Windows::UI::Xaml::RoutedEventArgs^ e)
{
    String^ password = password_textbox->Password;
    String^ confirmPassword = confirm_password_textbox->Password;

    SignupClientCheckResult reason = ValidateConfirmPassword(password, confirmPassword);
    if (reason != SignupClientCheckResult::None)
    {
        SetFieldValidation(confirm_password_textbox, false);
        ShowError(GetClientCheckErrorMessage(reason));
    }
    else
    {
        ClearFieldValidation(confirm_password_textbox);
        ClearError();
    }
}

void SignupPage::OnUsernameLostFocus(Platform::Object^ sender, Windows::UI::Xaml::RoutedEventArgs^ e)
{
    String^ username = username_textbox->Text;
    String^ usernameForAsync = username;

    UsernameValidationFailureReason clientReason = ValidateUsername(username);
    if (clientReason != UsernameValidationFailureReason::None)
    {
        SetFieldValidation(username_textbox, false);
        ShowError(GetUsernameValidationErrorMessage(clientReason));
        OnUsernameValidationResponse(clientReason, /*statusCode*/ 0);
        return;
    }

    ClearFieldValidation(username_textbox);
    ClearError();

    create_task(signupService->ValidateUsernameAsync(usernameForAsync))
        .then([this, usernameForAsync](Platform::String^ response) -> void
    {
        if (response == nullptr)
        {
            UsernameValidationFailureReason transportReason =
                UsernameValidationFailureReason::ServerUnreachable;
            OnUsernameValidationResponse(transportReason, 0);

            RunOnUiThread(ref new DispatchedHandler([this, transportReason]()
            {
                SetFieldValidation(username_textbox, false);
                ShowError(GetUsernameValidationErrorMessage(transportReason));
            }));
            return;
        }

        UsernameValidationFailureReason apiReason = ParseUsernameValidationReason(response);
        OnUsernameValidationResponse(apiReason, 200);

        if (apiReason == UsernameValidationFailureReason::None)
        {
            RunOnUiThread(ref new DispatchedHandler([this]()
            {
                SetFieldValidation(username_textbox, true);
                ClearError();
            }));
            return;
        }

        RunOnUiThread(ref new DispatchedHandler([this]()
        {
            SetFieldValidation(username_textbox, false);
        }));

        if (apiReason == UsernameValidationFailureReason::Taken)
        {
            create_task(signupService->GetRecommendedUsernameAsync(usernameForAsync))
                .then([this](Platform::String^ recommended) -> void
            {
                Platform::String^ suggestion = nullptr;
                if (recommended != nullptr && !recommended->IsEmpty())
                {
                    try
                    {
                        JsonObject^ json = JsonObject::Parse(recommended);
                        if (json->HasKey("Value"))
                        {
                            suggestion = json->GetNamedString("Value");
                        }
                        else if (json->HasKey("data"))
                        {
                            suggestion = json->GetNamedString("data");
                        }
                    }
                    catch (Platform::Exception^)
                    {
                        suggestion = recommended;
                    }
                }

                Platform::String^ finalSuggestion = suggestion;
                RunOnUiThread(ref new DispatchedHandler([this, finalSuggestion]()
                {
                    Platform::String^ message;
                    if (finalSuggestion != nullptr && !finalSuggestion->IsEmpty())
                    {
                        message = "That username is already taken! Try \"" + finalSuggestion + "\"";
                    }
                    else
                    {
                        message = "Your username is taken. Please select another.";
                    }
                    ShowError(message);
                }));
            });
            return;
        }

        Platform::String^ msg = GetUsernameValidationErrorMessage(apiReason);
        RunOnUiThread(ref new DispatchedHandler([this, msg]()
        {
            ShowError(msg);
        }));
    });
}

concurrency::task<byte> SignupPage::PromptCaptchaAsync(Platform::String^ captchaToken)
{
    concurrency::task_completion_event<byte> promise;
    Windows::UI::Core::CoreDispatcher^ dispatcher = this->Dispatcher;

    dispatcher->RunAsync(
        Windows::UI::Core::CoreDispatcherPriority::Normal,
        ref new DispatchedHandler([captchaToken, promise]()
    {
        auto modal = ref new Roblox::Views::CaptchaModal(0, nullptr);
        Windows::Foundation::IAsyncOperation<byte>^ asyncOp =
            modal->ShowAsync(captchaToken, nullptr);
        create_task(asyncOp).then([promise](byte answered)
        {
            promise.set(answered);
        });
    }));

    return create_task(promise);
}

void SignupPage::SetFieldValidation(Windows::UI::Xaml::Controls::Control^ control, bool isValid)
{
    if (isValid)
    {
        control->BorderBrush = ref new Windows::UI::Xaml::Media::SolidColorBrush(Windows::UI::Colors::Green);
        control->BorderThickness = Windows::UI::Xaml::Thickness(2.0);
    }
    else
    {
        control->BorderBrush = ref new Windows::UI::Xaml::Media::SolidColorBrush(Windows::UI::Colors::Red);
        control->BorderThickness = Windows::UI::Xaml::Thickness(2.0);
    }
}

void SignupPage::ClearFieldValidation(Windows::UI::Xaml::Controls::Control^ control)
{
    control->BorderBrush = ref new Windows::UI::Xaml::Media::SolidColorBrush(Windows::UI::Colors::Black);
    control->BorderThickness = Windows::UI::Xaml::Thickness(2.0);
}

void SignupPage::RunOnUiThread(Windows::UI::Core::DispatchedHandler^ handler)
{
    CoreDispatcher^ dispatcher = nullptr;

    if (this != nullptr)
    {
        dispatcher = this->Dispatcher;
    }
    if (dispatcher == nullptr)
    {
        dispatcher = Windows::UI::Xaml::Window::Current != nullptr
            ? Windows::UI::Xaml::Window::Current->Dispatcher
            : nullptr;
    }
    if (dispatcher == nullptr)
    {
        dispatcher = Windows::UI::Core::CoreWindow::GetForCurrentThread() != nullptr
            ? Windows::UI::Core::CoreWindow::GetForCurrentThread()->Dispatcher
            : nullptr;
    }
    if (dispatcher != nullptr)
    {
        dispatcher->RunAsync(CoreDispatcherPriority::Normal, handler);
    }
    else
    {
        handler->Invoke();
    }
}
