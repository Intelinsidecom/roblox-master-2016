using System;
using System.CodeDom.Compiler;
using System.Collections.Concurrent;
using System.ComponentModel;
using System.Configuration;
using System.Diagnostics;
using System.Diagnostics.CodeAnalysis;
using System.Runtime.CompilerServices;
using Roblox.Configuration;

namespace Roblox.Caching.Properties
{
	[SettingsProvider(typeof(Provider))]
	[ExcludeFromCodeCoverage]
	[CompilerGenerated]
	[GeneratedCode("Microsoft.VisualStudio.Editors.SettingsDesigner.SettingsSingleFileGenerator", "15.9.0.0")]
	internal sealed class Settings : ApplicationSettingsBase, ISettings, INotifyPropertyChanged
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
		[DefaultSettingValue("")]
		public string SharedCacheAddresses
		{
			get
			{
				return (string)this["SharedCacheAddresses"];
			}
		}

		[ApplicationScopedSetting]
		[DebuggerNonUserCode]
		[DefaultSettingValue("dv-")]
		public string SharedCacheKeyPrefix
		{
			get
			{
				return (string)this["SharedCacheKeyPrefix"];
			}
		}

		[ApplicationScopedSetting]
		[DebuggerNonUserCode]
		[DefaultSettingValue("100")]
		public uint MaxPoolSize
		{
			get
			{
				return (uint)this["MaxPoolSize"];
			}
		}

		[ApplicationScopedSetting]
		[DebuggerNonUserCode]
		[DefaultSettingValue("5")]
		public uint MinPoolSize
		{
			get
			{
				return (uint)this["MinPoolSize"];
			}
		}

		[ApplicationScopedSetting]
		[DebuggerNonUserCode]
		[DefaultSettingValue("00:01:00")]
		public TimeSpan RampUpTime
		{
			get
			{
				return (TimeSpan)this["RampUpTime"];
			}
		}

		[ApplicationScopedSetting]
		[DebuggerNonUserCode]
		[DefaultSettingValue("")]
		public string SharedCacheWebAddresses
		{
			get
			{
				return (string)this["SharedCacheWebAddresses"];
			}
		}

		[ApplicationScopedSetting]
		[DebuggerNonUserCode]
		[DefaultSettingValue("")]
		public string RemoteCacheableEntities
		{
			get
			{
				return (string)this["RemoteCacheableEntities"];
			}
		}

		[ApplicationScopedSetting]
		[DebuggerNonUserCode]
		[DefaultSettingValue("1.00:00:00")]
		public TimeSpan RemoteCacheableExpiration
		{
			get
			{
				return (TimeSpan)this["RemoteCacheableExpiration"];
			}
		}

		[ApplicationScopedSetting]
		[DebuggerNonUserCode]
		[DefaultSettingValue("")]
		public string RedisEntityCacheAddresses
		{
			get
			{
				return (string)this["RedisEntityCacheAddresses"];
			}
		}

		[ApplicationScopedSetting]
		[DebuggerNonUserCode]
		[DefaultSettingValue("False")]
		public bool IsTypeSpecificRampUpEnabledV2
		{
			get
			{
				return (bool)this["IsTypeSpecificRampUpEnabledV2"];
			}
		}

		[ApplicationScopedSetting]
		[DebuggerNonUserCode]
		[DefaultSettingValue("2000")]
		public int SampleStackTraceSubstringLength
		{
			get
			{
				return (int)this["SampleStackTraceSubstringLength"];
			}
		}

		[ApplicationScopedSetting]
		[DebuggerNonUserCode]
		[DefaultSettingValue("00:30:00")]
		public TimeSpan MemcachedSocketRecycleAge
		{
			get
			{
				return (TimeSpan)this["MemcachedSocketRecycleAge"];
			}
		}

		[ApplicationScopedSetting]
		[DebuggerNonUserCode]
		[DefaultSettingValue("00:00:02")]
		public TimeSpan MemcachedSendReceiveTimeout
		{
			get
			{
				return (TimeSpan)this["MemcachedSendReceiveTimeout"];
			}
		}

		[ApplicationScopedSetting]
		[DebuggerNonUserCode]
		[DefaultSettingValue("00:00:10")]
		public TimeSpan DelayBeforeDisposingClientOnAddressesChangeForGroupClients
		{
			get
			{
				return (TimeSpan)this["DelayBeforeDisposingClientOnAddressesChangeForGroupClients"];
			}
		}

