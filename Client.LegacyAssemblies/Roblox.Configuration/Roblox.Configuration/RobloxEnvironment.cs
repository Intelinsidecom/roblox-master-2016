using System;
using System.Collections.Generic;
using System.Runtime.CompilerServices;
using Roblox.Configuration.Properties;

namespace Roblox.Configuration
{
	public static class RobloxEnvironment
	{
		private static readonly string _InternalApiServicePrefix;

		private static readonly string _InternalApiServiceSuffix;

		private static readonly string _ApiServiceSuffix;

		[CompilerGenerated]
		private static readonly string _003CAbbreviation_003Ek__BackingField;

		[CompilerGenerated]
		private static readonly string _003CName_003Ek__BackingField;

		[CompilerGenerated]
		private static readonly int _003CId_003Ek__BackingField;

		[CompilerGenerated]
		private static readonly string _003CDomain_003Ek__BackingField;

		[CompilerGenerated]
		private static readonly string _003CWebsiteUrl_003Ek__BackingField;

		[CompilerGenerated]
		private static readonly string _003CCdnDomain_003Ek__BackingField;

		[CompilerGenerated]
		private static readonly string _003CChinaBaseDomain_003Ek__BackingField;

		[CompilerGenerated]
		private static readonly string _003CChinaCdnDomain_003Ek__BackingField;

		[CompilerGenerated]
		private static readonly string _003CApiGatewayUrl_003Ek__BackingField;

		[CompilerGenerated]
		private static readonly string _003CApiProxyUrl_003Ek__BackingField;

		[CompilerGenerated]
		private static readonly string _003CWebsiteHttpsUrl_003Ek__BackingField;

		[CompilerGenerated]
		private static readonly string _003CAvatarApiUrl_003Ek__BackingField;

		[CompilerGenerated]
		private static readonly string _003CInventoryApiUrl_003Ek__BackingField;

		[CompilerGenerated]
		private static readonly string _003CPublishApiUrl_003Ek__BackingField;

		[CompilerGenerated]
		private static readonly string _003CBillingApiUrl_003Ek__BackingField;

		[CompilerGenerated]
		private static readonly string _003CChatApiUrl_003Ek__BackingField;

		[CompilerGenerated]
		private static readonly string _003CDiscussionsApiUrl_003Ek__BackingField;

		[CompilerGenerated]
		private static readonly string _003CGroupsApiUrl_003Ek__BackingField;

		[CompilerGenerated]
		private static readonly string _003CDevelopApiUrl_003Ek__BackingField;

		[CompilerGenerated]
		private static readonly string _003CCatalogApiUrl_003Ek__BackingField;

		[CompilerGenerated]
		private static readonly string _003CAccountSettingsApiUrl_003Ek__BackingField;

		[CompilerGenerated]
		private static readonly string _003CAuthenticationApiUrl_003Ek__BackingField;

		[CompilerGenerated]
		private static readonly string _003CGamesApiUrl_003Ek__BackingField;

		[CompilerGenerated]
		private static readonly string _003CLocaleApiUrl_003Ek__BackingField;

		[CompilerGenerated]
		private static readonly string _003CCaptchaApiUrl_003Ek__BackingField;

		[CompilerGenerated]
		private static readonly string _003CFriendsApiUrl_003Ek__BackingField;

		[CompilerGenerated]
		private static readonly string _003CFriendsAppSiteUrl_003Ek__BackingField;

		[CompilerGenerated]
		private static readonly string _003CPointsApiUrl_003Ek__BackingField;

		[CompilerGenerated]
		private static readonly string _003CPresenceApiUrl_003Ek__BackingField;

		[CompilerGenerated]
		private static readonly string _003CBadgesApiUrl_003Ek__BackingField;

		[CompilerGenerated]
		private static readonly string _003CNotificationApiUrl_003Ek__BackingField;

