using System.CodeDom.Compiler;
using System.Collections.Concurrent;
using System.ComponentModel;
using System.Configuration;
using System.Diagnostics;
using System.Diagnostics.CodeAnalysis;
using System.Runtime.CompilerServices;
using Roblox.Configuration;

namespace Roblox.MssqlDatabases.Properties
{
	[SettingsProvider(typeof(Provider))]
	[ExcludeFromCodeCoverage]
	[CompilerGenerated]
	[GeneratedCode("Microsoft.VisualStudio.Editors.SettingsDesigner.SettingsSingleFileGenerator", "15.9.0.0")]
	internal sealed class Settings : ApplicationSettingsBase
	{
		private readonly ConcurrentDictionary<string, object> _Properties = new ConcurrentDictionary<string, object>();

		private static Settings defaultInstance = (Settings)SettingsBase.Synchronized(new Settings());

		public override object this[string propertyName]
		{
			get
			{
				return _Properties.GetOrAdd(propertyName, (string propName) => base[propName]);
			}
			set
			{
				base[propertyName] = value;
			}
		}

		public static Settings Default
		{
			get
			{
				return defaultInstance;
			}
		}

		[ApplicationScopedSetting]
		[DebuggerNonUserCode]
		[SpecialSetting(SpecialSetting.ConnectionString)]
		public string RobloxAds
		{
			get
			{
				return (string)this["RobloxAds"];
			}
		}

		[ApplicationScopedSetting]
		[DebuggerNonUserCode]
		[SpecialSetting(SpecialSetting.ConnectionString)]
		public string RobloxAggregation
		{
			get
			{
				return (string)this["RobloxAggregation"];
			}
		}

		[ApplicationScopedSetting]
		[DebuggerNonUserCode]
		[SpecialSetting(SpecialSetting.ConnectionString)]
		public string RobloxAssetCounters
		{
			get
			{
				return (string)this["RobloxAssetCounters"];
			}
		}

		[ApplicationScopedSetting]
		[DebuggerNonUserCode]
		[SpecialSetting(SpecialSetting.ConnectionString)]
		public string RobloxAssetCreations
		{
			get
			{
				return (string)this["RobloxAssetCreations"];
			}
		}

		[ApplicationScopedSetting]
		[DebuggerNonUserCode]
		[SpecialSetting(SpecialSetting.ConnectionString)]
		public string RobloxAssetHashes
		{
			get
			{
				return (string)this["RobloxAssetHashes"];
			}
		}

		[ApplicationScopedSetting]
		[DebuggerNonUserCode]
		[SpecialSetting(SpecialSetting.ConnectionString)]
		public string RobloxAssetMedia
		{
			get
			{
				return (string)this["RobloxAssetMedia"];
			}
		}

		[ApplicationScopedSetting]
		[DebuggerNonUserCode]
		[SpecialSetting(SpecialSetting.ConnectionString)]
		public string RobloxAssets
		{
			get
			{
				return (string)this["RobloxAssets"];
			}
		}

		[ApplicationScopedSetting]
		[DebuggerNonUserCode]
		[SpecialSetting(SpecialSetting.ConnectionString)]
		public string RobloxAssetSales
		{
			get
			{
				return (string)this["RobloxAssetSales"];
			}
		}

		[ApplicationScopedSetting]
		[DebuggerNonUserCode]
		[SpecialSetting(SpecialSetting.ConnectionString)]
		public string RobloxAssetSecurity
		{
			get
			{
				return (string)this["RobloxAssetSecurity"];
			}
		}

		[ApplicationScopedSetting]
		[DebuggerNonUserCode]
		[SpecialSetting(SpecialSetting.ConnectionString)]
		public string RobloxAssetSets
		{
			get
			{
				return (string)this["RobloxAssetSets"];
			}
		}

		[ApplicationScopedSetting]
		[DebuggerNonUserCode]
		[SpecialSetting(SpecialSetting.ConnectionString)]
		public string RobloxAssetStatistics
		{
			get
			{
				return (string)this["RobloxAssetStatistics"];
			}
		}

		[ApplicationScopedSetting]
		[DebuggerNonUserCode]
		[SpecialSetting(SpecialSetting.ConnectionString)]
		public string RobloxAssetStatisticsAggregation
		{
			get
			{
				return (string)this["RobloxAssetStatisticsAggregation"];
			}
		}

		[ApplicationScopedSetting]
		[DebuggerNonUserCode]
		[SpecialSetting(SpecialSetting.ConnectionString)]
		public string RobloxAvatars
		{
			get
			{
				return (string)this["RobloxAvatars"];
			}
		}

		[ApplicationScopedSetting]
		[DebuggerNonUserCode]
		[SpecialSetting(SpecialSetting.ConnectionString)]
		public string RobloxBilling
		{
			get
			{
				return (string)this["RobloxBilling"];
			}
		}

		[ApplicationScopedSetting]
		[DebuggerNonUserCode]
		[SpecialSetting(SpecialSetting.ConnectionString)]
		public string RobloxChat
		{
			get
			{
				return (string)this["RobloxChat"];
			}
		}

		[ApplicationScopedSetting]
		[DebuggerNonUserCode]
		[SpecialSetting(SpecialSetting.ConnectionString)]
		public string RobloxClientSettings
		{
			get
			{
				return (string)this["RobloxClientSettings"];
			}
		}

		[ApplicationScopedSetting]
		[DebuggerNonUserCode]
		[SpecialSetting(SpecialSetting.ConnectionString)]
		public string RobloxContent
		{
			get
			{
				return (string)this["RobloxContent"];
			}
		}

		[ApplicationScopedSetting]
		[DebuggerNonUserCode]
		[SpecialSetting(SpecialSetting.ConnectionString)]
		public string RobloxContentRatings
		{
			get
			{
				return (string)this["RobloxContentRatings"];
			}
		}

		[ApplicationScopedSetting]
		[DebuggerNonUserCode]
		[SpecialSetting(SpecialSetting.ConnectionString)]
		public string RobloxContests
		{
			get
			{
				return (string)this["RobloxContests"];
			}
		}