		[ApplicationScopedSetting]
		[DebuggerNonUserCode]
		[DefaultSettingValue("00:00:00.1500000")]
		public TimeSpan MemcachedClientConnectionCircuitBreakerRetryInterval
		{
			get
			{
				return (TimeSpan)this["MemcachedClientConnectionCircuitBreakerRetryInterval"];
			}
		}

		[ApplicationScopedSetting]
		[DebuggerNonUserCode]
		[DefaultSettingValue("100000")]
		public int MemcachedMaximumNumberOfSocketsPerPool
		{
			get
			{
				return (int)this["MemcachedMaximumNumberOfSocketsPerPool"];
			}
		}

		[ApplicationScopedSetting]
		[DebuggerNonUserCode]
		[DefaultSettingValue("00:00:01")]
		public TimeSpan MemcachedPooledSocketConstructionSocketConnectTimeout
		{
			get
			{
				return (TimeSpan)this["MemcachedPooledSocketConstructionSocketConnectTimeout"];
			}
		}

		[ApplicationScopedSetting]
		[DebuggerNonUserCode]
		[DefaultSettingValue("False")]
		public bool IsMemcachedClientExecutionCircuitBreakerEnabled
		{
			get
			{
				return (bool)this["IsMemcachedClientExecutionCircuitBreakerEnabled"];
			}
		}

		[ApplicationScopedSetting]
		[DebuggerNonUserCode]
		[DefaultSettingValue("00:00:00.0100000")]
		public TimeSpan MemcachedClientExecutionCircuitBreakerRetryInterval
		{
			get
			{
				return (TimeSpan)this["MemcachedClientExecutionCircuitBreakerRetryInterval"];
			}
		}

		[ApplicationScopedSetting]
		[DebuggerNonUserCode]
		[DefaultSettingValue("TimedOut")]
		public string MemcachedClientExecutionSocketErrorsThatTripCircuitBreakerCsv
		{
			get
			{
				return (string)this["MemcachedClientExecutionSocketErrorsThatTripCircuitBreakerCsv"];
			}
		}

		[ApplicationScopedSetting]
		[DebuggerNonUserCode]
		[DefaultSettingValue("3")]
		public int MemcachedClientExecutionCircuitBreakerExceptionCountForTripping
		{
			get
			{
				return (int)this["MemcachedClientExecutionCircuitBreakerExceptionCountForTripping"];
			}
		}

		[ApplicationScopedSetting]
		[DebuggerNonUserCode]
		[DefaultSettingValue("00:00:00.5000000")]
		public TimeSpan MemcachedClientExecutionCircuitBreakerExceptionIntervalForTripping
		{
			get
			{
				return (TimeSpan)this["MemcachedClientExecutionCircuitBreakerExceptionIntervalForTripping"];
			}
		}

		[ApplicationScopedSetting]
		[DebuggerNonUserCode]
		[DefaultSettingValue("")]
		public string MemcachedClientPerHostExpiryOverrides
		{
			get
			{
				return (string)this["MemcachedClientPerHostExpiryOverrides"];
			}
		}

		[ApplicationScopedSetting]
		[DebuggerNonUserCode]
		[DefaultSettingValue("False")]
		public bool MemcachedClientPerHostExpiryOverridesEnabled
		{
			get
			{
				return (bool)this["MemcachedClientPerHostExpiryOverridesEnabled"];
			}
		}

		[ApplicationScopedSetting]
		[DebuggerNonUserCode]
		[DefaultSettingValue("1")]
		public int MemcachedClientConnectionCircuitBreakerExceptionCountForTripping
		{
			get
			{
				return (int)this["MemcachedClientConnectionCircuitBreakerExceptionCountForTripping"];
			}
		}

		[ApplicationScopedSetting]
		[DebuggerNonUserCode]
		[DefaultSettingValue("00:00:00.0100000")]
		public TimeSpan MemcachedClientConnectionCircuitBreakerExceptionIntervalForTripping
		{
			get
			{
				return (TimeSpan)this["MemcachedClientConnectionCircuitBreakerExceptionIntervalForTripping"];
			}
		}

