using System;
using Roblox.Caching.Properties;
using Roblox.Caching.Shared;
using Roblox.EventLog;

namespace Roblox.Caching.MemCached
{
	internal class MigrationSharedCacheClientProvider : IMigrationSharedCacheClientProvider
	{
		private readonly ILogger _Logger;

		private readonly ISettings _Settings;

		public MigrationSharedCacheClientProvider(ISettings settings, ILogger logger)
		{
			if (logger == null)
			{
				throw new ArgumentNullException("logger");
			}
			_Logger = logger;
			if (settings == null)
			{
				throw new ArgumentNullException("settings");
			}
			_Settings = settings;
		}

		public ISharedCacheClient GetMigrationCacheClientForMigrationState(MigrationState migrationState, ISharedCacheClient sourceCacheClient, ISharedCacheClient destinationSharedCacheClient)
		{
			if (!Enum.IsDefined(typeof(MigrationState), migrationState))
			{
				throw new ArgumentException(string.Format("MigrationState was invalid. Value was {0}", migrationState));
			}
			if (sourceCacheClient == null)
			{
				throw new ArgumentNullException("sourceCacheClient");
			}
			if (destinationSharedCacheClient == null)
			{
				throw new ArgumentNullException("destinationSharedCacheClient");
			}
			switch (migrationState)
			{
			case MigrationState.NoMigration:
				return sourceCacheClient;
			case MigrationState.ReadWriteSourceDeleteOnlyDestination:
				return GetReadFirstWriteBothCache(sourceCacheClient, destinationSharedCacheClient, true, false);
			case MigrationState.ReadWriteSourceWriteOnlyDestination:
				return GetReadFirstWriteBothCache(sourceCacheClient, destinationSharedCacheClient, false, false);
			case MigrationState.ReadWriteSourceReadDiscardAndWriteDestination:
				return GetReadFirstWriteBothCache(sourceCacheClient, destinationSharedCacheClient, false, true);
			case MigrationState.WriteOnlySourceReadWriteDestination:
				return GetReadFirstWriteBothCache(destinationSharedCacheClient, sourceCacheClient, false, false);
			case MigrationState.DeleteOnlySourceReadWriteDestination:
				return GetReadFirstWriteBothCache(destinationSharedCacheClient, sourceCacheClient, true, false);
			case MigrationState.MigrationComplete:
				return destinationSharedCacheClient;
			default:
				if (_Settings.IsLoggingMigrationConfigurationErrorsEnabled)
				{
					_Logger.Error(string.Format("MigrationState is invalid. It's value is {0}", migrationState));
				}
				return sourceCacheClient;
			}
		}

		internal ISharedCacheClient GetReadFirstWriteBothCache(ISharedCacheClient readAndWriteCache, ISharedCacheClient writeCache, bool onlyDeleteFromWriteCache, bool readAndDiscardInBackgroundFromWriteCache)
		{
			if (readAndWriteCache == null)
			{
				throw new ArgumentNullException("readAndWriteCache");
			}
			if (writeCache == null)
			{
				throw new ArgumentNullException("writeCache");
			}
			if (readAndWriteCache == writeCache)
			{
				throw new ArgumentException(string.Format("Expected {0} != {1}", "readAndWriteCache", "writeCache"), "writeCache");
			}
			return new MigrationSharedCacheClient(readAndWriteCache, writeCache, onlyDeleteFromWriteCache, readAndDiscardInBackgroundFromWriteCache, _Settings, _Logger);
		}
	}
}
