#include "pch.h"
#include "LoginPage.xaml.h"
#include "SignupPage.xaml.h"
#include "..\Services\LoginService.h"

using namespace Roblox::Views;
using namespace Roblox::Services;
using namespace Platform;
using namespace Windows::UI::Xaml;
using namespace Windows::UI::Xaml::Controls;

namespace
{
    static const Windows::UI::Color kErrorColor   = Windows::UI::ColorHelper::FromArgb(0xFF, 0xE2, 0x23, 0x1A);
    static const Windows::UI::Color kNeutralColor = Windows::UI::ColorHelper::FromArgb(0xFF, 0x75, 0x75, 0x75);
    static const Windows::UI::Color kIdleBorderColor   = Windows::UI::ColorHelper::FromArgb(0xFF, 0x00, 0x00, 0x00);
}

LoginPage::LoginPage()
    : m_loginService(ref new LoginService())
    , m_closeHandled(false)
{
    InitializeComponent();

    login_button->Click  += ref new RoutedEventHandler(this, &LoginPage::OnLoginButtonClick);
    cancel_button->Click += ref new RoutedEventHandler(this, &LoginPage::OnCancelButtonClick);
    signup_button->Click += ref new RoutedEventHandler(this, &LoginPage::OnSignupButtonClick);

    if (status_display != nullptr)
    {
        status_display->Foreground = ref new Windows::UI::Xaml::Media::SolidColorBrush(kErrorColor);
        status_display->Text = L"";
    }

    m_loginService->LoginSucceeded +=
        ref new Roblox::Services::LoginSucceededHandler(this, &LoginPage::OnLoginSucceeded);
    m_loginService->LoginFailed +=
        ref new Roblox::Services::LoginFailedHandler(this, &LoginPage::OnLoginFailed);
}

void LoginPage::OnLoginButtonClick(Platform::Object^ sender, Windows::UI::Xaml::RoutedEventArgs^ e)
{
    if (m_closeHandled) return;
    if (m_loginService->IsLoginInProgress())
    {
        if (status_display != nullptr)
        {
            status_display->Foreground = ref new Windows::UI::Xaml::Media::SolidColorBrush(kErrorColor);
            status_display->Text = L"PlatformLogin is already in progress";
        }
        return;
    }

    String^ username = username_textbox->Text;
    String^ password = password_textbox->Password;

    auto idleField = [](Windows::UI::Xaml::Controls::Control^ field)
    {
        if (field == nullptr) return;
        field->BorderBrush =
            ref new Windows::UI::Xaml::Media::SolidColorBrush(kIdleBorderColor);
    };
    idleField(username_textbox);
    idleField(password_textbox);

    if (username == nullptr || username->IsEmpty())
    {
        if (status_display != nullptr)
        {
            status_display->Foreground = ref new Windows::UI::Xaml::Media::SolidColorBrush(kErrorColor);
            status_display->Text = L"You must enter a username!";
        }
        if (username_textbox != nullptr)
        {
            username_textbox->BorderBrush =
                ref new Windows::UI::Xaml::Media::SolidColorBrush(kErrorColor);
        }
        return;
    }
    if (password == nullptr || password->IsEmpty())
    {
        if (status_display != nullptr)
        {
            status_display->Foreground = ref new Windows::UI::Xaml::Media::SolidColorBrush(kErrorColor);
            status_display->Text = L"You must enter a password!";
        }
        if (password_textbox != nullptr)
        {
            password_textbox->BorderBrush =
                ref new Windows::UI::Xaml::Media::SolidColorBrush(kErrorColor);
        }
        return;
    }

    if (status_display != nullptr)
    {
        status_display->Foreground = ref new Windows::UI::Xaml::Media::SolidColorBrush(kErrorColor);
        status_display->Text = L"";
    }

    if (login_button != nullptr)
    {
        login_button->IsEnabled = false;
    }

    m_loginService->BeginPlatformLoginAsync(username, password);

}

void LoginPage::OnCancelButtonClick(Platform::Object^ sender, Windows::UI::Xaml::RoutedEventArgs^ e)
{
    this->Hide();
}

void LoginPage::OnSignupButtonClick(Platform::Object^ sender, Windows::UI::Xaml::RoutedEventArgs^ e)
{
    this->Hide();
    auto signupDialog = ref new SignupPage();
    signupDialog->ShowAsync();
}

void LoginPage::OnLoginSucceeded()
{
    if (m_closeHandled) return;
    m_closeHandled = true;

    this->Hide();

    if (closeLandingPageHandler != nullptr)
    {
        auto handler = closeLandingPageHandler;

        Windows::UI::Core::CoreWindow^ coreWindow =
            Windows::UI::Core::CoreWindow::GetForCurrentThread();
        if (coreWindow != nullptr && coreWindow->Dispatcher != nullptr)
        {
            coreWindow->Dispatcher->RunAsync(
                Windows::UI::Core::CoreDispatcherPriority::Normal,
                ref new Windows::UI::Core::DispatchedHandler([handler]() {
                    handler->Invoke();
                }));
        }
        else
        {
            handler->Invoke();
        }
    }
}

void LoginPage::OnLoginFailed(Roblox::Services::LoginFailureReason errorCode, int httpStatus)
{
    String^ serverMessage = m_loginService->LastServerMessage();

    auto setStatus = [this](Platform::String^ text)
    {
        if (status_display == nullptr) return;
        status_display->Foreground = ref new Windows::UI::Xaml::Media::SolidColorBrush(kErrorColor);
        status_display->Text = text;
    };

    auto setNeutral = [this](Platform::String^ text)
    {
        if (status_display == nullptr) return;
        status_display->Foreground = ref new Windows::UI::Xaml::Media::SolidColorBrush(kNeutralColor);
        status_display->Text = text;
    };

    switch (errorCode)
    {
    case Roblox::Services::LoginFailureReason::Captcha:
        setStatus(L"Please solve the captcha to proceed.");
        this->Hide();
        break;

    case Roblox::Services::LoginFailureReason::NoUserId:
    case Roblox::Services::LoginFailureReason::Forbidden:
        if (serverMessage != nullptr && !serverMessage->IsEmpty())
            setStatus(serverMessage);
        else
            setStatus(L"Your username or password was incorrect. Please try again.");
        break;

    case Roblox::Services::LoginFailureReason::Unknown:
    default:
        if (serverMessage != nullptr && !serverMessage->IsEmpty())
        {
            setStatus(serverMessage);
        }
        else if (httpStatus == 400)
        {
            setStatus(L"Your username or password was incorrect. Please try again.");
        }
        else if (httpStatus == 0)
        {
            setNeutral(L"App was unable to contact server - please check your Internet connection.");
        }
        else
        {
            setStatus(L"Login failed (status " + httpStatus.ToString() + L")");
        }
        break;
    }

    if (login_button != nullptr)
    {
        login_button->IsEnabled = true;
    }

    m_loginService->SetLoginInProgress(false);
    m_closeHandled = false;
}