		[ApplicationScopedSetting]
		[DebuggerNonUserCode]
		[DefaultSettingValue("")]
		public string MemcachedClientExceptionTypeNamesToForceResetBytes
		{
			get
			{
				return (string)this["MemcachedClientExceptionTypeNamesToForceResetBytes"];
			}
		}

		[ApplicationScopedSetting]
		[DebuggerNonUserCode]
		[DefaultSettingValue("10")]
		public int MemcachedClientForceResetBytesMaxAttempts
		{
			get
			{
				return (int)this["MemcachedClientForceResetBytesMaxAttempts"];
			}
		}

		[ApplicationScopedSetting]
		[DebuggerNonUserCode]
		[DefaultSettingValue("256")]
		public int MemcachedClientForceResetBytesMaxNumberOfBytes
		{
			get
			{
				return (int)this["MemcachedClientForceResetBytesMaxNumberOfBytes"];
			}
		}

		[ApplicationScopedSetting]
		[DebuggerNonUserCode]
		[DefaultSettingValue("False")]
		public bool MemcachedClientLogVerboseExceptions
		{
			get
			{
				return (bool)this["MemcachedClientLogVerboseExceptions"];
			}
		}

		[ApplicationScopedSetting]
		[DebuggerNonUserCode]
		[DefaultSettingValue("00:01:00")]
		public TimeSpan DelayBeforeDisposingMemcachedObjectClientOnAddressesChange
		{
			get
			{
				return (TimeSpan)this["DelayBeforeDisposingMemcachedObjectClientOnAddressesChange"];
			}
		}

		[ApplicationScopedSetting]
		[DebuggerNonUserCode]
		[DefaultSettingValue("True")]
		public bool IsMemcachedClientRespectingMaxPoolSizeEnabled
		{
			get
			{
				return (bool)this["IsMemcachedClientRespectingMaxPoolSizeEnabled"];
			}
		}

		[ApplicationScopedSetting]
		[DebuggerNonUserCode]
		[DefaultSettingValue("False")]
		public bool MemcachedClientUseRoundRobinSocketPoolSelection
		{
			get
			{
				return (bool)this["MemcachedClientUseRoundRobinSocketPoolSelection"];
			}
		}

		[ApplicationScopedSetting]
		[DebuggerNonUserCode]
		[DefaultSettingValue("1")]
		public int MemcachedClientMaximumSelectionAttemptsForRoundRobin
		{
			get
			{
				return (int)this["MemcachedClientMaximumSelectionAttemptsForRoundRobin"];
			}
		}

		[ApplicationScopedSetting]
		[DebuggerNonUserCode]
		[DefaultSettingValue("131072")]
		public uint MemcachedCompressionThreshold
		{
			get
			{
				return (uint)this["MemcachedCompressionThreshold"];
			}
		}

		[ApplicationScopedSetting]
		[DebuggerNonUserCode]
		[DefaultSettingValue("True")]
		public bool IsLoggingMigrationConfigurationErrorsEnabled
		{
			get
			{
				return (bool)this["IsLoggingMigrationConfigurationErrorsEnabled"];
			}
		}

		[ApplicationScopedSetting]
		[DebuggerNonUserCode]
		[DefaultSettingValue("True")]
		public bool IsReadingFromWriteCacheForMigrationInBackground
		{
			get
			{
				return (bool)this["IsReadingFromWriteCacheForMigrationInBackground"];
			}
		}

		[ApplicationScopedSetting]
		[DebuggerNonUserCode]
		[DefaultSettingValue("False")]
		public bool IsUpgradedDnsResolvingEnabled
		{
			get
			{
				return (bool)this["IsUpgradedDnsResolvingEnabled"];
			}
		}

		[ApplicationScopedSetting]
		[DebuggerNonUserCode]
		[DefaultSettingValue("")]
		public string NameserversCsv
		{
			get
			{
				return (string)this["NameserversCsv"];
			}
		}

		[ApplicationScopedSetting]
		[DebuggerNonUserCode]
		[DefaultSettingValue("")]
		public string RedisEntityCacheMigrationState
		{
			get
			{
				return (string)this["RedisEntityCacheMigrationState"];
			}
		}

		[ApplicationScopedSetting]
		[DebuggerNonUserCode]
		[DefaultSettingValue("0")]
		public uint WriteOnlySourceReadWriteDestinationRolloutPerThousand
		{
			get
			{
				return (uint)this["WriteOnlySourceReadWriteDestinationRolloutPerThousand"];
			}
		}

