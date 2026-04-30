using System;
using System.CodeDom.Compiler;
using System.Collections.Concurrent;
using System.ComponentModel;
using System.Configuration;
using System.Diagnostics;
using System.Diagnostics.CodeAnalysis;
using System.Runtime.CompilerServices;
using Roblox.Configuration;

namespace Roblox.Platform.Infrastructure.Properties
{
	[SettingsProvider(typeof(Provider))]
	[ExcludeFromCodeCoverage]
	[CompilerGenerated]
	[GeneratedCode("Microsoft.VisualStudio.Editors.SettingsDesigner.SettingsSingleFileGenerator", "15.8.0.0")]
	internal sealed class Settings : ApplicationSettingsBase, ISettings
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
		public string GameServerJobSignatureSalt
		{
			get
			{
				return (string)this["GameServerJobSignatureSalt"];
			}
		}

		[ApplicationScopedSetting]
		[DebuggerNonUserCode]
		[DefaultSettingValue("")]
		public string GameServerJobSignatureAlternateSalt
		{
			get
			{
				return (string)this["GameServerJobSignatureAlternateSalt"];
			}
		}

		[ApplicationScopedSetting]
		[DebuggerNonUserCode]
		[DefaultSettingValue("00:10:00")]
		public TimeSpan VendorIDToNameMapRefreshInterval
		{
			get
			{
				return (TimeSpan)this["VendorIDToNameMapRefreshInterval"];
			}
		}

		[ApplicationScopedSetting]
		[DebuggerNonUserCode]
		[DefaultSettingValue("00:05:00")]
		public TimeSpan ServerIDsInAllowedGroupsRefreshInterval
		{
			get
			{
				return (TimeSpan)this["ServerIDsInAllowedGroupsRefreshInterval"];
			}
		}

		[ApplicationScopedSetting]
		[DebuggerNonUserCode]
		[DefaultSettingValue("00:01:00")]
		public TimeSpan PrimaryIPAddressToServerMapRefreshInterval
		{
			get
			{
				return (TimeSpan)this["PrimaryIPAddressToServerMapRefreshInterval"];
			}
		}

		[ApplicationScopedSetting]
		[DebuggerNonUserCode]
		[DefaultSettingValue("00:00:05")]
		public TimeSpan DosArrestNetworksRefreshInterval
		{
			get
			{
				return (TimeSpan)this["DosArrestNetworksRefreshInterval"];
			}
		}

		[ApplicationScopedSetting]
		[DebuggerNonUserCode]
		[DefaultSettingValue("45")]
		public string AllowedServerGroupIDs
		{
			get
			{
				return (string)this["AllowedServerGroupIDs"];
			}
		}

		[ApplicationScopedSetting]
		[DebuggerNonUserCode]
		[DefaultSettingValue("00:01:00")]
		public TimeSpan GameRelayIpAddressToDatacenterIdMapRefreshInterval
		{
			get
			{
				return (TimeSpan)this["GameRelayIpAddressToDatacenterIdMapRefreshInterval"];
			}
		}

		[ApplicationScopedSetting]
		[DebuggerNonUserCode]
		[DefaultSettingValue("")]
		public string XForwardedForProxyIpAddressRanges
		{
			get
			{
				return (string)this["XForwardedForProxyIpAddressRanges"];
			}
		}

		[ApplicationScopedSetting]
		[DebuggerNonUserCode]
		[DefaultSettingValue("2")]
		public string AllowedXForwardedForProxyServerTypeIds
		{
			get
			{
				return (string)this["AllowedXForwardedForProxyServerTypeIds"];
			}
		}

		[ApplicationScopedSetting]
		[DebuggerNonUserCode]
		[DefaultSettingValue("00:05:00")]
		public TimeSpan SnatIpAddressesRefreshInterval
		{
			get
			{
				return (TimeSpan)this["SnatIpAddressesRefreshInterval"];
			}
		}

		[ApplicationScopedSetting]
		[DebuggerNonUserCode]
		[DefaultSettingValue("False")]
		public bool ReadSnatIpAddressesFromDatabase
		{
			get
			{
				return (bool)this["ReadSnatIpAddressesFromDatabase"];
			}
		}

		[ApplicationScopedSetting]
		[DebuggerNonUserCode]
		[DefaultSettingValue("")]
		public string WhitelistedIpAddressRanges
		{
			get
			{
				return (string)this["WhitelistedIpAddressRanges"];
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
