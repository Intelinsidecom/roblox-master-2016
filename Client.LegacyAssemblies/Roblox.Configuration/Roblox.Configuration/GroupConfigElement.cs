using System;
using System.Configuration;

namespace Roblox.Configuration
{
	public class GroupConfigElement : ConfigurationElement
	{
		private static readonly ConfigurationPropertyCollection _Properties;

		private static readonly ConfigurationProperty _GroupNameProperty;

		private static readonly ConfigurationProperty _UpdateIntervalProperty;

		private static readonly ConfigurationProperty _ConfigurationServiceEndpointProperty;

		private static readonly ConfigurationProperty _UseConfigurationServiceEnabledProperty;

		private static readonly ConfigurationProperty _OverrideFileNameProperty;

		public string GroupName
		{
			get
			{
				return (string)base[_GroupNameProperty];
			}
			set
			{
				base[_GroupNameProperty] = value;
			}
		}

		public TimeSpan UpdateInterval
		{
			get
			{
				return (TimeSpan)base[_UpdateIntervalProperty];
			}
			set
			{
				base[_UpdateIntervalProperty] = value;
			}
		}

		public string ConfigurationServiceEndpoint
		{
			get
			{
				return (string)base[_ConfigurationServiceEndpointProperty];
			}
			set
			{
				base[_ConfigurationServiceEndpointProperty] = value;
			}
		}

		public bool UseConfigurationService
		{
			get
			{
				return (bool)base[_UseConfigurationServiceEnabledProperty];
			}
			set
			{
				base[_UseConfigurationServiceEnabledProperty] = value;
			}
		}

		public string OverrideFileName
		{
			get
			{
				return (string)base[_OverrideFileNameProperty];
			}
			set
			{
				base[_OverrideFileNameProperty] = value;
			}
		}

		protected override ConfigurationPropertyCollection Properties
		{
			get
			{
				return _Properties;
			}
		}

		static GroupConfigElement()
		{
			_Properties = new ConfigurationPropertyCollection();
			_GroupNameProperty = new ConfigurationProperty("groupName", typeof(string), null, ConfigurationPropertyOptions.IsRequired);
			_Properties.Add(_GroupNameProperty);
			_UpdateIntervalProperty = new ConfigurationProperty("updateInterval", typeof(TimeSpan), TimeSpan.Zero, ConfigurationPropertyOptions.None);
			_Properties.Add(_UpdateIntervalProperty);
			_ConfigurationServiceEndpointProperty = new ConfigurationProperty("serviceEndpoint", typeof(string), null, ConfigurationPropertyOptions.IsRequired);
			_Properties.Add(_ConfigurationServiceEndpointProperty);
			_UseConfigurationServiceEnabledProperty = new ConfigurationProperty("useService", typeof(bool), true, ConfigurationPropertyOptions.None);
			_Properties.Add(_UseConfigurationServiceEnabledProperty);
			_OverrideFileNameProperty = new ConfigurationProperty("overrideFileName", typeof(string), null, ConfigurationPropertyOptions.None);
			_Properties.Add(_OverrideFileNameProperty);
		}
	}
}