		[CompilerGenerated]
		private static readonly string _003CAssetDeliveryApiUrl_003Ek__BackingField;

		[CompilerGenerated]
		private static readonly string _003CThumbnailsApiUrl_003Ek__BackingField;

		[CompilerGenerated]
		private static readonly string _003CTranslationsApiUrl_003Ek__BackingField;

		[CompilerGenerated]
		private static readonly string _003CAbTestingApiUrl_003Ek__BackingField;

		[CompilerGenerated]
		private static readonly string _003CAuthAppSiteUrl_003Ek__BackingField;

		[CompilerGenerated]
		private static readonly string _003CGameInternationalizationApiUrl_003Ek__BackingField;

		[CompilerGenerated]
		private static readonly string _003CFollowingsApiUrl_003Ek__BackingField;

		[CompilerGenerated]
		private static readonly string _003CAdsApiUrl_003Ek__BackingField;

		[CompilerGenerated]
		private static readonly string _003CSurveysApiUrl_003Ek__BackingField;

		[CompilerGenerated]
		private static readonly string _003CRatingsApiUrl_003Ek__BackingField;

		[CompilerGenerated]
		private static readonly string _003CPremiumFeaturesApiUrl_003Ek__BackingField;

		[CompilerGenerated]
		private static readonly string _003CEconomyApiUrl_003Ek__BackingField;

		[CompilerGenerated]
		private static readonly string _003CTranslationRolesApiUrl_003Ek__BackingField;

		[CompilerGenerated]
		private static readonly string _003CMetricsApiUrl_003Ek__BackingField;

		[CompilerGenerated]
		private static readonly string _003CContactsApiUrl_003Ek__BackingField;

		[CompilerGenerated]
		private static readonly string _003CMidasApiUrl_003Ek__BackingField;

		[CompilerGenerated]
		private static readonly string _003CLocalizationTablesApiUrl_003Ek__BackingField;

		[CompilerGenerated]
		private static readonly string _003CVoiceApiUrl_003Ek__BackingField;

		[CompilerGenerated]
		private static readonly string _003CTradesApiUrl_003Ek__BackingField;

		[CompilerGenerated]
		private static readonly string _003CAccountInformationApiUrl_003Ek__BackingField;

		[CompilerGenerated]
		private static readonly string _003CItemConfigurationApiUrl_003Ek__BackingField;

		[CompilerGenerated]
		private static readonly string _003CThumbnailsResizerApiUrl_003Ek__BackingField;

		[CompilerGenerated]
		private static readonly string _003CUsersApiUrl_003Ek__BackingField;

		[CompilerGenerated]
		private static readonly string _003CUniversalAppConfigurationApiUrl_003Ek__BackingField;

		[CompilerGenerated]
		private static readonly string _003CEngagementPayoutsApiUrl_003Ek__BackingField;

		[CompilerGenerated]
		private static readonly Dictionary<string, string> _003CApiSiteDomains_003Ek__BackingField;

		public static string Abbreviation
		{
			[CompilerGenerated]
			get
			{
				return _003CAbbreviation_003Ek__BackingField;
			}
		}

		public static string Name
		{
			[CompilerGenerated]
			get
			{
				return _003CName_003Ek__BackingField;
			}
		}

		public static int Id
		{
			[CompilerGenerated]
			get
			{
				return _003CId_003Ek__BackingField;
			}
		}

		public static string Domain
		{
			[CompilerGenerated]
			get
			{
				return _003CDomain_003Ek__BackingField;
			}
		}

		public static string WebsiteUrl
		{
			[CompilerGenerated]
			get
			{
				return _003CWebsiteUrl_003Ek__BackingField;
			}
		}

		public static string CdnDomain
		{
			[CompilerGenerated]
			get
			{
				return _003CCdnDomain_003Ek__BackingField;
			}
		}

		public static string ChinaBaseDomain
		{
			[CompilerGenerated]
			get
			{
				return _003CChinaBaseDomain_003Ek__BackingField;
			}
		}

