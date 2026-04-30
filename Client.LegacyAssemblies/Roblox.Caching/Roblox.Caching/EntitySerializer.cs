using System;
using System.Collections.Concurrent;
using System.Collections.Generic;
using System.Linq;
using System.Reflection;
using System.Runtime.CompilerServices;
using System.Runtime.Serialization;
using System.Text;
using Newtonsoft.Json;
using Newtonsoft.Json.Serialization;
using Roblox.Caching.Interfaces;
using Roblox.Caching.Properties;
using Roblox.Caching.Shared;
using Roblox.EventLog;
using Roblox.Instrumentation;

namespace Roblox.Caching
{
	internal class EntitySerializer : IEntitySerializer
	{
		private class NonPublicPropertiesResolver : DefaultContractResolver
		{
			protected override IList<JsonProperty> CreateProperties(Type type, MemberSerialization memberSerialization)
			{
				//IL_0043: Unknown result type (might be due to invalid IL or missing references)
				//IL_00b4: Unknown result type (might be due to invalid IL or missing references)
				List<JsonProperty> list = new List<JsonProperty>();
				foreach (PropertyInfo item in from p in type.GetProperties(BindingFlags.Instance | BindingFlags.Public | BindingFlags.NonPublic)
					where p.CanRead && p.CanWrite
					select p)
				{
					JsonProperty val = base.CreateProperty((MemberInfo)item, memberSerialization);
					val.Writable = true;
					val.Readable = true;
					list.Add(val);
				}
				foreach (FieldInfo item2 in from f in type.GetFields(BindingFlags.Instance | BindingFlags.Public | BindingFlags.NonPublic)
					where f.IsPublic || f.IsAssembly
					select f)
				{
					JsonProperty val2 = base.CreateProperty((MemberInfo)item2, memberSerialization);
					val2.Writable = true;
					val2.Readable = true;
					list.Add(val2);
				}
				return list;
			}
		}

		[TupleElementNames(new string[] { "constructor", "dalType" })]
		private static readonly ConcurrentDictionary<Type, ValueTuple<ConstructorInfo, Type>> _EntityConstructors = new ConcurrentDictionary<Type, ValueTuple<ConstructorInfo, Type>>();

		private const string _Category = "Roblox.Caching.EntitySerializer";

		private readonly ISettings _Settings;

		private readonly ILogger _Logger;

		private readonly ICounterRegistry _CounterRegistry;

		private static readonly JsonSerializerSettings _JsonSerializerSettings = new JsonSerializerSettings
		{
			TypeNameHandling = (TypeNameHandling)3,
			ContractResolver = (IContractResolver)(object)new NonPublicPropertiesResolver()
		};

		private static readonly JsonSerializerSettings _JsonSerializerSettingsIgnoreTypes = new JsonSerializerSettings
		{
			TypeNameHandling = (TypeNameHandling)0,
			ContractResolver = (IContractResolver)(object)new NonPublicPropertiesResolver()
		};

		internal EntitySerializer(ISettings settings, ILogger logger, ICounterRegistry counterRegistry)
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
			if (counterRegistry == null)
			{
				throw new ArgumentNullException("counterRegistry");
			}
			_CounterRegistry = counterRegistry;
		}

		public byte[] Serialize<TEntity>(TEntity entity) where TEntity : ICacheableObject
		{
			if (entity == null)
			{
				throw new ArgumentNullException("entity");
			}
			IRemoteCacheableObject remoteCacheableObject;
			if ((remoteCacheableObject = entity as IRemoteCacheableObject) == null)
			{
				return null;
			}
			string s = JsonConvert.SerializeObject(remoteCacheableObject.GetSerializable(), _JsonSerializerSettings);
			return Encoding.UTF8.GetBytes(s);
		}

