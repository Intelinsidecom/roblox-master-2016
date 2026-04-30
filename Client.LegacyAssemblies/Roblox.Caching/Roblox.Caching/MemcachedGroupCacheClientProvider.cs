using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Linq;
using System.Reflection;
using System.Threading.Tasks;
using BeIT.MemCached;
using Roblox.Caching.ClusterSettings;
using Roblox.Caching.Properties;
using Roblox.Caching.Shared;
using Roblox.EventLog;

namespace Roblox.Caching
{
	internal class MemcachedGroupCacheClientProvider<TGroupSettings> : IMemcachedGroupCacheClientProvider where TGroupSettings : class, INotifyPropertyChanged
	{
		private static readonly string _ClusterSettingsNamespace = "Roblox.Caching.ClusterSettings";

		private readonly ISettings _Settings;

		private readonly ILogger _Logger;

		private readonly object _CachedDictionarySwapLock;

		private IDictionary<string, LazyWithRetry<ISharedCacheClient>> _CachedCacheClients;

		public static IMemcachedGroupCacheClientProvider Instance = new MemcachedGroupCacheClientProvider<MemcachedGroupsSettings>(Settings.Default, MemcachedGroupsSettings.Default, StaticLoggerRegistry.Instance);

		private MemcachedGroupCacheClientProvider(ISettings settings, TGroupSettings groupSettings, ILogger logger)
		{
			if (settings == null)
			{
				throw new ArgumentNullException("settings");
			}
			_Settings = settings;
			if (logger == null)
			{
				throw new ArgumentNullException("logger");
			}
			_Logger = logger;
			_CachedDictionarySwapLock = new object();
			if (groupSettings == null)
			{
				throw new ArgumentNullException("groupSettings");
			}
			BuildSharedCacheClientDictionary(groupSettings);
		}

		public ISharedCacheClient GetCacheClientForGroup(string name)
		{
			if (string.IsNullOrWhiteSpace(name))
			{
				throw new ArgumentNullException("name");
			}
			LazyWithRetry<ISharedCacheClient> value;
			_CachedCacheClients.TryGetValue(name, out value);
			if (value == null)
			{
				return null;
			}
			return value.Value;
		}

		private void BuildSharedCacheClientDictionary(TGroupSettings settings)
		{
			Dictionary<string, LazyWithRetry<ISharedCacheClient>> dictionary = new Dictionary<string, LazyWithRetry<ISharedCacheClient>>();
			Dictionary<string, MethodInfo> getters = new Dictionary<string, MethodInfo>();
			PropertyInfo[] properties = typeof(TGroupSettings).GetProperties();
			settings.PropertyChanged += delegate(object sender, PropertyChangedEventArgs args)
			{
				try
				{
					MethodInfo getter2 = getters[args.PropertyName];
					lock (_CachedDictionarySwapLock)
					{
						Dictionary<string, LazyWithRetry<ISharedCacheClient>> dictionary2 = _CachedCacheClients.ToDictionary((KeyValuePair<string, LazyWithRetry<ISharedCacheClient>> entry) => entry.Key, (KeyValuePair<string, LazyWithRetry<ISharedCacheClient>> entry) => entry.Value);
						LazyWithRetry<ISharedCacheClient> value;
						_CachedCacheClients.TryGetValue(args.PropertyName, out value);
						dictionary2[args.PropertyName] = new LazyWithRetry<ISharedCacheClient>(() => CreateClientForProperty(settings, getter2, args.PropertyName));
						_CachedCacheClients = dictionary2;
						ISharedCacheClient oldClient = ((value != null && value.IsValueCreated) ? value.Value : null);
						if (oldClient != null)
						{
							Task.Delay(_Settings.DelayBeforeDisposingClientOnAddressesChangeForGroupClients).ContinueWith(delegate
							{
								try
								{
									oldClient.Dispose();
								}
								catch (Exception ex2)
								{
									_Logger.Error(ex2);
								}
							});
						}
					}
				}
				catch (Exception ex)
				{
					_Logger.Error(ex);
				}
			};
			PropertyInfo[] array = properties;
			foreach (PropertyInfo property in array)
			{
				if (!(property.PropertyType != typeof(string)) && !dictionary.ContainsKey(property.Name))
				{
					MethodInfo getter = property.GetGetMethod();
					getters[property.Name] = getter;
					dictionary.Add(property.Name, new LazyWithRetry<ISharedCacheClient>(() => CreateClientForProperty(settings, getter, property.Name)));
				}
			}
			_CachedCacheClients = dictionary;
		}

		private ISharedCacheClient CreateClientForProperty(TGroupSettings settings, MethodInfo getter, string groupName)
		{
			string[] array = (from s in ((string)getter.Invoke(settings, Array.Empty<object>())).Split(',', ';')
				where !string.IsNullOrWhiteSpace(s)
				select s).ToArray();
			if (!array.Any())
			{
				return null;
			}
			IMemCachedClientSettings settingsForGroupIfExists = GetSettingsForGroupIfExists(groupName);
			ISharedCacheClient sharedCacheClient = new SharedCacheGroupClient(groupName, array, _Logger, settingsForGroupIfExists);
			ISamplingSharedCacheClientSettings settings2;
			if ((settings2 = settingsForGroupIfExists as ISamplingSharedCacheClientSettings) != null)
			{
				sharedCacheClient = new SamplingSharedCacheClient(sharedCacheClient, _Logger, settings2);
			}
			return sharedCacheClient;
		}

		private IMemCachedClientSettings GetSettingsForGroupIfExists(string groupName)
		{
			if (string.IsNullOrWhiteSpace(groupName))
			{
				return null;
			}
			Type type = Type.GetType(string.Format("{0}.{1}", _ClusterSettingsNamespace, groupName));
			if (type == null)
			{
				return null;
			}
			IExposedMemCachedClientSettings exposedMemCachedClientSettings = type.GetProperty("Default", BindingFlags.Static | BindingFlags.Public).GetValue(null) as IExposedMemCachedClientSettings;
			if (exposedMemCachedClientSettings != null)
			{
				return (IMemCachedClientSettings)(object)new ExposedMemCachedClientSettingsTranslator(_Logger, exposedMemCachedClientSettings);
			}
			return null;
		}
	}
}
