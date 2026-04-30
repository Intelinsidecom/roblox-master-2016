using System;

namespace Roblox.Caching
{
	public interface ILookupCache
	{
		void AddEntityCountToLookupCache<TCount>(ICacheInfo cacheInfo, string countId, TCount count) where TCount : struct;

		void RemoveEntityCountLookupCache(ICacheInfo cacheInfo, string countId);

		ValueTuple<bool, TCount> GetEntityCountFromLookupCache<TCount>(ICacheInfo cacheInfo, string countId) where TCount : struct;

		void AddEntityIDToLookupCache(ICacheInfo cacheInfo, string lookup, object id);

		ValueTuple<bool, T> GetEntityIDFromLookupCache<T>(ICacheInfo cacheInfo, string lookup);

		void RemoveEntityIDLookupCache(ICacheInfo cacheInfo, string lookup);
	}
}
