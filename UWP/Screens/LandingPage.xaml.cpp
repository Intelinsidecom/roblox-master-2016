#include "pch.h"
#include "LandingPage.xaml.h"
#include "LoginPage.xaml.h"
#include "SignupPage.xaml.h"
#include "AppShell.xaml.h"

using namespace Roblox::Views;
using namespace Roblox;
using namespace Windows::UI::Xaml;
using namespace Windows::UI::Xaml::Controls;
using namespace Windows::UI::Xaml::Navigation;

LandingPage::LandingPage()
    : m_loginPage(nullptr)
    , m_signupPage(nullptr)
    , m_hasAuthenticated(false)
{
    InitializeComponent();

    login_button->Click  += ref new RoutedEventHandler(this, &LandingPage::OnLoginButtonClick);
    signup_button->Click += ref new RoutedEventHandler(this, &LandingPage::OnSignupButtonClick);
    playNow_button->Click += ref new RoutedEventHandler(this, &LandingPage::OnPlayNowButtonClick);

    if (txtVersion != nullptr)
    {
        txtVersion->Text = L"2.238.73406";
    }
}

void LandingPage::OnNavigatedTo(NavigationEventArgs^ e)
{
    Page::OnNavigatedTo(e);
}

void LandingPage::OnLoginButtonClick(Platform::Object^ sender, Windows::UI::Xaml::RoutedEventArgs^ e)
{
    ShowLoginDialog();
}

void LandingPage::OnSignupButtonClick(Platform::Object^ sender, Windows::UI::Xaml::RoutedEventArgs^ e)
{
    ShowSignupDialog();
}

void LandingPage::OnPlayNowButtonClick(Platform::Object^ sender, Windows::UI::Xaml::RoutedEventArgs^ e)
{
}

void LandingPage::ShowLoginDialog()
{
    if (m_loginPage != nullptr)
    {
        m_loginPage->closeLandingPageHandler = nullptr;
    }
    m_loginPage = ref new LoginPage();
    m_loginPage->closeLandingPageHandler =
        ref new Roblox::CloseLandingPageShowAppShell(this, &LandingPage::OnCloseLandingPageShowAppShell);

    m_hasAuthenticated = false;
    m_loginPage->ShowAsync();
}

void LandingPage::ShowSignupDialog()
{
    if (m_signupPage != nullptr)
    {
        m_signupPage->closeLandingPageHandler = nullptr;
    }
    m_signupPage = ref new SignupPage();
    m_signupPage->closeLandingPageHandler =
        ref new Roblox::CloseLandingPageShowAppShell(this, &LandingPage::OnCloseLandingPageShowAppShell);

    m_hasAuthenticated = false;
    m_signupPage->ShowAsync();
}

void LandingPage::OnCloseLandingPageShowAppShell()
{
    if (m_hasAuthenticated) return;
    m_hasAuthenticated = true;

    auto frame = this->Frame;
    if (frame == nullptr) return;
    frame->Content = ref new Roblox::AppShell();
}
