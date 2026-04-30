using System;
using System.Runtime.CompilerServices;
using System.Threading.Tasks;
using Roblox.Caching.MemCached;
using Roblox.Caching.Properties;
using Roblox.Configuration;
using Roblox.EventLog;

namespace Roblox.Caching.Shared
{
	public class SharedCacheWebClient : SharedCacheClient
	{
		private static readonly ILogger _Logger;

		private static readonly IMigrationCacheabilitySettings _MigrationCacheabilitySettings;

		private static readonly object _ClientLock;

		private static readonly DynamicSharedCacheClient _SharedCacheWebClient;

		private static ISharedCacheClient _RawClient;

		private static string _LastAddresses;

		private const int _DelayBeforeDisposingClientOnAddressesChange = 1000;

		static SharedCacheWebClient()
		{
			_Logger = StaticLoggerRegistry.Instance;
			_MigrationCacheabilitySettings = new MigrationCacheabilitySettings(Settings.Default.ToSingleSetting((Settings s) => s.MemcachedWebMigrationCacheGroupName), Settings.Default.ToSingleSetting((Settings s) => s.MemcachedWebMigrationState));
			_ClientLock = new object();
			_SharedCacheWebClient = new DynamicSharedCacheClient(ConfigureRawClientAndProvider(Settings.Default.SharedCacheWebAddresses).Item2, null, _MigrationCacheabilitySettings, "MemcachedWeb");
			Settings.Default.MonitorChanges((Settings s) => s.SharedCacheWebAddresses, delegate(string value)
			{
				ValueTuple<bool, ISharedCacheClientProvider> valueTuple = ConfigureRawClientAndProvider(value);
				bool item = valueTuple.Item1;
				ISharedCacheClientProvider item2 = valueTuple.Item2;
				if (item)
				{
					_SharedCacheWebClient.SetSharedCacheClientProvider(item2);
				}
			});
		}

		internal SharedCacheWebClient(string[] addresses, ILogger logger)
		{
			CreateMemcachedClient(addresses, "Roblox MemcacheD Web", logger);
		}

		public static ISharedCacheClient GetSingleton()
		{
			return _SharedCacheWebClient;
		}

		[return: TupleElementNames(new string[] { "Changed", "Provider" })]
		private static ValueTuple<bool, ISharedCacheClientProvider> ConfigureRawClientAndProvider(string addresses)
		{
			ISharedCacheClient oldClient;
			lock (_ClientLock)
			{
				if (addresses == _LastAddresses)
				{
					return new ValueTuple<bool, ISharedCacheClientProvider>(false, null);
				}
				oldClient = _RawClient;
				_RawClient = new SharedCacheWebClient(SharedCacheClient.GetCacheAddressesFromSetting(addresses), _Logger);
				_LastAddresses = addresses;
			}
			if (oldClient != null)
			{
				Task.Delay(1000).ContinueWith(delegate
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
