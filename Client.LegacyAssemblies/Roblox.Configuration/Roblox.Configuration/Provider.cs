using System;
using System.Collections;
using System.Collections.Concurrent;
using System.Collections.Generic;
using System.Collections.Specialized;
using System.Configuration;
using System.IO;
using System.Linq;
using System.Reflection;
using System.Text;

namespace Roblox.Configuration
{
	public class Provider : SettingsProvider
	{
		private const int _MaxRetries = 20;

		private const int _SoftLogCharacterLimit = 20000;

		private bool _OneTimeInitializeComplete;

		private string _GroupName;

		private bool _HasSettings;

		private bool _HasConnectionStrings;

		private ApplicationSettingsBase _ApplicationSettings;

		private SettingsProvider _AlternateSettings;

		private DateTime _LastSettingModificationDateTime = DateTime.MinValue;

		private DateTime _LastConnectionStringModificationDateTime = DateTime.MinValue;

		private bool _IsFirstFetch = true;

		private string _OverriddenSettingsFileName;

		private Dictionary<string, object> _OverriddenSettings;

		private DateTime _LastFileBasedOverrideModificationDateTime = DateTime.MinValue;

		private static readonly ProviderConfigSection _RobloxConfigurationSection;

		private static readonly ConfigurationServiceProvider _ConfigurationClient;

		private static readonly ConfigurationServiceFetcher _ConfigurationServiceFetcher;

		private static readonly string _ServiceEndpoint;

		private static readonly SelfDisposingTimer _Timer;

		private static readonly ConcurrentDictionary<string, Provider> _RegisteredProviders;

		public override string Description
		{
			get
			{
				return "A service-backed SettingsProvider that synchronizes assembly settings from a common repository.";
			}
		}

		public override string ApplicationName { get; set; }

		static Provider()
		{
			Utilities.LogInformation("Roblox.Configuration.Provider static init section started");
			_RobloxConfigurationSection = ConfigurationManager.GetSection("robloxConfigurationProvider") as ProviderConfigSection;
			if (_RobloxConfigurationSection != null)
			{
				GroupConfigElement groupConfiguration = GetGroupConfiguration();
				string text = (_ServiceEndpoint = groupConfiguration.ConfigurationServiceEndpoint);
				_ConfigurationClient = new ConfigurationServiceProvider(text);
				_ConfigurationServiceFetcher = new ConfigurationServiceFetcher(_ConfigurationClient);
				Utilities.LogInformation(string.Format("Roblox.Configuration.Provider static init API Client pointing to endpoint {0}", text));
				TimeSpan updateInterval = groupConfiguration.UpdateInterval;
				_Timer = new SelfDisposingTimer(RefreshRegisteredProviders, updateInterval, updateInterval);
				_RegisteredProviders = new ConcurrentDictionary<string, Provider>();
				Utilities.LogInformation(string.Format("Roblox.Configuration.Provider static init Timer created, refresh every {0}", updateInterval));
			}
			else
			{
				Utilities.LogWarning("No config file found with robloxConfigurationProvider");
			}
		}

		public static string GetConfigurationServiceEndpoint()
		{
			return _ServiceEndpoint ?? "";
		}

		public static void RegisterSettings(SettingsLoadedEventArgs e, ApplicationSettingsBase applicationSettings)
		{
			Provider provider = e.Provider as Provider;
			if (provider != null)
			{
				provider.UpdateApplicationSettings(applicationSettings);
			}
			string text = ((provider != null) ? provider._GroupName : null);
			if (!string.IsNullOrEmpty(text) && _RegisteredProviders != null && !_RegisteredProviders.ContainsKey(text))
			{
				if (_RegisteredProviders.TryAdd(text, provider))
				{
					Utilities.LogInformation(string.Format("Settings Group {0} is registered", text));
				}
				else
				{
					Utilities.LogWarning(string.Format("Settings Group {0} failed to register", text));
				}
			}
		}

		private static void RefreshRegisteredProviders()
		{
			try
			{
				Utilities.LogInformation(string.Format("RefreshRegisteredProviders - Start on {0} settings providers", _RegisteredProviders.Count));
				_Timer.Pause();
				foreach (KeyValuePair<string, Provider> registeredProvider in _RegisteredProviders)
				{
					registeredProvider.Value.ReloadChangedSettings();
				}
				Utilities.LogInformation(string.Format("RefreshRegisteredProviders - Complete on {0} settings providers", _RegisteredProviders.Count));
			}
			catch (Exception arg)
			{
				Utilities.LogError(string.Format("RefreshRegisteredProviders in Roblox.Configuration.Provider failed with the following\n {0}", arg));
			}
			finally
			{
				_Timer.Unpause();
			}
		}

