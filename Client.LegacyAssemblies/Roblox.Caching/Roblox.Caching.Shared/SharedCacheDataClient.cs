using System;
using System.Runtime.CompilerServices;
using System.Threading.Tasks;
using Roblox.Caching.MemCached;
using Roblox.Caching.Properties;
using Roblox.Configuration;
using Roblox.EventLog;

namespace Roblox.Caching.Shared
{
	internal class SharedCacheDataClient : SharedCacheClient
	{
		private static readonly ILogger _Logger;

		private static readonly IMigrationCacheabilitySettings _MigrationCacheabilitySettings;

		private static readonly object _ClientLock;

		private static readonly DynamicSharedCacheClient _SharedCacheDataClient;

		private static ISharedCacheClient _RawClient;

		private static string _LastSharedCacheAddresses;

		private static string _LastSharedCacheKeyPrefix;

		static SharedCacheDataClient()
		{
			_Logger = StaticLoggerRegistry.Instance;
			_MigrationCacheabilitySettings = new MigrationCacheabilitySettings(Settings.Default.ToSingleSetting((Settings s) => s.MemcachedObjectMigrationCacheGroupName), Settings.Default.ToSingleSetting((Settings s) => s.MemcachedObjectMigrationState));
			_ClientLock = new object();
			_SharedCacheDataClient = new DynamicSharedCacheClient(ConfigureRawClientAndProvider(Settings.Default.SharedCacheAddresses).Item2, null, _MigrationCacheabilitySettings, "MemcachedObject");
			Settings.Default.MonitorChanges((Settings s) => s.SharedCacheAddresses, delegate(string value)
			{
				ValueTuple<bool, ISharedCacheClientProvider> valueTuple = ConfigureRawClientAndProvider(value);
				bool item = valueTuple.Item1;
				ISharedCacheClientProvider item2 = valueTuple.Item2;
				if (item)
				{
					_SharedCacheDataClient.SetSharedCacheClientProvider(item2);
				}
			});
			Settings.Default.ReadValueAndMonitorChanges((Settings s) => s.SharedCacheKeyPrefix, delegate(string value)
			{
				if (value != _LastSharedCacheKeyPrefix)
				{
					if (_LastSharedCacheKeyPrefix != null)
					{
						IEntityRampUpAuthority instance = EntityRampUpAuthority.GetInstance();
						if (instance != null)
						{
							instance.TouchRampUp();
						}
					}
					_LastSharedCacheKeyPrefix = value;
				}
			});
		}

		internal SharedCacheDataClient(string[] addresses, ILogger logger)
		{
			CreateMemcachedClient(addresses, "Roblox MemcacheD", logger);
		}

		public static ISharedCacheClient GetSingleton()
		{
			return _SharedCacheDataClient;
		}

		[return: TupleElementNames(new string[] { "Changed", "Provider" })]
		private static ValueTuple<bool, ISharedCacheClientProvider> ConfigureRawClientAndProvider(string addresses)
		{
			ISharedCacheClient oldClient;
			lock (_ClientLock)
			{
				if (addresses == _LastSharedCacheAddresses)
				{
					return new ValueTuple<bool, ISharedCacheClientProvider>(false, null);
				}
				oldClient = _RawClient;
				_RawClient = new SharedCacheDataClient(SharedCacheClient.GetCacheAddressesFromSetting(addresses), _Logger);
				_LastSharedCacheAddresses = addresses;
			}
			if (oldClient != null)
			{
				Task.Delay(Settings.Default.DelayBeforeDisposingMemcachedObjectClientOnAddressesChange).ContinueWith(delegate
				{
					try
					{
						oldClient.Dispose();
					}
					catch (Exception ex)
					{
						_Logger.Error(ex);
					}
				});
			}
			SharedCacheClientProvider item = new SharedCacheClientProvider(_RawClient, _Logger);
			return new ValueTuple<bool, ISharedCacheClientProvider>(true, item);
		}
	}
}
