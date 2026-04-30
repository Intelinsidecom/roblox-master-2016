using System;
using System.Collections.Generic;
using System.Linq;
using System.Runtime.CompilerServices;
using Roblox.Caching.Diagnostics;
using Roblox.Caching.Interfaces;
using Roblox.Caching.Properties;
using Roblox.Caching.Shared;
using Roblox.EventLog;
using Roblox.Instrumentation;

namespace Roblox.Caching.MemCached
{
	public class MemcachedCache : RobloxCache
	{
		private static MemcachedCache _Instance;

		private static readonly object _InstanceLock = new object();

		private readonly ISharedCacheClientProvider _CacheClientProvider;

		private readonly IEntityRampUpAuthority _EntityRampUpAuthority;

		private readonly IEntitySerializer _EntitySerializer;

		private readonly ISettings _Settings;

		private MemcachedCache(ICounterRegistry counterRegistry, ISettings settings, ILogger logger)
			: this(new SharedCacheClientProvider(logger), EntityRampUpAuthority.GetInstance(), new CachePerformanceCounters(counterRegistry, "Memcache"), new EntitySerializer(settings, logger, counterRegistry), settings)
		{
		}

		internal MemcachedCache(ISharedCacheClientProvider sharedCacheClientProvider, IEntityRampUpAuthority entityRampUpAuthority, IRobloxCacheListener cacheListener, IEntitySerializer entitySerializer, ISettings settings)
		{
			if (sharedCacheClientProvider == null)
			{
				throw new ArgumentNullException("sharedCacheClientProvider");
			}
			_CacheClientProvider = sharedCacheClientProvider;
			if (entityRampUpAuthority == null)
			{
				throw new ArgumentNullException("entityRampUpAuthority");
			}
			_EntityRampUpAuthority = entityRampUpAuthority;
			if (cacheListener == null)
			{
				throw new ArgumentNullException("cacheListener");
			}
			AddRobloxCacheListener(cacheListener);
			if (entitySerializer == null)
			{
				throw new ArgumentNullException("entitySerializer");
			}
			_EntitySerializer = entitySerializer;
			if (settings == null)
			{
				throw new ArgumentNullException("settings");
			}
			_Settings = settings;
		}

		public static MemcachedCache GetInstance()
		{
			if (_Instance == null)
			{
				lock (_InstanceLock)
				{
					if (_Instance == null)
					{
						_Instance = new MemcachedCache(StaticCounterRegistry.Instance, Settings.Default, StaticLoggerRegistry.Instance);
					}
				}
			}
			return _Instance;
		}

		public override TEntity GetEntityFromCache<TIndex, TEntity>(ICacheInfo cacheInfo, TIndex entityId, Func<TEntity> getter)
		{
			return RemoteGet(cacheInfo, entityId, getter);
		}

		public override void ProcessEntityChange<T>(ICacheableObject<T> entity, StateChangeEventType stateChangeEventType)
		{
			ISharedCacheClient cacheClientForEntity = _CacheClientProvider.GetCacheClientForEntity(entity.CacheInfo);
			string key = entity.GetKey();
			if (_EntityRampUpAuthority.IsEntityTypeInRampUp(entity.CacheInfo.EntityType))
			{
				cacheClientForEntity.Remove(key);
				return;
			}
			switch (stateChangeEventType)
			{
			case StateChangeEventType.Creation:
				AddToRemoteCache(cacheClientForEntity, key, entity);
				break;
			case StateChangeEventType.Modification:
				AddToRemoteCache(cacheClientForEntity, key, entity);
				break;
			case StateChangeEventType.Deletion:
				AddNullToRemoteCache(cacheClientForEntity, key);
				break;
			}
		}

		public override void AddEntityToCache<TIndex>(ICacheableObject<TIndex> entity)
		{
			ISharedCacheClient cacheClientForEntity = _CacheClientProvider.GetCacheClientForEntity(entity.CacheInfo);
			string key = entity.GetKey();
			if (_EntityRampUpAuthority.IsEntityTypeInRampUp(entity.CacheInfo.EntityType))
			{
				cacheClientForEntity.Remove(key);
			}
			else
			{
				AddToRemoteCache(cacheClientForEntity, key, entity);
			}
		}

