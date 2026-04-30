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
	[GeneratedCode("Microsoft.VisualStudio.Editors.SettingsDesigner.SettingsSingleFileGenerator", "16.3.0.0")]
	internal sealed class MemcachedGroupsSettings : ApplicationSettingsBase
	{
		private readonly ConcurrentDictionary<string, object> _Properties = new ConcurrentDictionary<string, object>();

		private static MemcachedGroupsSettings defaultInstance = (MemcachedGroupsSettings)SettingsBase.Synchronized(new MemcachedGroupsSettings());

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

		public static MemcachedGroupsSettings Default
		{
			get
			{
				return defaultInstance;
			}
		}

		[ApplicationScopedSetting]
		[DebuggerNonUserCode]
		[DefaultSettingValue("")]
		public string FriendsGroup
		{
			get
			{
				return (string)this["FriendsGroup"];
			}
		}

		[ApplicationScopedSetting]
		[DebuggerNonUserCode]
		[DefaultSettingValue("")]
		public string UniversesServiceCacheGroup
		{
			get
			{
				return (string)this["UniversesServiceCacheGroup"];
			}
		}

		[ApplicationScopedSetting]
		[DebuggerNonUserCode]
		[DefaultSettingValue("")]
		public string UniversesClientReadCacheGroup
		{
			get
			{
				return (string)this["UniversesClientReadCacheGroup"];
			}
		}

		[ApplicationScopedSetting]
		[DebuggerNonUserCode]
		[DefaultSettingValue("")]
		public string PresenceServiceCacheGroup
		{
			get
			{
				return (string)this["PresenceServiceCacheGroup"];
			}
		}

		[ApplicationScopedSetting]
		[DebuggerNonUserCode]
		[DefaultSettingValue("")]
		public string ThumbnailsMcrouterGroup
		{
			get
			{
				return (string)this["ThumbnailsMcrouterGroup"];
			}
		}

		[ApplicationScopedSetting]
		[DebuggerNonUserCode]
		[DefaultSettingValue("")]
		public string OwnershipServiceMcrouterCacheGroup
		{
			get
			{
				return (string)this["OwnershipServiceMcrouterCacheGroup"];
			}
		}

		[ApplicationScopedSetting]
		[DebuggerNonUserCode]
		[DefaultSettingValue("")]
		public string FriendsMcrouterGroup
		{
			get
			{
				return (string)this["FriendsMcrouterGroup"];
			}
		}

		[ApplicationScopedSetting]
		[DebuggerNonUserCode]
		[DefaultSettingValue("")]
		public string GroupsServiceMcrouterCacheGroup
		{
			get
			{
				return (string)this["GroupsServiceMcrouterCacheGroup"];
			}
		}

		[ApplicationScopedSetting]
		[DebuggerNonUserCode]
		[DefaultSettingValue("")]
		public string UniversesClientReadMcrouterCacheGroup
		{
			get
			{
				return (string)this["UniversesClientReadMcrouterCacheGroup"];
			}
		}

		[ApplicationScopedSetting]
		[DebuggerNonUserCode]
		[DefaultSettingValue("")]
		public string UniversesServiceMcrouterCacheGroup
		{
			get
			{
				return (string)this["UniversesServiceMcrouterCacheGroup"];
			}
		}

		[ApplicationScopedSetting]
		[DebuggerNonUserCode]
		[DefaultSettingValue("")]
		public string MemcachedWebMcrouterCacheGroup
		{
			get
			{
				return (string)this["MemcachedWebMcrouterCacheGroup"];
			}
		}

		[ApplicationScopedSetting]
		[DebuggerNonUserCode]
		[DefaultSettingValue("")]
		public string MemcachedObjectMcrouterCacheGroup
		{
			get
			{
				return (string)this["MemcachedObjectMcrouterCacheGroup"];
			}
		}

		[ApplicationScopedSetting]
		[DebuggerNonUserCode]
		[DefaultSettingValue("")]
		public string UserMcrouterCacheGroup
		{
			get
			{
				return (string)this["UserMcrouterCacheGroup"];
			}
		}

		[ApplicationScopedSetting]
		[DebuggerNonUserCode]
		[DefaultSettingValue("")]
		public string ThumbnailsExperimentalGroup
		{
			get
			{
				return (string)this["ThumbnailsExperimentalGroup"];
			}
		}

		[ApplicationScopedSetting]
		[DebuggerNonUserCode]
		[DefaultSettingValue("")]
		public string DemographicsMcrouterGroup
		{
			get
			{
				return (string)this["DemographicsMcrouterGroup"];
			}
		}

		[ApplicationScopedSetting]
		[DebuggerNonUserCode]
		[DefaultSettingValue("")]
		public string MarketingMcrouterGroup
		{
			get
			{
				return (string)this["MarketingMcrouterGroup"];
			}
		}

		internal MemcachedGroupsSettings()
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