		private static GroupConfigElement GetGroupConfiguration(string groupName = "*")
		{
			GroupConfigElement result = null;
			if (_RobloxConfigurationSection != null)
			{
				result = _RobloxConfigurationSection.GroupConfigs[groupName] ?? _RobloxConfigurationSection.GroupConfigs["*"];
			}
			return result;
		}

		public override void Initialize(string name, NameValueCollection col)
		{
			if (string.IsNullOrEmpty(name))
			{
				name = GetType().FullName;
			}
			base.Initialize(name, col);
		}

		public override SettingsPropertyValueCollection GetPropertyValues(SettingsContext context, SettingsPropertyCollection collection)
		{
			OneTimeInitializeFromContext(context);
			if (_AlternateSettings != null)
			{
				return _AlternateSettings.GetPropertyValues(context, collection);
			}
			SettingsPropertyValueCollection settingsPropertyValueCollection;
			Dictionary<string, SettingsPropertyValue> settingsProperties;
			LoadLocalOverrides(collection, out settingsPropertyValueCollection, out settingsProperties);
			if (_ConfigurationClient == null)
			{
				return settingsPropertyValueCollection;
			}
			int maxAttempts = ((!_IsFirstFetch) ? 1 : 20);
			DateTime minValue = DateTime.MinValue;
			if (_HasSettings)
			{
				UpdateSettingsFromService(settingsProperties, maxAttempts, minValue);
			}
			if (_HasConnectionStrings)
			{
				UpdateConnectionStringsFromService(settingsProperties, maxAttempts, minValue);
			}
			return settingsPropertyValueCollection;
		}

		private void LoadLocalOverrides(SettingsPropertyCollection collection, out SettingsPropertyValueCollection settingsPropertyValueCollection, out Dictionary<string, SettingsPropertyValue> settingsProperties)
		{
			settingsPropertyValueCollection = new SettingsPropertyValueCollection();
			settingsProperties = new Dictionary<string, SettingsPropertyValue>(collection.Count);
			foreach (SettingsProperty item in collection)
			{
				SettingsPropertyValue settingsPropertyValue = new SettingsPropertyValue(item);
				string settingName = string.Format("{0}.{1}", _GroupName, item.Name);
				object overriddenValue;
				if (TryGetOverriddenSettingValue(settingName, out overriddenValue))
				{
					settingsPropertyValue.PropertyValue = overriddenValue;
				}
				settingsPropertyValueCollection.Add(settingsPropertyValue);
				settingsProperties[item.Name] = settingsPropertyValue;
			}
		}

		private void UpdateSettingsFromService(Dictionary<string, SettingsPropertyValue> settingsProperties, int maxAttempts, DateTime lastModification)
		{
			IReadOnlyCollection<ISetting> readOnlyCollection = _ConfigurationServiceFetcher.FetchWithRetries(_ConfigurationServiceFetcher.GetAllSettings, _GroupName, maxAttempts);
			_IsFirstFetch = false;
			List<string> list = new List<string>();
			foreach (ISetting item in readOnlyCollection)
			{
				if (item.Updated > lastModification)
				{
					lastModification = item.Updated;
				}
				SettingsPropertyValue value;
				if (!settingsProperties.TryGetValue(item.Name, out value))
				{
					list.Add(item.Name);
					continue;
				}
				string settingName = string.Format("{0}.{1}", _GroupName, item.Name);
				object overriddenValue;
				if (TryGetOverriddenSettingValue(settingName, out overriddenValue))
				{
					value.SerializedValue = overriddenValue;
				}
				else
				{
					value.SerializedValue = item.Value;
				}
			}
			if (list.Count > 0)
			{
				Utilities.LogWarning(BuildUnknownSettingsMessage(list, "Settings"));
			}
			_LastSettingModificationDateTime = lastModification;
		}

