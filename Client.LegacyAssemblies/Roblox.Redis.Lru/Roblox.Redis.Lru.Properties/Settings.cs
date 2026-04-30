using System.CodeDom.Compiler;
using System.Collections.Concurrent;
using System.ComponentModel;
using System.Configuration;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using Roblox.Configuration;

namespace Roblox.Redis.Lru.Properties
{
	[SettingsProvider(typeof(Provider))]
	[CompilerGenerated]
	[GeneratedCode("Microsoft.VisualStudio.Editors.SettingsDesigner.SettingsSingleFileGenerator", "14.0.0.0")]
	internal sealed class Settings : ApplicationSettingsBase
	{
		private readonly ConcurrentDictionary<string, object> _Properties = new ConcurrentDictionary<string, object>();

		private static Settings defaultInstance = (Settings)SettingsBase.Synchronized(new Settings());

		public override object this[string propertyName]
		{
			get
			{
				return _Properties.GetOrAdd(propertyName, (string property) => base[property]);
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
		public string SharedLruCacheRedisEndpointsCsv
		{
			get
			{
				return (string)this["SharedLruCacheRedisEndpointsCsv"];
			}
		}

		internal Settings()
		{
			base.PropertyChanged += UpdateProperty;
		}

		protected override void OnSettingsLoaded(object sender, SettingsLoadedEventArgs e)
		{
			base.OnSettingsLoaded(sender, e);
			Provider.RegisterSettings(e, this);
		}

		private void UpdateProperty(object sender, PropertyChangedEventArgs propertyChangeEvent)
		{
			object value;
			_Properties.TryRemove(propertyChangeEvent.PropertyName, out value);
		}
	}
}
