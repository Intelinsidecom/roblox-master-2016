#include "pch.h"
#include "RobloxSettings.h"

using namespace Roblox;
using namespace Platform;

RobloxSettings^ RobloxSettings::s_instance = nullptr;

RobloxSettings::RobloxSettings()
    : m_baseDomain(L"www.freblx.xyz")
    , m_baseURL(L"http://www.freblx.xyz")
    , m_baseURLWWW(L"http://www.freblx.xyz")
    , m_baseSecureURL(L"https://www.freblx.xyz")
    , m_baseApiURL(L"https://api.freblx.xyz")
    , m_deviceAppVersion(L"1.1.57.0")
    , m_apiUserAgent(L"RobloxUWP/1.1.57.0 (Windows 10)")
    , m_deviceIsTablet(true)
    , m_useLegacyUrls(true)
{
}

RobloxSettings::~RobloxSettings()
{
}

RobloxSettings^ RobloxSettings::GetInstance()
{
    if (s_instance == nullptr)
    {
        s_instance = ref new RobloxSettings();
    }
    return s_instance;
}

bool RobloxSettings::DeviceIsTablet()
{
    return m_deviceIsTablet;
}

String^ RobloxSettings::DeviceAppVersion()
{
    return m_deviceAppVersion;
}

void RobloxSettings::SetDomain(String^ newDomain)
{
    if (newDomain != nullptr)
    {
        m_baseDomain = newDomain;
        m_baseURL = L"http://" + newDomain;
        m_baseURLWWW = L"http://" + newDomain;
        m_baseSecureURL = L"https://" + newDomain;
        m_baseApiURL = L"https://api." + newDomain;
    }
}

String^ RobloxSettings::GetBaseURL()
{
    return m_baseURL;
}

String^ RobloxSettings::GetBaseURLWWW()
{
    return m_baseURLWWW;
}

String^ RobloxSettings::GetBaseSecureURL()
{
    return m_baseSecureURL;
}

String^ RobloxSettings::GetBaseApiURL()
{
    return m_baseApiURL;
}

String^ RobloxSettings::HomeURL()
{
    return m_baseSecureURL + L"/";
}

String^ RobloxSettings::GamesURL()
{
    return m_baseSecureURL + L"/games";
}

String^ RobloxSettings::CatalogURL()
{
    return m_baseSecureURL + L"/catalog/";
}

String^ RobloxSettings::CharacterURL()
{
    return m_baseSecureURL + L"/My/Character.aspx";
}

String^ RobloxSettings::InventoryURL()
{
    return m_baseSecureURL + (m_useLegacyUrls ? L"/My/Stuff.aspx" : L"/inventory");
}

String^ RobloxSettings::TradeURL()
{
    return m_baseSecureURL + L"/My/Money.aspx";
}

String^ RobloxSettings::ForumUrl()
{
    return m_baseSecureURL + L"/Forum/default.aspx";
}

String^ RobloxSettings::HelpURL()
{
    return L"https://en.help.freblx.xyz/hc/en-us";
}

String^ RobloxSettings::SettingsURL()
{
    return m_baseSecureURL + L"/my/account";
}

String^ RobloxSettings::ProfileURL()
{
    return m_baseSecureURL + (m_useLegacyUrls ? L"/User.aspx" : L"/users/profile");
}

String^ RobloxSettings::MessagesURL()
{
    return m_baseSecureURL + (m_useLegacyUrls ? L"/my/messages/#!/inbox" : L"/inbox");
}

String^ RobloxSettings::GroupsURL()
{
    return m_baseSecureURL + (m_useLegacyUrls ? L"/My/Groups.aspx" : L"/my-groups");
}

String^ RobloxSettings::LeaderboardsURL()
{
    return m_baseSecureURL + L"/leaderboards";
}

String^ RobloxSettings::FriendsURL()
{
    return m_baseSecureURL + (m_useLegacyUrls ? L"/friends.aspx" : L"/friends");
}

String^ RobloxSettings::SearchUsersURL(String^ term)
{
    return m_baseURL + L"/users/search?keyword=" + term;
}

String^ RobloxSettings::SearchGamesURL(String^ q)
{
    return m_baseURL + L"/games/?Keyword=" + q;
}