		private void UpdateConnectionStringsFromService(Dictionary<string, SettingsPropertyValue> settingsProperties, int maxAttempts, DateTime lastModification)
		{
			IReadOnlyCollection<IConnectionString> readOnlyCollection = _ConfigurationServiceFetcher.FetchWithRetries(_ConfigurationServiceFetcher.GetAllConnectionStrings, _GroupName, maxAttempts);
			_IsFirstFetch = false;
			List<string> list = new List<string>();
			foreach (IConnectionString item in readOnlyCollection)
			{
				if (item.Updated > lastModification)
				{
					lastModification = item.Updated;
				}
				SettingsPropertyValue value;
				if (!settingsProperties.TryGetValue(item.Name, out value))
				{
					list.Add(item.Name);
				}
				else
				{
					value.SerializedValue = item.Value;
				}
			}
			if (list.Count > 0)
			{
				Utilities.LogWarning(BuildUnknownSettingsMessage(list, "Connection Strings"));
			}
			_LastConnectionStringModificationDateTime = lastModification;
		}

		private bool TryGetOverriddenSettingValue(string settingName, out object overriddenValue)
		{
			overriddenValue = null;
			object value;
			if (_OverriddenSettings != null && _OverriddenSettings.TryGetValue(settingName, out value))
			{
				overriddenValue = value;
				return true;
			}
			return false;
		}

		public override void SetPropertyValues(SettingsContext context, SettingsPropertyValueCollection collection)
		{
			OneTimeInitializeFromContext(context);
			if (_AlternateSettings != null)
			{
				_AlternateSettings.SetPropertyValues(context, collection);
				return;
			}
			if (_ConfigurationClient == null)
			{
				throw new ConfigurationErrorsException("SettingsService endpoint is not defined.");
			}
			foreach (SettingsPropertyValue item in collection)
			{
				SettingsSerializeAs serializeAs = item.Property.SerializeAs;
				if (serializeAs != SettingsSerializeAs.String)
				{
					Utilities.LogWarning(string.Format("Property {0}.{1} cannot be saved because it serializes as {2}", _GroupName, item.Name, serializeAs));
				}
				else
				{
					SaveProperty(item);
				}
			}
		}

		private void OneTimeInitializeFromContext(SettingsContext context)
		{
			Utilities.LogInformation(string.Format("OneTimeInitializeFromContext from {0}", context));
			if (!_OneTimeInitializeComplete)
			{
				try
				{
					_GroupName = (string)((Hashtable)(object)context)[(object)"GroupName"];
				}
				catch (Exception inner)
				{
					throw new ConfigurationErrorsException("Invalid or missing GroupName", inner);
				}
				Utilities.LogInformation(string.Format("ProviderBase identifying settings for {0}", _GroupName));
				DetectSettingsAndConnectionStringInClass(context);
				GroupConfigElement groupConfiguration = GetGroupConfiguration(_GroupName);
				DetectFileSystemOverridesForGroup(groupConfiguration);
				if (string.IsNullOrEmpty((groupConfiguration != null) ? groupConfiguration.ConfigurationServiceEndpoint : null))
				{
					DetectAlternateSettings();
				}
				_OneTimeInitializeComplete = true;
			}
		}

		private void DetectSettingsAndConnectionStringInClass(SettingsContext context)
		{
			bool flag = false;
			bool flag2 = false;
			try
			{
				Type obj = ((Hashtable)(object)context)[(object)"SettingsClassType"] as Type;
				PropertyInfo[] array = (((object)obj != null) ? obj.GetProperties() : null);
				if (array == null)
				{
					return;
				}
				PropertyInfo[] array2 = array;
				for (int i = 0; i < array2.Length; i++)
				{
					if (array2[i].GetCustomAttributes(true).OfType<SpecialSettingAttribute>().Any((SpecialSettingAttribute specialSettingAttribute) => specialSettingAttribute.SpecialSetting == SpecialSetting.ConnectionString))
					{
						flag2 = true;
					}
					else
					{
						flag = true;
					}
					if (flag && flag2)
					{
						break;
					}
				}
				_HasSettings = flag;
				_HasConnectionStrings = flag2;
			}
			catch (Exception ex)
			{
				Utilities.LogError(ex.ToString());
			}
		}

		private void DetectFileSystemOverridesForGroup(GroupConfigElement config)
		{
			_OverriddenSettingsFileName = ((config != null) ? config.OverrideFileName : null);
			_OverriddenSettings = FileBasedSettingsOverrideHelper.ReadOverriddenSettingsFromFilePath(_OverriddenSettingsFileName, Utilities.LogError);
		}

