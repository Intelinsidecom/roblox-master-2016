using System;
using System.CodeDom.Compiler;
using System.Collections.Concurrent;
using System.ComponentModel;
using System.Configuration;
using System.Diagnostics;
using System.Diagnostics.CodeAnalysis;
using System.Runtime.CompilerServices;
using Roblox.Configuration;

namespace Roblox.Common.Properties
{
	[CompilerGenerated]
	[GeneratedCode("Microsoft.VisualStudio.Editors.SettingsDesigner.SettingsSingleFileGenerator", "15.9.0.0")]
	[SettingsProvider(typeof(Provider))]
	[ExcludeFromCodeCoverage]
	public sealed class Settings : ApplicationSettingsBase, ISettings
	{
		private static Settings defaultInstance = (Settings)SettingsBase.Synchronized(new Settings());

		private readonly ConcurrentDictionary<string, object> _Properties = new ConcurrentDictionary<string, object>();

		public static Settings Default
		{
			get
			{
				return defaultInstance;
			}
		}

		[ApplicationScopedSetting]
		[DebuggerNonUserCode]
		[DefaultSettingValue("http://localhost:3966/RobloxWebSite")]
		public string ApplicationURL
		{
			get
			{
				return (string)this["ApplicationURL"];
			}
		}

		[ApplicationScopedSetting]
		[DebuggerNonUserCode]
		[DefaultSettingValue("False")]
		public bool ReplicateLocalCache
		{
			get
			{
				return (bool)this["ReplicateLocalCache"];
			}
		}

		[ApplicationScopedSetting]
		[DebuggerNonUserCode]
		[DefaultSettingValue("00:00:00.05")]
		public string CacheReplicatorWaitTime
		{
			get
			{
				return (string)this["CacheReplicatorWaitTime"];
			}
		}

		[ApplicationScopedSetting]
		[DebuggerNonUserCode]
		[DefaultSettingValue("224.168.100.2")]
		public string CacheReplicatorAddress
		{
			get
			{
				return (string)this["CacheReplicatorAddress"];
			}
		}

		[ApplicationScopedSetting]
		[DebuggerNonUserCode]
		[DefaultSettingValue("11000")]
		public int CacheReplicatorPort
		{
			get
			{
				return (int)this["CacheReplicatorPort"];
			}
		}

		[ApplicationScopedSetting]
		[DebuggerNonUserCode]
		[DefaultSettingValue("60000")]
		public int CacheReplicatorBatchSize
		{
			get
			{
				return (int)this["CacheReplicatorBatchSize"];
			}
		}

		[ApplicationScopedSetting]
		[DebuggerNonUserCode]
		[DefaultSettingValue("00:00:00.1")]
		public string CacheReplicatorSendTimeout
		{
			get
			{
				return (string)this["CacheReplicatorSendTimeout"];
			}
		}

		[ApplicationScopedSetting]
		[DebuggerNonUserCode]
		[DefaultSettingValue("192.168")]
		public string CacheReplicatorNicPrefix
		{
			get
			{
				return (string)this["CacheReplicatorNicPrefix"];
			}
		}

		[ApplicationScopedSetting]
		[DebuggerNonUserCode]
		[DefaultSettingValue("100")]
		public uint PgmWindowSizeInMB
		{
			get
			{
				return (uint)this["PgmWindowSizeInMB"];
			}
		}

		[ApplicationScopedSetting]
		[DebuggerNonUserCode]
		[DefaultSettingValue("00:00:10")]
		public TimeSpan PgmWindowSizeTimeSpan
		{
			get
			{
				return (TimeSpan)this["PgmWindowSizeTimeSpan"];
			}
		}

		[ApplicationScopedSetting]
		[DebuggerNonUserCode]
		[SpecialSetting(SpecialSetting.ConnectionString)]
		public string BillingConnectionString
		{
			get
			{
				return (string)this["BillingConnectionString"];
			}
		}

		[ApplicationScopedSetting]
		[DebuggerNonUserCode]
		[DefaultSettingValue("300")]
		public int ClientPresenceUpdateIntervalInSeconds
		{
			get
			{
				return (int)this["ClientPresenceUpdateIntervalInSeconds"];
			}
		}

