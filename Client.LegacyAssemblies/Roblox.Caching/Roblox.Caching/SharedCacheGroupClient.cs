using BeIT.MemCached;
using Roblox.Caching.Shared;
using Roblox.EventLog;

namespace Roblox.Caching
{
	internal class SharedCacheGroupClient : SharedCacheClient
	{
		public SharedCacheGroupClient(string groupName, string[] addresses, ILogger logger, IMemCachedClientSettings settings = null)
		{
			CreateMemcachedClient(addresses, string.Format("Roblox MemcacheD {0}", groupName), logger, settings);
		}
	}
}
