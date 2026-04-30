using System;
using Roblox.Caching.Shared;

namespace Roblox.Caching.MemCached
{
	internal class RolloutPerThousandSharedCacheClientProvider : IRolloutPerThousandSharedCacheClientProvider
	{
		private readonly IMigrationSharedCacheClientProvider _MigrationSharedCacheClientProvider;

		public RolloutPerThousandSharedCacheClientProvider(IMigrationSharedCacheClientProvider migrationSharedCacheClientProvider)
		{
			if (migrationSharedCacheClientProvider == null)
			{
				throw new ArgumentNullException("migrationSharedCacheClientProvider");
			}
			_MigrationSharedCacheClientProvider = migrationSharedCacheClientProvider;
		}

		public ISharedCacheClient GetCacheClientForMigrationStateChange(MigrationStateChange migrationStateChange, ISharedCacheClient sourceCacheClient, ISharedCacheClient destinationCacheClient)
		{
			if (migrationStateChange == null)
			{
				throw new ArgumentNullException("migrationStateChange");
			}
			if (sourceCacheClient == null)
			{
				throw new ArgumentNullException("sourceCacheClient");
			}
			if (destinationCacheClient == null)
			{
				throw new ArgumentNullException("destinationCacheClient");
			}
			if (migrationStateChange.IsSourceAndDestinationStateSame && sourceCacheClient != destinationCacheClient)
			{
				throw new ArgumentException(string.Format("{0} had the same source and destination but source and destination client were different.", migrationStateChange), "migrationStateChange");
			}
			if (!migrationStateChange.IsSourceAndDestinationStateSame && sourceCacheClient == destinationCacheClient)
			{
				throw new ArgumentException(string.Format("{0} had the different source and destination but source and destination client were the same.", migrationStateChange), "migrationStateChange");
			}
			ISharedCacheClient migrationCacheClientForMigrationState = _MigrationSharedCacheClientProvider.GetMigrationCacheClientForMigrationState(migrationStateChange.SourceState, sourceCacheClient, destinationCacheClient);
			ISharedCacheClient migrationCacheClientForMigrationState2 = _MigrationSharedCacheClientProvider.GetMigrationCacheClientForMigrationState(migrationStateChange.DestinationState, sourceCacheClient, destinationCacheClient);
			return new RolloutPerThousandSharedCacheClient(migrationCacheClientForMigrationState, migrationCacheClientForMigrationState2, () => migrationStateChange.RolloutPerThousand);
		}
	}
}