		[return: TupleElementNames(new string[] { "Success", "Entity" })]
		public ValueTuple<bool, TEntity> TryDeserializeFromRemoteCache<TEntity>(ISharedCacheClient sharedCacheClient, byte[] value, string key) where TEntity : ICacheableObject
		{
			if (sharedCacheClient == null)
			{
				throw new ArgumentNullException("sharedCacheClient");
			}
			if (value == null)
			{
				throw new ArgumentNullException("value");
			}
			if (string.IsNullOrWhiteSpace(key))
			{
				throw new ArgumentNullException("key");
			}
			ValueTuple<bool, string> valueTuple = SafelyInvokeActionAndRemoveKeyAndLogOnFailure(sharedCacheClient, key, () => Encoding.UTF8.GetString(value), () => string.Format("Failed to get string from byte array for for key={0}. Value was {1}", key, BitConverter.ToString(value)));
			bool item = valueTuple.Item1;
			string json = valueTuple.Item2;
			if (!item)
			{
				return new ValueTuple<bool, TEntity>(false, default(TEntity));
			}
			ValueTuple<bool, TEntity> valueTuple2 = SafelyInvokeActionAndRemoveKeyAndLogOnFailure(sharedCacheClient, key, () => Deserialize<TEntity>(json), () => string.Format("Failed to deserialize data for key:{0}, value:{1}.", key, json));
			bool item2 = valueTuple2.Item1;
			TEntity item3 = valueTuple2.Item2;
			if (!item2 && _Settings.IsEntityDeserializationFailureCounterEnabled)
			{
				_CounterRegistry.GetRateOfCountsPerSecondCounter("Roblox.Caching.EntitySerializer", "DeserializationFailures", typeof(TEntity).FullName).Increment();
			}
			return new ValueTuple<bool, TEntity>(item2, item3);
		}

		[return: TupleElementNames(new string[] { "Success", "Value" })]
		private ValueTuple<bool, TReturnType> SafelyInvokeActionAndRemoveKeyAndLogOnFailure<TReturnType>(ISharedCacheClient sharedCacheClient, string key, Func<TReturnType> action, Func<string> logMessageGetter)
		{
			try
			{
				TReturnType item = action();
				return new ValueTuple<bool, TReturnType>(true, item);
			}
			catch (Exception arg)
			{
				sharedCacheClient.Remove(key);
				if (_Settings.IsEntityDeserializationFailureLoggingEnabled)
				{
					_Logger.Error(string.Format("Exception: {0}. Message: {1}", arg, logMessageGetter()));
				}
				return new ValueTuple<bool, TReturnType>(false, default(TReturnType));
			}
		}

		private TEntity Deserialize<TEntity>(string json)
		{
			Type typeFromHandle = typeof(TEntity);
			ValueTuple<ConstructorInfo, Type> value;
			if (_EntityConstructors.TryGetValue(typeFromHandle, out value))
			{
				object obj = JsonConvert.DeserializeObject(json, value.Item2, _JsonSerializerSettingsIgnoreTypes);
				return (TEntity)value.Item1.Invoke(new object[1] { obj });
			}
			foreach (var item3 in typeFromHandle.GetConstructors(BindingFlags.Instance | BindingFlags.Public | BindingFlags.NonPublic).Select(c =>
			{
				ParameterInfo[] parameters = c.GetParameters();
				return (parameters.Length != 1) ? new ValueTuple<ConstructorInfo, Type>(null, null) : new ValueTuple<ConstructorInfo, Type>(c, parameters[0].ParameterType);
			}).Where(t => t.Item1 != null))
			{
				ConstructorInfo item = item3.Item1;
				Type item2 = item3.Item2;
				try
				{
					object obj2 = JsonConvert.DeserializeObject(json, item2, _JsonSerializerSettingsIgnoreTypes);
					TEntity result = (TEntity)item.Invoke(new object[1] { obj2 });
					_EntityConstructors[typeFromHandle] = new ValueTuple<ConstructorInfo, Type>(item, item2);
					return result;
				}
				catch
				{
				}
			}
			throw new SerializationException(string.Format("Entity deserialization failed: {0}. JSON data: {1}.", typeFromHandle.FullName, json));
		}
	}
}
