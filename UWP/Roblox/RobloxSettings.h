#pragma once

#include <string>

namespace Roblox
{
    public ref class RobloxSettings sealed
    {
    public:
        static RobloxSettings^ GetInstance();
        
        RobloxSettings();
        
        bool DeviceIsTablet();
        Platform::String^ DeviceAppVersion();
        void SetDomain(Platform::String^ newDomain);
        Platform::String^ GetBaseURL();
        Platform::String^ GetBaseURLWWW();
        Platform::String^ GetBaseSecureURL();
        Platform::String^ GetBaseApiURL();
        Platform::String^ HomeURL();
        Platform::String^ GamesURL();
        Platform::String^ CatalogURL();
        Platform::String^ CharacterURL();
        Platform::String^ InventoryURL();
        Platform::String^ TradeURL();
        Platform::String^ ForumUrl();
        Platform::String^ BlogURL();
        Platform::String^ HelpURL();
        Platform::String^ SettingsURL();
        Platform::String^ ProfileURL();
        Platform::String^ MessagesURL();
        Platform::String^ GroupsURL();
        Platform::String^ LeaderboardsURL();
        Platform::String^ FriendsURL();
        Platform::String^ SearchUsersURL(Platform::String^ term);
        Platform::String^ SearchGamesURL(Platform::String^ q);
        Platform::String^ LoginURL(Platform::String^ username, Platform::String^ password);
        Platform::String^ SignupURL();
        Platform::String^ SignupV1URL();
        Platform::String^ UsernameValidationURL(Platform::String^ username);
        Platform::String^ PasswordValidationURL(Platform::String^ username, Platform::String^ password);
        Platform::String^ UsernameSuggestionURL(Platform::String^ username);
        Platform::String^ LogoutURL();
        Platform::String^ CaptchaURL();
        Platform::String^ CaptchaSolvedURL();
        Platform::String^ LoginCaptchaValidateURL();
        Platform::String^ SignupCaptchaValidateURL();
        Platform::String^ InitializeDeviceURL();
        Platform::String^ AccountInfoApiURL();
        Platform::String^ BalanceApiURL();
        Platform::String^ UpgradeCheckURL();
        Platform::String^ AppStoreLaunchURL();
        Platform::String^ AppStoreListingURL();
        Platform::String^ AppStoreUpdatesURL();
        Platform::String^ PurchaseRobuxURL();
        Platform::String^ PurchaseRobuxV2URL();
        Platform::String^ PurchaseBCURL();
        Platform::String^ StoreValidatePurchaseURL(Platform::String^ productID);
        Platform::String^ StoreReportPurchaseURL(Platform::String^ transactionID);
        Platform::String^ AnalyticsEphemeralURL(Platform::String^ apiKey, Platform::String^ counterName, Platform::String^ amount);
        Platform::String^ AnalyticsInfluxV2URL(Platform::String^ serverURL, Platform::String^ database, Platform::String^ user, Platform::String^ password, Platform::String^ timePrecisionID);
        Platform::String^ ApiUserAgent();
        
        virtual ~RobloxSettings();

    private:
        static RobloxSettings^ s_instance;
        Platform::String^ m_baseDomain;
        Platform::String^ m_baseURL;
        Platform::String^ m_baseURLWWW;
        Platform::String^ m_baseSecureURL;
        Platform::String^ m_baseApiURL;
        Platform::String^ m_deviceAppVersion;
        Platform::String^ m_apiUserAgent;
        bool m_deviceIsTablet;
        bool m_useLegacyUrls;
    };
}
