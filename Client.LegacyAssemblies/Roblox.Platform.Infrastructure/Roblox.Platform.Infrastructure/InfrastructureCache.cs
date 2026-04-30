using System;
using System.Collections.Generic;
using System.Linq;
using System.Runtime.Caching;
using Newtonsoft.Json;
using Roblox.Redis;
using Roblox.Redis.Lru;
using StackExchange.Redis;

namespace Roblox.Platform.Infrastructure
{
	internal static class InfrastructureCache
	{
		private static readonly MemoryCache _Cache = new MemoryCache("InfrastructureCache");

		private static readonly IRedisClient _RedisClient = RedisLruClient.GetInstance();

		internal static T FetchItem<T>(string key, TimeSpan cacheDuration, Func<T> getter)
		{
			object result = _Cache.Get(key);
			if (result == null)
			{
				result = getter();
				if (result != null)
				{
					DateTime absoluteExpiration = DateTime.Now + cacheDuration;
					_Cache.Add(key, result, absoluteExpiration);
				}
			}
			return (T)result;
		}

		internal static string[] GetStringArrayFromRedis(string redisKey)
		{
			//IL_0024: Unknown result type (might be due to invalid IL or missing references)
			try
			{
				string json = (string)_RedisClient.Execute<RedisValue>(redisKey, (DatabaseAction<RedisValue>)((IDatabase db) => db.StringGet(redisKey, (CommandFlags)0)));
				if (string.IsNullOrEmpty(json))
				{
					return null;
				}
				return JsonConvert.DeserializeObject<string[]>(json);
			}
			catch (Exception ex)
			{
				ExceptionHandler.LogException(ex);
				return null;
			}
		}

		internal static void WriteStringArrayToRedis(string redisKey, IEnumerable<string> values, TimeSpan expiration)
		{
			try
			{
				string json = JsonConvert.SerializeObject((object)values);
				_RedisClient.Execute<bool>(redisKey, (DatabaseAction<bool>)((IDatabase db) => db.StringSet(redisKey, json, (TimeSpan?)expiration, (When)0, (CommandFlags)0)));
			}
			catch (Exception ex)
			{
				ExceptionHandler.LogException(ex);
			}
		}

		internal static IDictionary<string, int> ReadDictionaryFromRedis(string redisKey)
		{
			try
			{
				HashEntry[] hashEntries = _RedisClient.Execute<HashEntry[]>(redisKey, (DatabaseAction<HashEntry[]>)((IDatabase db) => db.HashGetAll(redisKey, (CommandFlags)0)));
				if (hashEntries == null || hashEntries.Length == 0)
				{
					return null;
				}
				return hashEntries.ToDictionary((HashEntry e) => (string)e.Name, (HashEntry e) => (int)e.Value);
			}
			catch (Exception ex)
			{
				ExceptionHandler.LogException(ex);
				return null;
			}
		}

		internal static void WriteDictionaryToRedis(string redisKey, IDictionary<string, int> dictionary, TimeSpan expiration)
		{
			//IL_0068: Unknown result type (might be due to invalid IL or missing references)
			//IL_0072: Expected O, but got Unknown
			try
			{
				HashEntry[] hashEntries = ((IEnumerable<KeyValuePair<string, int>>)dictionary).Select((Func<KeyValuePair<string, int>, HashEntry>)((KeyValuePair<string, int> kvp) => new HashEntry(kvp.Key, kvp.Value))).ToArray();
				_RedisClient.Execute(redisKey, (DatabaseAction)delegate(IDatabase db)
				{
					//IL_000c: Unknown result type (might be due to invalid IL or missing references)
					db.HashSet(redisKey, hashEntries, (CommandFlags)0);
				});
				_RedisClient.Execute<bool>(redisKey, (DatabaseAction<bool>)((IDatabase db) => db.KeyExpire(redisKey, (TimeSpan?)expiration, (CommandFlags)2)));
			}
			catch (Exception ex)
			{
				ExceptionHandler.LogException(ex);
			}
		}
	}
}