		[ApplicationScopedSetting]
		[DebuggerNonUserCode]
		[DefaultSettingValue("0")]
		public uint ReadWriteSourceDeleteOnlyDestinationRolloutPerThousand
		{
			get
			{
				return (uint)this["ReadWriteSourceDeleteOnlyDestinationRolloutPerThousand"];
			}
		}

		[ApplicationScopedSetting]
		[DebuggerNonUserCode]
		[DefaultSettingValue("00:05:00")]
		public TimeSpan EndpointCacheExpiry
		{
			get
			{
				return (TimeSpan)this["EndpointCacheExpiry"];
			}
		}

		[ApplicationScopedSetting]
		[DebuggerNonUserCode]
		[DefaultSettingValue("MemcachedWebMcrouterCacheGroup")]
		public string MemcachedWebMigrationCacheGroupName
		{
			get
			{
				return (string)this["MemcachedWebMigrationCacheGroupName"];
			}
		}

		[ApplicationScopedSetting]
		[DebuggerNonUserCode]
		[DefaultSettingValue("MemcachedObjectMcrouterCacheGroup")]
		public string MemcachedObjectMigrationCacheGroupName
		{
			get
			{
				return (string)this["MemcachedObjectMigrationCacheGroupName"];
			}
		}

		[ApplicationScopedSetting]
		[DebuggerNonUserCode]
		[DefaultSettingValue("NoMigration,NoMigration,0")]
		public MigrationStateChange MemcachedWebMigrationState
		{
			get
			{
				return (MigrationStateChange)this["MemcachedWebMigrationState"];
			}
		}

		[ApplicationScopedSetting]
		[DebuggerNonUserCode]
		[DefaultSettingValue("NoMigration,NoMigration,0")]
		public MigrationStateChange MemcachedObjectMigrationState
		{
			get
			{
				return (MigrationStateChange)this["MemcachedObjectMigrationState"];
			}
		}

		[ApplicationScopedSetting]
		[DebuggerNonUserCode]
		[DefaultSettingValue("False")]
		public bool IsConnectionCreationRateLimitingEnabled
		{
			get
			{
				return (bool)this["IsConnectionCreationRateLimitingEnabled"];
			}
		}

		[ApplicationScopedSetting]
		[DebuggerNonUserCode]
		[DefaultSettingValue("00:00:01")]
		public TimeSpan ConnectionCreationRateLimitPeriodLength
		{
			get
			{
				return (TimeSpan)this["ConnectionCreationRateLimitPeriodLength"];
			}
		}

		[ApplicationScopedSetting]
		[DebuggerNonUserCode]
		[DefaultSettingValue("10")]
		public int MaximumConnectionCreationsPerPeriod
		{
			get
			{
				return (int)this["MaximumConnectionCreationsPerPeriod"];
			}
		}

		[ApplicationScopedSetting]
		[DebuggerNonUserCode]
		[DefaultSettingValue("00:15:00")]
		public TimeSpan CacheSlidingExpiration
		{
			get
			{
				return (TimeSpan)this["CacheSlidingExpiration"];
			}
		}

		[ApplicationScopedSetting]
		[DebuggerNonUserCode]
		[DefaultSettingValue("True")]
		public bool IsEntityDeserializationFailureLoggingEnabled
		{
			get
			{
				return (bool)this["IsEntityDeserializationFailureLoggingEnabled"];
			}
		}

		[ApplicationScopedSetting]
		[DebuggerNonUserCode]
		[DefaultSettingValue("True")]
		public bool IsEntityDeserializationFailureCounterEnabled
		{
			get
			{
				return (bool)this["IsEntityDeserializationFailureCounterEnabled"];
			}
		}

		internal Settings()
		{
			base.PropertyChanged += delegate
			{
				_Properties.Clear();
			};
		}

		protected override void OnPropertyChanged(object sender, PropertyChangedEventArgs e)
		{
			base.OnPropertyChanged(sender, e);
		}

		protected override void OnSettingsLoaded(object sender, SettingsLoadedEventArgs e)
		{
			base.OnSettingsLoaded(sender, e);
			Provider.RegisterSettings(e, this);
		}
	}
}