		[ApplicationScopedSetting]
		[DebuggerNonUserCode]
		[SpecialSetting(SpecialSetting.ConnectionString)]
		public string RobloxCurrency
		{
			get
			{
				return (string)this["RobloxCurrency"];
			}
		}

		[ApplicationScopedSetting]
		[DebuggerNonUserCode]
		[SpecialSetting(SpecialSetting.ConnectionString)]
		public string RobloxDemographics
		{
			get
			{
				return (string)this["RobloxDemographics"];
			}
		}

		[ApplicationScopedSetting]
		[DebuggerNonUserCode]
		[SpecialSetting(SpecialSetting.ConnectionString)]
		public string RobloxDeployments
		{
			get
			{
				return (string)this["RobloxDeployments"];
			}
		}

		[ApplicationScopedSetting]
		[DebuggerNonUserCode]
		[SpecialSetting(SpecialSetting.ConnectionString)]
		public string RobloxDeveloperProducts
		{
			get
			{
				return (string)this["RobloxDeveloperProducts"];
			}
		}

		[ApplicationScopedSetting]
		[DebuggerNonUserCode]
		[SpecialSetting(SpecialSetting.ConnectionString)]
		public string RobloxDistribution
		{
			get
			{
				return (string)this["RobloxDistribution"];
			}
		}

		[ApplicationScopedSetting]
		[DebuggerNonUserCode]
		[SpecialSetting(SpecialSetting.ConnectionString)]
		public string RobloxEconomy
		{
			get
			{
				return (string)this["RobloxEconomy"];
			}
		}

		[ApplicationScopedSetting]
		[DebuggerNonUserCode]
		[SpecialSetting(SpecialSetting.ConnectionString)]
		public string RobloxEphemeralCounters
		{
			get
			{
				return (string)this["RobloxEphemeralCounters"];
			}
		}

		[ApplicationScopedSetting]
		[DebuggerNonUserCode]
		[SpecialSetting(SpecialSetting.ConnectionString)]
		public string RobloxFeeds
		{
			get
			{
				return (string)this["RobloxFeeds"];
			}
		}

		[ApplicationScopedSetting]
		[DebuggerNonUserCode]
		[SpecialSetting(SpecialSetting.ConnectionString)]
		public string RobloxFiles
		{
			get
			{
				return (string)this["RobloxFiles"];
			}
		}

		[ApplicationScopedSetting]
		[DebuggerNonUserCode]
		[SpecialSetting(SpecialSetting.ConnectionString)]
		public string RobloxGameCounters
		{
			get
			{
				return (string)this["RobloxGameCounters"];
			}
		}

		[ApplicationScopedSetting]
		[DebuggerNonUserCode]
		[SpecialSetting(SpecialSetting.ConnectionString)]
		public string RobloxGamePasses
		{
			get
			{
				return (string)this["RobloxGamePasses"];
			}
		}

		[ApplicationScopedSetting]
		[DebuggerNonUserCode]
		[SpecialSetting(SpecialSetting.ConnectionString)]
		public string RobloxGamePersistence
		{
			get
			{
				return (string)this["RobloxGamePersistence"];
			}
		}

		[ApplicationScopedSetting]
		[DebuggerNonUserCode]
		[SpecialSetting(SpecialSetting.ConnectionString)]
		public string RobloxGames
		{
			get
			{
				return (string)this["RobloxGames"];
			}
		}

		[ApplicationScopedSetting]
		[DebuggerNonUserCode]
		[SpecialSetting(SpecialSetting.ConnectionString)]
		public string RobloxGameService
		{
			get
			{
				return (string)this["RobloxGameService"];
			}
		}

		[ApplicationScopedSetting]
		[DebuggerNonUserCode]
		[SpecialSetting(SpecialSetting.ConnectionString)]
		public string RobloxGamesRecentlyVisited
		{
			get
			{
				return (string)this["RobloxGamesRecentlyVisited"];
			}
		}

		[ApplicationScopedSetting]
		[DebuggerNonUserCode]
		[SpecialSetting(SpecialSetting.ConnectionString)]
		public string RobloxGroups
		{
			get
			{
				return (string)this["RobloxGroups"];
			}
		}

		[ApplicationScopedSetting]
		[DebuggerNonUserCode]
		[SpecialSetting(SpecialSetting.ConnectionString)]
		public string RobloxInfrastructure
		{
			get
			{
				return (string)this["RobloxInfrastructure"];
			}
		}

		[ApplicationScopedSetting]
		[DebuggerNonUserCode]
		[SpecialSetting(SpecialSetting.ConnectionString)]
		public string RobloxInfrastructureAudit
		{
			get
			{
				return (string)this["RobloxInfrastructureAudit"];
			}
		}

		[ApplicationScopedSetting]
		[DebuggerNonUserCode]
		[SpecialSetting(SpecialSetting.ConnectionString)]
		public string RobloxInteractionCounters
		{
			get
			{
				return (string)this["RobloxInteractionCounters"];
			}
		}

		[ApplicationScopedSetting]
		[DebuggerNonUserCode]
		[SpecialSetting(SpecialSetting.ConnectionString)]
		public string RobloxLatencyMeasurements
		{
			get
			{
				return (string)this["RobloxLatencyMeasurements"];
			}
		}

		[ApplicationScopedSetting]
		[DebuggerNonUserCode]
		[SpecialSetting(SpecialSetting.ConnectionString)]
		public string RobloxMaintenance
		{
			get
			{
				return (string)this["RobloxMaintenance"];
			}
		}

		[ApplicationScopedSetting]
		[DebuggerNonUserCode]
		[SpecialSetting(SpecialSetting.ConnectionString)]
		public string RobloxMarketing
		{
			get
			{
				return (string)this["RobloxMarketing"];
			}
		}

		[ApplicationScopedSetting]
		[DebuggerNonUserCode]
		[SpecialSetting(SpecialSetting.ConnectionString)]
		public string RobloxMetrics
		{
			get
			{
				return (string)this["RobloxMetrics"];
			}
		}

