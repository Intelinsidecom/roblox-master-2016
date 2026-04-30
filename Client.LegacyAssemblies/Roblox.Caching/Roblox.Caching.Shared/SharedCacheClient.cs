using System;
using System.Collections.Generic;
using System.Linq;
using System.Runtime.CompilerServices;
using System.Text;
using BeIT.MemCached;
using Roblox.Caching.Properties;
using Roblox.EventLog;
using Roblox.Instrumentation;

namespace Roblox.Caching.Shared
{
	public abstract class SharedCacheClient : ISharedCacheClient, IDisposable
	{
		public enum CasResult
		{
			Stored,
			NotStored,
			Exists,
			NotFound
		}

		protected IMemcachedClient _Memcached;

		public Action<string, object> OnQuery;

		public Action<string, object> OnSet;

		public bool Query<TValue>(string key, out TValue value)
		{
			ulong unique;
			return Query(key, out value, out unique);
		}

		public bool Query<TValue>(string key, out TValue value, out ulong unique)
		{
			key = FormatKey(key);
			object obj = _Memcached.Gets(key, out unique);
			InvokeQueryEvent(key, obj);
			if (obj == null)
			{
				value = default(TValue);
				unique = 0uL;
				return false;
			}
			if (obj == MemcachedClient.Null)
			{
				value = default(TValue);
				unique = 0uL;
				return true;
			}
			Type conversionType = Nullable.GetUnderlyingType(typeof(TValue)) ?? typeof(TValue);
			value = (TValue)Convert.ChangeType(obj, conversionType);
			return true;
		}

		private void InvokeQueryEvent(string key, object data)
		{
			Action<string, object> onQuery = OnQuery;
			if (onQuery != null)
			{
				onQuery(key, data);
			}
		}

		private void InvokeSetEvent(string key, object data)
		{
			Action<string, object> onSet = OnSet;
			if (onSet != null)
			{
				onSet(key, data);
			}
		}

		public bool Query(string key, out string value)
		{
			ulong unique;
			return Query(key, out value, out unique);
		}

		public virtual bool Query(string key, out string value, out ulong unique)
		{
			byte[] value2;
			if (QueryBytes(key, out value2, out unique))
			{
				value = ((value2 != null) ? Encoding.UTF8.GetString(value2) : null);
				return true;
			}
			value = null;
			return false;
		}

		public bool QueryBytes(string key, out byte[] value)
		{
			ulong unique;
			return QueryBytes(key, out value, out unique);
		}

		public bool QueryBytes(string key, out byte[] value, out ulong unique)
		{
			key = FormatKey(key);
			object obj = _Memcached.Gets(key, out unique);
			InvokeQueryEvent(key, obj);
			if (obj == null)
			{
				unique = 0uL;
				value = null;
				return false;
			}
			if (obj == MemcachedClient.Null)
			{
				unique = 0uL;
				value = null;
				return true;
			}
			value = (byte[])obj;
			return true;
		}

		[return: TupleElementNames(new string[] { "Key", "Bytes", "CacheHit" })]
		public IEnumerable<ValueTuple<string, byte[], bool>> QueryBytes(string[] keys)
		{
			if (keys == null || keys.Any(string.IsNullOrEmpty))
			{
				throw new ArgumentNullException("keys");
			}
			string[] array = FormatKeyArray(keys);
			object[] array2 = _Memcached.Get(array);
			int i = 0;
			object[] array3 = array2;
			foreach (object obj in array3)
			{
				byte[] item;
				bool item2;
				if (obj == null)
				{
					item = null;
					item2 = false;
				}
				else
				{
					item = ((obj == MemcachedClient.Null) ? null : ((byte[])obj));
					item2 = true;
				}
				yield return new ValueTuple<string, byte[], bool>(keys[i++], item, item2);
			}
		}

		public bool Append(string key, string appendedValue)
		{
			key = FormatKey(key);
			return _Memcached.Append<string>(key, appendedValue);
		}

		public bool Add(string key, string value, TimeSpan expiration)
		{
			key = FormatKey(key);
			return _Memcached.Add<string>(key, value, expiration);
		}

		public bool Delete(string key)
		{
			key = FormatKey(key);
			return _Memcached.Delete(key);
		}

		public bool Remove(string key)
		{
			key = FormatKey(key);
			return _Memcached.Delete(key);
		}

		public virtual CasResult CheckAndSet(string key, string value, TimeSpan policy, ulong uniqueFromQuery)
		{
			//IL_0037: Unknown result type (might be due to invalid IL or missing references)
			//IL_003d: Expected I4, but got Unknown
			key = FormatKey(key);
			byte[] bytes = Encoding.UTF8.GetBytes(value);
			if (uniqueFromQuery == 0L)
			{
				if (_Memcached.Add<byte[]>(key, bytes, policy))
				{
					return CasResult.Stored;
				}
				return CasResult.Exists;
			}
			return (CasResult)_Memcached.CheckAndSet<byte[]>(key, bytes, policy, uniqueFromQuery);
		}

