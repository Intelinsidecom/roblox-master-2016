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
	[GeneratedCode("Microsoft.VisualStudio.Editors.SettingsDesigner.SettingsSingleFileGenerator", "15.1.0.0")]
	internal sealed class InvalidationSettings : ApplicationSettingsBase
	{
		private readonly ConcurrentDictionary<string, object> _Properties = new ConcurrentDictionary<string, object>();

		private static InvalidationSettings defaultInstance = (InvalidationSettings)SettingsBase.Synchronized(new InvalidationSettings());

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

		public static InvalidationSettings Default
		{
			get
			{
				return defaultInstance;
			}
		}

		[ApplicationScopedSetting]
		[DebuggerNonUserCode]
		[DefaultSettingValue("")]
		public string RedisEndpointsForInvalidation
		{
			get
			{
				return (string)this["RedisEndpointsForInvalidation"];
			}
		}

		[ApplicationScopedSetting]
		[DebuggerNonUserCode]
		[DefaultSettingValue("4")]
		public int NumberOfAttemptsForInvalidationMessageDelivery
		{
			get
			{
				return (int)this["NumberOfAttemptsForInvalidationMessageDelivery"];
			}
		}

		[ApplicationScopedSetting]
		[DebuggerNonUserCode]
		[DefaultSettingValue("5")]
		public int NumberOfAttemptsForTopicSubscription
		{
			get
			{
				return (int)this["NumberOfAttemptsForTopicSubscription"];
			}
		}

		[ApplicationScopedSetting]
		[DebuggerNonUserCode]
		[DefaultSettingValue("5000")]
		public int RetryIntervalForTopicSubscriptionsInMilliSeconds
		{
			get
			{
				return (int)this["RetryIntervalForTopicSubscriptionsInMilliSeconds"];
			}
		}

		[ApplicationScopedSetting]
		[DebuggerNonUserCode]
		[DefaultSettingValue("00:00:30")]
		public TimeSpan DelayToStartPublishingAfterNodeAddition
		{
			get
			{
				return (TimeSpan)this["DelayToStartPublishingAfterNodeAddition"];
			}
		}

		[ApplicationScopedSetting]
		[DebuggerNonUserCode]
		[DefaultSettingValue("00:00:30")]
		public TimeSpan DelayToStopSubscribingAfterNodeRemoval
		{
			get
			{
				return (TimeSpan)this["DelayToStopSubscribingAfterNodeRemoval"];
			}
		}

		[ApplicationScopedSetting]
		[DebuggerNonUserCode]
		[DefaultSettingValue("100000")]
		public int RedisInvalidationQueueSize
		{
			get
			{
				return (int)this["RedisInvalidationQueueSize"];
			}
		}

		[ApplicationScopedSetting]
		[DebuggerNonUserCode]
		[DefaultSettingValue("False")]
		public bool ThrowOnInitializationErrorEnabled
		{
			get
			{
				return (bool)this["ThrowOnInitializationErrorEnabled"];
			}
		}

		internal InvalidationSettings()
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