		[ApplicationScopedSetting]
		[DebuggerNonUserCode]
		[SpecialSetting(SpecialSetting.ConnectionString)]
		public string RobloxMetricsClient
		{
			get
			{
				return (string)this["RobloxMetricsClient"];
			}
		}

		[ApplicationScopedSetting]
		[DebuggerNonUserCode]
		[SpecialSetting(SpecialSetting.ConnectionString)]
		public string RobloxMetricsSandbox
		{
			get
			{
				return (string)this["RobloxMetricsSandbox"];
			}
		}

		[ApplicationScopedSetting]
		[DebuggerNonUserCode]
		[SpecialSetting(SpecialSetting.ConnectionString)]
		public string RobloxModeration
		{
			get
			{
				return (string)this["RobloxModeration"];
			}
		}

		[ApplicationScopedSetting]
		[DebuggerNonUserCode]
		[SpecialSetting(SpecialSetting.ConnectionString)]
		public string RobloxModerationNew
		{
			get
			{
				return (string)this["RobloxModerationNew"];
			}
		}

		[ApplicationScopedSetting]
		[DebuggerNonUserCode]
		[SpecialSetting(SpecialSetting.ConnectionString)]
		public string RobloxObservation
		{
			get
			{
				return (string)this["RobloxObservation"];
			}
		}

		[ApplicationScopedSetting]
		[DebuggerNonUserCode]
		[SpecialSetting(SpecialSetting.ConnectionString)]
		public string RobloxPermissions
		{
			get
			{
				return (string)this["RobloxPermissions"];
			}
		}

		[ApplicationScopedSetting]
		[DebuggerNonUserCode]
		[SpecialSetting(SpecialSetting.ConnectionString)]
		public string RobloxPoints
		{
			get
			{
				return (string)this["RobloxPoints"];
			}
		}

		[ApplicationScopedSetting]
		[DebuggerNonUserCode]
		[SpecialSetting(SpecialSetting.ConnectionString)]
		public string RobloxPremiumFeatures
		{
			get
			{
				return (string)this["RobloxPremiumFeatures"];
			}
		}

		[ApplicationScopedSetting]
		[DebuggerNonUserCode]
		[SpecialSetting(SpecialSetting.ConnectionString)]
		public string RobloxPresence
		{
			get
			{
				return (string)this["RobloxPresence"];
			}
		}

		[ApplicationScopedSetting]
		[DebuggerNonUserCode]
		[SpecialSetting(SpecialSetting.ConnectionString)]
		public string RobloxReporting
		{
			get
			{
				return (string)this["RobloxReporting"];
			}
		}

		[ApplicationScopedSetting]
		[DebuggerNonUserCode]
		[SpecialSetting(SpecialSetting.ConnectionString)]
		public string RobloxSegmentation
		{
			get
			{
				return (string)this["RobloxSegmentation"];
			}
		}

		[ApplicationScopedSetting]
		[DebuggerNonUserCode]
		[SpecialSetting(SpecialSetting.ConnectionString)]
		public string RobloxServices
		{
			get
			{
				return (string)this["RobloxServices"];
			}
		}

		[ApplicationScopedSetting]
		[DebuggerNonUserCode]
		[SpecialSetting(SpecialSetting.ConnectionString)]
		public string RobloxShops
		{
			get
			{
				return (string)this["RobloxShops"];
			}
		}

		[ApplicationScopedSetting]
		[DebuggerNonUserCode]
		[SpecialSetting(SpecialSetting.ConnectionString)]
		public string RobloxStatistics
		{
			get
			{
				return (string)this["RobloxStatistics"];
			}
		}

		[ApplicationScopedSetting]
		[DebuggerNonUserCode]
		[SpecialSetting(SpecialSetting.ConnectionString)]
		public string RobloxStudio
		{
			get
			{
				return (string)this["RobloxStudio"];
			}
		}

		[ApplicationScopedSetting]
		[DebuggerNonUserCode]
		[SpecialSetting(SpecialSetting.ConnectionString)]
		public string RobloxThumbnails
		{
			get
			{
				return (string)this["RobloxThumbnails"];
			}
		}

		[ApplicationScopedSetting]
		[DebuggerNonUserCode]
		[SpecialSetting(SpecialSetting.ConnectionString)]
		public string RobloxTimeSeries
		{
			get
			{
				return (string)this["RobloxTimeSeries"];
			}
		}

		[ApplicationScopedSetting]
		[DebuggerNonUserCode]
		[SpecialSetting(SpecialSetting.ConnectionString)]
		public string RobloxTrades
		{
			get
			{
				return (string)this["RobloxTrades"];
			}
		}

		[ApplicationScopedSetting]
		[DebuggerNonUserCode]
		[SpecialSetting(SpecialSetting.ConnectionString)]
		public string RobloxTransactionHistory
		{
			get
			{
				return (string)this["RobloxTransactionHistory"];
			}
		}

		[ApplicationScopedSetting]
		[DebuggerNonUserCode]
		[SpecialSetting(SpecialSetting.ConnectionString)]
		public string RobloxUniverses
		{
			get
			{
				return (string)this["RobloxUniverses"];
			}
		}

		[ApplicationScopedSetting]
		[DebuggerNonUserCode]
		[SpecialSetting(SpecialSetting.ConnectionString)]
		public string RobloxUserAssetEscrows
		{
			get
			{
				return (string)this["RobloxUserAssetEscrows"];
			}
		}

		[ApplicationScopedSetting]
		[DebuggerNonUserCode]
		[SpecialSetting(SpecialSetting.ConnectionString)]
		public string RobloxUserAssets
		{
			get
			{
				return (string)this["RobloxUserAssets"];
			}
		}

		[ApplicationScopedSetting]
		[DebuggerNonUserCode]
		[SpecialSetting(SpecialSetting.ConnectionString)]
		public string RobloxUserCounters
		{
			get
			{
				return (string)this["RobloxUserCounters"];
			}
		}

