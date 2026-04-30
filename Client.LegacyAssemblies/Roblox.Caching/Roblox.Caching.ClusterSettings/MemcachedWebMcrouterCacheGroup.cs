using System;
using System.CodeDom.Compiler;
using System.Collections.Concurrent;
using System.ComponentModel;
using System.Configuration;
using System.Diagnostics;
using System.Diagnostics.CodeAnalysis;
using System.Runtime.CompilerServices;
using Roblox.Configuration;

namespace Roblox.Caching.ClusterSettings
{
	[SettingsProvider(typeof(Provider))]
	[ExcludeFromCodeCoverage]
	[CompilerGenerated]
	[GeneratedCode("Microsoft.VisualStudio.Editors.SettingsDesigner.SettingsSingleFileGenerator", "15.9.0.0")]
	internal sealed class MemcachedWebMcrouterCacheGroup : ApplicationSettingsBase, IExposedMemCachedClientSettings, INotifyPropertyChanged, ISamplingSharedCacheClientSettings
	{
		private readonly ConcurrentDictionary<string, object> _Properties = new ConcurrentDictionary<string, object>();

		private static MemcachedWebMcrouterCacheGroup defaultInstance = (MemcachedWebMcrouterCacheGroup)SettingsBase.Synchronized(new MemcachedWebMcrouterCacheGroup());

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