		private void DetectAlternateSettings()
		{
			Utilities.LogInformation("Group {0} is using file-based configuration", _GroupName);
			_AlternateSettings = new LocalFileSettingsProvider();
			_AlternateSettings.Initialize(null, null);
		}

		private void SaveProperty(SettingsPropertyValue settingsPropertyValue)
		{
			string name = settingsPropertyValue.Name;
			string fullName = settingsPropertyValue.Property.PropertyType.FullName;
			string value = (string)settingsPropertyValue.SerializedValue;
			DateTime timestamp = Utilities.GetTimestamp();
			if (IsConnectionString(settingsPropertyValue))
			{
				_LastConnectionStringModificationDateTime = timestamp;
			}
			else
			{
				_LastSettingModificationDateTime = timestamp;
			}
			try
			{
				_ConfigurationClient.SetProperty(_GroupName, name, fullName, value, timestamp);
			}
			catch (Exception ex)
			{
				Utilities.LogError(ex.ToString());
			}
		}

		private bool IsConnectionString(SettingsPropertyValue settingsPropertyValue)
		{
			if (!_HasConnectionStrings)
			{
				return false;
			}
			return ConfigurationManager.ConnectionStrings[_GroupName + "." + settingsPropertyValue.Name] != null;
		}

		private string BuildUnknownSettingsMessage(List<string> unknownSettings, string settingType)
		{
			StringBuilder stringBuilder = new StringBuilder();
			stringBuilder.AppendLine(string.Format("The following unknown {0} are defined in group: {1}", settingType, _GroupName));
			stringBuilder.AppendLine();
			int num = 0;
			foreach (string unknownSetting in unknownSettings)
			{
				if (stringBuilder.Length < 20000)
				{
					stringBuilder.Append(unknownSetting);
					stringBuilder.Append(", ");
					num++;
					continue;
				}
				stringBuilder.Append(string.Format(" and {0} others. Message Truncated.", unknownSettings.Count - num));
				break;
			}
			return stringBuilder.ToString();
		}

		private void ReloadChangedSettings()
		{
			try
			{
				if (_ApplicationSettings == null)
				{
					Utilities.LogWarning(string.Format("RegisterSettings in {0}.OnSettingsLoaded was not invoked. Setting changes made through the service will not be synchronized to this process.", _GroupName));
					return;
				}
				DateTime newModificationTime;
				if (HasOverriddenSettingsFileBeenModified(out newModificationTime))
				{
					_OverriddenSettings = FileBasedSettingsOverrideHelper.ReadOverriddenSettingsFromFilePath(_OverriddenSettingsFileName);
					_LastFileBasedOverrideModificationDateTime = newModificationTime;
					_ApplicationSettings.Reload();
				}
				if ((_HasSettings && _ConfigurationClient.SettingUpdatesAreAvailable(_GroupName, _LastSettingModificationDateTime)) || (_HasConnectionStrings && _ConfigurationClient.ConnectionStringUpdatesAreAvailable(_GroupName, _LastConnectionStringModificationDateTime)))
				{
					Utilities.LogInformation(string.Format("Changes detected for Group {0}. Reloading settings.", _GroupName));
					_ApplicationSettings.Reload();
				}
			}
			catch (Exception ex)
			{
				Utilities.LogError(ex.ToString());
			}
		}

		private bool HasOverriddenSettingsFileBeenModified(out DateTime newModificationTime)
		{
			if (!string.IsNullOrWhiteSpace(_OverriddenSettingsFileName))
			{
				try
				{
					DateTime dateTime = (newModificationTime = File.GetLastWriteTime(_OverriddenSettingsFileName));
					return _LastFileBasedOverrideModificationDateTime < dateTime;
				}
				catch (Exception arg)
				{
					Utilities.LogWarning(string.Format("There was an exception while fetching last modification time for settings override filename:{0}. Exception:{1}", _OverriddenSettingsFileName, arg));
				}
			}
			newModificationTime = _LastFileBasedOverrideModificationDateTime;
			return false;
		}

		private void UpdateApplicationSettings(ApplicationSettingsBase applicationSettings)
		{
			if (_ApplicationSettings != applicationSettings)
			{
				if (_ApplicationSettings != null)
				{
					throw new InvalidOperationException("RegisterSettings changing applicationSettings");
				}
				_ApplicationSettings = applicationSettings;
			}
		}
	}
}