		[ApplicationScopedSetting]
		[DebuggerNonUserCode]
		[SpecialSetting(SpecialSetting.ConnectionString)]
		public string RobloxUsers
		{
			get
			{
				return (string)this["RobloxUsers"];
			}
		}

		[ApplicationScopedSetting]
		[DebuggerNonUserCode]
		[SpecialSetting(SpecialSetting.ConnectionString)]
		public string RobloxUserSettings
		{
			get
			{
				return (string)this["RobloxUserSettings"];
			}
		}

		[ApplicationScopedSetting]
		[DebuggerNonUserCode]
		[SpecialSetting(SpecialSetting.ConnectionString)]
		public string RobloxVersions
		{
			get
			{
				return (string)this["RobloxVersions"];
			}
		}

		[ApplicationScopedSetting]
		[DebuggerNonUserCode]
		[SpecialSetting(SpecialSetting.ConnectionString)]
		public string RobloxVoting
		{
			get
			{
				return (string)this["RobloxVoting"];
			}
		}

		[ApplicationScopedSetting]
		[DebuggerNonUserCode]
		[SpecialSetting(SpecialSetting.ConnectionString)]
		public string RobloxVotingCounters
		{
			get
			{
				return (string)this["RobloxVotingCounters"];
			}
		}

		[ApplicationScopedSetting]
		[DebuggerNonUserCode]
		[SpecialSetting(SpecialSetting.ConnectionString)]
		public string Roblox
		{
			get
			{
				return (string)this["Roblox"];
			}
		}

		[ApplicationScopedSetting]
		[DebuggerNonUserCode]
		[SpecialSetting(SpecialSetting.ConnectionString)]
		public string RobloxAuthentication
		{
			get
			{
				return (string)this["RobloxAuthentication"];
			}
		}

		[ApplicationScopedSetting]
		[DebuggerNonUserCode]
		[SpecialSetting(SpecialSetting.ConnectionString)]
		public string RobloxSystemEvents
		{
			get
			{
				return (string)this["RobloxSystemEvents"];
			}
		}

		[ApplicationScopedSetting]
		[DebuggerNonUserCode]
		[SpecialSetting(SpecialSetting.ConnectionString)]
		public string RobloxAbTesting
		{
			get
			{
				return (string)this["RobloxAbTesting"];
			}
		}

		[ApplicationScopedSetting]
		[DebuggerNonUserCode]
		[SpecialSetting(SpecialSetting.ConnectionString)]
		public string RobloxXbox
		{
			get
			{
				return (string)this["RobloxXbox"];
			}
		}

		[ApplicationScopedSetting]
		[DebuggerNonUserCode]
		[SpecialSetting(SpecialSetting.ConnectionString)]
		public string RobloxAssetNamespaces
		{
			get
			{
				return (string)this["RobloxAssetNamespaces"];
			}
		}

		[ApplicationScopedSetting]
		[DebuggerNonUserCode]
		[SpecialSetting(SpecialSetting.ConnectionString)]
		public string RobloxShowcases
		{
			get
			{
				return (string)this["RobloxShowcases"];
			}
		}

		[ApplicationScopedSetting]
		[DebuggerNonUserCode]
		[SpecialSetting(SpecialSetting.ConnectionString)]
		public string RobloxDeviceVoting
		{
			get
			{
				return (string)this["RobloxDeviceVoting"];
			}
		}

		[ApplicationScopedSetting]
		[DebuggerNonUserCode]
		[SpecialSetting(SpecialSetting.ConnectionString)]
		public string RobloxCurrencyBudgets
		{
			get
			{
				return (string)this["RobloxCurrencyBudgets"];
			}
		}

		[ApplicationScopedSetting]
		[DebuggerNonUserCode]
		[SpecialSetting(SpecialSetting.ConnectionString)]
		public string RobloxFilesV2
		{
			get
			{
				return (string)this["RobloxFilesV2"];
			}
		}

		[ApplicationScopedSetting]
		[DebuggerNonUserCode]
		[SpecialSetting(SpecialSetting.ConnectionString)]
		public string RobloxPushNotifications
		{
			get
			{
				return (string)this["RobloxPushNotifications"];
			}
		}

		[ApplicationScopedSetting]
		[DebuggerNonUserCode]
		[SpecialSetting(SpecialSetting.ConnectionString)]
		public string RobloxNotifications
		{
			get
			{
				return (string)this["RobloxNotifications"];
			}
		}

		[ApplicationScopedSetting]
		[DebuggerNonUserCode]
		[SpecialSetting(SpecialSetting.ConnectionString)]
		public string RobloxGroupRoleSets
		{
			get
			{
				return (string)this["RobloxGroupRoleSets"];
			}
		}

		[ApplicationScopedSetting]
		[DebuggerNonUserCode]
		[SpecialSetting(SpecialSetting.ConnectionString)]
		public string RobloxGroupPosts
		{
			get
			{
				return (string)this["RobloxGroupPosts"];
			}
		}

		[ApplicationScopedSetting]
		[DebuggerNonUserCode]
		[SpecialSetting(SpecialSetting.ConnectionString)]
		public string RobloxIPAddresses
		{
			get
			{
				return (string)this["RobloxIPAddresses"];
			}
		}

		[ApplicationScopedSetting]
		[DebuggerNonUserCode]
		[SpecialSetting(SpecialSetting.ConnectionString)]
		public string RobloxUserPrivacy
		{
			get
			{
				return (string)this["RobloxUserPrivacy"];
			}
		}

		[ApplicationScopedSetting]
		[DebuggerNonUserCode]
		[SpecialSetting(SpecialSetting.ConnectionString)]
		public string RobloxClickThroughAgreements
		{
			get
			{
				return (string)this["RobloxClickThroughAgreements"];
			}
		}

		[ApplicationScopedSetting]
		[DebuggerNonUserCode]
		[SpecialSetting(SpecialSetting.ConnectionString)]
		public string RobloxUserStatuses
		{
			get
			{
				return (string)this["RobloxUserStatuses"];
			}
		}