		public CasResult CheckAndSet<TValue>(string key, TValue value, TimeSpan policy, ulong uniqueFromQuery) where TValue : struct
		{
			//IL_002b: Unknown result type (might be due to invalid IL or missing references)
			//IL_0031: Expected I4, but got Unknown
			key = FormatKey(key);
			if (uniqueFromQuery == 0L)
			{
				if (_Memcached.Add<TValue>(key, value, policy))
				{
					return CasResult.Stored;
				}
				return CasResult.Exists;
			}
			return (CasResult)_Memcached.CheckAndSet<TValue>(key, value, policy, uniqueFromQuery);
		}

		public CasResult CheckAndSet(string key, byte[] value, TimeSpan policy, ulong uniqueFromQuery)
		{
			//IL_0036: Unknown result type (might be due to invalid IL or missing references)
			//IL_003c: Expected I4, but got Unknown
			key = FormatKey(key);
			object obj = value ?? MemcachedClient.Null;
			if (uniqueFromQuery == 0L)
			{
				if (_Memcached.Add<object>(key, obj, policy))
				{
					return CasResult.Stored;
				}
				return CasResult.Exists;
			}
			return (CasResult)_Memcached.CheckAndSet<object>(key, obj, policy, uniqueFromQuery);
		}

		public bool Set(string key, string value, TimeSpan policy)
		{
			return SetBytes(key, Encoding.UTF8.GetBytes(value), policy);
		}

		public bool Set<TValue>(string key, TValue value, TimeSpan expiration)
		{
			key = FormatKey(key);
			bool result = _Memcached.Set<TValue>(key, value, expiration);
			InvokeSetEvent(key, value);
			return result;
		}

		public bool SetBytes(string key, byte[] value, TimeSpan expiration)
		{
			key = FormatKey(key);
			object obj = value ?? MemcachedClient.Null;
			bool result = _Memcached.Set<object>(key, obj, expiration);
			InvokeSetEvent(key, obj);
			return result;
		}

		public bool SetNull(string key, TimeSpan expiration)
		{
			return SetBytes(key, null, expiration);
		}

		public IEnumerable<Stat> GetStats()
		{
			return _Memcached.Stats();
		}

		public void Dispose()
		{
			IMemcachedClient memcached = _Memcached;
			if (memcached != null)
			{
				((IDisposable)memcached).Dispose();
			}
		}

		private static string[] FormatKeyArray(IEnumerable<string> keys)
		{
			return keys.Select(FormatKey).ToArray();
		}

		public ulong?[] GetCounters(string[] keys)
		{
			if (keys == null || keys.Length == 0)
			{
				return null;
			}
			keys = FormatKeyArray(keys);
			return _Memcached.GetCounter(keys);
		}

		public string[] MultiGetAsStrings(string[] keys)
		{
			if (keys == null || keys.Length == 0)
			{
				return null;
			}
			keys = FormatKeyArray(keys);
			byte[] bytes;
			return (from v in _Memcached.Get(keys)
				select ((bytes = v as byte[]) == null) ? null : Encoding.UTF8.GetString(bytes)).ToArray();
		}

		public TValue[] MultiGet<TValue>(string[] keys)
		{
			if (keys == null || keys.Length == 0)
			{
				return null;
			}
			keys = FormatKeyArray(keys);
			return (from data in _Memcached.Get(keys)
				select (data != null && data != MemcachedClient.Null) ? ((TValue)data) : default(TValue)).ToArray();
		}

		public ulong? GetCounter(string key)
		{
			key = FormatKey(key);
			return _Memcached.GetCounter(key);
		}

		public void SetCounter(string key, ulong value, TimeSpan expiration)
		{
			key = FormatKey(key);
			_Memcached.SetCounter(key, value, expiration);
		}

		public ulong? Increment(string key, ulong value)
		{
			key = FormatKey(key);
			return _Memcached.Increment(key, value);
		}

		public ulong? Decrement(string key, ulong value)
		{
			key = FormatKey(key);
			return _Memcached.Decrement(key, value);
		}

		protected void CreateMemcachedClient(string[] addresses, string clientNameSuffix, ILogger logger, IMemCachedClientSettings settings = null)
		{
			//IL_003b: Unknown result type (might be due to invalid IL or missing references)
			//IL_0045: Expected O, but got Unknown
			string text = Settings.Default.SharedCacheKeyPrefix + clientNameSuffix;
			settings = (IMemCachedClientSettings)(((object)settings) ?? ((object)new MemCachedClientSettings(Settings.Default, logger)));
			_Memcached = (IMemcachedClient)new MemcachedClient(text, addresses, (Action<Exception>)logger.Error, StaticCounterRegistry.Instance, settings);
		}

		private static string FormatKey(string key)
		{
			return Settings.Default.SharedCacheKeyPrefix + key;
		}

		protected static string[] GetCacheAddressesFromSetting(string addresses)
		{
			return addresses.Split(',', ';');
		}
	}
}
