using System;
using System.Runtime.CompilerServices;

namespace Roblox.Caching
{
	public class CacheInfo : ICacheInfo
	{
		private static readonly CacheabilitySettings _DefaultCacheabilitySettings = new CacheabilitySettings(true, true, true, true);

		[CompilerGenerated]
		private readonly CacheabilitySettings _003CCacheability_003Ek__BackingField;

		[CompilerGenerated]
		private readonly IRemoteCachabilitySettings _003CRemoteCachabilitySettings_003Ek__BackingField;

		[CompilerGenerated]
		private readonly IMigrationCacheabilitySettings _003CMigrationCacheabilitySettings_003Ek__BackingField;

		[CompilerGenerated]
		private readonly string _003CEntityType_003Ek__BackingField;

		public CacheabilitySettings Cacheability
		{
			[CompilerGenerated]
			get
			{
				return _003CCacheability_003Ek__BackingField;
			}
		}

		public IRemoteCachabilitySettings RemoteCachabilitySettings
		{
			[CompilerGenerated]
			get
			{
				return _003CRemoteCachabilitySettings_003Ek__BackingField;
			}
		}

		public IMigrationCacheabilitySettings MigrationCacheabilitySettings
		{
			[CompilerGenerated]
			get
			{
				return _003CMigrationCacheabilitySettings_003Ek__BackingField;
			}
		}

		public string EntityType
		{
			[CompilerGenerated]
			get
			{
				return _003CEntityType_003Ek__BackingField;
			}
		}

		public bool IsNullCacheable
		{
			get
			{
				return Cacheability.IsNullCacheable;
			}
		}

		public CacheInfo(CacheabilitySettings cacheability, string entityType, bool isNullCacheable, string replicationPort = null, IRemoteCachabilitySettings remoteCachabilitySettings = null, IMigrationCacheabilitySettings migrationCacheabilitySettings = null)
		{
			cacheability.IsNullCacheable = isNullCacheable;
			_003CCacheability_003Ek__BackingField = cacheability;
			_003CEntityType_003Ek__BackingField = entityType;
			_003CRemoteCachabilitySettings_003Ek__BackingField = remoteCachabilitySettings;
			_003CMigrationCacheabilitySettings_003Ek__BackingField = migrationCacheabilitySettings;
			EntityCacheInvalidator.AddReplicationPort(EntityType);
		}

		public CacheInfo(string entityType)
			: this(_DefaultCacheabilitySettings, entityType, false)
		{
		}

		public CacheInfo(CacheabilitySettings cacheability, Type entityType)
			: this(cacheability, entityType.ToString())
		{
		}

		public CacheInfo(CacheabilitySettings cacheability, string entityType)
			: this(cacheability, entityType, false)
		{
		}
	}
}