		[ApplicationScopedSetting]
		[DebuggerNonUserCode]
		[SpecialSetting(SpecialSetting.ConnectionString)]
		public string RobloxEmailAddresses
		{
			get
			{
				return (string)this["RobloxEmailAddresses"];
			}
		}

		[ApplicationScopedSetting]
		[DebuggerNonUserCode]
		[SpecialSetting(SpecialSetting.ConnectionString)]
		public string RobloxUserRetention
		{
			get
			{
				return (string)this["RobloxUserRetention"];
			}
		}

		[ApplicationScopedSetting]
		[DebuggerNonUserCode]
		[SpecialSetting(SpecialSetting.ConnectionString)]
		public string RobloxFriendships
		{
			get
			{
				return (string)this["RobloxFriendships"];
			}
		}

		[ApplicationScopedSetting]
		[DebuggerNonUserCode]
		[SpecialSetting(SpecialSetting.ConnectionString)]
		public string RobloxFollowings
		{
			get
			{
				return (string)this["RobloxFollowings"];
			}
		}

		[ApplicationScopedSetting]
		[DebuggerNonUserCode]
		[SpecialSetting(SpecialSetting.ConnectionString)]
		public string RobloxFriendRequests
		{
			get
			{
				return (string)this["RobloxFriendRequests"];
			}
		}

		[ApplicationScopedSetting]
		[DebuggerNonUserCode]
		[SpecialSetting(SpecialSetting.ConnectionString)]
		public string RobloxMacAddresses
		{
			get
			{
				return (string)this["RobloxMacAddresses"];
			}
		}

		[ApplicationScopedSetting]
		[DebuggerNonUserCode]
		[SpecialSetting(SpecialSetting.ConnectionString)]
		public string RobloxAccountSecurity
		{
			get
			{
				return (string)this["RobloxAccountSecurity"];
			}
		}

		[ApplicationScopedSetting]
		[DebuggerNonUserCode]
		[SpecialSetting(SpecialSetting.ConnectionString)]
		public string RobloxLocales
		{
			get
			{
				return (string)this["RobloxLocales"];
			}
		}

		[ApplicationScopedSetting]
		[DebuggerNonUserCode]
		[SpecialSetting(SpecialSetting.ConnectionString)]
		public string RobloxRoles
		{
			get
			{
				return (string)this["RobloxRoles"];
			}
		}

		[ApplicationScopedSetting]
		[DebuggerNonUserCode]
		[SpecialSetting(SpecialSetting.ConnectionString)]
		public string RobloxAccounts
		{
			get
			{
				return (string)this["RobloxAccounts"];
			}
		}

		[ApplicationScopedSetting]
		[DebuggerNonUserCode]
		[SpecialSetting(SpecialSetting.ConnectionString)]
		public string RobloxFileLocations
		{
			get
			{
				return (string)this["RobloxFileLocations"];
			}
		}

		[ApplicationScopedSetting]
		[DebuggerNonUserCode]
		[SpecialSetting(SpecialSetting.ConnectionString)]
		public string RobloxPlaceShowcases
		{
			get
			{
				return (string)this["RobloxPlaceShowcases"];
			}
		}

		[ApplicationScopedSetting]
		[DebuggerNonUserCode]
		[SpecialSetting(SpecialSetting.ConnectionString)]
		public string RobloxGroupMembership
		{
			get
			{
				return (string)this["RobloxGroupMembership"];
			}
		}

		[ApplicationScopedSetting]
		[DebuggerNonUserCode]
		[SpecialSetting(SpecialSetting.ConnectionString)]
		public string RobloxUserAssetOptions
		{
			get
			{
				return (string)this["RobloxUserAssetOptions"];
			}
		}

		[ApplicationScopedSetting]
		[DebuggerNonUserCode]
		[SpecialSetting(SpecialSetting.ConnectionString)]
		public string RobloxUserAssetExpirations
		{
			get
			{
				return (string)this["RobloxUserAssetExpirations"];
			}
		}

		[ApplicationScopedSetting]
		[DebuggerNonUserCode]
		[SpecialSetting(SpecialSetting.ConnectionString)]
		public string RobloxGroupCounters
		{
			get
			{
				return (string)this["RobloxGroupCounters"];
			}
		}

		[ApplicationScopedSetting]
		[DebuggerNonUserCode]
		[SpecialSetting(SpecialSetting.ConnectionString)]
		public string RobloxClans
		{
			get
			{
				return (string)this["RobloxClans"];
			}
		}

		[ApplicationScopedSetting]
		[DebuggerNonUserCode]
		[SpecialSetting(SpecialSetting.ConnectionString)]
		public string RobloxUsersAudit
		{
			get
			{
				return (string)this["RobloxUsersAudit"];
			}
		}

		[ApplicationScopedSetting]
		[DebuggerNonUserCode]
		[SpecialSetting(SpecialSetting.ConnectionString)]
		public string RobloxAccountPhoneNumbersAudit
		{
			get
			{
				return (string)this["RobloxAccountPhoneNumbersAudit"];
			}
		}

		[ApplicationScopedSetting]
		[DebuggerNonUserCode]
		[SpecialSetting(SpecialSetting.ConnectionString)]
		public string RobloxTwoStepVerificationSettingsAudit
		{
			get
			{
				return (string)this["RobloxTwoStepVerificationSettingsAudit"];
			}
		}

		[ApplicationScopedSetting]
		[DebuggerNonUserCode]
		[SpecialSetting(SpecialSetting.ConnectionString)]
		public string RobloxCollectibles
		{
			get
			{
				return (string)this["RobloxCollectibles"];
			}
		}

		[ApplicationScopedSetting]
		[DebuggerNonUserCode]
		[SpecialSetting(SpecialSetting.ConnectionString)]
		public string RobloxGameAttributes
		{
			get
			{
				return (string)this["RobloxGameAttributes"];
			}
		}

		[ApplicationScopedSetting]
		[DebuggerNonUserCode]
		[SpecialSetting(SpecialSetting.ConnectionString)]
		public string RobloxItemStatusesAudit
		{
			get
			{
				return (string)this["RobloxItemStatusesAudit"];
			}
		}

