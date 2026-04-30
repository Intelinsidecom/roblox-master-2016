using System.Configuration;

namespace Roblox.Configuration
{
	public class ProviderConfigSection : ConfigurationSection
	{
		private static readonly ConfigurationPropertyCollection _Properties;

		private static readonly ConfigurationProperty _IsDatabaseWritableProperty;

		private static readonly ConfigurationProperty _GroupConfigs;

		public bool IsDatabaseReadonly
		{
			get
			{
				return !(bool)base[_IsDatabaseWritableProperty];
			}
			set
			{
				base[_IsDatabaseWritableProperty] = !value;
			}
		}

		public GroupConfigElements GroupConfigs
		{
			get
			{
				return (GroupConfigElements)base[_GroupConfigs];
			}
		}

		protected override ConfigurationPropertyCollection Properties
		{
			get
			{
				return _Properties;
			}
		}

		static ProviderConfigSection()
		{
			_Properties = new ConfigurationPropertyCollection();
			_IsDatabaseWritableProperty = new ConfigurationProperty("isDatabaseWritable", typeof(bool), false, ConfigurationPropertyOptions.None);
			_Properties.Add(_IsDatabaseWritableProperty);
			_GroupConfigs = new ConfigurationProperty("groups", typeof(GroupConfigElements), null, ConfigurationPropertyOptions.IsRequired);
			_Properties.Add(_GroupConfigs);
		}
	}
}