		public static string ChinaCdnDomain
		{
			[CompilerGenerated]
			get
			{
				return _003CChinaCdnDomain_003Ek__BackingField;
			}
		}

		public static string ApiGatewayUrl
		{
			[CompilerGenerated]
			get
			{
				return _003CApiGatewayUrl_003Ek__BackingField;
			}
		}

		public static string ApiProxyUrl
		{
			[CompilerGenerated]
			get
			{
				return _003CApiProxyUrl_003Ek__BackingField;
			}
		}

		public static string WebsiteHttpsUrl
		{
			[CompilerGenerated]
			get
			{
				return _003CWebsiteHttpsUrl_003Ek__BackingField;
			}
		}

		public static string AvatarApiUrl
		{
			[CompilerGenerated]
			get
			{
				return _003CAvatarApiUrl_003Ek__BackingField;
			}
		}

		public static string InventoryApiUrl
		{
			[CompilerGenerated]
			get
			{
				return _003CInventoryApiUrl_003Ek__BackingField;
			}
		}

		public static string PublishApiUrl
		{
			[CompilerGenerated]
			get
			{
				return _003CPublishApiUrl_003Ek__BackingField;
			}
		}

		public static string BillingApiUrl
		{
			[CompilerGenerated]
			get
			{
				return _003CBillingApiUrl_003Ek__BackingField;
			}
		}

		public static string ChatApiUrl
		{
			[CompilerGenerated]
			get
			{
				return _003CChatApiUrl_003Ek__BackingField;
			}
		}

		public static string DiscussionsApiUrl
		{
			[CompilerGenerated]
			get
			{
				return _003CDiscussionsApiUrl_003Ek__BackingField;
			}
		}

		public static string GroupsApiUrl
		{
			[CompilerGenerated]
			get
			{
				return _003CGroupsApiUrl_003Ek__BackingField;
			}
		}

		public static string DevelopApiUrl
		{
			[CompilerGenerated]
			get
			{
				return _003CDevelopApiUrl_003Ek__BackingField;
			}
		}

		public static string CatalogApiUrl
		{
			[CompilerGenerated]
			get
			{
				return _003CCatalogApiUrl_003Ek__BackingField;
			}
		}

		public static string AccountSettingsApiUrl
		{
			[CompilerGenerated]
			get
			{
				return _003CAccountSettingsApiUrl_003Ek__BackingField;
			}
		}

		public static string AuthenticationApiUrl
		{
			[CompilerGenerated]
			get
			{
				return _003CAuthenticationApiUrl_003Ek__BackingField;
			}
		}

		public static string GamesApiUrl
		{
			[CompilerGenerated]
			get
			{
				return _003CGamesApiUrl_003Ek__BackingField;
			}
		}

		public static string LocaleApiUrl
		{
			[CompilerGenerated]
			get
			{
				return _003CLocaleApiUrl_003Ek__BackingField;
			}
		}

		public static string CaptchaApiUrl
		{
			[CompilerGenerated]
			get
			{
				return _003CCaptchaApiUrl_003Ek__BackingField;
			}
		}

		public static string FriendsApiUrl
		{
			[CompilerGenerated]
			get
			{
				return _003CFriendsApiUrl_003Ek__BackingField;
			}
		}

		public static string FriendsAppSiteUrl
		{
			[CompilerGenerated]
			get
			{
				return _003CFriendsAppSiteUrl_003Ek__BackingField;
			}
		}

		public static string PointsApiUrl
		{
			[CompilerGenerated]
			get
			{
				return _003CPointsApiUrl_003Ek__BackingField;
			}
		}

		public static string PresenceApiUrl
		{
			[CompilerGenerated]
			get
			{
				return _003CPresenceApiUrl_003Ek__BackingField;
			}
		}

		public static string BadgesApiUrl
		{
			[CompilerGenerated]
			get
			{
				return _003CBadgesApiUrl_003Ek__BackingField;
			}
		}