		[ApplicationScopedSetting]
		[DebuggerNonUserCode]
		[SpecialSetting(SpecialSetting.ConnectionString)]
		public string RobloxAccountPinHashesAudit
		{
			get
			{
				return (string)this["RobloxAccountPinHashesAudit"];
			}
		}

		[ApplicationScopedSetting]
		[DebuggerNonUserCode]
		[SpecialSetting(SpecialSetting.ConnectionString)]
		public string RobloxBadgesV2
		{
			get
			{
				return (string)this["RobloxBadgesV2"];
			}
		}

		[ApplicationScopedSetting]
		[DebuggerNonUserCode]
		[SpecialSetting(SpecialSetting.ConnectionString)]
		public string RobloxGroupMembershipRequests
		{
			get
			{
				return (string)this["RobloxGroupMembershipRequests"];
			}
		}

		[ApplicationScopedSetting]
		[DebuggerNonUserCode]
		[SpecialSetting(SpecialSetting.ConnectionString)]
		public string RobloxAssetsAudit
		{
			get
			{
				return (string)this["RobloxAssetsAudit"];
			}
		}

		[ApplicationScopedSetting]
		[DebuggerNonUserCode]
		[SpecialSetting(SpecialSetting.ConnectionString)]
		public string RobloxComments
		{
			get
			{
				return (string)this["RobloxComments"];
			}
		}

		[ApplicationScopedSetting]
		[DebuggerNonUserCode]
		[SpecialSetting(SpecialSetting.ConnectionString)]
		public string RobloxUserFeeds
		{
			get
			{
				return (string)this["RobloxUserFeeds"];
			}
		}

		[ApplicationScopedSetting]
		[DebuggerNonUserCode]
		[SpecialSetting(SpecialSetting.ConnectionString)]
		public string RobloxBrowserTrackers
		{
			get
			{
				return (string)this["RobloxBrowserTrackers"];
			}
		}

		[ApplicationScopedSetting]
		[DebuggerNonUserCode]
		[SpecialSetting(SpecialSetting.ConnectionString)]
		public string RobloxGameTemplates
		{
			get
			{
				return (string)this["RobloxGameTemplates"];
			}
		}

		[ApplicationScopedSetting]
		[DebuggerNonUserCode]
		[SpecialSetting(SpecialSetting.ConnectionString)]
		public string RobloxMessages
		{
			get
			{
				return (string)this["RobloxMessages"];
			}
		}

		[ApplicationScopedSetting]
		[DebuggerNonUserCode]
		[SpecialSetting(SpecialSetting.ConnectionString)]
		public string RobloxRobuxStipends
		{
			get
			{
				return (string)this["RobloxRobuxStipends"];
			}
		}

		[ApplicationScopedSetting]
		[DebuggerNonUserCode]
		[SpecialSetting(SpecialSetting.ConnectionString)]
		public string RobloxAccountLocalization
		{
			get
			{
				return (string)this["RobloxAccountLocalization"];
			}
		}

		[ApplicationScopedSetting]
		[DebuggerNonUserCode]
		[SpecialSetting(SpecialSetting.ConnectionString)]
		public string RobloxFavorites
		{
			get
			{
				return (string)this["RobloxFavorites"];
			}
		}

		[ApplicationScopedSetting]
		[DebuggerNonUserCode]
		[SpecialSetting(SpecialSetting.ConnectionString)]
		public string RobloxPermissionLists
		{
			get
			{
				return (string)this["RobloxPermissionLists"];
			}
		}

		[ApplicationScopedSetting]
		[DebuggerNonUserCode]
		[SpecialSetting(SpecialSetting.ConnectionString)]
		public string RobloxAssetVersions
		{
			get
			{
				return (string)this["RobloxAssetVersions"];
			}
		}

		[ApplicationScopedSetting]
		[DebuggerNonUserCode]
		[SpecialSetting(SpecialSetting.ConnectionString)]
		public string RobloxLocalization
		{
			get
			{
				return (string)this["RobloxLocalization"];
			}
		}

		[ApplicationScopedSetting]
		[DebuggerNonUserCode]
		[SpecialSetting(SpecialSetting.ConnectionString)]
		public string RobloxFavoriteCounters
		{
			get
			{
				return (string)this["RobloxFavoriteCounters"];
			}
		}

		[ApplicationScopedSetting]
		[DebuggerNonUserCode]
		[SpecialSetting(SpecialSetting.ConnectionString)]
		public string RobloxDailyLogins
		{
			get
			{
				return (string)this["RobloxDailyLogins"];
			}
		}

		[ApplicationScopedSetting]
		[DebuggerNonUserCode]
		[SpecialSetting(SpecialSetting.ConnectionString)]
		public string RobloxTranslation
		{
			get
			{
				return (string)this["RobloxTranslation"];
			}
		}

		[ApplicationScopedSetting]
		[DebuggerNonUserCode]
		[SpecialSetting(SpecialSetting.ConnectionString)]
		public string RobloxBillingAuditLogs
		{
			get
			{
				return (string)this["RobloxBillingAuditLogs"];
			}
		}

		[ApplicationScopedSetting]
		[DebuggerNonUserCode]
		[SpecialSetting(SpecialSetting.ConnectionString)]
		public string RobloxBundles
		{
			get
			{
				return (string)this["RobloxBundles"];
			}
		}

		[ApplicationScopedSetting]
		[DebuggerNonUserCode]
		[SpecialSetting(SpecialSetting.ConnectionString)]
		public string RobloxEventsIngestValidation
		{
			get
			{
				return (string)this["RobloxEventsIngestValidation"];
			}
		}

		[ApplicationScopedSetting]
		[DebuggerNonUserCode]
		[SpecialSetting(SpecialSetting.ConnectionString)]
		public string RobloxModerationReportsAudit
		{
			get
			{
				return (string)this["RobloxModerationReportsAudit"];
			}
		}

		[ApplicationScopedSetting]
		[DebuggerNonUserCode]
		[SpecialSetting(SpecialSetting.ConnectionString)]
		public string RobloxContacts
		{
			get
			{
				return (string)this["RobloxContacts"];
			}
		}