		public override void AddEntityIDToLookupCache(ICacheInfo cacheInfo, string lookup, object id)
		{
			ISharedCacheClient cacheClientForEntity = _CacheClientProvider.GetCacheClientForEntity(cacheInfo);
			string key = Cacheable.BuildEntityIDLookupKey(cacheInfo, lookup);
			if (_EntityRampUpAuthority.IsEntityTypeInRampUp(cacheInfo.EntityType))
			{
				cacheClientForEntity.Remove(key);
			}
			else
			{
				cacheClientForEntity.Set(key, id, _Settings.RemoteCacheableExpiration);
			}
		}

		private TEntity RemoteGet<TIndex, TEntity>(ICacheInfo cacheInfo, TIndex entityId, Func<TEntity> getter) where TEntity : class, ICacheableObject<TIndex>
		{
			string key = Cacheable.BuildEntityKey(cacheInfo, entityId);
			ISharedCacheClient cacheClientForEntity = _CacheClientProvider.GetCacheClientForEntity(cacheInfo);
			bool flag = _EntityRampUpAuthority.IsEntityTypeInRampUp(cacheInfo.EntityType);
			if (!flag)
			{
				bool valueFound;
				TEntity fromRemoteCache = GetFromRemoteCache<TEntity>(cacheInfo, cacheClientForEntity, key, out valueFound);
				if (valueFound)
				{
					return fromRemoteCache;
				}
			}
			OnMiss(cacheInfo.EntityType);
			TEntity val = getter();
			if (flag)
			{
				cacheClientForEntity.Remove(key);
			}
			else
			{
				AddToRemoteCache(cacheClientForEntity, key, val);
			}
			return val;
		}

		private TEntity GetFromRemoteCache<TEntity>(ICacheInfo cacheInfo, ISharedCacheClient sharedCacheClient, string key, out bool valueFound) where TEntity : class, ICacheableObject
		{
			OnQuery(cacheInfo.EntityType);
			byte[] value;
			if (sharedCacheClient.QueryBytes(key, out value))
			{
				valueFound = true;
				OnHit(cacheInfo.EntityType);
				if (value == null)
				{
					return null;
				}
				TEntity item = _EntitySerializer.TryDeserializeFromRemoteCache<TEntity>(sharedCacheClient, value, key).Item2;
				if (item != null)
				{
					return item;
				}
			}
			valueFound = false;
			return null;
		}

		[return: TupleElementNames(new string[] { "Key", "Entity", "CacheHit" })]
		private IEnumerable<ValueTuple<string, TEntity, bool>> GetFromRemoteCache<TEntity>(ICacheInfo cacheInfo, ISharedCacheClient sharedCacheClient, IReadOnlyCollection<string> keys) where TEntity : class, ICacheableObject
		{
			OnQuery(cacheInfo.EntityType, keys.Count);
			IEnumerable<ValueTuple<string, byte[], bool>> enumerable = sharedCacheClient.QueryBytes(keys.ToArray());
			int numberOfCacheHits = 0;
			foreach (var item7 in enumerable)
			{
				string item = item7.Item1;
				byte[] item2 = item7.Item2;
				bool item3 = item7.Item3;
				if (item3)
				{
					numberOfCacheHits++;
				}
				if (item2 == null)
				{
					yield return new ValueTuple<string, TEntity, bool>(item, null, item3);
					continue;
				}
				ValueTuple<bool, TEntity> valueTuple = _EntitySerializer.TryDeserializeFromRemoteCache<TEntity>(sharedCacheClient, item2, item);
				bool item4 = valueTuple.Item1;
				TEntity item5 = valueTuple.Item2;
				bool item6 = item4 && item3;
				yield return new ValueTuple<string, TEntity, bool>(item, item5, item6);
			}
			if (numberOfCacheHits > 0)
			{
				OnHit(cacheInfo.EntityType, numberOfCacheHits);
			}
		}