		public static string NotificationApiUrl
		{
			[CompilerGenerated]
			get
			{
				return _003CNotificationApiUrl_003Ek__BackingField;
			}
		}

		public static string AssetDeliveryApiUrl
		{
			[CompilerGenerated]
			get
			{
				return _003CAssetDeliveryApiUrl_003Ek__BackingField;
			}
		}

		public static string ThumbnailsApiUrl
		{
			[CompilerGenerated]
			get
			{
				return _003CThumbnailsApiUrl_003Ek__BackingField;
			}
		}

		public static string TranslationsApiUrl
		{
			[CompilerGenerated]
			get
			{
				return _003CTranslationsApiUrl_003Ek__BackingField;
			}
		}

		public static string AbTestingApiUrl
		{
			[CompilerGenerated]
			get
			{
				return _003CAbTestingApiUrl_003Ek__BackingField;
			}
		}

		public static string AuthAppSiteUrl
		{
			[CompilerGenerated]
			get
			{
				return _003CAuthAppSiteUrl_003Ek__BackingField;
			}
		}

		public static string GameInternationalizationApiUrl
		{
			[CompilerGenerated]
			get
			{
				return _003CGameInternationalizationApiUrl_003Ek__BackingField;
			}
		}

		public static string FollowingsApiUrl
		{
			[CompilerGenerated]
			get
			{
				return _003CFollowingsApiUrl_003Ek__BackingField;
			}
		}

		public static string AdsApiUrl
		{
			[CompilerGenerated]
			get
			{
				return _003CAdsApiUrl_003Ek__BackingField;
			}
		}

		public static string SurveysApiUrl
		{
			[CompilerGenerated]
			get
			{
				return _003CSurveysApiUrl_003Ek__BackingField;
			}
		}

		public static string RatingsApiUrl
		{
			[CompilerGenerated]
			get
			{
				return _003CRatingsApiUrl_003Ek__BackingField;
			}
		}

		public static string PremiumFeaturesApiUrl
		{
			[CompilerGenerated]
			get
			{
				return _003CPremiumFeaturesApiUrl_003Ek__BackingField;
			}
		}

		public static string EconomyApiUrl
		{
			[CompilerGenerated]
			get
			{
				return _003CEconomyApiUrl_003Ek__BackingField;
			}
		}

		public static string TranslationRolesApiUrl
		{
			[CompilerGenerated]
			get
			{
				return _003CTranslationRolesApiUrl_003Ek__BackingField;
			}
		}

		public static string MetricsApiUrl
		{
			[CompilerGenerated]
			get
			{
				return _003CMetricsApiUrl_003Ek__BackingField;
			}
		}

		public static string ContactsApiUrl
		{
			[CompilerGenerated]
			get
			{
				return _003CContactsApiUrl_003Ek__BackingField;
			}
		}

		public static string MidasApiUrl
		{
			[CompilerGenerated]
			get
			{
				return _003CMidasApiUrl_003Ek__BackingField;
			}
		}

		public static string LocalizationTablesApiUrl
		{
			[CompilerGenerated]
			get
			{
				return _003CLocalizationTablesApiUrl_003Ek__BackingField;
			}
		}

		public static string VoiceApiUrl
		{
			[CompilerGenerated]
			get
			{
				return _003CVoiceApiUrl_003Ek__BackingField;
			}
		}

		public static string TradesApiUrl
		{
			[CompilerGenerated]
			get
			{
				return _003CTradesApiUrl_003Ek__BackingField;
			}
		}

		public static string AccountInformationApiUrl
		{
			[CompilerGenerated]
			get
			{
				return _003CAccountInformationApiUrl_003Ek__BackingField;
			}
		}

		public static string ItemConfigurationApiUrl
		{
			[CompilerGenerated]
			get
			{
				return _003CItemConfigurationApiUrl_003Ek__BackingField;
			}
		}