String^ RobloxSettings::LoginURL(String^ username, String^ password)
{
    return m_baseApiURL + L"/login/v1?username=" + username + L"&password=" + password;
}

String^ RobloxSettings::SignupURL()
{
    return m_baseSecureURL + L"/signup";
}

String^ RobloxSettings::SignupV1URL()
{
    return m_baseApiURL + L"/signup/v1";
}

String^ RobloxSettings::UsernameValidationURL(String^ username)
{
    return m_baseApiURL + L"/signup/is-username-valid?username=" + username;
}

String^ RobloxSettings::PasswordValidationURL(String^ username, String^ password)
{
    return m_baseApiURL + L"/signup/is-password-valid?username=" + username + L"&password=" + password;
}

String^ RobloxSettings::UsernameSuggestionURL(String^ username)
{
    return m_baseApiURL + L"/UserCheck/getrecommendedusername?usernameToTry=" + username;
}

String^ RobloxSettings::LogoutURL()
{
    return m_baseApiURL + L"/logout";
}

String^ RobloxSettings::CaptchaURL()
{
    return m_baseApiURL + L"/mobile-captcha";
}

String^ RobloxSettings::CaptchaSolvedURL()
{
    return m_baseApiURL + L"/mobile-captcha-solved";
}

String^ RobloxSettings::LoginCaptchaValidateURL()
{
    return m_baseApiURL + L"/captcha/validate/login";
}

String^ RobloxSettings::SignupCaptchaValidateURL()
{
    return m_baseApiURL + L"/captcha/validate/signup";
}

String^ RobloxSettings::InitializeDeviceURL()
{
    return m_baseApiURL + L"/device/initialize";
}

String^ RobloxSettings::AccountInfoApiURL()
{
    return m_baseApiURL + L"/users/account-info";
}

String^ RobloxSettings::BalanceApiURL()
{
    return m_baseApiURL + L"/my/balance";
}

String^ RobloxSettings::BlogURL()
{
    return L"http://blog.roblox.com/";
}

String^ RobloxSettings::UpgradeCheckURL()
{
    return m_baseApiURL + L"/mobileapi/check-app-version?appVersion=AppUWPV1.1.57";
}

String^ RobloxSettings::AppStoreLaunchURL()
{
    return L"ms-windows-store://pdp?productid=9NBLGGG5M842";
}

String^ RobloxSettings::AppStoreListingURL()
{
    return L"https://www.microsoft.com/store/apps/9NBLGGG5M842";
}

String^ RobloxSettings::AppStoreUpdatesURL()
{
    return L"ms-windows-store://review/?productid=9NBLGGG5M842";
}

String^ RobloxSettings::PurchaseRobuxURL()
{
    return m_baseSecureURL + L"/upgrades/robux";
}

String^ RobloxSettings::PurchaseRobuxV2URL()
{
    return m_baseApiURL + L"/purchase/robux";
}

String^ RobloxSettings::PurchaseBCURL()
{
    return L"ms-windows-store://downloadsandupdates";
}

String^ RobloxSettings::StoreValidatePurchaseURL(String^ productID)
{
    return m_baseApiURL + L"/windows/v1/validate-purchase?productId=" + productID;
}

String^ RobloxSettings::StoreReportPurchaseURL(String^ transactionID)
{
    return m_baseApiURL + L"/windows/v1/report-purchase?transactionIds[0]=" + transactionID;
}

String^ RobloxSettings::AnalyticsEphemeralURL(String^ apiKey, String^ counterName, String^ amount)
{
    return L"https://ephemeralcountersoapi.freblx.xyz/v1.1/Counters/Increment/?apiKey=" + apiKey + L"&counterName=" + counterName + L"&amount=" + amount;
}

String^ RobloxSettings::AnalyticsInfluxV2URL(String^ serverURL, String^ database, String^ user, String^ password, String^ timePrecisionID)
{
    return serverURL + L"/influx/v2?db=" + database + L"&u=" + user + L"&p=" + password + L"&precision=" + timePrecisionID;
}

String^ RobloxSettings::ApiUserAgent()
{
    return m_apiUserAgent;
}
