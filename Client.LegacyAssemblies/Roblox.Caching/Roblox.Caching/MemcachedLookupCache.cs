using System;
using System.Diagnostics;
using System.Linq;
using System.Reflection;
using System.Text;
using BeIT.MemCached;
using Roblox.Caching.Properties;
using Roblox.Caching.Shared;
using Roblox.EventLog;
using Roblox.Instrumentation;

namespace Roblox.Caching
{
	internal class MemcachedLookupCache : ILookupCache
	{
		private readonly ISettings _Settings;

		private readonly ILogger _Logger;

		private readonly ISharedCacheClient _CacheClient;

		private readonly LookupCachePerformanceMonitor _PerformanceMonitor;

		public MemcachedLookupCache(ISettings settings, ILogger logger, ISharedCacheClient cacheClient, ICounterRegistry counterRegistry, string name)
			: this(settings, logger, cacheClient, new LookupCachePerformanceMonitor(counterRegistry, name))
		{
		}

		internal MemcachedLookupCache(ISettings settings, ILogger logger, ISharedCacheClient cacheClient, LookupCachePerformanceMonitor performanceMonitor)
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
			if (cacheClient == null)
			{
				throw new ArgumentNullException("cacheClient");
			}
			_CacheClient = cacheClient;
			if (performanceMonitor == null)
			{
				throw new ArgumentNullException("performanceMonitor");
			}
			_PerformanceMonitor = performanceMonitor;
		}

		public void AddEntityCountToLookupCache<TCount>(ICacheInfo cacheInfo, string countId, TCount count) where TCount : struct
		{
			if (cacheInfo == null)
			{
				throw new ArgumentNullException("cacheInfo");
			}
			string key = Cacheable.BuildCountKey(cacheInfo, countId);
			try
			{
				_CacheClient.Set(key, count, _Settings.RemoteCacheableExpiration);
				_PerformanceMonitor.SetCountPerSecond.Increment();
			}
			catch (Exception arg)
			{
				_PerformanceMonitor.SetCountErrorPerSecond.Increment();
				LogError(string.Format("Exception during Memcached set: {0}", arg));
			}
		}

		public ValueTuple<bool, TCount> GetEntityCountFromLookupCache<TCount>(ICacheInfo cacheInfo, string countId) where TCount : struct
		{
			if (cacheInfo == null)
			{
				throw new ArgumentNullException("cacheInfo");
			}
			string key = Cacheable.BuildCountKey(cacheInfo, countId);
			try
			{
				TCount value;
				bool num = _CacheClient.Query(key, out value);
				_PerformanceMonitor.GetCountPerSecond.Increment();
				_PerformanceMonitor.EntityCountHitRate.IncrementBase();
				if (num)
				{
					_PerformanceMonitor.EntityCountHitRate.Increment();
					return new ValueTuple<bool, TCount>(true, value);
				}
				return new ValueTuple<bool, TCount>(false, default(TCount));
			}
			catch (Exception arg)
			{
				_PerformanceMonitor.GetCountErrorPerSecond.Increment();
				LogError(string.Format("Exception during Memcached lookup retrieval: {0}", arg));
				return new ValueTuple<bool, TCount>(false, default(TCount));
			}
		}

		public void RemoveEntityCountLookupCache(ICacheInfo cacheInfo, string countId)
		{
			if (cacheInfo == null)
			{
				throw new ArgumentNullException("cacheInfo");
			}
			string key = Cacheable.BuildCountKey(cacheInfo, countId);
			try
			{
				_CacheClient.Delete(key);
				_PerformanceMonitor.SetCountPerSecond.Increment();
			}
			catch (Exception arg)
			{
				_PerformanceMonitor.SetCountErrorPerSecond.Increment();
				LogError(string.Format("Error during Memcached count delete: {0}", arg));
			}
		}

		public void AddEntityIDToLookupCache(ICacheInfo cacheInfo, string lookup, object id)
		{
			if (cacheInfo == null)
			{
				throw new ArgumentNullException("cacheInfo");
			}
			string key = Cacheable.BuildEntityIDLookupKey(cacheInfo, lookup);
			try
			{
				_CacheClient.Set(key, id ?? MemcachedClient.Null, _Settings.RemoteCacheableExpiration);
				_PerformanceMonitor.SetLookupPerSecond.Increment();
			}
			catch (Exception arg)
			{
				_PerformanceMonitor.SetLookupErrorPerSecond.Increment();
				LogError(string.Format("Error during Memcached set: {0}", arg));
			}
		}

		public ValueTuple<bool, T> GetEntityIDFromLookupCache<T>(ICacheInfo cacheInfo, string lookup)
		{
			if (cacheInfo == null)
			{
				throw new ArgumentNullException("cacheInfo");
			}
			string key = Cacheable.BuildEntityIDLookupKey(cacheInfo, lookup);
			try
			{
				T value;
				bool num = _CacheClient.Query(key, out value);
				_PerformanceMonitor.EntityLookupHitRate.IncrementBase();
				if (num)
				{
					_PerformanceMonitor.EntityLookupHitRate.Increment();
					return new ValueTuple<bool, T>(true, value);
				}
				_PerformanceMonitor.GetLookupPerSecond.Increment();
				return new ValueTuple<bool, T>(false, default(T));
			}
			catch (Exception arg)
			{
				_PerformanceMonitor.GetLookupErrorPerSecond.Increment();
				LogError(string.Format("Error during Memcached lookup: {0}", arg));
				return new ValueTuple<bool, T>(false, default(T));
			}
		}

		public void RemoveEntityIDLookupCache(ICacheInfo cacheInfo, string lookup)
		{
			if (cacheInfo == null)
			{
				throw new ArgumentNullException("cacheInfo");
			}
			string key = Cacheable.BuildEntityIDLookupKey(cacheInfo, lookup);
			try
			{
				_CacheClient.Delete(key);
				_PerformanceMonitor.SetLookupPerSecond.Increment();
			}
			catch (Exception arg)
			{
				_PerformanceMonitor.SetLookupErrorPerSecond.Increment();
				LogError(string.Format("Error during Memcached delete: {0}", arg));
			}
		}

		private void LogError(string message)
		{
			_Logger.Error(string.Format("{0} at ${1}", message, BuildCallStack()));
		}

		private string BuildCallStack()
		{
			StackTrace stackTrace = new StackTrace();
			StringBuilder stringBuilder = new StringBuilder();
			foreach (StackFrame item in stackTrace.GetFrames().Skip(1))
			{
				MethodBase method = item.GetMethod();
				object[] array = new object[4];
				Type declaringType = method.DeclaringType;
				array[0] = (((object)declaringType != null) ? declaringType.FullName : null);
				array[1] = method.Name;
				array[2] = item.GetFileName();
				array[3] = item.GetFileLineNumber();
				stringBuilder.AppendLine(string.Format("{0}.{1} at {2} {3}", array));
			}
			return stringBuilder.ToString();
		}
	}
}