		public static MemcachedWebMcrouterCacheGroup Default
		{
			get
			{
				return defaultInstance;
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

		[UserScopedSetting]
		[DebuggerNonUserCode]
		[DefaultSettingValue("10")]
		public int MaximumConnectionCreationsPerPeriod
		{
			get
			{
				return (int)this["MaximumConnectionCreationsPerPeriod"];
			}
			set
			{
				this["MaximumConnectionCreationsPerPeriod"] = value;
			}
		}

		[ApplicationScopedSetting]
		[DebuggerNonUserCode]
		[DefaultSettingValue("20")]
		public int MaximumNumberOfSocketsPerPool
		{
			get
			{
				return (int)this["MaximumNumberOfSocketsPerPool"];
			}
		}

		[ApplicationScopedSetting]
		[DebuggerNonUserCode]
		[DefaultSettingValue("00:00:00.5000000")]
		public TimeSpan PooledSocketConstructionSocketConnectTimeout
		{
			get
			{
				return (TimeSpan)this["PooledSocketConstructionSocketConnectTimeout"];
			}
		}

		[ApplicationScopedSetting]
		[DebuggerNonUserCode]
		[DefaultSettingValue("00:00:00.1500000")]
		public TimeSpan ConnectionCircuitBreakerRetryInterval
		{
			get
			{
				return (TimeSpan)this["ConnectionCircuitBreakerRetryInterval"];
			}
		}

		[ApplicationScopedSetting]
		[DebuggerNonUserCode]
		[DefaultSettingValue("False")]
		public bool IsExecutionCircuitBreakerEnabled
		{
			get
			{
				return (bool)this["IsExecutionCircuitBreakerEnabled"];
			}
		}

		[ApplicationScopedSetting]
		[DebuggerNonUserCode]
		[DefaultSettingValue("00:00:00.0100000")]
		public TimeSpan ExecutionCircuitBreakerRetryInterval
		{
			get
			{
				return (TimeSpan)this["ExecutionCircuitBreakerRetryInterval"];
			}
		}

		[ApplicationScopedSetting]
		[DebuggerNonUserCode]
		[DefaultSettingValue("TimedOut")]
		public string SocketErrorsThatTripExecutionCircuitBreakerCsv
		{
			get
			{
				return (string)this["SocketErrorsThatTripExecutionCircuitBreakerCsv"];
			}
		}

		[ApplicationScopedSetting]
		[DebuggerNonUserCode]
		[DefaultSettingValue("3")]
		public int ExecutionCircuitBreakerExceptionCountForTripping
		{
			get
			{
				return (int)this["ExecutionCircuitBreakerExceptionCountForTripping"];
			}
		}

		[ApplicationScopedSetting]
		[DebuggerNonUserCode]
		[DefaultSettingValue("00:00:00.5000000")]
		public TimeSpan ExecutionCircuitBreakerExceptionIntervalForTripping
		{
			get
			{
				return (TimeSpan)this["ExecutionCircuitBreakerExceptionIntervalForTripping"];
			}
		}

		[ApplicationScopedSetting]
		[DebuggerNonUserCode]
		[DefaultSettingValue("")]
		public string PerHostExpiryOverridesCsv
		{
			get
			{
				return (string)this["PerHostExpiryOverridesCsv"];
			}
		}

		[ApplicationScopedSetting]
		[DebuggerNonUserCode]
		[DefaultSettingValue("False")]
		public bool PerHostExpiryOverridesEnabled
		{
			get
			{
				return (bool)this["PerHostExpiryOverridesEnabled"];
			}
		}

		[ApplicationScopedSetting]
		[DebuggerNonUserCode]
		[DefaultSettingValue("2")]
		public int ConnectionCircuitBreakerExceptionCountForTripping
		{
			get
			{
				return (int)this["ConnectionCircuitBreakerExceptionCountForTripping"];
			}
		}

		[ApplicationScopedSetting]
		[DebuggerNonUserCode]
		[DefaultSettingValue("00:00:00.1000000")]
		public TimeSpan ConnectionCircuitBreakerExceptionIntervalForTripping
		{
			get
			{
				return (TimeSpan)this["ConnectionCircuitBreakerExceptionIntervalForTripping"];
			}
		}

		[ApplicationScopedSetting]
		[DebuggerNonUserCode]
		[DefaultSettingValue("True")]
		public bool IsForceResetBytesEnabled
		{
			get
			{
				return (bool)this["IsForceResetBytesEnabled"];
			}
		}

		[ApplicationScopedSetting]
		[DebuggerNonUserCode]
		[DefaultSettingValue("NotSupportedException")]
		public string ExceptionTypeNamesToForceResetBytesCsv
		{
			get
			{
				return (string)this["ExceptionTypeNamesToForceResetBytesCsv"];
			}
		}

		[ApplicationScopedSetting]
		[DebuggerNonUserCode]
		[DefaultSettingValue("10")]
		public int ForceResetBytesMaxAttempts
		{
			get
			{
				return (int)this["ForceResetBytesMaxAttempts"];
			}
		}

		[ApplicationScopedSetting]
		[DebuggerNonUserCode]
		[DefaultSettingValue("256")]
		public int ForceResetBytesMaxNumberOfBytes
		{
			get
			{
				return (int)this["ForceResetBytesMaxNumberOfBytes"];
			}
		}

		[ApplicationScopedSetting]
		[DebuggerNonUserCode]
		[DefaultSettingValue("False")]
		public bool LogVerboseExceptions
		{
			get
			{
				return (bool)this["LogVerboseExceptions"];
			}
		}

		[ApplicationScopedSetting]
		[DebuggerNonUserCode]
		[DefaultSettingValue("True")]
		public bool IsRespectingMaxPoolSizeEnabled
		{
			get
			{
				return (bool)this["IsRespectingMaxPoolSizeEnabled"];
			}
		}

		[ApplicationScopedSetting]
		[DebuggerNonUserCode]
		[DefaultSettingValue("True")]
		public bool UseRoundRobinSocketPoolSelection
		{
			get
			{
				return (bool)this["UseRoundRobinSocketPoolSelection"];
			}
		}

		[ApplicationScopedSetting]
		[DebuggerNonUserCode]
		[DefaultSettingValue("3")]
		public int MaximumSelectionAttemptsForRoundRobin
		{
			get
			{
				return (int)this["MaximumSelectionAttemptsForRoundRobin"];
			}
		}

		[ApplicationScopedSetting]
		[DebuggerNonUserCode]
		[DefaultSettingValue("00:00:01")]
		public TimeSpan SendReceiveTimeout
		{
			get
			{
				return (TimeSpan)this["SendReceiveTimeout"];
			}
		}

		[ApplicationScopedSetting]
		[DebuggerNonUserCode]
		[DefaultSettingValue("5")]
		public uint MinimumPoolSize
		{
			get
			{
				return (uint)this["MinimumPoolSize"];
			}
		}

		[ApplicationScopedSetting]
		[DebuggerNonUserCode]
		[DefaultSettingValue("100")]
		public uint MaximumPoolSize
		{
			get
			{
				return (uint)this["MaximumPoolSize"];
			}
		}

		[ApplicationScopedSetting]
		[DebuggerNonUserCode]
		[DefaultSettingValue("00:01:00")]
		public TimeSpan SocketRecycleAge
		{
			get
			{
				return (TimeSpan)this["SocketRecycleAge"];
			}
		}

		[ApplicationScopedSetting]
		[DebuggerNonUserCode]
		[DefaultSettingValue("131072")]
		public uint CompressionThreshold
		{
			get
			{
				return (uint)this["CompressionThreshold"];
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
		[DefaultSettingValue("00:01:00")]
		public TimeSpan LogExpiration
		{
			get
			{
				return (TimeSpan)this["LogExpiration"];
			}
		}

		[ApplicationScopedSetting]
		[DebuggerNonUserCode]
		[DefaultSettingValue("")]
		public string InfluxUrl
		{
			get
			{
				return (string)this["InfluxUrl"];
			}
		}

		[ApplicationScopedSetting]
		[DebuggerNonUserCode]
		[DefaultSettingValue("")]
		public string InfluxDatabase
		{
			get
			{
				return (string)this["InfluxDatabase"];
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
		[DefaultSettingValue("00:15:00")]
		public TimeSpan SampleLogExpiration
		{
			get
			{
				return (TimeSpan)this["SampleLogExpiration"];
			}
		}

		[ApplicationScopedSetting]
		[DebuggerNonUserCode]
		[DefaultSettingValue("0")]
		public uint SampleRatePerThousand
		{
			get
			{
				return (uint)this["SampleRatePerThousand"];
			}
		}

		internal MemcachedWebMcrouterCacheGroup()
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