		[ApplicationScopedSetting]
		[DebuggerNonUserCode]
		[DefaultSettingValue("!0x5f3759df")]
		public string AccessKey
		{
			get
			{
				return (string)this["AccessKey"];
			}
		}

		[ApplicationScopedSetting]
		[DebuggerNonUserCode]
		[DefaultSettingValue("False")]
		public bool FacebookUploadEnabled
		{
			get
			{
				return (bool)this["FacebookUploadEnabled"];
			}
		}

		[ApplicationScopedSetting]
		[DebuggerNonUserCode]
		[DefaultSettingValue("False")]
		public bool FacebookDescriptionEnabled
		{
			get
			{
				return (bool)this["FacebookDescriptionEnabled"];
			}
		}

		[ApplicationScopedSetting]
		[DebuggerNonUserCode]
		[DefaultSettingValue("256")]
		public int MaxMemorySizeForImageUploadingInMB
		{
			get
			{
				return (int)this["MaxMemorySizeForImageUploadingInMB"];
			}
		}

		[ApplicationScopedSetting]
		[DebuggerNonUserCode]
		[DefaultSettingValue("")]
		public string ClientVersion
		{
			get
			{
				return (string)this["ClientVersion"];
			}
		}

		[ApplicationScopedSetting]
		[DebuggerNonUserCode]
		[DefaultSettingValue("")]
		public string BetaFeaturePlaceIds
		{
			get
			{
				return (string)this["BetaFeaturePlaceIds"];
			}
		}

		[ApplicationScopedSetting]
		[DebuggerNonUserCode]
		[DefaultSettingValue("")]
		public string ClientMacInstallUrl
		{
			get
			{
				return (string)this["ClientMacInstallUrl"];
			}
		}

		[ApplicationScopedSetting]
		[DebuggerNonUserCode]
		[DefaultSettingValue("Slurp|slurp|ask|Ask|Teoma|teoma|Scooter|Mercator|MSNBOT|Gulliver|Spider|spider|Archiver|archiver|Crawler|crawler|Bot |Bot\\-|Bot\\/|bot |bot\\-|bot\\/|Mediapartners-Google")]
		public string CrawlerUserAgentRegex
		{
			get
			{
				return (string)this["CrawlerUserAgentRegex"];
			}
		}

		[ApplicationScopedSetting]
		[DebuggerNonUserCode]
		[DefaultSettingValue("False")]
		public bool ReuseCrawlerUserAgentRegex
		{
			get
			{
				return (bool)this["ReuseCrawlerUserAgentRegex"];
			}
		}

		[ApplicationScopedSetting]
		[DebuggerNonUserCode]
		[DefaultSettingValue("")]
		public string AlternateAccessKey
		{
			get
			{
				return (string)this["AlternateAccessKey"];
			}
		}

		[ApplicationScopedSetting]
		[DebuggerNonUserCode]
		[DefaultSettingValue("False")]
		public bool VerifyBothGameServerIpAndAccessKey
		{
			get
			{
				return (bool)this["VerifyBothGameServerIpAndAccessKey"];
			}
		}

		[ApplicationScopedSetting]
		[DebuggerNonUserCode]
		[DefaultSettingValue("0")]
		public int EnvironmentId
		{
			get
			{
				return (int)this["EnvironmentId"];
			}
		}

		[ApplicationScopedSetting]
		[DebuggerNonUserCode]
		[DefaultSettingValue("100")]
		public int DatabaseBulkQueryLimit
		{
			get
			{
				return (int)this["DatabaseBulkQueryLimit"];
			}
		}

		[ApplicationScopedSetting]
		[DebuggerNonUserCode]
		[DefaultSettingValue("True")]
		public bool EnableXForwardedForOriginIp
		{
			get
			{
				return (bool)this["EnableXForwardedForOriginIp"];
			}
		}

		[ApplicationScopedSetting]
		[DebuggerNonUserCode]
		[DefaultSettingValue("False")]
		public bool IncludeTestEmailIdentifiers
		{
			get
			{
				return (bool)this["IncludeTestEmailIdentifiers"];
			}
		}