		[ApplicationScopedSetting]
		[DebuggerNonUserCode]
		[SpecialSetting(SpecialSetting.ConnectionString)]
		public string RobloxUserDataProtection
		{
			get
			{
				return (string)this["RobloxUserDataProtection"];
			}
		}

		[ApplicationScopedSetting]
		[DebuggerNonUserCode]
		[SpecialSetting(SpecialSetting.ConnectionString)]
		public string RobloxAccountsAudit
		{
			get
			{
				return (string)this["RobloxAccountsAudit"];
			}
		}

		[ApplicationScopedSetting]
		[DebuggerNonUserCode]
		[SpecialSetting(SpecialSetting.ConnectionString)]
		public string RobloxAccoutrements
		{
			get
			{
				return (string)this["RobloxAccoutrements"];
			}
		}

		[ApplicationScopedSetting]
		[DebuggerNonUserCode]
		[SpecialSetting(SpecialSetting.ConnectionString)]
		public string RobloxPromotionChannels
		{
			get
			{
				return (string)this["RobloxPromotionChannels"];
			}
		}

		[ApplicationScopedSetting]
		[DebuggerNonUserCode]
		[SpecialSetting(SpecialSetting.ConnectionString)]
		public string RobloxMachineLearningModels
		{
			get
			{
				return (string)this["RobloxMachineLearningModels"];
			}
		}

		[ApplicationScopedSetting]
		[DebuggerNonUserCode]
		[SpecialSetting(SpecialSetting.ConnectionString)]
		public string RobloxAccountCountriesAudit
		{
			get
			{
				return (string)this["RobloxAccountCountriesAudit"];
			}
		}

		[ApplicationScopedSetting]
		[DebuggerNonUserCode]
		[SpecialSetting(SpecialSetting.ConnectionString)]
		public string RobloxTranslationStorage
		{
			get
			{
				return (string)this["RobloxTranslationStorage"];
			}
		}

		[ApplicationScopedSetting]
		[DebuggerNonUserCode]
		[SpecialSetting(SpecialSetting.ConnectionString)]
		public string RobloxAssetDetailsQuality
		{
			get
			{
				return (string)this["RobloxAssetDetailsQuality"];
			}
		}

		[ApplicationScopedSetting]
		[DebuggerNonUserCode]
		[SpecialSetting(SpecialSetting.ConnectionString)]
		public string RobloxInGameContentTables
		{
			get
			{
				return (string)this["RobloxInGameContentTables"];
			}
		}

		[ApplicationScopedSetting]
		[DebuggerNonUserCode]
		[SpecialSetting(SpecialSetting.ConnectionString)]
		public string RobloxAccountLocalesAudit
		{
			get
			{
				return (string)this["RobloxAccountLocalesAudit"];
			}
		}

		[ApplicationScopedSetting]
		[DebuggerNonUserCode]
		[SpecialSetting(SpecialSetting.ConnectionString)]
		public string RobloxTeamOwnership
		{
			get
			{
				return (string)this["RobloxTeamOwnership"];
			}
		}

		[ApplicationScopedSetting]
		[DebuggerNonUserCode]
		[SpecialSetting(SpecialSetting.ConnectionString)]
		public string RobloxFriendshipSources
		{
			get
			{
				return (string)this["RobloxFriendshipSources"];
			}
		}

		[ApplicationScopedSetting]
		[DebuggerNonUserCode]
		[SpecialSetting(SpecialSetting.ConnectionString)]
		public string RobloxLeasedLocks
		{
			get
			{
				return (string)this["RobloxLeasedLocks"];
			}
		}

		[ApplicationScopedSetting]
		[DebuggerNonUserCode]
		[SpecialSetting(SpecialSetting.ConnectionString)]
		public string RobloxModerationAutomationAudit
		{
			get
			{
				return (string)this["RobloxModerationAutomationAudit"];
			}
		}

		[ApplicationScopedSetting]
		[DebuggerNonUserCode]
		[SpecialSetting(SpecialSetting.ConnectionString)]
		public string RobloxAccountPasswordHashes
		{
			get
			{
				return (string)this["RobloxAccountPasswordHashes"];
			}
		}

		[ApplicationScopedSetting]
		[DebuggerNonUserCode]
		[SpecialSetting(SpecialSetting.ConnectionString)]
		public string RobloxXboxLiveAccounts
		{
			get
			{
				return (string)this["RobloxXboxLiveAccounts"];
			}
		}

		[ApplicationScopedSetting]
		[DebuggerNonUserCode]
		[SpecialSetting(SpecialSetting.ConnectionString)]
		public string RobloxFacebookAccounts
		{
			get
			{
				return (string)this["RobloxFacebookAccounts"];
			}
		}

		[ApplicationScopedSetting]
		[DebuggerNonUserCode]
		[SpecialSetting(SpecialSetting.ConnectionString)]
		public string RobloxStaticContent
		{
			get
			{
				return (string)this["RobloxStaticContent"];
			}
		}

		[ApplicationScopedSetting]
		[DebuggerNonUserCode]
		[SpecialSetting(SpecialSetting.ConnectionString)]
		public string RobloxBadges
		{
			get
			{
				return (string)this["RobloxBadges"];
			}
		}

		[ApplicationScopedSetting]
		[DebuggerNonUserCode]
		[SpecialSetting(SpecialSetting.ConnectionString)]
		public string RobloxUsernames
		{
			get
			{
				return (string)this["RobloxUsernames"];
			}
		}

		[ApplicationScopedSetting]
		[DebuggerNonUserCode]
		[SpecialSetting(SpecialSetting.ConnectionString)]
		public string RobloxThemesV2
		{
			get
			{
				return (string)this["RobloxThemesV2"];
			}
		}

		[ApplicationScopedSetting]
		[DebuggerNonUserCode]
		[SpecialSetting(SpecialSetting.ConnectionString)]
		public string RobloxGameLocalization
		{
			get
			{
				return (string)this["RobloxGameLocalization"];
			}
		}

