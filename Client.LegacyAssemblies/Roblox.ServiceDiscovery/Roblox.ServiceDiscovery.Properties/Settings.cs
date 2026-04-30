using System;
using System.CodeDom.Compiler;
using System.Collections.Concurrent;
using System.ComponentModel;
using System.Configuration;
using System.Diagnostics;
using System.Diagnostics.CodeAnalysis;
using System.Runtime.CompilerServices;
using Roblox.Configuration;

namespace Roblox.ServiceDiscovery.Properties
{
	[SettingsProvider(typeof(Provider))]
	[ExcludeFromCodeCoverage]
	[CompilerGenerated]
	[GeneratedCode("Microsoft.VisualStudio.Editors.SettingsDesigner.SettingsSingleFileGenerator", "15.6.0.0")]
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
		public string ConsulAddress
		{
			get
			{
				return (string)this["ConsulAddress"];
			}
		}

		[ApplicationScopedSetting]
		[DebuggerNonUserCode]
		[DefaultSettingValue("00:05:00")]
		public TimeSpan ConsulLongPollingMaxWaitTime
		{
			get
			{
				return (TimeSpan)this["ConsulLongPollingMaxWaitTime"];
			}
		}

		[ApplicationScopedSetting]
		[DebuggerNonUserCode]
		[DefaultSettingValue("00:00:00.1000000")]
		public TimeSpan ConsulBackoffBase
		{
			get
			{
				return (TimeSpan)this["ConsulBackoffBase"];
			}
		}

		[ApplicationScopedSetting]
		[DebuggerNonUserCode]
		[DefaultSettingValue("00:00:30")]
		public TimeSpan MaximumConsulBackoff
		{
			get
			{
				return (TimeSpan)this["MaximumConsulBackoff"];
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