		private void AddToRemoteCache<TEntity>(ISharedCacheClient sharedCacheClient, string key, TEntity entity) where TEntity : ICacheableObject
		{
			if (entity != null)
			{
				byte[] array = _EntitySerializer.Serialize(entity);
				if (array != null)
				{
					sharedCacheClient.SetBytes(key, array, _Settings.RemoteCacheableExpiration);
				}
			}
			else
			{
				AddCheckedNullToCache(sharedCacheClient, key);
			}
		}

		private void AddCheckedNullToCache(ISharedCacheClient sharedCacheClient, string key)
		{
			sharedCacheClient.CheckAndSet(key, (byte[])null, _Settings.RemoteCacheableExpiration, 0uL);
		}

		private void AddNullToRemoteCache(ISharedCacheClient sharedCacheClient, string key)
		{
			sharedCacheClient.SetBytes(key, null, _Settings.RemoteCacheableExpiration);
		}

		public override void AddNullEntityToCache(ICacheInfo cacheInfo, string entityId)
		{
			ISharedCacheClient cacheClientForEntity = _CacheClientProvider.GetCacheClientForEntity(cacheInfo);
			string key = Cacheable.BuildEntityKey(cacheInfo, entityId);
			if (_EntityRampUpAuthority.IsEntityTypeInRampUp(cacheInfo.EntityType))
			{
				cacheClientForEntity.Remove(key);
			}
			else
			{
				AddNullToRemoteCache(cacheClientForEntity, key);
			}
		}

		public override void AddCheckedNullEntityToCache(ICacheInfo cacheInfo, string entityId)
		{
			ISharedCacheClient cacheClientForEntity = _CacheClientProvider.GetCacheClientForEntity(cacheInfo);
			string key = Cacheable.BuildEntityKey(cacheInfo, entityId);
			AddCheckedNullToCache(cacheClientForEntity, key);
		}

		public override void AddNullEntityIDToLookupCache(ICacheInfo cacheInfo, string lookup)
		{
			ISharedCacheClient cacheClientForEntity = _CacheClientProvider.GetCacheClientForEntity(cacheInfo);
			string key = Cacheable.BuildEntityIDLookupKey(cacheInfo, lookup);
			if (_EntityRampUpAuthority.IsEntityTypeInRampUp(cacheInfo.EntityType))
			{
				cacheClientForEntity.Remove(key);
			}
			else
			{
				AddNullToRemoteCache(cacheClientForEntity, key);
			}
		}

		public override TEntity TryGetEntityOnlyFromCache<TIndex, TEntity>(ICacheInfo cacheInfo, TIndex entityId, out bool cacheHit)
		{
			if (_EntityRampUpAuthority.IsEntityTypeInRampUp(cacheInfo.EntityType))
			{
				cacheHit = false;
				return null;
			}
			ISharedCacheClient cacheClientForEntity = _CacheClientProvider.GetCacheClientForEntity(cacheInfo);
			string key = Cacheable.BuildEntityKey(cacheInfo, entityId);
			return GetFromRemoteCache<TEntity>(cacheInfo, cacheClientForEntity, key, out cacheHit);
		}

		[return: TupleElementNames(new string[] { "Id", "Result", "CacheHit" })]
		public override IEnumerable<ValueTuple<TIndex, TEntity, bool>> TryGetEntitiesOnlyFromCache<TIndex, TEntity>(ICacheInfo cacheInfo, IReadOnlyCollection<TIndex> entityIds)
		{
			if (_EntityRampUpAuthority.IsEntityTypeInRampUp(cacheInfo.EntityType))
			{
				return entityIds.Select((TIndex id) => new ValueTuple<TIndex, TEntity, bool>(id, null, false));
			}
			ISharedCacheClient cacheClientForEntity = _CacheClientProvider.GetCacheClientForEntity(cacheInfo);
			Dictionary<string, TIndex> keysToIds = entityIds.ToDictionary((TIndex id) => Cacheable.BuildEntityKey(cacheInfo, id), (TIndex id) => id);
			return GetFromRemoteCache<TEntity>(cacheInfo, cacheClientForEntity, (IReadOnlyCollection<string>)(object)keysToIds.Keys.ToArray()).Select(r => new ValueTuple<TIndex, TEntity, bool>(keysToIds[r.Item1], r.Item2, r.Item3));
		}