		[ApplicationScopedSetting]
		[DebuggerNonUserCode]
		[SpecialSetting(SpecialSetting.ConnectionString)]
		public string RobloxSurveyResponses
		{
			get
			{
				return (string)this["RobloxSurveyResponses"];
			}
		}

		[ApplicationScopedSetting]
		[DebuggerNonUserCode]
		[SpecialSetting(SpecialSetting.ConnectionString)]
		public string RobloxRatings
		{
			get
			{
				return (string)this["RobloxRatings"];
			}
		}

		[ApplicationScopedSetting]
		[DebuggerNonUserCode]
		[SpecialSetting(SpecialSetting.ConnectionString)]
		public string RobloxRatingsAudit
		{
			get
			{
				return (string)this["RobloxRatingsAudit"];
			}
		}

		[ApplicationScopedSetting]
		[DebuggerNonUserCode]
		[SpecialSetting(SpecialSetting.ConnectionString)]
		public string RobloxSurveys
		{
			get
			{
				return (string)this["RobloxSurveys"];
			}
		}

		[ApplicationScopedSetting]
		[DebuggerNonUserCode]
		[SpecialSetting(SpecialSetting.ConnectionString)]
		public string RobloxMatchmaking
		{
			get
			{
				return (string)this["RobloxMatchmaking"];
			}
		}

		[ApplicationScopedSetting]
		[DebuggerNonUserCode]
		[SpecialSetting(SpecialSetting.ConnectionString)]
		public string RobloxIdentities
		{
			get
			{
				return (string)this["RobloxIdentities"];
			}
		}

		[ApplicationScopedSetting]
		[DebuggerNonUserCode]
		[SpecialSetting(SpecialSetting.ConnectionString)]
		public string RobloxChatParticipants
		{
			get
			{
				return (string)this["RobloxChatParticipants"];
			}
		}

		[ApplicationScopedSetting]
		[DebuggerNonUserCode]
		[SpecialSetting(SpecialSetting.ConnectionString)]
		public string RobloxModerationPolicy
		{
			get
			{
				return (string)this["RobloxModerationPolicy"];
			}
		}

		[ApplicationScopedSetting]
		[DebuggerNonUserCode]
		[SpecialSetting(SpecialSetting.ConnectionString)]
		public string RobloxRules
		{
			get
			{
				return (string)this["RobloxRules"];
			}
		}

		[ApplicationScopedSetting]
		[DebuggerNonUserCode]
		[SpecialSetting(SpecialSetting.ConnectionString)]
		public string RobloxTranslationAudit
		{
			get
			{
				return (string)this["RobloxTranslationAudit"];
			}
		}

		[ApplicationScopedSetting]
		[DebuggerNonUserCode]
		[SpecialSetting(SpecialSetting.ConnectionString)]
		public string RobloxItemTags
		{
			get
			{
				return (string)this["RobloxItemTags"];
			}
		}

		[ApplicationScopedSetting]
		[DebuggerNonUserCode]
		[SpecialSetting(SpecialSetting.ConnectionString)]
		public string RobloxCurrencyRobuxHolds
		{
			get
			{
				return (string)this["RobloxCurrencyRobuxHolds"];
			}
		}

		[ApplicationScopedSetting]
		[DebuggerNonUserCode]
		[SpecialSetting(SpecialSetting.ConnectionString)]
		public string RobloxCanonicalImages
		{
			get
			{
				return (string)this["RobloxCanonicalImages"];
			}
		}

		[ApplicationScopedSetting]
		[DebuggerNonUserCode]
		[SpecialSetting(SpecialSetting.ConnectionString)]
		public string RobloxTranslationAnalyticsReports
		{
			get
			{
				return (string)this["RobloxTranslationAnalyticsReports"];
			}
		}

		[ApplicationScopedSetting]
		[DebuggerNonUserCode]
		[SpecialSetting(SpecialSetting.ConnectionString)]
		public string RobloxGiftCards
		{
			get
			{
				return (string)this["RobloxGiftCards"];
			}
		}

		[ApplicationScopedSetting]
		[DebuggerNonUserCode]
		[SpecialSetting(SpecialSetting.ConnectionString)]
		public string RobloxUGCValidation
		{
			get
			{
				return (string)this["RobloxUGCValidation"];
			}
		}

		[ApplicationScopedSetting]
		[DebuggerNonUserCode]
		[SpecialSetting(SpecialSetting.ConnectionString)]
		public string RobloxAvatarEmotes
		{
			get
			{
				return (string)this["RobloxAvatarEmotes"];
			}
		}

		[ApplicationScopedSetting]
		[DebuggerNonUserCode]
		[SpecialSetting(SpecialSetting.ConnectionString)]
		public string RobloxItemManifolds
		{
			get
			{
				return (string)this["RobloxItemManifolds"];
			}
		}

		[ApplicationScopedSetting]
		[DebuggerNonUserCode]
		[SpecialSetting(SpecialSetting.ConnectionString)]
		public string RobloxAssetFormats
		{
			get
			{
				return (string)this["RobloxAssetFormats"];
			}
		}

		[ApplicationScopedSetting]
		[DebuggerNonUserCode]
		[SpecialSetting(SpecialSetting.ConnectionString)]
		public string RobloxEngagementPayouts
		{
			get
			{
				return (string)this["RobloxEngagementPayouts"];
			}
		}

		[ApplicationScopedSetting]
		[DebuggerNonUserCode]
		[SpecialSetting(SpecialSetting.ConnectionString)]
		public string RobloxAvatarPolicies
		{
			get
			{
				return (string)this["RobloxAvatarPolicies"];
			}
		}

		internal Settings()
		{
			base.PropertyChanged += delegate(object sender, PropertyChangedEventArgs args)
			{
				object value;
				_Properties.TryRemove(args.PropertyName, out value);
			};
		}

		protected override void OnSettingsLoaded(object sender, SettingsLoadedEventArgs e)
		{
			base.OnSettingsLoaded(sender, e);
			Provider.RegisterSettings(e, this);
		}
	}
}