		[ApplicationScopedSetting]
		[DebuggerNonUserCode]
		[DefaultSettingValue("")]
		public string EnvironmentIdentifier
		{
			get
			{
				return (string)this["EnvironmentIdentifier"];
			}
		}

		[ApplicationScopedSetting]
		[DebuggerNonUserCode]
		[DefaultSettingValue("")]
		public string PlaceVisitAccessKey
		{
			get
			{
				return (string)this["PlaceVisitAccessKey"];
			}
		}

		[ApplicationScopedSetting]
		[DebuggerNonUserCode]
		[DefaultSettingValue("False")]
		public bool EnableDosArrestRealIpHeaderForOriginIP
		{
			get
			{
				return (bool)this["EnableDosArrestRealIpHeaderForOriginIP"];
			}
		}

		[ApplicationScopedSetting]
		[DebuggerNonUserCode]
		[DefaultSettingValue("False")]
		public bool EnableXForwardedProtoOriginProtocol
		{
			get
			{
				return (bool)this["EnableXForwardedProtoOriginProtocol"];
			}
		}

		[ApplicationScopedSetting]
		[DebuggerNonUserCode]
		[DefaultSettingValue("False")]
		public bool EnableSecureIpHeadersForOriginIp
		{
			get
			{
				return (bool)this["EnableSecureIpHeadersForOriginIp"];
			}
		}

		[ApplicationScopedSetting]
		[DebuggerNonUserCode]
		[DefaultSettingValue("")]
		public string SecureIpEdgeProxySecretKey
		{
			get
			{
				return (string)this["SecureIpEdgeProxySecretKey"];
			}
		}

		[ApplicationScopedSetting]
		[DebuggerNonUserCode]
		[DefaultSettingValue("False")]
		public bool EnableProxyUrlDetection
		{
			get
			{
				return (bool)this["EnableProxyUrlDetection"];
			}
		}

		[ApplicationScopedSetting]
		[DebuggerNonUserCode]
		[DefaultSettingValue("")]
		public string ProxyUrlDomainsCsv
		{
			get
			{
				return (string)this["ProxyUrlDomainsCsv"];
			}
		}

		[ApplicationScopedSetting]
		[DebuggerNonUserCode]
		[DefaultSettingValue("")]
		public string SecureIpCnProxySecretKey
		{
			get
			{
				return (string)this["SecureIpCnProxySecretKey"];
			}
		}

		[ApplicationScopedSetting]
		[DebuggerNonUserCode]
		[DefaultSettingValue("False")]
		public bool EnableWhitelistProxiedIpHeadersForOriginIp
		{
			get
			{
				return (bool)this["EnableWhitelistProxiedIpHeadersForOriginIp"];
			}
		}

		[ApplicationScopedSetting]
		[DebuggerNonUserCode]
		[DefaultSettingValue("")]
		public string SecureIpCnProxySecretKey2
		{
			get
			{
				return (string)this["SecureIpCnProxySecretKey2"];
			}
		}

		[ApplicationScopedSetting]
		[DebuggerNonUserCode]
		[DefaultSettingValue("False")]
		public bool EnableSecureIpHeadersHashCheck
		{
			get
			{
				return (bool)this["EnableSecureIpHeadersHashCheck"];
			}
		}

		[ApplicationScopedSetting]
		[DebuggerNonUserCode]
		[DefaultSettingValue("False")]
		public bool EntityHelperUsesCacheMultigetV4
		{
			get
			{
				return (bool)this["EntityHelperUsesCacheMultigetV4"];
			}
		}

		[ApplicationScopedSetting]
		[DebuggerNonUserCode]
		[DefaultSettingValue("0")]
		public int CcrServiceBacklogTrigger
		{
			get
			{
				return (int)this["CcrServiceBacklogTrigger"];
			}
		}

		[ApplicationScopedSetting]
		[DebuggerNonUserCode]
		[DefaultSettingValue("00:00:00")]
		public TimeSpan CcrServiceBacklogTriggerInterval
		{
			get
			{
				return (TimeSpan)this["CcrServiceBacklogTriggerInterval"];
			}
		}

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