		public override TEntity GetEntityFromCacheByIDLookup<TIndex, TEntity>(ICacheInfo cacheInfo, string entityIdLookup, Func<TEntity> getter)
		{
			if (_EntityRampUpAuthority.IsEntityTypeInRampUp(cacheInfo.EntityType))
			{
				return null;
			}
			string key = Cacheable.BuildEntityIDLookupKey(cacheInfo, entityIdLookup);
			ISharedCacheClient cacheClientForEntity = _CacheClientProvider.GetCacheClientForEntity(cacheInfo);
			OnQuery(cacheInfo.EntityType);
			TIndex value;
			TEntity val;
			if (!cacheClientForEntity.Query(key, out value))
			{
				OnMiss(cacheInfo.EntityType);
				val = getter();
				if (val == null)
				{
					return null;
				}
				AddEntityToCache(val);
			}
			else
			{
				OnHit(cacheInfo.EntityType);
				val = CacheFactory.GetCacheForEntity(cacheInfo).GetEntityFromCache(cacheInfo, value, getter);
			}
			foreach (string item in val.BuildEntityIDLookups())
			{
				if (item.Equals(entityIdLookup))
				{
					return val;
				}
			}
			AddNullEntityIDToLookupCache(cacheInfo, entityIdLookup);
			return null;
		}

		public override bool GetEntityIDFromLookupCache<T>(ICacheInfo cacheInfo, string lookUp, out T entityId)
		{
			if (_EntityRampUpAuthority.IsEntityTypeInRampUp(cacheInfo.EntityType))
			{
				entityId = default(T);
				return false;
			}
			string key = Cacheable.BuildEntityIDLookupKey(cacheInfo, lookUp);
			ISharedCacheClient cacheClientForEntity = _CacheClientProvider.GetCacheClientForEntity(cacheInfo);
			OnQuery(cacheInfo.EntityType);
			if (!cacheClientForEntity.Query(key, out entityId))
			{
				OnMiss(cacheInfo.EntityType);
				return false;
			}
			OnHit(cacheInfo.EntityType);
			return true;
		}

		public override TEntity TryGetEntityOnlyFromCacheByIDLookup<TIndex, TEntity>(ICacheInfo cacheInfo, string entityIdLookup, out bool cacheHit)
		{
			if (_EntityRampUpAuthority.IsEntityTypeInRampUp(cacheInfo.EntityType))
			{
				cacheHit = false;
				return null;
			}
			string key = Cacheable.BuildEntityIDLookupKey(cacheInfo, entityIdLookup);
			ISharedCacheClient cacheClientForEntity = _CacheClientProvider.GetCacheClientForEntity(cacheInfo);
			TEntity result = null;
			OnQuery(cacheInfo.EntityType);
			TIndex value;
			if (!cacheClientForEntity.Query(key, out value))
			{
				OnMiss(cacheInfo.EntityType);
				cacheHit = false;
				return result;
			}
			OnHit(cacheInfo.EntityType);
			return CacheFactory.GetCacheForEntity(cacheInfo).TryGetEntityOnlyFromCache<TIndex, TEntity>(cacheInfo, value, out cacheHit);
		}

		public override void RemoveStateTokenFromCache(ICacheInfo cacheInfo, CacheManager.CacheScopeFilter cacheScope, StateToken stateToken)
		{
			throw new NotImplementedException();
		}

		public override void RemoveStateTokenFromCache(ICacheInfo cacheInfo, CacheManager.CacheScopeFilter cacheScope)
		{
			throw new NotImplementedException();
		}

		public override T GetCountFromCache<T>(ICacheInfo cacheInfo, string countId, CacheManager.GetCount<T> getter)
		{
			throw new NotImplementedException();
		}
	}
}
