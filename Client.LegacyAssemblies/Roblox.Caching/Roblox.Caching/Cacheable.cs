using Roblox.Caching.Interfaces;

namespace Roblox.Caching
{
	public static class Cacheable
	{
		public static string GetKey<T>(this ICacheableObject<T> self)
		{
			return BuildEntityKey(self.CacheInfo, self.ID.ToString());
		}

		public static string BuildCountKey(ICacheInfo cacheInfo, string countId)
		{
			return string.Format("rbx.{0}Count_{1}", cacheInfo.EntityType, countId);
		}

		public static string BuildEntityKey(ICacheInfo cacheInfo, object entityId)
		{
			return string.Format("rbx.{0}_{1}", cacheInfo.EntityType, entityId);
		}

		public static string BuildEntityIDCollectionKey(ICacheInfo cacheInfo, string collectionId)
		{
			return string.Format("rbx.{0}IDCollection_{1}", cacheInfo.EntityType, collectionId);
		}

		public static string BuildEntityIDLookupKey(ICacheInfo cacheInfo, object lookUp)
		{
			string text = lookUp.ToString();
			string arg = (cacheInfo.Cacheability.IDLookupsAreCaseSensitive ? text : text.ToLower());
			return string.Format("rbx.{0}.ID.Lookup_{1}", cacheInfo.EntityType, arg);
		}

		public static string BuildStateTokenKey(ICacheInfo cacheInfo, CacheManager.CacheScopeFilter collectionScope, string qualifier)
		{
			string text = string.Format("rbx.{0}StateToken_{1}", cacheInfo.EntityType, collectionScope);
			if (collectionScope == CacheManager.CacheScopeFilter.Qualified)
			{
				text = text + "_" + qualifier;
			}
			return text;
		}
	}
}
