using System.CodeDom.Compiler;
using System.Collections.Concurrent;
using System.ComponentModel;
using System.Configuration;
using System.Diagnostics;
using System.Runtime.CompilerServices;

namespace Roblox.Configuration.Properties
{
	[SettingsProvider(typeof(Provider))]
	[CompilerGenerated]
	[GeneratedCode("Microsoft.VisualStudio.Editors.SettingsDesigner.SettingsSingleFileGenerator", "15.8.0.0")]
	internal sealed class EnvironmentSettings : ApplicationSettingsBase
	{
		private readonly ConcurrentDictionary<string, object> _Properties = new ConcurrentDictionary<string, object>();

		private static EnvironmentSettings defaultInstance = (EnvironmentSettings)SettingsBase.Synchronized(new EnvironmentSettings());

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

		public static EnvironmentSettings Default
		{
			get
			{
				return defaultInstance;
			}
		}

		[ApplicationScopedSetting]
		[DebuggerNonUserCode]
		[DefaultSettingValue("")]
		public string EnvironmentAbbreviation
		{
			get
			{
				return (string)this["EnvironmentAbbreviation"];
			}
		}

		[ApplicationScopedSetting]
		[DebuggerNonUserCode]
		[DefaultSettingValue("")]
		public string EnvironmentName
		{
			get
			{
				return (string)this["EnvironmentName"];
			}
		}

		[ApplicationScopedSetting]
		[DebuggerNonUserCode]
		public int EnvironmentId
		{
			get
			{
				return (int)this["EnvironmentId"];
			}
		}

		[ApplicationScopedSetting]
		[DebuggerNonUserCode]
		[DefaultSettingValue("")]
		public string ApplicationDomain
		{
			get
			{
				return (string)this["ApplicationDomain"];
			}
		}

		[ApplicationScopedSetting]
		[DebuggerNonUserCode]
		[DefaultSettingValue("")]
		public string InternalServicesProtocol
		{
			get
			{
				return (string)this["InternalServicesProtocol"];
			}
		}

		[ApplicationScopedSetting]
		[DebuggerNonUserCode]
		[DefaultSettingValue("")]
		public string CdnDomain
		{
			get
			{
				return (string)this["CdnDomain"];
			}
		}

		[ApplicationScopedSetting]
		[DebuggerNonUserCode]
		[DefaultSettingValue("chat")]
		public string ChatApiPrefix
		{
			get
			{
				return (string)this["ChatApiPrefix"];
			}
		}

		[ApplicationScopedSetting]
		[DebuggerNonUserCode]
		[DefaultSettingValue("locale")]
		public string LocaleApiPrefix
		{
			get
			{
				return (string)this["LocaleApiPrefix"];
			}
		}

		[ApplicationScopedSetting]
		[DebuggerNonUserCode]
		[DefaultSettingValue("friendsite")]
		public string FriendsAppSitePrefix
		{
			get
			{
				return (string)this["FriendsAppSitePrefix"];
			}
		}

		[ApplicationScopedSetting]
		[DebuggerNonUserCode]
		[DefaultSettingValue("translations")]
		public string TranslationsApiSitePrefix
		{
			get
			{
				return (string)this["TranslationsApiSitePrefix"];
			}
		}

		[ApplicationScopedSetting]
		[DebuggerNonUserCode]
		[DefaultSettingValue("abtesting")]
		public string AbTestingApiPrefix
		{
			get
			{
				return (string)this["AbTestingApiPrefix"];
			}
		}

		[ApplicationScopedSetting]
		[DebuggerNonUserCode]
		[DefaultSettingValue("authsite")]
		public string AuthAppSitePrefix
		{
			get
			{
				return (string)this["AuthAppSitePrefix"];
			}
		}

		[ApplicationScopedSetting]
		[DebuggerNonUserCode]
		[DefaultSettingValue("gameinternationalization")]
		public string GameInternationalizationApiSitePrefix
		{
			get
			{
				return (string)this["GameInternationalizationApiSitePrefix"];
			}
		}

		[ApplicationScopedSetting]
		[DebuggerNonUserCode]
		[DefaultSettingValue("")]
		public string InternalServicesDomain
		{
			get
			{
				return (string)this["InternalServicesDomain"];
			}
		}

		[ApplicationScopedSetting]
		[DebuggerNonUserCode]
		[DefaultSettingValue("")]
		public string ChinaBaseDomain
		{
			get
			{
				return (string)this["ChinaBaseDomain"];
			}
		}

		[ApplicationScopedSetting]
		[DebuggerNonUserCode]
		[DefaultSettingValue("translationroles")]
		public string TranslationRolesApiSitePrefix
		{
			get
			{
				return (string)this["TranslationRolesApiSitePrefix"];
			}
		}

		[ApplicationScopedSetting]
		[DebuggerNonUserCode]
		[DefaultSettingValue("metrics")]
		public string MetricsApiSiteSubdomain
		{
			get
			{
				return (string)this["MetricsApiSiteSubdomain"];
			}
		}

		[ApplicationScopedSetting]
		[DebuggerNonUserCode]
		[DefaultSettingValue("contacts")]
		public string ContactsApiSitePrefix
		{
			get
			{
				return (string)this["ContactsApiSitePrefix"];
			}
		}

		[ApplicationScopedSetting]
		[DebuggerNonUserCode]
		[DefaultSettingValue("midas")]
		public string MidasApiPrefix
		{
			get
			{
				return (string)this["MidasApiPrefix"];
			}
		}

		[ApplicationScopedSetting]
		[DebuggerNonUserCode]
		[DefaultSettingValue("discussions")]
		public string DiscussionsApiPrefix
		{
			get
			{
				return (string)this["DiscussionsApiPrefix"];
			}
		}

		[ApplicationScopedSetting]
		[DebuggerNonUserCode]
		[DefaultSettingValue("rbxcdn.qq.com")]
		public string ChinaCdnDomain
		{
			get
			{
				return (string)this["ChinaCdnDomain"];
			}
		}

		[ApplicationScopedSetting]
		[DebuggerNonUserCode]
		[DefaultSettingValue("localizationtables")]
		public string LocalizationTablesApiPrefix
		{
			get
			{
				return (string)this["LocalizationTablesApiPrefix"];
			}
		}

		[ApplicationScopedSetting]
		[DebuggerNonUserCode]
		[DefaultSettingValue("itemconfiguration")]
		public string ItemConfigurationApiSitePrefix
		{
			get
			{
				return (string)this["ItemConfigurationApiSitePrefix"];
			}
		}

		internal EnvironmentSettings()
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
