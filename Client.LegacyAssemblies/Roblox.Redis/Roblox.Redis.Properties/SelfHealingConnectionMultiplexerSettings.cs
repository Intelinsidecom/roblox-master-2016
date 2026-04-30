using System;
using System.CodeDom.Compiler;
using System.Collections.Concurrent;
using System.ComponentModel;
using System.Configuration;
using System.Diagnostics;
using System.Diagnostics.CodeAnalysis;
using System.Runtime.CompilerServices;
using Roblox.Configuration;

namespace Roblox.Redis.Properties
{
	[SettingsProvider(typeof(Provider))]
	[ExcludeFromCodeCoverage]
	[CompilerGenerated]
	[GeneratedCode("Microsoft.VisualStudio.Editors.SettingsDesigner.SettingsSingleFileGenerator", "14.0.0.0")]
	public sealed class SelfHealingConnectionMultiplexerSettings : ApplicationSettingsBase, ISelfHealingConnectionMultiplexerSettings, INotifyPropertyChanged
	{
		private readonly ConcurrentDictionary<string, object> _Properties = new ConcurrentDictionary<string, object>();

		private static SelfHealingConnectionMultiplexerSettings defaultInstance = (SelfHealingConnectionMultiplexerSettings)SettingsBase.Synchronized(new SelfHealingConnectionMultiplexerSettings());

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

		public static SelfHealingConnectionMultiplexerSettings Default
		{
			get
			{
				return defaultInstance;
			}
		}

		[ApplicationScopedSetting]
		[DebuggerNonUserCode]
		[DefaultSettingValue("00:00:05")]
		public TimeSpan DetectionInterval
		{
			get
			{
				return (TimeSpan)this["DetectionInterval"];
			}
		}

		[ApplicationScopedSetting]
		[DebuggerNonUserCode]
		[DefaultSettingValue("50")]
		public int DetectionThreshold
		{
			get
			{
				return (int)this["DetectionThreshold"];
			}
		}

		[ApplicationScopedSetting]
		[DebuggerNonUserCode]
		[DefaultSettingValue("false")]
		public bool FeatureEnabled
		{
			get
			{
				return (bool)this["FeatureEnabled"];
			}
		}

		[ApplicationScopedSetting]
		[DebuggerNonUserCode]
		[DefaultSettingValue("00:00:05")]
		public TimeSpan ResetGracePeriod
		{
			get
			{
				return (TimeSpan)this["ResetGracePeriod"];
			}
		}

		internal SelfHealingConnectionMultiplexerSettings()
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