		public static string ThumbnailsResizerApiUrl
		{
			[CompilerGenerated]
			get
			{
				return _003CThumbnailsResizerApiUrl_003Ek__BackingField;
			}
		}

		public static string UsersApiUrl
		{
			[CompilerGenerated]
			get
			{
				return _003CUsersApiUrl_003Ek__BackingField;
			}
		}

		public static string UniversalAppConfigurationApiUrl
		{
			[CompilerGenerated]
			get
			{
				return _003CUniversalAppConfigurationApiUrl_003Ek__BackingField;
			}
		}

		public static string EngagementPayoutsApiUrl
		{
			[CompilerGenerated]
			get
			{
				return _003CEngagementPayoutsApiUrl_003Ek__BackingField;
			}
		}

		public static Dictionary<string, string> ApiSiteDomains
		{
			[CompilerGenerated]
			get
			{
				return _003CApiSiteDomains_003Ek__BackingField;
			}
		}

		static RobloxEnvironment()
		{
			_003CAbbreviation_003Ek__BackingField = EnvironmentSettings.Default.EnvironmentAbbreviation;
			_003CName_003Ek__BackingField = EnvironmentSettings.Default.EnvironmentName;
			_003CId_003Ek__BackingField = EnvironmentSettings.Default.EnvironmentId;
			_003CDomain_003Ek__BackingField = EnvironmentSettings.Default.ApplicationDomain;
			_003CChinaBaseDomain_003Ek__BackingField = EnvironmentSettings.Default.ChinaBaseDomain;
			_003CWebsiteUrl_003Ek__BackingField = string.Format("http://www.{0}", Domain);
			_InternalApiServicePrefix = EnvironmentSettings.Default.InternalServicesProtocol + "://";
			_InternalApiServiceSuffix = "." + EnvironmentSettings.Default.InternalServicesDomain;
			_ApiServiceSuffix = ".api." + Domain;
			_003CCdnDomain_003Ek__BackingField = EnvironmentSettings.Default.CdnDomain;
			_003CChinaCdnDomain_003Ek__BackingField = EnvironmentSettings.Default.ChinaCdnDomain;
			_003CApiGatewayUrl_003Ek__BackingField = string.Format("https://apis.{0}", Domain);
			_003CApiProxyUrl_003Ek__BackingField = string.Format("https://api.{0}", Domain);
			_003CWebsiteHttpsUrl_003Ek__BackingField = string.Format("https://www.{0}", Domain);
			_003CAvatarApiUrl_003Ek__BackingField = string.Format("https://avatar.{0}", Domain);
			_003CInventoryApiUrl_003Ek__BackingField = string.Format("https://inventory.{0}", Domain);
			_003CPublishApiUrl_003Ek__BackingField = string.Format("https://publish.{0}", Domain);
			_003CBillingApiUrl_003Ek__BackingField = string.Format("https://billing.{0}", Domain);
			_003CChatApiUrl_003Ek__BackingField = string.Format("https://{0}.{1}", EnvironmentSettings.Default.ChatApiPrefix, Domain);
			_003CDiscussionsApiUrl_003Ek__BackingField = string.Format("https://{0}.{1}", EnvironmentSettings.Default.DiscussionsApiPrefix, Domain);
			_003CGroupsApiUrl_003Ek__BackingField = string.Format("https://groups.{0}", Domain);
			_003CDevelopApiUrl_003Ek__BackingField = string.Format("https://develop.{0}", Domain);
			_003CCatalogApiUrl_003Ek__BackingField = string.Format("https://catalog.{0}", Domain);
			_003CAccountSettingsApiUrl_003Ek__BackingField = string.Format("https://accountsettings.{0}", Domain);
			_003CAuthenticationApiUrl_003Ek__BackingField = string.Format("https://auth.{0}", Domain);
			_003CLocaleApiUrl_003Ek__BackingField = string.Format("https://{0}.{1}", EnvironmentSettings.Default.LocaleApiPrefix, Domain);
			_003CGamesApiUrl_003Ek__BackingField = string.Format("https://games.{0}", Domain);
			_003CFriendsApiUrl_003Ek__BackingField = string.Format("https://friends.{0}", Domain);
			_003CFriendsAppSiteUrl_003Ek__BackingField = string.Format("https://{0}.{1}", EnvironmentSettings.Default.FriendsAppSitePrefix, Domain);
			_003CPointsApiUrl_003Ek__BackingField = string.Format("https://points.{0}", Domain);
			_003CPresenceApiUrl_003Ek__BackingField = string.Format("https://presence.{0}", Domain);
			_003CBadgesApiUrl_003Ek__BackingField = string.Format("https://badges.{0}", Domain);
			_003CNotificationApiUrl_003Ek__BackingField = string.Format("https://notifications.{0}", Domain);
			_003CAssetDeliveryApiUrl_003Ek__BackingField = string.Format("https://assetdelivery.{0}", Domain);
			_003CThumbnailsApiUrl_003Ek__BackingField = string.Format("https://thumbnails.{0}", Domain);
			_003CTranslationsApiUrl_003Ek__BackingField = string.Format("https://{0}.{1}", EnvironmentSettings.Default.TranslationsApiSitePrefix, Domain);
			_003CAbTestingApiUrl_003Ek__BackingField = string.Format("https://{0}.{1}", EnvironmentSettings.Default.AbTestingApiPrefix, Domain);
			_003CMetricsApiUrl_003Ek__BackingField = string.Format("https://{0}.{1}", EnvironmentSettings.Default.MetricsApiSiteSubdomain, Domain);
			_003CMidasApiUrl_003Ek__BackingField = string.Format("https://{0}.{1}", EnvironmentSettings.Default.MidasApiPrefix, Domain);
			_003CLocalizationTablesApiUrl_003Ek__BackingField = string.Format("https://{0}.{1}", EnvironmentSettings.Default.LocalizationTablesApiPrefix, Domain);
			_003CFollowingsApiUrl_003Ek__BackingField = string.Format("https://followings.{0}", Domain);
			_003CAuthAppSiteUrl_003Ek__BackingField = string.Format("https://{0}.{1}", EnvironmentSettings.Default.AuthAppSitePrefix, Domain);
			_003CGameInternationalizationApiUrl_003Ek__BackingField = string.Format("https://{0}.{1}", EnvironmentSettings.Default.GameInternationalizationApiSitePrefix, Domain);
			_003CCaptchaApiUrl_003Ek__BackingField = string.Format("https://captcha.{0}", Domain);
			_003CAdsApiUrl_003Ek__BackingField = string.Format("https://ads.{0}", Domain);
			_003CSurveysApiUrl_003Ek__BackingField = string.Format("https://surveys.{0}", Domain);
			_003CRatingsApiUrl_003Ek__BackingField = string.Format("https://ratings.{0}", Domain);
			_003CPremiumFeaturesApiUrl_003Ek__BackingField = string.Format("https://premiumfeatures.{0}", Domain);
			_003CEconomyApiUrl_003Ek__BackingField = string.Format("https://economy.{0}", Domain);
			_003CVoiceApiUrl_003Ek__BackingField = string.Format("https://voice.{0}", Domain);
			_003CTradesApiUrl_003Ek__BackingField = string.Format("https://trades.{0}", Domain);
			_003CAccountInformationApiUrl_003Ek__BackingField = string.Format("https://accountinformation.{0}", Domain);
			_003CUniversalAppConfigurationApiUrl_003Ek__BackingField = string.Format("{0}/universal-app-configuration", ApiGatewayUrl);
			_003CTranslationRolesApiUrl_003Ek__BackingField = string.Format("https://{0}.{1}", EnvironmentSettings.Default.TranslationRolesApiSitePrefix, Domain);
			_003CContactsApiUrl_003Ek__BackingField = string.Format("https://{0}.{1}", EnvironmentSettings.Default.ContactsApiSitePrefix, Domain);
			_003CItemConfigurationApiUrl_003Ek__BackingField = string.Format("https://{0}.{1}", EnvironmentSettings.Default.ItemConfigurationApiSitePrefix, Domain);
			_003CThumbnailsResizerApiUrl_003Ek__BackingField = string.Format("https://thumbnailsresizer.{0}", Domain);
			_003CUsersApiUrl_003Ek__BackingField = string.Format("https://users.{0}", Domain);
			_003CEngagementPayoutsApiUrl_003Ek__BackingField = string.Format("https://engagementpayouts.{0}", Domain);
			_003CApiSiteDomains_003Ek__BackingField = new Dictionary<string, string>
			{
				{ "abtestingApiSite", AbTestingApiUrl },
				{ "accountInformationApi", AccountInformationApiUrl },
				{ "accountSettingsApi", AccountSettingsApiUrl },
				{ "apiGatewayUrl", ApiGatewayUrl },
				{ "apiProxyUrl", ApiProxyUrl },
				{ "assetDeliveryApi", AssetDeliveryApiUrl },
				{ "authApi", AuthenticationApiUrl },
				{ "authAppSite", AuthAppSiteUrl },
				{ "avatarApi", AvatarApiUrl },
				{ "badgesApi", BadgesApiUrl },
				{ "billingApi", BillingApiUrl },
				{ "captchaApi", CaptchaApiUrl },
				{ "catalogApi", CatalogApiUrl },
				{ "chatApi", ChatApiUrl },
				{ "contactsApi", ContactsApiUrl },
				{ "developApi", DevelopApiUrl },
				{ "domain", Domain },
				{ "economyApi", EconomyApiUrl },
				{ "engagementPayoutsApi", EngagementPayoutsApiUrl },
				{ "followingsApi", FollowingsApiUrl },
				{ "friendsApi", FriendsApiUrl },
				{ "friendsAppSite", FriendsAppSiteUrl },
				{ "gamesApi", GamesApiUrl },
				{ "gameInternationalizationApi", GameInternationalizationApiUrl },
				{ "groupsApi", GroupsApiUrl },
				{ "inventoryApi", InventoryApiUrl },
				{ "itemConfigurationApi", ItemConfigurationApiUrl },
				{ "localeApi", LocaleApiUrl },
				{ "localizationTablesApi", LocalizationTablesApiUrl },
				{ "metricsApi", MetricsApiUrl },
				{ "midasApi", MidasApiUrl },
				{ "notificationApi", NotificationApiUrl },
				{ "premiumFeaturesApi", PremiumFeaturesApiUrl },
				{ "presenceApi", PresenceApiUrl },
				{ "publishApi", PublishApiUrl },
				{ "thumbnailsApi", ThumbnailsApiUrl },
				{ "translationRolesApi", TranslationRolesApiUrl },
				{ "universalAppConfigurationApi", UniversalAppConfigurationApiUrl },
				{ "usersApi", UsersApiUrl },
				{ "voiceApi", VoiceApiUrl },
				{ "websiteUrl", WebsiteHttpsUrl }
			};
		}

		[Obsolete("GetApiEndpoint method is deprecated. Use it only if your service still lives on roblox.com domain. If so, then ask to map simulpong and simulprod domains for your service. Use GetInternalApiServiceEndpoint method if your services mapped to simulpong/simulprod.")]
		public static string GetApiEndpoint(string apiServiceName)
		{
			return _InternalApiServicePrefix + apiServiceName + _ApiServiceSuffix;
		}

		public static string GetInternalApiServiceEndpoint(string serviceName)
		{
			return _InternalApiServicePrefix + serviceName + _InternalApiServiceSuffix;
		}
	}
}
