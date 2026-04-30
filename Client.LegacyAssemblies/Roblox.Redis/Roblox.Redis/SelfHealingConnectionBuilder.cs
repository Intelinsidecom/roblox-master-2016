// Warning: Some assembly references could not be resolved automatically. This might lead to incorrect decompilation of some parts,
// for ex. property getter/setter access. To get optimal decompilation results, please manually add the missing references to the list of loaded assemblies.
// Roblox.Redis, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// Roblox.Redis.SelfHealingConnectionBuilder
using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.IO;
using System.Linq;
using System.Net;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using System.Threading;
using System.Threading.Tasks;
using Roblox.Redis;
using StackExchange.Redis;

public class SelfHealingConnectionBuilder : IConnectionBuilder
{
	private class SelfHealingConnectionMultiplexer : IConnectionMultiplexer
	{
		private class BadStateRecorder
		{
			private readonly LinkedList<DateTime> _Occurrences = new LinkedList<DateTime>();

			private readonly Func<DateTime> _GetCurrentTimeFunc;

			private readonly ISelfHealingConnectionMultiplexerSettings _Settings;

			private DateTime _LastReset;

			public long Version { get; private set; }

			public event Action<long> BadStateDetected;

			public BadStateRecorder(ISelfHealingConnectionMultiplexerSettings settings, Func<DateTime> getCurrentTimeFunc)
			{
				if (settings == null)
				{
					throw new ArgumentNullException("settings");
				}
				_Settings = settings;
				if (getCurrentTimeFunc == null)
				{
					throw new ArgumentNullException("getCurrentTimeFunc");
				}
				_GetCurrentTimeFunc = getCurrentTimeFunc;
				_LastReset = DateTime.MinValue;
			}

			public void Record()
			{
				DateTime dateTime = _GetCurrentTimeFunc();
				if (dateTime < _LastReset + _Settings.ResetGracePeriod)
				{
					return;
				}
				TimeSpan detectionInterval = _Settings.DetectionInterval;
				bool flag;
				long obj;
				lock (_Occurrences)
				{
					_Occurrences.AddLast(dateTime);
					while (true)
					{
						LinkedListNode<DateTime> first = _Occurrences.First;
						if (!(((first != null) ? new DateTime?(first.Value) : ((DateTime?)null)) < dateTime - detectionInterval))
						{
							break;
						}
						_Occurrences.RemoveFirst();
					}
					if (_Occurrences.Count >= _Settings.DetectionThreshold)
					{
						flag = true;
						obj = Version;
					}
					else
					{
						flag = false;
						obj = 0L;
					}
				}
				if (flag)
				{
					Action<long> action = this.BadStateDetected;
					if (action != null)
					{
						action(obj);
					}
				}
			}

			public bool Reset(long version)
			{
				lock (_Occurrences)
				{
					if (version == Version)
					{
						_Occurrences.Clear();
						Version++;
						_LastReset = _GetCurrentTimeFunc();
						return true;
					}
				}
				return false;
			}
		}

		private class BadStateReportingDatabase : BadStateReportingBase<IDatabase>, IDatabase, IRedis, IRedisAsync, IDatabaseAsync
		{
			public int Database
			{
				get
				{
					return base.Decorated.Database;
				}
			}

			public ConnectionMultiplexer Multiplexer
			{
				get
				{
					return ((IRedisAsync)base.Decorated).Multiplexer;
				}
			}

			public override event Action BadStateExceptionOccurred;

			public BadStateReportingDatabase(IDatabase decorated)
				: base(decorated)
			{
			}

			public IBatch CreateBatch(object asyncState = null)
			{
				BadStateReportingBatch badStateReportingBatch = new BadStateReportingBatch(base.Decorated.CreateBatch(asyncState));
				badStateReportingBatch.BadStateExceptionOccurred += RaiseBadStateExceptionOccurred;
				return (IBatch)(object)badStateReportingBatch;
			}

			public ITransaction CreateTransaction(object asyncState = null)
			{
				BadStateReportingTransaction badStateReportingTransaction = new BadStateReportingTransaction(base.Decorated.CreateTransaction(asyncState));
				badStateReportingTransaction.BadStateExceptionOccurred += RaiseBadStateExceptionOccurred;
				return (ITransaction)(object)badStateReportingTransaction;
			}

			public RedisValue DebugObject(RedisKey key, CommandFlags flags = (CommandFlags)0)
			{
				//IL_0007: Unknown result type (might be due to invalid IL or missing references)
				//IL_0008: Unknown result type (might be due to invalid IL or missing references)
				//IL_000e: Unknown result type (might be due to invalid IL or missing references)
				//IL_000f: Unknown result type (might be due to invalid IL or missing references)
				//IL_0021: Unknown result type (might be due to invalid IL or missing references)
				return DoDecoratedOperation((IDatabase db) => db.DebugObject(key, flags));
			}

			public Task<RedisValue> DebugObjectAsync(RedisKey key, CommandFlags flags = (CommandFlags)0)
			{
				//IL_0007: Unknown result type (might be due to invalid IL or missing references)
				//IL_0008: Unknown result type (might be due to invalid IL or missing references)
				//IL_000e: Unknown result type (might be due to invalid IL or missing references)
				//IL_000f: Unknown result type (might be due to invalid IL or missing references)
				return DoDecoratedOperation((IDatabase db) => ((IDatabaseAsync)db).DebugObjectAsync(key, flags));
			}

			public RedisResult Execute(string command, params object[] args)
			{
				return DoDecoratedOperation((IDatabase db) => db.Execute(command, args));
			}

			public RedisResult Execute(string command, ICollection<object> args, CommandFlags flags = (CommandFlags)0)
			{
				//IL_0015: Unknown result type (might be due to invalid IL or missing references)
				//IL_0016: Unknown result type (might be due to invalid IL or missing references)
				return DoDecoratedOperation((IDatabase db) => db.Execute(command, args, flags));
			}

			public Task<RedisResult> ExecuteAsync(string command, params object[] args)
			{
				return DoDecoratedOperation((IDatabase db) => ((IDatabaseAsync)db).ExecuteAsync(command, args));
			}

			public Task<RedisResult> ExecuteAsync(string command, ICollection<object> args, CommandFlags flags = (CommandFlags)0)
			{
				//IL_0015: Unknown result type (might be due to invalid IL or missing references)
				//IL_0016: Unknown result type (might be due to invalid IL or missing references)
				return DoDecoratedOperation((IDatabase db) => ((IDatabaseAsync)db).ExecuteAsync(command, args, flags));
			}

			public bool GeoAdd(RedisKey key, double longitude, double latitude, RedisValue member, CommandFlags flags = (CommandFlags)0)
			{
				//IL_0007: Unknown result type (might be due to invalid IL or missing references)
				//IL_0008: Unknown result type (might be due to invalid IL or missing references)
				//IL_001c: Unknown result type (might be due to invalid IL or missing references)
				//IL_001e: Unknown result type (might be due to invalid IL or missing references)
				//IL_0024: Unknown result type (might be due to invalid IL or missing references)
				//IL_0026: Unknown result type (might be due to invalid IL or missing references)
				return DoDecoratedOperation((IDatabase db) => db.GeoAdd(key, longitude, latitude, member, flags));
			}

			public bool GeoAdd(RedisKey key, GeoEntry value, CommandFlags flags = (CommandFlags)0)
			{
				//IL_0007: Unknown result type (might be due to invalid IL or missing references)
				//IL_0008: Unknown result type (might be due to invalid IL or missing references)
				//IL_000e: Unknown result type (might be due to invalid IL or missing references)
				//IL_000f: Unknown result type (might be due to invalid IL or missing references)
				//IL_0015: Unknown result type (might be due to invalid IL or missing references)
				//IL_0016: Unknown result type (might be due to invalid IL or missing references)
				return DoDecoratedOperation((IDatabase db) => db.GeoAdd(key, value, flags));
			}

			public long GeoAdd(RedisKey key, GeoEntry[] values, CommandFlags flags = (CommandFlags)0)
			{
				//IL_0007: Unknown result type (might be due to invalid IL or missing references)
				//IL_0008: Unknown result type (might be due to invalid IL or missing references)
				//IL_0015: Unknown result type (might be due to invalid IL or missing references)
				//IL_0016: Unknown result type (might be due to invalid IL or missing references)
				return DoDecoratedOperation((IDatabase db) => db.GeoAdd(key, values, flags));
			}

			public Task<bool> GeoAddAsync(RedisKey key, double longitude, double latitude, RedisValue member, CommandFlags flags = (CommandFlags)0)
			{
				//IL_0007: Unknown result type (might be due to invalid IL or missing references)
				//IL_0008: Unknown result type (might be due to invalid IL or missing references)
				//IL_001c: Unknown result type (might be due to invalid IL or missing references)
				//IL_001e: Unknown result type (might be due to invalid IL or missing references)
				//IL_0024: Unknown result type (might be due to invalid IL or missing references)
				//IL_0026: Unknown result type (might be due to invalid IL or missing references)
				return DoDecoratedOperation((IDatabase db) => ((IDatabaseAsync)db).GeoAddAsync(key, longitude, latitude, member, flags));
			}

			public Task<bool> GeoAddAsync(RedisKey key, GeoEntry value, CommandFlags flags = (CommandFlags)0)
			{
				//IL_0007: Unknown result type (might be due to invalid IL or missing references)
				//IL_0008: Unknown result type (might be due to invalid IL or missing references)
				//IL_000e: Unknown result type (might be due to invalid IL or missing references)
				//IL_000f: Unknown result type (might be due to invalid IL or missing references)
				//IL_0015: Unknown result type (might be due to invalid IL or missing references)
				//IL_0016: Unknown result type (might be due to invalid IL or missing references)
				return DoDecoratedOperation((IDatabase db) => ((IDatabaseAsync)db).GeoAddAsync(key, value, flags));
			}

			public Task<long> GeoAddAsync(RedisKey key, GeoEntry[] values, CommandFlags flags = (CommandFlags)0)
			{
				//IL_0007: Unknown result type (might be due to invalid IL or missing references)
				//IL_0008: Unknown result type (might be due to invalid IL or missing references)
				//IL_0015: Unknown result type (might be due to invalid IL or missing references)
				//IL_0016: Unknown result type (might be due to invalid IL or missing references)
				return DoDecoratedOperation((IDatabase db) => ((IDatabaseAsync)db).GeoAddAsync(key, values, flags));
			}

			public double? GeoDistance(RedisKey key, RedisValue member1, RedisValue member2, GeoUnit unit = (GeoUnit)0, CommandFlags flags = (CommandFlags)0)
			{
				//IL_0007: Unknown result type (might be due to invalid IL or missing references)
				//IL_0008: Unknown result type (might be due to invalid IL or missing references)
				//IL_000e: Unknown result type (might be due to invalid IL or missing references)
				//IL_000f: Unknown result type (might be due to invalid IL or missing references)
				//IL_0015: Unknown result type (might be due to invalid IL or missing references)
				//IL_0016: Unknown result type (might be due to invalid IL or missing references)
				//IL_001c: Unknown result type (might be due to invalid IL or missing references)
				//IL_001e: Unknown result type (might be due to invalid IL or missing references)
				//IL_0024: Unknown result type (might be due to invalid IL or missing references)
				//IL_0026: Unknown result type (might be due to invalid IL or missing references)
				return DoDecoratedOperation((IDatabase db) => db.GeoDistance(key, member1, member2, unit, flags));
			}

			public Task<double?> GeoDistanceAsync(RedisKey key, RedisValue member1, RedisValue member2, GeoUnit unit = (GeoUnit)0, CommandFlags flags = (CommandFlags)0)
			{
				//IL_0007: Unknown result type (might be due to invalid IL or missing references)
				//IL_0008: Unknown result type (might be due to invalid IL or missing references)
				//IL_000e: Unknown result type (might be due to invalid IL or missing references)
				//IL_000f: Unknown result type (might be due to invalid IL or missing references)
				//IL_0015: Unknown result type (might be due to invalid IL or missing references)
				//IL_0016: Unknown result type (might be due to invalid IL or missing references)
				//IL_001c: Unknown result type (might be due to invalid IL or missing references)
				//IL_001e: Unknown result type (might be due to invalid IL or missing references)
				//IL_0024: Unknown result type (might be due to invalid IL or missing references)
				//IL_0026: Unknown result type (might be due to invalid IL or missing references)
				return DoDecoratedOperation((IDatabase db) => ((IDatabaseAsync)db).GeoDistanceAsync(key, member1, member2, unit, flags));
			}

			public string[] GeoHash(RedisKey key, RedisValue[] members, CommandFlags flags = (CommandFlags)0)
			{
				//IL_0007: Unknown result type (might be due to invalid IL or missing references)
				//IL_0008: Unknown result type (might be due to invalid IL or missing references)
				//IL_0015: Unknown result type (might be due to invalid IL or missing references)
				//IL_0016: Unknown result type (might be due to invalid IL or missing references)
				return DoDecoratedOperation((IDatabase db) => db.GeoHash(key, members, flags));
			}

			public string GeoHash(RedisKey key, RedisValue member, CommandFlags flags = (CommandFlags)0)
			{
				//IL_0007: Unknown result type (might be due to invalid IL or missing references)
				//IL_0008: Unknown result type (might be due to invalid IL or missing references)
				//IL_000e: Unknown result type (might be due to invalid IL or missing references)
				//IL_000f: Unknown result type (might be due to invalid IL or missing references)
				//IL_0015: Unknown result type (might be due to invalid IL or missing references)
				//IL_0016: Unknown result type (might be due to invalid IL or missing references)
				return DoDecoratedOperation((IDatabase db) => db.GeoHash(key, member, flags));
			}

			public Task<string[]> GeoHashAsync(RedisKey key, RedisValue[] members, CommandFlags flags = (CommandFlags)0)
			{
				//IL_0007: Unknown result type (might be due to invalid IL or missing references)
				//IL_0008: Unknown result type (might be due to invalid IL or missing references)
				//IL_0015: Unknown result type (might be due to invalid IL or missing references)
				//IL_0016: Unknown result type (might be due to invalid IL or missing references)
				return DoDecoratedOperation((IDatabase db) => ((IDatabaseAsync)db).GeoHashAsync(key, members, flags));
			}

			public Task<string> GeoHashAsync(RedisKey key, RedisValue member, CommandFlags flags = (CommandFlags)0)
			{
				//IL_0007: Unknown result type (might be due to invalid IL or missing references)
				//IL_0008: Unknown result type (might be due to invalid IL or missing references)
				//IL_000e: Unknown result type (might be due to invalid IL or missing references)
				//IL_000f: Unknown result type (might be due to invalid IL or missing references)
				//IL_0015: Unknown result type (might be due to invalid IL or missing references)
				//IL_0016: Unknown result type (might be due to invalid IL or missing references)
				return DoDecoratedOperation((IDatabase db) => ((IDatabaseAsync)db).GeoHashAsync(key, member, flags));
			}

			public GeoPosition?[] GeoPosition(RedisKey key, RedisValue[] members, CommandFlags flags = (CommandFlags)0)
			{
				//IL_0007: Unknown result type (might be due to invalid IL or missing references)
				//IL_0008: Unknown result type (might be due to invalid IL or missing references)
				//IL_0015: Unknown result type (might be due to invalid IL or missing references)
				//IL_0016: Unknown result type (might be due to invalid IL or missing references)
				return DoDecoratedOperation((IDatabase db) => db.GeoPosition(key, members, flags));
			}

			public GeoPosition? GeoPosition(RedisKey key, RedisValue member, CommandFlags flags = (CommandFlags)0)
			{
				//IL_0007: Unknown result type (might be due to invalid IL or missing references)
				//IL_0008: Unknown result type (might be due to invalid IL or missing references)
				//IL_000e: Unknown result type (might be due to invalid IL or missing references)
				//IL_000f: Unknown result type (might be due to invalid IL or missing references)
				//IL_0015: Unknown result type (might be due to invalid IL or missing references)
				//IL_0016: Unknown result type (might be due to invalid IL or missing references)
				return DoDecoratedOperation((IDatabase db) => db.GeoPosition(key, member, flags));
			}

			public Task<GeoPosition?[]> GeoPositionAsync(RedisKey key, RedisValue[] members, CommandFlags flags = (CommandFlags)0)
			{
				//IL_0007: Unknown result type (might be due to invalid IL or missing references)
				//IL_0008: Unknown result type (might be due to invalid IL or missing references)
				//IL_0015: Unknown result type (might be due to invalid IL or missing references)
				//IL_0016: Unknown result type (might be due to invalid IL or missing references)
				return DoDecoratedOperation((IDatabase db) => ((IDatabaseAsync)db).GeoPositionAsync(key, members, flags));
			}

			public Task<GeoPosition?> GeoPositionAsync(RedisKey key, RedisValue member, CommandFlags flags = (CommandFlags)0)
			{
				//IL_0007: Unknown result type (might be due to invalid IL or missing references)
				//IL_0008: Unknown result type (might be due to invalid IL or missing references)
				//IL_000e: Unknown result type (might be due to invalid IL or missing references)
				//IL_000f: Unknown result type (might be due to invalid IL or missing references)
				//IL_0015: Unknown result type (might be due to invalid IL or missing references)
				//IL_0016: Unknown result type (might be due to invalid IL or missing references)
				return DoDecoratedOperation((IDatabase db) => ((IDatabaseAsync)db).GeoPositionAsync(key, member, flags));
			}

			public GeoRadiusResult[] GeoRadius(RedisKey key, RedisValue member, double radius, GeoUnit unit = (GeoUnit)0, int count = -1, Order? order = null, GeoRadiusOptions options = (GeoRadiusOptions)3, CommandFlags flags = (CommandFlags)0)
			{
				//IL_0007: Unknown result type (might be due to invalid IL or missing references)
				//IL_0008: Unknown result type (might be due to invalid IL or missing references)
				//IL_000e: Unknown result type (might be due to invalid IL or missing references)
				//IL_000f: Unknown result type (might be due to invalid IL or missing references)
				//IL_001c: Unknown result type (might be due to invalid IL or missing references)
				//IL_001e: Unknown result type (might be due to invalid IL or missing references)
				//IL_0034: Unknown result type (might be due to invalid IL or missing references)
				//IL_0036: Unknown result type (might be due to invalid IL or missing references)
				//IL_003c: Unknown result type (might be due to invalid IL or missing references)
				//IL_003e: Unknown result type (might be due to invalid IL or missing references)
				return DoDecoratedOperation((IDatabase db) => db.GeoRadius(key, member, radius, unit, count, order, options, flags));
			}

			public GeoRadiusResult[] GeoRadius(RedisKey key, double longitude, double latitude, double radius, GeoUnit unit = (GeoUnit)0, int count = -1, Order? order = null, GeoRadiusOptions options = (GeoRadiusOptions)3, CommandFlags flags = (CommandFlags)0)
			{
				//IL_0007: Unknown result type (might be due to invalid IL or missing references)
				//IL_0008: Unknown result type (might be due to invalid IL or missing references)
				//IL_0024: Unknown result type (might be due to invalid IL or missing references)
				//IL_0026: Unknown result type (might be due to invalid IL or missing references)
				//IL_003c: Unknown result type (might be due to invalid IL or missing references)
				//IL_003e: Unknown result type (might be due to invalid IL or missing references)
				//IL_0044: Unknown result type (might be due to invalid IL or missing references)
				//IL_0046: Unknown result type (might be due to invalid IL or missing references)
				return DoDecoratedOperation((IDatabase db) => db.GeoRadius(key, longitude, latitude, radius, unit, count, order, options, flags));
			}

			public Task<GeoRadiusResult[]> GeoRadiusAsync(RedisKey key, RedisValue member, double radius, GeoUnit unit = (GeoUnit)0, int count = -1, Order? order = null, GeoRadiusOptions options = (GeoRadiusOptions)3, CommandFlags flags = (CommandFlags)0)
			{
				//IL_0007: Unknown result type (might be due to invalid IL or missing references)
				//IL_0008: Unknown result type (might be due to invalid IL or missing references)
				//IL_000e: Unknown result type (might be due to invalid IL or missing references)
				//IL_000f: Unknown result type (might be due to invalid IL or missing references)
				//IL_001c: Unknown result type (might be due to invalid IL or missing references)
				//IL_001e: Unknown result type (might be due to invalid IL or missing references)
				//IL_0034: Unknown result type (might be due to invalid IL or missing references)
				//IL_0036: Unknown result type (might be due to invalid IL or missing references)
				//IL_003c: Unknown result type (might be due to invalid IL or missing references)
				//IL_003e: Unknown result type (might be due to invalid IL or missing references)
				return DoDecoratedOperation((IDatabase db) => ((IDatabaseAsync)db).GeoRadiusAsync(key, member, radius, unit, count, order, options, flags));
			}

			public Task<GeoRadiusResult[]> GeoRadiusAsync(RedisKey key, double longitude, double latitude, double radius, GeoUnit unit = (GeoUnit)0, int count = -1, Order? order = null, GeoRadiusOptions options = (GeoRadiusOptions)3, CommandFlags flags = (CommandFlags)0)
			{
				//IL_0007: Unknown result type (might be due to invalid IL or missing references)
				//IL_0008: Unknown result type (might be due to invalid IL or missing references)
				//IL_0024: Unknown result type (might be due to invalid IL or missing references)
				//IL_0026: Unknown result type (might be due to invalid IL or missing references)
				//IL_003c: Unknown result type (might be due to invalid IL or missing references)
				//IL_003e: Unknown result type (might be due to invalid IL or missing references)
				//IL_0044: Unknown result type (might be due to invalid IL or missing references)
				//IL_0046: Unknown result type (might be due to invalid IL or missing references)
				return DoDecoratedOperation((IDatabase db) => ((IDatabaseAsync)db).GeoRadiusAsync(key, longitude, latitude, radius, unit, count, order, options, flags));
			}

			public bool GeoRemove(RedisKey key, RedisValue member, CommandFlags flags = (CommandFlags)0)
			{
				//IL_0007: Unknown result type (might be due to invalid IL or missing references)
				//IL_0008: Unknown result type (might be due to invalid IL or missing references)
				//IL_000e: Unknown result type (might be due to invalid IL or missing references)
				//IL_000f: Unknown result type (might be due to invalid IL or missing references)
				//IL_0015: Unknown result type (might be due to invalid IL or missing references)
				//IL_0016: Unknown result type (might be due to invalid IL or missing references)
				return DoDecoratedOperation((IDatabase db) => db.GeoRemove(key, member, flags));
			}

			public Task<bool> GeoRemoveAsync(RedisKey key, RedisValue member, CommandFlags flags = (CommandFlags)0)
			{
				//IL_0007: Unknown result type (might be due to invalid IL or missing references)
				//IL_0008: Unknown result type (might be due to invalid IL or missing references)
				//IL_000e: Unknown result type (might be due to invalid IL or missing references)
				//IL_000f: Unknown result type (might be due to invalid IL or missing references)
				//IL_0015: Unknown result type (might be due to invalid IL or missing references)
				//IL_0016: Unknown result type (might be due to invalid IL or missing references)
				return DoDecoratedOperation((IDatabase db) => ((IDatabaseAsync)db).GeoRemoveAsync(key, member, flags));
			}

			public long HashDecrement(RedisKey key, RedisValue hashField, long value = 1L, CommandFlags flags = (CommandFlags)0)
			{
				//IL_0007: Unknown result type (might be due to invalid IL or missing references)
				//IL_0008: Unknown result type (might be due to invalid IL or missing references)
				//IL_000e: Unknown result type (might be due to invalid IL or missing references)
				//IL_000f: Unknown result type (might be due to invalid IL or missing references)
				//IL_001c: Unknown result type (might be due to invalid IL or missing references)
				//IL_001e: Unknown result type (might be due to invalid IL or missing references)
				return DoDecoratedOperation((IDatabase db) => db.HashDecrement(key, hashField, value, flags));
			}

			public double HashDecrement(RedisKey key, RedisValue hashField, double value, CommandFlags flags = (CommandFlags)0)
			{
				//IL_0007: Unknown result type (might be due to invalid IL or missing references)
				//IL_0008: Unknown result type (might be due to invalid IL or missing references)
				//IL_000e: Unknown result type (might be due to invalid IL or missing references)
				//IL_000f: Unknown result type (might be due to invalid IL or missing references)
				//IL_001c: Unknown result type (might be due to invalid IL or missing references)
				//IL_001e: Unknown result type (might be due to invalid IL or missing references)
				return DoDecoratedOperation((IDatabase db) => db.HashDecrement(key, hashField, value, flags));
			}

			public Task<long> HashDecrementAsync(RedisKey key, RedisValue hashField, long value = 1L, CommandFlags flags = (CommandFlags)0)
			{
				//IL_0007: Unknown result type (might be due to invalid IL or missing references)
				//IL_0008: Unknown result type (might be due to invalid IL or missing references)
				//IL_000e: Unknown result type (might be due to invalid IL or missing references)
				//IL_000f: Unknown result type (might be due to invalid IL or missing references)
				//IL_001c: Unknown result type (might be due to invalid IL or missing references)
				//IL_001e: Unknown result type (might be due to invalid IL or missing references)
				return DoDecoratedOperation((IDatabase db) => ((IDatabaseAsync)db).HashDecrementAsync(key, hashField, value, flags));
			}

			public Task<double> HashDecrementAsync(RedisKey key, RedisValue hashField, double value, CommandFlags flags = (CommandFlags)0)
			{
				//IL_0007: Unknown result type (might be due to invalid IL or missing references)
				//IL_0008: Unknown result type (might be due to invalid IL or missing references)
				//IL_000e: Unknown result type (might be due to invalid IL or missing references)
				//IL_000f: Unknown result type (might be due to invalid IL or missing references)
				//IL_001c: Unknown result type (might be due to invalid IL or missing references)
				//IL_001e: Unknown result type (might be due to invalid IL or missing references)
				return DoDecoratedOperation((IDatabase db) => ((IDatabaseAsync)db).HashDecrementAsync(key, hashField, value, flags));
			}

			public bool HashDelete(RedisKey key, RedisValue hashField, CommandFlags flags = (CommandFlags)0)
			{
				//IL_0007: Unknown result type (might be due to invalid IL or missing references)
				//IL_0008: Unknown result type (might be due to invalid IL or missing references)
				//IL_000e: Unknown result type (might be due to invalid IL or missing references)
				//IL_000f: Unknown result type (might be due to invalid IL or missing references)
				//IL_0015: Unknown result type (might be due to invalid IL or missing references)
				//IL_0016: Unknown result type (might be due to invalid IL or missing references)
				return DoDecoratedOperation((IDatabase db) => db.HashDelete(key, hashField, flags));
			}

			public long HashDelete(RedisKey key, RedisValue[] hashFields, CommandFlags flags = (CommandFlags)0)
			{
				//IL_0007: Unknown result type (might be due to invalid IL or missing references)
				//IL_0008: Unknown result type (might be due to invalid IL or missing references)
				//IL_0015: Unknown result type (might be due to invalid IL or missing references)
				//IL_0016: Unknown result type (might be due to invalid IL or missing references)
				return DoDecoratedOperation((IDatabase db) => db.HashDelete(key, hashFields, flags));
			}

			public Task<bool> HashDeleteAsync(RedisKey key, RedisValue hashField, CommandFlags flags = (CommandFlags)0)
			{
				//IL_0007: Unknown result type (might be due to invalid IL or missing references)
				//IL_0008: Unknown result type (might be due to invalid IL or missing references)
				//IL_000e: Unknown result type (might be due to invalid IL or missing references)
				//IL_000f: Unknown result type (might be due to invalid IL or missing references)
				//IL_0015: Unknown result type (might be due to invalid IL or missing references)
				//IL_0016: Unknown result type (might be due to invalid IL or missing references)
				return DoDecoratedOperation((IDatabase db) => ((IDatabaseAsync)db).HashDeleteAsync(key, hashField, flags));
			}

			public Task<long> HashDeleteAsync(RedisKey key, RedisValue[] hashFields, CommandFlags flags = (CommandFlags)0)
			{
				//IL_0007: Unknown result type (might be due to invalid IL or missing references)
				//IL_0008: Unknown result type (might be due to invalid IL or missing references)
				//IL_0015: Unknown result type (might be due to invalid IL or missing references)
				//IL_0016: Unknown result type (might be due to invalid IL or missing references)
				return DoDecoratedOperation((IDatabase db) => ((IDatabaseAsync)db).HashDeleteAsync(key, hashFields, flags));
			}

			public bool HashExists(RedisKey key, RedisValue hashField, CommandFlags flags = (CommandFlags)0)
			{
				//IL_0007: Unknown result type (might be due to invalid IL or missing references)
				//IL_0008: Unknown result type (might be due to invalid IL or missing references)
				//IL_000e: Unknown result type (might be due to invalid IL or missing references)
				//IL_000f: Unknown result type (might be due to invalid IL or missing references)
				//IL_0015: Unknown result type (might be due to invalid IL or missing references)
				//IL_0016: Unknown result type (might be due to invalid IL or missing references)
				return DoDecoratedOperation((IDatabase db) => db.HashExists(key, hashField, flags));
			}

			public Task<bool> HashExistsAsync(RedisKey key, RedisValue hashField, CommandFlags flags = (CommandFlags)0)
			{
				//IL_0007: Unknown result type (might be due to invalid IL or missing references)
				//IL_0008: Unknown result type (might be due to invalid IL or missing references)
				//IL_000e: Unknown result type (might be due to invalid IL or missing references)
				//IL_000f: Unknown result type (might be due to invalid IL or missing references)
				//IL_0015: Unknown result type (might be due to invalid IL or missing references)
				//IL_0016: Unknown result type (might be due to invalid IL or missing references)
				return DoDecoratedOperation((IDatabase db) => ((IDatabaseAsync)db).HashExistsAsync(key, hashField, flags));
			}

			public RedisValue HashGet(RedisKey key, RedisValue hashField, CommandFlags flags = (CommandFlags)0)
			{
				//IL_0007: Unknown result type (might be due to invalid IL or missing references)
				//IL_0008: Unknown result type (might be due to invalid IL or missing references)
				//IL_000e: Unknown result type (might be due to invalid IL or missing references)
				//IL_000f: Unknown result type (might be due to invalid IL or missing references)
				//IL_0015: Unknown result type (might be due to invalid IL or missing references)
				//IL_0016: Unknown result type (might be due to invalid IL or missing references)
				//IL_0028: Unknown result type (might be due to invalid IL or missing references)
				return DoDecoratedOperation((IDatabase db) => db.HashGet(key, hashField, flags));
			}

			public RedisValue[] HashGet(RedisKey key, RedisValue[] hashFields, CommandFlags flags = (CommandFlags)0)
			{
				//IL_0007: Unknown result type (might be due to invalid IL or missing references)
				//IL_0008: Unknown result type (might be due to invalid IL or missing references)
				//IL_0015: Unknown result type (might be due to invalid IL or missing references)
				//IL_0016: Unknown result type (might be due to invalid IL or missing references)
				return DoDecoratedOperation((IDatabase db) => db.HashGet(key, hashFields, flags));
			}

			public HashEntry[] HashGetAll(RedisKey key, CommandFlags flags = (CommandFlags)0)
			{
				//IL_0007: Unknown result type (might be due to invalid IL or missing references)
				//IL_0008: Unknown result type (might be due to invalid IL or missing references)
				//IL_000e: Unknown result type (might be due to invalid IL or missing references)
				//IL_000f: Unknown result type (might be due to invalid IL or missing references)
				return DoDecoratedOperation((IDatabase db) => db.HashGetAll(key, flags));
			}

			public Task<HashEntry[]> HashGetAllAsync(RedisKey key, CommandFlags flags = (CommandFlags)0)
			{
				//IL_0007: Unknown result type (might be due to invalid IL or missing references)
				//IL_0008: Unknown result type (might be due to invalid IL or missing references)
				//IL_000e: Unknown result type (might be due to invalid IL or missing references)
				//IL_000f: Unknown result type (might be due to invalid IL or missing references)
				return DoDecoratedOperation((IDatabase db) => ((IDatabaseAsync)db).HashGetAllAsync(key, flags));
			}

			public Task<RedisValue> HashGetAsync(RedisKey key, RedisValue hashField, CommandFlags flags = (CommandFlags)0)
			{
				//IL_0007: Unknown result type (might be due to invalid IL or missing references)
				//IL_0008: Unknown result type (might be due to invalid IL or missing references)
				//IL_000e: Unknown result type (might be due to invalid IL or missing references)
				//IL_000f: Unknown result type (might be due to invalid IL or missing references)
				//IL_0015: Unknown result type (might be due to invalid IL or missing references)
				//IL_0016: Unknown result type (might be due to invalid IL or missing references)
				return DoDecoratedOperation((IDatabase db) => ((IDatabaseAsync)db).HashGetAsync(key, hashField, flags));
			}

			public Task<RedisValue[]> HashGetAsync(RedisKey key, RedisValue[] hashFields, CommandFlags flags = (CommandFlags)0)
			{
				//IL_0007: Unknown result type (might be due to invalid IL or missing references)
				//IL_0008: Unknown result type (might be due to invalid IL or missing references)
				//IL_0015: Unknown result type (might be due to invalid IL or missing references)
				//IL_0016: Unknown result type (might be due to invalid IL or missing references)
				return DoDecoratedOperation((IDatabase db) => ((IDatabaseAsync)db).HashGetAsync(key, hashFields, flags));
			}

			public long HashIncrement(RedisKey key, RedisValue hashField, long value = 1L, CommandFlags flags = (CommandFlags)0)
			{
				//IL_0007: Unknown result type (might be due to invalid IL or missing references)
				//IL_0008: Unknown result type (might be due to invalid IL or missing references)
				//IL_000e: Unknown result type (might be due to invalid IL or missing references)
				//IL_000f: Unknown result type (might be due to invalid IL or missing references)
				//IL_001c: Unknown result type (might be due to invalid IL or missing references)
				//IL_001e: Unknown result type (might be due to invalid IL or missing references)
				return DoDecoratedOperation((IDatabase db) => db.HashIncrement(key, hashField, value, flags));
			}

			public double HashIncrement(RedisKey key, RedisValue hashField, double value, CommandFlags flags = (CommandFlags)0)
			{
				//IL_0007: Unknown result type (might be due to invalid IL or missing references)
				//IL_0008: Unknown result type (might be due to invalid IL or missing references)
				//IL_000e: Unknown result type (might be due to invalid IL or missing references)
				//IL_000f: Unknown result type (might be due to invalid IL or missing references)
				//IL_001c: Unknown result type (might be due to invalid IL or missing references)
				//IL_001e: Unknown result type (might be due to invalid IL or missing references)
				return DoDecoratedOperation((IDatabase db) => db.HashIncrement(key, hashField, value, flags));
			}

			public Task<long> HashIncrementAsync(RedisKey key, RedisValue hashField, long value = 1L, CommandFlags flags = (CommandFlags)0)
			{
				//IL_0007: Unknown result type (might be due to invalid IL or missing references)
				//IL_0008: Unknown result type (might be due to invalid IL or missing references)
				//IL_000e: Unknown result type (might be due to invalid IL or missing references)
				//IL_000f: Unknown result type (might be due to invalid IL or missing references)
				//IL_001c: Unknown result type (might be due to invalid IL or missing references)
				//IL_001e: Unknown result type (might be due to invalid IL or missing references)
				return DoDecoratedOperation((IDatabase db) => ((IDatabaseAsync)db).HashIncrementAsync(key, hashField, value, flags));
			}

			public Task<double> HashIncrementAsync(RedisKey key, RedisValue hashField, double value, CommandFlags flags = (CommandFlags)0)
			{
				//IL_0007: Unknown result type (might be due to invalid IL or missing references)
				//IL_0008: Unknown result type (might be due to invalid IL or missing references)
				//IL_000e: Unknown result type (might be due to invalid IL or missing references)
				//IL_000f: Unknown result type (might be due to invalid IL or missing references)
				//IL_001c: Unknown result type (might be due to invalid IL or missing references)
				//IL_001e: Unknown result type (might be due to invalid IL or missing references)
				return DoDecoratedOperation((IDatabase db) => ((IDatabaseAsync)db).HashIncrementAsync(key, hashField, value, flags));
			}

			public RedisValue[] HashKeys(RedisKey key, CommandFlags flags = (CommandFlags)0)
			{
				//IL_0007: Unknown result type (might be due to invalid IL or missing references)
				//IL_0008: Unknown result type (might be due to invalid IL or missing references)
				//IL_000e: Unknown result type (might be due to invalid IL or missing references)
				//IL_000f: Unknown result type (might be due to invalid IL or missing references)
				return DoDecoratedOperation((IDatabase db) => db.HashKeys(key, flags));
			}

			public Task<RedisValue[]> HashKeysAsync(RedisKey key, CommandFlags flags = (CommandFlags)0)
			{
				//IL_0007: Unknown result type (might be due to invalid IL or missing references)
				//IL_0008: Unknown result type (might be due to invalid IL or missing references)
				//IL_000e: Unknown result type (might be due to invalid IL or missing references)
				//IL_000f: Unknown result type (might be due to invalid IL or missing references)
				return DoDecoratedOperation((IDatabase db) => ((IDatabaseAsync)db).HashKeysAsync(key, flags));
			}

			public long HashLength(RedisKey key, CommandFlags flags = (CommandFlags)0)
			{
				//IL_0007: Unknown result type (might be due to invalid IL or missing references)
				//IL_0008: Unknown result type (might be due to invalid IL or missing references)
				//IL_000e: Unknown result type (might be due to invalid IL or missing references)
				//IL_000f: Unknown result type (might be due to invalid IL or missing references)
				return DoDecoratedOperation((IDatabase db) => db.HashLength(key, flags));
			}

			public Task<long> HashLengthAsync(RedisKey key, CommandFlags flags = (CommandFlags)0)
			{
				//IL_0007: Unknown result type (might be due to invalid IL or missing references)
				//IL_0008: Unknown result type (might be due to invalid IL or missing references)
				//IL_000e: Unknown result type (might be due to invalid IL or missing references)
				//IL_000f: Unknown result type (might be due to invalid IL or missing references)
				return DoDecoratedOperation((IDatabase db) => ((IDatabaseAsync)db).HashLengthAsync(key, flags));
			}

			public IEnumerable<HashEntry> HashScan(RedisKey key, RedisValue pattern, int pageSize, CommandFlags flags)
			{
				//IL_0007: Unknown result type (might be due to invalid IL or missing references)
				//IL_0008: Unknown result type (might be due to invalid IL or missing references)
				//IL_000e: Unknown result type (might be due to invalid IL or missing references)
				//IL_000f: Unknown result type (might be due to invalid IL or missing references)
				//IL_001c: Unknown result type (might be due to invalid IL or missing references)
				//IL_001e: Unknown result type (might be due to invalid IL or missing references)
				return DoDecoratedOperation((IDatabase db) => db.HashScan(key, pattern, pageSize, flags));
			}

			public IEnumerable<HashEntry> HashScan(RedisKey key, RedisValue pattern = default(RedisValue), int pageSize = 10, long cursor = 0L, int pageOffset = 0, CommandFlags flags = (CommandFlags)0)
			{
				//IL_0007: Unknown result type (might be due to invalid IL or missing references)
				//IL_0008: Unknown result type (might be due to invalid IL or missing references)
				//IL_000e: Unknown result type (might be due to invalid IL or missing references)
				//IL_000f: Unknown result type (might be due to invalid IL or missing references)
				//IL_002c: Unknown result type (might be due to invalid IL or missing references)
				//IL_002e: Unknown result type (might be due to invalid IL or missing references)
				return DoDecoratedOperation((IDatabase db) => db.HashScan(key, pattern, pageSize, cursor, pageOffset, flags));
			}

			public void HashSet(RedisKey key, HashEntry[] hashFields, CommandFlags flags = (CommandFlags)0)
			{
				//IL_0007: Unknown result type (might be due to invalid IL or missing references)
				//IL_0008: Unknown result type (might be due to invalid IL or missing references)
				//IL_0015: Unknown result type (might be due to invalid IL or missing references)
				//IL_0016: Unknown result type (might be due to invalid IL or missing references)
				DoDecoratedOperation(delegate(IDatabase db)
				{
					//IL_0002: Unknown result type (might be due to invalid IL or missing references)
					//IL_000e: Unknown result type (might be due to invalid IL or missing references)
					db.HashSet(key, hashFields, flags);
				});
			}

			public bool HashSet(RedisKey key, RedisValue hashField, RedisValue value, When when = (When)0, CommandFlags flags = (CommandFlags)0)
			{
				//IL_0007: Unknown result type (might be due to invalid IL or missing references)
				//IL_0008: Unknown result type (might be due to invalid IL or missing references)
				//IL_000e: Unknown result type (might be due to invalid IL or missing references)
				//IL_000f: Unknown result type (might be due to invalid IL or missing references)
				//IL_0015: Unknown result type (might be due to invalid IL or missing references)
				//IL_0016: Unknown result type (might be due to invalid IL or missing references)
				//IL_001c: Unknown result type (might be due to invalid IL or missing references)
				//IL_001e: Unknown result type (might be due to invalid IL or missing references)
				//IL_0024: Unknown result type (might be due to invalid IL or missing references)
				//IL_0026: Unknown result type (might be due to invalid IL or missing references)
				return DoDecoratedOperation((IDatabase db) => db.HashSet(key, hashField, value, when, flags));
			}

			public Task HashSetAsync(RedisKey key, HashEntry[] hashFields, CommandFlags flags = (CommandFlags)0)
			{
				//IL_0007: Unknown result type (might be due to invalid IL or missing references)
				//IL_0008: Unknown result type (might be due to invalid IL or missing references)
				//IL_0015: Unknown result type (might be due to invalid IL or missing references)
				//IL_0016: Unknown result type (might be due to invalid IL or missing references)
				return DoDecoratedOperation((IDatabase db) => ((IDatabaseAsync)db).HashSetAsync(key, hashFields, flags));
			}

			public Task<bool> HashSetAsync(RedisKey key, RedisValue hashField, RedisValue value, When when = (When)0, CommandFlags flags = (CommandFlags)0)
			{
				//IL_0007: Unknown result type (might be due to invalid IL or missing references)
				//IL_0008: Unknown result type (might be due to invalid IL or missing references)
				//IL_000e: Unknown result type (might be due to invalid IL or missing references)
				//IL_000f: Unknown result type (might be due to invalid IL or missing references)
				//IL_0015: Unknown result type (might be due to invalid IL or missing references)
				//IL_0016: Unknown result type (might be due to invalid IL or missing references)
				//IL_001c: Unknown result type (might be due to invalid IL or missing references)
				//IL_001e: Unknown result type (might be due to invalid IL or missing references)
				//IL_0024: Unknown result type (might be due to invalid IL or missing references)
				//IL_0026: Unknown result type (might be due to invalid IL or missing references)
				return DoDecoratedOperation((IDatabase db) => ((IDatabaseAsync)db).HashSetAsync(key, hashField, value, when, flags));
			}

			public RedisValue[] HashValues(RedisKey key, CommandFlags flags = (CommandFlags)0)
			{
				//IL_0007: Unknown result type (might be due to invalid IL or missing references)
				//IL_0008: Unknown result type (might be due to invalid IL or missing references)
				//IL_000e: Unknown result type (might be due to invalid IL or missing references)
				//IL_000f: Unknown result type (might be due to invalid IL or missing references)
				return DoDecoratedOperation((IDatabase db) => db.HashValues(key, flags));
			}

			public Task<RedisValue[]> HashValuesAsync(RedisKey key, CommandFlags flags = (CommandFlags)0)
			{
				//IL_0007: Unknown result type (might be due to invalid IL or missing references)
				//IL_0008: Unknown result type (might be due to invalid IL or missing references)
				//IL_000e: Unknown result type (might be due to invalid IL or missing references)
				//IL_000f: Unknown result type (might be due to invalid IL or missing references)
				return DoDecoratedOperation((IDatabase db) => ((IDatabaseAsync)db).HashValuesAsync(key, flags));
			}

			public bool HyperLogLogAdd(RedisKey key, RedisValue value, CommandFlags flags = (CommandFlags)0)
			{
				//IL_0007: Unknown result type (might be due to invalid IL or missing references)
				//IL_0008: Unknown result type (might be due to invalid IL or missing references)
				//IL_000e: Unknown result type (might be due to invalid IL or missing references)
				//IL_000f: Unknown result type (might be due to invalid IL or missing references)
				//IL_0015: Unknown result type (might be due to invalid IL or missing references)
				//IL_0016: Unknown result type (might be due to invalid IL or missing references)
				return DoDecoratedOperation((IDatabase db) => db.HyperLogLogAdd(key, value, flags));
			}

			public bool HyperLogLogAdd(RedisKey key, RedisValue[] values, CommandFlags flags = (CommandFlags)0)
			{
				//IL_0007: Unknown result type (might be due to invalid IL or missing references)
				//IL_0008: Unknown result type (might be due to invalid IL or missing references)
				//IL_0015: Unknown result type (might be due to invalid IL or missing references)
				//IL_0016: Unknown result type (might be due to invalid IL or missing references)
				return DoDecoratedOperation((IDatabase db) => db.HyperLogLogAdd(key, values, flags));
			}

			public Task<bool> HyperLogLogAddAsync(RedisKey key, RedisValue value, CommandFlags flags = (CommandFlags)0)
			{
				//IL_0007: Unknown result type (might be due to invalid IL or missing references)
				//IL_0008: Unknown result type (might be due to invalid IL or missing references)
				//IL_000e: Unknown result type (might be due to invalid IL or missing references)
				//IL_000f: Unknown result type (might be due to invalid IL or missing references)
				//IL_0015: Unknown result type (might be due to invalid IL or missing references)
				//IL_0016: Unknown result type (might be due to invalid IL or missing references)
				return DoDecoratedOperation((IDatabase db) => ((IDatabaseAsync)db).HyperLogLogAddAsync(key, value, flags));
			}

			public Task<bool> HyperLogLogAddAsync(RedisKey key, RedisValue[] values, CommandFlags flags = (CommandFlags)0)
			{
				//IL_0007: Unknown result type (might be due to invalid IL or missing references)
				//IL_0008: Unknown result type (might be due to invalid IL or missing references)
				//IL_0015: Unknown result type (might be due to invalid IL or missing references)
				//IL_0016: Unknown result type (might be due to invalid IL or missing references)
				return DoDecoratedOperation((IDatabase db) => ((IDatabaseAsync)db).HyperLogLogAddAsync(key, values, flags));
			}

			public long HyperLogLogLength(RedisKey key, CommandFlags flags = (CommandFlags)0)
			{
				//IL_0007: Unknown result type (might be due to invalid IL or missing references)
				//IL_0008: Unknown result type (might be due to invalid IL or missing references)
				//IL_000e: Unknown result type (might be due to invalid IL or missing references)
				//IL_000f: Unknown result type (might be due to invalid IL or missing references)
				return DoDecoratedOperation((IDatabase db) => db.HyperLogLogLength(key, flags));
			}

			public long HyperLogLogLength(RedisKey[] keys, CommandFlags flags = (CommandFlags)0)
			{
				//IL_000e: Unknown result type (might be due to invalid IL or missing references)
				//IL_000f: Unknown result type (might be due to invalid IL or missing references)
				return DoDecoratedOperation((IDatabase db) => db.HyperLogLogLength(keys, flags));
			}

			public Task<long> HyperLogLogLengthAsync(RedisKey key, CommandFlags flags = (CommandFlags)0)
			{
				//IL_0007: Unknown result type (might be due to invalid IL or missing references)
				//IL_0008: Unknown result type (might be due to invalid IL or missing references)
				//IL_000e: Unknown result type (might be due to invalid IL or missing references)
				//IL_000f: Unknown result type (might be due to invalid IL or missing references)
				return DoDecoratedOperation((IDatabase db) => ((IDatabaseAsync)db).HyperLogLogLengthAsync(key, flags));
			}

			public Task<long> HyperLogLogLengthAsync(RedisKey[] keys, CommandFlags flags = (CommandFlags)0)
			{
				//IL_000e: Unknown result type (might be due to invalid IL or missing references)
				//IL_000f: Unknown result type (might be due to invalid IL or missing references)
				return DoDecoratedOperation((IDatabase db) => ((IDatabaseAsync)db).HyperLogLogLengthAsync(keys, flags));
			}

			public void HyperLogLogMerge(RedisKey destination, RedisKey first, RedisKey second, CommandFlags flags = (CommandFlags)0)
			{
				//IL_0007: Unknown result type (might be due to invalid IL or missing references)
				//IL_0008: Unknown result type (might be due to invalid IL or missing references)
				//IL_000e: Unknown result type (might be due to invalid IL or missing references)
				//IL_000f: Unknown result type (might be due to invalid IL or missing references)
				//IL_0015: Unknown result type (might be due to invalid IL or missing references)
				//IL_0016: Unknown result type (might be due to invalid IL or missing references)
				//IL_001c: Unknown result type (might be due to invalid IL or missing references)
				//IL_001e: Unknown result type (might be due to invalid IL or missing references)
				DoDecoratedOperation(delegate(IDatabase db)
				{
					//IL_0002: Unknown result type (might be due to invalid IL or missing references)
					//IL_0008: Unknown result type (might be due to invalid IL or missing references)
					//IL_000e: Unknown result type (might be due to invalid IL or missing references)
					//IL_0014: Unknown result type (might be due to invalid IL or missing references)
					db.HyperLogLogMerge(destination, first, second, flags);
				});
			}

			public void HyperLogLogMerge(RedisKey destination, RedisKey[] sourceKeys, CommandFlags flags = (CommandFlags)0)
			{
				//IL_0007: Unknown result type (might be due to invalid IL or missing references)
				//IL_0008: Unknown result type (might be due to invalid IL or missing references)
				//IL_0015: Unknown result type (might be due to invalid IL or missing references)
				//IL_0016: Unknown result type (might be due to invalid IL or missing references)
				DoDecoratedOperation(delegate(IDatabase db)
				{
					//IL_0002: Unknown result type (might be due to invalid IL or missing references)
					//IL_000e: Unknown result type (might be due to invalid IL or missing references)
					db.HyperLogLogMerge(destination, sourceKeys, flags);
				});
			}

			public Task HyperLogLogMergeAsync(RedisKey destination, RedisKey first, RedisKey second, CommandFlags flags = (CommandFlags)0)
			{
				//IL_0007: Unknown result type (might be due to invalid IL or missing references)
				//IL_0008: Unknown result type (might be due to invalid IL or missing references)
				//IL_000e: Unknown result type (might be due to invalid IL or missing references)
				//IL_000f: Unknown result type (might be due to invalid IL or missing references)
				//IL_0015: Unknown result type (might be due to invalid IL or missing references)
				//IL_0016: Unknown result type (might be due to invalid IL or missing references)
				//IL_001c: Unknown result type (might be due to invalid IL or missing references)
				//IL_001e: Unknown result type (might be due to invalid IL or missing references)
				return DoDecoratedOperation((IDatabase db) => ((IDatabaseAsync)db).HyperLogLogMergeAsync(destination, first, second, flags));
			}

			public Task HyperLogLogMergeAsync(RedisKey destination, RedisKey[] sourceKeys, CommandFlags flags = (CommandFlags)0)
			{
				//IL_0007: Unknown result type (might be due to invalid IL or missing references)
				//IL_0008: Unknown result type (might be due to invalid IL or missing references)
				//IL_0015: Unknown result type (might be due to invalid IL or missing references)
				//IL_0016: Unknown result type (might be due to invalid IL or missing references)
				return DoDecoratedOperation((IDatabase db) => ((IDatabaseAsync)db).HyperLogLogMergeAsync(destination, sourceKeys, flags));
			}

			public EndPoint IdentifyEndpoint(RedisKey key = default(RedisKey), CommandFlags flags = (CommandFlags)0)
			{
				//IL_0007: Unknown result type (might be due to invalid IL or missing references)
				//IL_0008: Unknown result type (might be due to invalid IL or missing references)
				//IL_000e: Unknown result type (might be due to invalid IL or missing references)
				//IL_000f: Unknown result type (might be due to invalid IL or missing references)
				return DoDecoratedOperation((IDatabase db) => db.IdentifyEndpoint(key, flags));
			}

			public Task<EndPoint> IdentifyEndpointAsync(RedisKey key = default(RedisKey), CommandFlags flags = (CommandFlags)0)
			{
				//IL_0007: Unknown result type (might be due to invalid IL or missing references)
				//IL_0008: Unknown result type (might be due to invalid IL or missing references)
				//IL_000e: Unknown result type (might be due to invalid IL or missing references)
				//IL_000f: Unknown result type (might be due to invalid IL or missing references)
				return DoDecoratedOperation((IDatabase db) => ((IDatabaseAsync)db).IdentifyEndpointAsync(key, flags));
			}

			public bool IsConnected(RedisKey key, CommandFlags flags = (CommandFlags)0)
			{
				//IL_0007: Unknown result type (might be due to invalid IL or missing references)
				//IL_0008: Unknown result type (might be due to invalid IL or missing references)
				//IL_000e: Unknown result type (might be due to invalid IL or missing references)
				//IL_000f: Unknown result type (might be due to invalid IL or missing references)
				return DoDecoratedOperation((IDatabase db) => ((IDatabaseAsync)db).IsConnected(key, flags));
			}

			public bool KeyDelete(RedisKey key, CommandFlags flags = (CommandFlags)0)
			{
				//IL_0007: Unknown result type (might be due to invalid IL or missing references)
				//IL_0008: Unknown result type (might be due to invalid IL or missing references)
				//IL_000e: Unknown result type (might be due to invalid IL or missing references)
				//IL_000f: Unknown result type (might be due to invalid IL or missing references)
				return DoDecoratedOperation((IDatabase db) => db.KeyDelete(key, flags));
			}

			public long KeyDelete(RedisKey[] keys, CommandFlags flags = (CommandFlags)0)
			{
				//IL_000e: Unknown result type (might be due to invalid IL or missing references)
				//IL_000f: Unknown result type (might be due to invalid IL or missing references)
				return DoDecoratedOperation((IDatabase db) => db.KeyDelete(keys, flags));
			}

			public Task<bool> KeyDeleteAsync(RedisKey key, CommandFlags flags = (CommandFlags)0)
			{
				//IL_0007: Unknown result type (might be due to invalid IL or missing references)
				//IL_0008: Unknown result type (might be due to invalid IL or missing references)
				//IL_000e: Unknown result type (might be due to invalid IL or missing references)
				//IL_000f: Unknown result type (might be due to invalid IL or missing references)
				return DoDecoratedOperation((IDatabase db) => ((IDatabaseAsync)db).KeyDeleteAsync(key, flags));
			}

			public Task<long> KeyDeleteAsync(RedisKey[] keys, CommandFlags flags = (CommandFlags)0)
			{
				//IL_000e: Unknown result type (might be due to invalid IL or missing references)
				//IL_000f: Unknown result type (might be due to invalid IL or missing references)
				return DoDecoratedOperation((IDatabase db) => ((IDatabaseAsync)db).KeyDeleteAsync(keys, flags));
			}

			public byte[] KeyDump(RedisKey key, CommandFlags flags = (CommandFlags)0)
			{
				//IL_0007: Unknown result type (might be due to invalid IL or missing references)
				//IL_0008: Unknown result type (might be due to invalid IL or missing references)
				//IL_000e: Unknown result type (might be due to invalid IL or missing references)
				//IL_000f: Unknown result type (might be due to invalid IL or missing references)
				return DoDecoratedOperation((IDatabase db) => db.KeyDump(key, flags));
			}

			public Task<byte[]> KeyDumpAsync(RedisKey key, CommandFlags flags = (CommandFlags)0)
			{
				//IL_0007: Unknown result type (might be due to invalid IL or missing references)
				//IL_0008: Unknown result type (might be due to invalid IL or missing references)
				//IL_000e: Unknown result type (might be due to invalid IL or missing references)
				//IL_000f: Unknown result type (might be due to invalid IL or missing references)
				return DoDecoratedOperation((IDatabase db) => ((IDatabaseAsync)db).KeyDumpAsync(key, flags));
			}

			public bool KeyExists(RedisKey key, CommandFlags flags = (CommandFlags)0)
			{
				//IL_0007: Unknown result type (might be due to invalid IL or missing references)
				//IL_0008: Unknown result type (might be due to invalid IL or missing references)
				//IL_000e: Unknown result type (might be due to invalid IL or missing references)
				//IL_000f: Unknown result type (might be due to invalid IL or missing references)
				return DoDecoratedOperation((IDatabase db) => db.KeyExists(key, flags));
			}

			public Task<bool> KeyExistsAsync(RedisKey key, CommandFlags flags = (CommandFlags)0)
			{
				//IL_0007: Unknown result type (might be due to invalid IL or missing references)
				//IL_0008: Unknown result type (might be due to invalid IL or missing references)
				//IL_000e: Unknown result type (might be due to invalid IL or missing references)
				//IL_000f: Unknown result type (might be due to invalid IL or missing references)
				return DoDecoratedOperation((IDatabase db) => ((IDatabaseAsync)db).KeyExistsAsync(key, flags));
			}

			public bool KeyExpire(RedisKey key, TimeSpan? expiry, CommandFlags flags = (CommandFlags)0)
			{
				//IL_0007: Unknown result type (might be due to invalid IL or missing references)
				//IL_0008: Unknown result type (might be due to invalid IL or missing references)
				//IL_0015: Unknown result type (might be due to invalid IL or missing references)
				//IL_0016: Unknown result type (might be due to invalid IL or missing references)
				return DoDecoratedOperation((IDatabase db) => db.KeyExpire(key, expiry, flags));
			}

			public bool KeyExpire(RedisKey key, DateTime? expiry, CommandFlags flags = (CommandFlags)0)
			{
				//IL_0007: Unknown result type (might be due to invalid IL or missing references)
				//IL_0008: Unknown result type (might be due to invalid IL or missing references)
				//IL_0015: Unknown result type (might be due to invalid IL or missing references)
				//IL_0016: Unknown result type (might be due to invalid IL or missing references)
				return DoDecoratedOperation((IDatabase db) => db.KeyExpire(key, expiry, flags));
			}

			public Task<bool> KeyExpireAsync(RedisKey key, TimeSpan? expiry, CommandFlags flags = (CommandFlags)0)
			{
				//IL_0007: Unknown result type (might be due to invalid IL or missing references)
				//IL_0008: Unknown result type (might be due to invalid IL or missing references)
				//IL_0015: Unknown result type (might be due to invalid IL or missing references)
				//IL_0016: Unknown result type (might be due to invalid IL or missing references)
				return DoDecoratedOperation((IDatabase db) => ((IDatabaseAsync)db).KeyExpireAsync(key, expiry, flags));
			}

			public Task<bool> KeyExpireAsync(RedisKey key, DateTime? expiry, CommandFlags flags = (CommandFlags)0)
			{
				//IL_0007: Unknown result type (might be due to invalid IL or missing references)
				//IL_0008: Unknown result type (might be due to invalid IL or missing references)
				//IL_0015: Unknown result type (might be due to invalid IL or missing references)
				//IL_0016: Unknown result type (might be due to invalid IL or missing references)
				return DoDecoratedOperation((IDatabase db) => ((IDatabaseAsync)db).KeyExpireAsync(key, expiry, flags));
			}

			public void KeyMigrate(RedisKey key, EndPoint toServer, int toDatabase = 0, int timeoutMilliseconds = 0, MigrateOptions migrateOptions = (MigrateOptions)0, CommandFlags flags = (CommandFlags)0)
			{
				//IL_0007: Unknown result type (might be due to invalid IL or missing references)
				//IL_0008: Unknown result type (might be due to invalid IL or missing references)
				//IL_0024: Unknown result type (might be due to invalid IL or missing references)
				//IL_0026: Unknown result type (might be due to invalid IL or missing references)
				//IL_002c: Unknown result type (might be due to invalid IL or missing references)
				//IL_002e: Unknown result type (might be due to invalid IL or missing references)
				DoDecoratedOperation(delegate(IDatabase db)
				{
					//IL_0002: Unknown result type (might be due to invalid IL or missing references)
					//IL_001a: Unknown result type (might be due to invalid IL or missing references)
					//IL_0020: Unknown result type (might be due to invalid IL or missing references)
					db.KeyMigrate(key, toServer, toDatabase, timeoutMilliseconds, migrateOptions, flags);
				});
			}

			public Task KeyMigrateAsync(RedisKey key, EndPoint toServer, int toDatabase = 0, int timeoutMilliseconds = 0, MigrateOptions migrateOptions = (MigrateOptions)0, CommandFlags flags = (CommandFlags)0)
			{
				//IL_0007: Unknown result type (might be due to invalid IL or missing references)
				//IL_0008: Unknown result type (might be due to invalid IL or missing references)
				//IL_0024: Unknown result type (might be due to invalid IL or missing references)
				//IL_0026: Unknown result type (might be due to invalid IL or missing references)
				//IL_002c: Unknown result type (might be due to invalid IL or missing references)
				//IL_002e: Unknown result type (might be due to invalid IL or missing references)
				return DoDecoratedOperation((IDatabase db) => ((IDatabaseAsync)db).KeyMigrateAsync(key, toServer, toDatabase, timeoutMilliseconds, migrateOptions, flags));
			}

			public bool KeyMove(RedisKey key, int database, CommandFlags flags = (CommandFlags)0)
			{
				//IL_0007: Unknown result type (might be due to invalid IL or missing references)
				//IL_0008: Unknown result type (might be due to invalid IL or missing references)
				//IL_0015: Unknown result type (might be due to invalid IL or missing references)
				//IL_0016: Unknown result type (might be due to invalid IL or missing references)
				return DoDecoratedOperation((IDatabase db) => db.KeyMove(key, database, flags));
			}

			public Task<bool> KeyMoveAsync(RedisKey key, int database, CommandFlags flags = (CommandFlags)0)
			{
				//IL_0007: Unknown result type (might be due to invalid IL or missing references)
				//IL_0008: Unknown result type (might be due to invalid IL or missing references)
				//IL_0015: Unknown result type (might be due to invalid IL or missing references)
				//IL_0016: Unknown result type (might be due to invalid IL or missing references)
				return DoDecoratedOperation((IDatabase db) => ((IDatabaseAsync)db).KeyMoveAsync(key, database, flags));
			}

			public bool KeyPersist(RedisKey key, CommandFlags flags = (CommandFlags)0)
			{
				//IL_0007: Unknown result type (might be due to invalid IL or missing references)
				//IL_0008: Unknown result type (might be due to invalid IL or missing references)
				//IL_000e: Unknown result type (might be due to invalid IL or missing references)
				//IL_000f: Unknown result type (might be due to invalid IL or missing references)
				return DoDecoratedOperation((IDatabase db) => db.KeyPersist(key, flags));
			}

			public Task<bool> KeyPersistAsync(RedisKey key, CommandFlags flags = (CommandFlags)0)
			{
				//IL_0007: Unknown result type (might be due to invalid IL or missing references)
				//IL_0008: Unknown result type (might be due to invalid IL or missing references)
				//IL_000e: Unknown result type (might be due to invalid IL or missing references)
				//IL_000f: Unknown result type (might be due to invalid IL or missing references)
				return DoDecoratedOperation((IDatabase db) => ((IDatabaseAsync)db).KeyPersistAsync(key, flags));
			}

			public RedisKey KeyRandom(CommandFlags flags = (CommandFlags)0)
			{
				//IL_0007: Unknown result type (might be due to invalid IL or missing references)
				//IL_0008: Unknown result type (might be due to invalid IL or missing references)
				//IL_001a: Unknown result type (might be due to invalid IL or missing references)
				return DoDecoratedOperation((IDatabase db) => db.KeyRandom(flags));
			}

			public Task<RedisKey> KeyRandomAsync(CommandFlags flags = (CommandFlags)0)
			{
				//IL_0007: Unknown result type (might be due to invalid IL or missing references)
				//IL_0008: Unknown result type (might be due to invalid IL or missing references)
				return DoDecoratedOperation((IDatabase db) => ((IDatabaseAsync)db).KeyRandomAsync(flags));
			}

			public bool KeyRename(RedisKey key, RedisKey newKey, When when = (When)0, CommandFlags flags = (CommandFlags)0)
			{
				//IL_0007: Unknown result type (might be due to invalid IL or missing references)
				//IL_0008: Unknown result type (might be due to invalid IL or missing references)
				//IL_000e: Unknown result type (might be due to invalid IL or missing references)
				//IL_000f: Unknown result type (might be due to invalid IL or missing references)
				//IL_0015: Unknown result type (might be due to invalid IL or missing references)
				//IL_0016: Unknown result type (might be due to invalid IL or missing references)
				//IL_001c: Unknown result type (might be due to invalid IL or missing references)
				//IL_001e: Unknown result type (might be due to invalid IL or missing references)
				return DoDecoratedOperation((IDatabase db) => db.KeyRename(key, newKey, when, flags));
			}

			public Task<bool> KeyRenameAsync(RedisKey key, RedisKey newKey, When when = (When)0, CommandFlags flags = (CommandFlags)0)
			{
				//IL_0007: Unknown result type (might be due to invalid IL or missing references)
				//IL_0008: Unknown result type (might be due to invalid IL or missing references)
				//IL_000e: Unknown result type (might be due to invalid IL or missing references)
				//IL_000f: Unknown result type (might be due to invalid IL or missing references)
				//IL_0015: Unknown result type (might be due to invalid IL or missing references)
				//IL_0016: Unknown result type (might be due to invalid IL or missing references)
				//IL_001c: Unknown result type (might be due to invalid IL or missing references)
				//IL_001e: Unknown result type (might be due to invalid IL or missing references)
				return DoDecoratedOperation((IDatabase db) => ((IDatabaseAsync)db).KeyRenameAsync(key, newKey, when, flags));
			}

			public void KeyRestore(RedisKey key, byte[] value, TimeSpan? expiry = null, CommandFlags flags = (CommandFlags)0)
			{
				//IL_0007: Unknown result type (might be due to invalid IL or missing references)
				//IL_0008: Unknown result type (might be due to invalid IL or missing references)
				//IL_001c: Unknown result type (might be due to invalid IL or missing references)
				//IL_001e: Unknown result type (might be due to invalid IL or missing references)
				DoDecoratedOperation(delegate(IDatabase db)
				{
					//IL_0002: Unknown result type (might be due to invalid IL or missing references)
					//IL_0014: Unknown result type (might be due to invalid IL or missing references)
					db.KeyRestore(key, value, expiry, flags);
				});
			}

			public Task KeyRestoreAsync(RedisKey key, byte[] value, TimeSpan? expiry = null, CommandFlags flags = (CommandFlags)0)
			{
				//IL_0007: Unknown result type (might be due to invalid IL or missing references)
				//IL_0008: Unknown result type (might be due to invalid IL or missing references)
				//IL_001c: Unknown result type (might be due to invalid IL or missing references)
				//IL_001e: Unknown result type (might be due to invalid IL or missing references)
				return DoDecoratedOperation((IDatabase db) => ((IDatabaseAsync)db).KeyRestoreAsync(key, value, expiry, flags));
			}

			public TimeSpan? KeyTimeToLive(RedisKey key, CommandFlags flags = (CommandFlags)0)
			{
				//IL_0007: Unknown result type (might be due to invalid IL or missing references)
				//IL_0008: Unknown result type (might be due to invalid IL or missing references)
				//IL_000e: Unknown result type (might be due to invalid IL or missing references)
				//IL_000f: Unknown result type (might be due to invalid IL or missing references)
				return DoDecoratedOperation((IDatabase db) => db.KeyTimeToLive(key, flags));
			}

			public Task<TimeSpan?> KeyTimeToLiveAsync(RedisKey key, CommandFlags flags = (CommandFlags)0)
			{
				//IL_0007: Unknown result type (might be due to invalid IL or missing references)
				//IL_0008: Unknown result type (might be due to invalid IL or missing references)
				//IL_000e: Unknown result type (might be due to invalid IL or missing references)
				//IL_000f: Unknown result type (might be due to invalid IL or missing references)
				return DoDecoratedOperation((IDatabase db) => ((IDatabaseAsync)db).KeyTimeToLiveAsync(key, flags));
			}

			public RedisType KeyType(RedisKey key, CommandFlags flags = (CommandFlags)0)
			{
				//IL_0007: Unknown result type (might be due to invalid IL or missing references)
				//IL_0008: Unknown result type (might be due to invalid IL or missing references)
				//IL_000e: Unknown result type (might be due to invalid IL or missing references)
				//IL_000f: Unknown result type (might be due to invalid IL or missing references)
				//IL_0021: Unknown result type (might be due to invalid IL or missing references)
				return DoDecoratedOperation((IDatabase db) => db.KeyType(key, flags));
			}

			public Task<RedisType> KeyTypeAsync(RedisKey key, CommandFlags flags = (CommandFlags)0)
			{
				//IL_0007: Unknown result type (might be due to invalid IL or missing references)
				//IL_0008: Unknown result type (might be due to invalid IL or missing references)
				//IL_000e: Unknown result type (might be due to invalid IL or missing references)
				//IL_000f: Unknown result type (might be due to invalid IL or missing references)
				return DoDecoratedOperation((IDatabase db) => ((IDatabaseAsync)db).KeyTypeAsync(key, flags));
			}

			public RedisValue ListGetByIndex(RedisKey key, long index, CommandFlags flags = (CommandFlags)0)
			{
				//IL_0007: Unknown result type (might be due to invalid IL or missing references)
				//IL_0008: Unknown result type (might be due to invalid IL or missing references)
				//IL_0015: Unknown result type (might be due to invalid IL or missing references)
				//IL_0016: Unknown result type (might be due to invalid IL or missing references)
				//IL_0028: Unknown result type (might be due to invalid IL or missing references)
				return DoDecoratedOperation((IDatabase db) => db.ListGetByIndex(key, index, flags));
			}

			public Task<RedisValue> ListGetByIndexAsync(RedisKey key, long index, CommandFlags flags = (CommandFlags)0)
			{
				//IL_0007: Unknown result type (might be due to invalid IL or missing references)
				//IL_0008: Unknown result type (might be due to invalid IL or missing references)
				//IL_0015: Unknown result type (might be due to invalid IL or missing references)
				//IL_0016: Unknown result type (might be due to invalid IL or missing references)
				return DoDecoratedOperation((IDatabase db) => ((IDatabaseAsync)db).ListGetByIndexAsync(key, index, flags));
			}

			public long ListInsertAfter(RedisKey key, RedisValue pivot, RedisValue value, CommandFlags flags = (CommandFlags)0)
			{
				//IL_0007: Unknown result type (might be due to invalid IL or missing references)
				//IL_0008: Unknown result type (might be due to invalid IL or missing references)
				//IL_000e: Unknown result type (might be due to invalid IL or missing references)
				//IL_000f: Unknown result type (might be due to invalid IL or missing references)
				//IL_0015: Unknown result type (might be due to invalid IL or missing references)
				//IL_0016: Unknown result type (might be due to invalid IL or missing references)
				//IL_001c: Unknown result type (might be due to invalid IL or missing references)
				//IL_001e: Unknown result type (might be due to invalid IL or missing references)
				return DoDecoratedOperation((IDatabase db) => db.ListInsertAfter(key, pivot, value, flags));
			}

			public Task<long> ListInsertAfterAsync(RedisKey key, RedisValue pivot, RedisValue value, CommandFlags flags = (CommandFlags)0)
			{
				//IL_0007: Unknown result type (might be due to invalid IL or missing references)
				//IL_0008: Unknown result type (might be due to invalid IL or missing references)
				//IL_000e: Unknown result type (might be due to invalid IL or missing references)
				//IL_000f: Unknown result type (might be due to invalid IL or missing references)
				//IL_0015: Unknown result type (might be due to invalid IL or missing references)
				//IL_0016: Unknown result type (might be due to invalid IL or missing references)
				//IL_001c: Unknown result type (might be due to invalid IL or missing references)
				//IL_001e: Unknown result type (might be due to invalid IL or missing references)
				return DoDecoratedOperation((IDatabase db) => ((IDatabaseAsync)db).ListInsertAfterAsync(key, pivot, value, flags));
			}

			public long ListInsertBefore(RedisKey key, RedisValue pivot, RedisValue value, CommandFlags flags = (CommandFlags)0)
			{
				//IL_0007: Unknown result type (might be due to invalid IL or missing references)
				//IL_0008: Unknown result type (might be due to invalid IL or missing references)
				//IL_000e: Unknown result type (might be due to invalid IL or missing references)
				//IL_000f: Unknown result type (might be due to invalid IL or missing references)
				//IL_0015: Unknown result type (might be due to invalid IL or missing references)
				//IL_0016: Unknown result type (might be due to invalid IL or missing references)
				//IL_001c: Unknown result type (might be due to invalid IL or missing references)
				//IL_001e: Unknown result type (might be due to invalid IL or missing references)
				return DoDecoratedOperation((IDatabase db) => db.ListInsertBefore(key, pivot, value, flags));
			}

			public Task<long> ListInsertBeforeAsync(RedisKey key, RedisValue pivot, RedisValue value, CommandFlags flags = (CommandFlags)0)
			{
				//IL_0007: Unknown result type (might be due to invalid IL or missing references)
				//IL_0008: Unknown result type (might be due to invalid IL or missing references)
				//IL_000e: Unknown result type (might be due to invalid IL or missing references)
				//IL_000f: Unknown result type (might be due to invalid IL or missing references)
				//IL_0015: Unknown result type (might be due to invalid IL or missing references)
				//IL_0016: Unknown result type (might be due to invalid IL or missing references)
				//IL_001c: Unknown result type (might be due to invalid IL or missing references)
				//IL_001e: Unknown result type (might be due to invalid IL or missing references)
				return DoDecoratedOperation((IDatabase db) => ((IDatabaseAsync)db).ListInsertBeforeAsync(key, pivot, value, flags));
			}

			public RedisValue ListLeftPop(RedisKey key, CommandFlags flags = (CommandFlags)0)
			{
				//IL_0007: Unknown result type (might be due to invalid IL or missing references)
				//IL_0008: Unknown result type (might be due to invalid IL or missing references)
				//IL_000e: Unknown result type (might be due to invalid IL or missing references)
				//IL_000f: Unknown result type (might be due to invalid IL or missing references)
				//IL_0021: Unknown result type (might be due to invalid IL or missing references)
				return DoDecoratedOperation((IDatabase db) => db.ListLeftPop(key, flags));
			}

			public Task<RedisValue> ListLeftPopAsync(RedisKey key, CommandFlags flags = (CommandFlags)0)
			{
				//IL_0007: Unknown result type (might be due to invalid IL or missing references)
				//IL_0008: Unknown result type (might be due to invalid IL or missing references)
				//IL_000e: Unknown result type (might be due to invalid IL or missing references)
				//IL_000f: Unknown result type (might be due to invalid IL or missing references)
				return DoDecoratedOperation((IDatabase db) => ((IDatabaseAsync)db).ListLeftPopAsync(key, flags));
			}

			public long ListLeftPush(RedisKey key, RedisValue value, When when = (When)0, CommandFlags flags = (CommandFlags)0)
			{
				//IL_0007: Unknown result type (might be due to invalid IL or missing references)
				//IL_0008: Unknown result type (might be due to invalid IL or missing references)
				//IL_000e: Unknown result type (might be due to invalid IL or missing references)
				//IL_000f: Unknown result type (might be due to invalid IL or missing references)
				//IL_0015: Unknown result type (might be due to invalid IL or missing references)
				//IL_0016: Unknown result type (might be due to invalid IL or missing references)
				//IL_001c: Unknown result type (might be due to invalid IL or missing references)
				//IL_001e: Unknown result type (might be due to invalid IL or missing references)
				return DoDecoratedOperation((IDatabase db) => db.ListLeftPush(key, value, when, flags));
			}

			public long ListLeftPush(RedisKey key, RedisValue[] values, CommandFlags flags = (CommandFlags)0)
			{
				//IL_0007: Unknown result type (might be due to invalid IL or missing references)
				//IL_0008: Unknown result type (might be due to invalid IL or missing references)
				//IL_0015: Unknown result type (might be due to invalid IL or missing references)
				//IL_0016: Unknown result type (might be due to invalid IL or missing references)
				return DoDecoratedOperation((IDatabase db) => db.ListLeftPush(key, values, flags));
			}

			public Task<long> ListLeftPushAsync(RedisKey key, RedisValue value, When when = (When)0, CommandFlags flags = (CommandFlags)0)
			{
				//IL_0007: Unknown result type (might be due to invalid IL or missing references)
				//IL_0008: Unknown result type (might be due to invalid IL or missing references)
				//IL_000e: Unknown result type (might be due to invalid IL or missing references)
				//IL_000f: Unknown result type (might be due to invalid IL or missing references)
				//IL_0015: Unknown result type (might be due to invalid IL or missing references)
				//IL_0016: Unknown result type (might be due to invalid IL or missing references)
				//IL_001c: Unknown result type (might be due to invalid IL or missing references)
				//IL_001e: Unknown result type (might be due to invalid IL or missing references)
				return DoDecoratedOperation((IDatabase db) => ((IDatabaseAsync)db).ListLeftPushAsync(key, value, when, flags));
			}

			public Task<long> ListLeftPushAsync(RedisKey key, RedisValue[] values, CommandFlags flags = (CommandFlags)0)
			{
				//IL_0007: Unknown result type (might be due to invalid IL or missing references)
				//IL_0008: Unknown result type (might be due to invalid IL or missing references)
				//IL_0015: Unknown result type (might be due to invalid IL or missing references)
				//IL_0016: Unknown result type (might be due to invalid IL or missing references)
				return DoDecoratedOperation((IDatabase db) => ((IDatabaseAsync)db).ListLeftPushAsync(key, values, flags));
			}

			public long ListLength(RedisKey key, CommandFlags flags = (CommandFlags)0)
			{
				//IL_0007: Unknown result type (might be due to invalid IL or missing references)
				//IL_0008: Unknown result type (might be due to invalid IL or missing references)
				//IL_000e: Unknown result type (might be due to invalid IL or missing references)
				//IL_000f: Unknown result type (might be due to invalid IL or missing references)
				return DoDecoratedOperation((IDatabase db) => db.ListLength(key, flags));
			}

			public Task<long> ListLengthAsync(RedisKey key, CommandFlags flags = (CommandFlags)0)
			{
				//IL_0007: Unknown result type (might be due to invalid IL or missing references)
				//IL_0008: Unknown result type (might be due to invalid IL or missing references)
				//IL_000e: Unknown result type (might be due to invalid IL or missing references)
				//IL_000f: Unknown result type (might be due to invalid IL or missing references)
				return DoDecoratedOperation((IDatabase db) => ((IDatabaseAsync)db).ListLengthAsync(key, flags));
			}

			public RedisValue[] ListRange(RedisKey key, long start = 0L, long stop = -1L, CommandFlags flags = (CommandFlags)0)
			{
				//IL_0007: Unknown result type (might be due to invalid IL or missing references)
				//IL_0008: Unknown result type (might be due to invalid IL or missing references)
				//IL_001c: Unknown result type (might be due to invalid IL or missing references)
				//IL_001e: Unknown result type (might be due to invalid IL or missing references)
				return DoDecoratedOperation((IDatabase db) => db.ListRange(key, start, stop, flags));
			}

			public Task<RedisValue[]> ListRangeAsync(RedisKey key, long start = 0L, long stop = -1L, CommandFlags flags = (CommandFlags)0)
			{
				//IL_0007: Unknown result type (might be due to invalid IL or missing references)
				//IL_0008: Unknown result type (might be due to invalid IL or missing references)
				//IL_001c: Unknown result type (might be due to invalid IL or missing references)
				//IL_001e: Unknown result type (might be due to invalid IL or missing references)
				return DoDecoratedOperation((IDatabase db) => ((IDatabaseAsync)db).ListRangeAsync(key, start, stop, flags));
			}

			public long ListRemove(RedisKey key, RedisValue value, long count = 0L, CommandFlags flags = (CommandFlags)0)
			{
				//IL_0007: Unknown result type (might be due to invalid IL or missing references)
				//IL_0008: Unknown result type (might be due to invalid IL or missing references)
				//IL_000e: Unknown result type (might be due to invalid IL or missing references)
				//IL_000f: Unknown result type (might be due to invalid IL or missing references)
				//IL_001c: Unknown result type (might be due to invalid IL or missing references)
				//IL_001e: Unknown result type (might be due to invalid IL or missing references)
				return DoDecoratedOperation((IDatabase db) => db.ListRemove(key, value, count, flags));
			}

			public Task<long> ListRemoveAsync(RedisKey key, RedisValue value, long count = 0L, CommandFlags flags = (CommandFlags)0)
			{
				//IL_0007: Unknown result type (might be due to invalid IL or missing references)
				//IL_0008: Unknown result type (might be due to invalid IL or missing references)
				//IL_000e: Unknown result type (might be due to invalid IL or missing references)
				//IL_000f: Unknown result type (might be due to invalid IL or missing references)
				//IL_001c: Unknown result type (might be due to invalid IL or missing references)
				//IL_001e: Unknown result type (might be due to invalid IL or missing references)
				return DoDecoratedOperation((IDatabase db) => ((IDatabaseAsync)db).ListRemoveAsync(key, value, count, flags));
			}

			public RedisValue ListRightPop(RedisKey key, CommandFlags flags = (CommandFlags)0)
			{
				//IL_0007: Unknown result type (might be due to invalid IL or missing references)
				//IL_0008: Unknown result type (might be due to invalid IL or missing references)
				//IL_000e: Unknown result type (might be due to invalid IL or missing references)
				//IL_000f: Unknown result type (might be due to invalid IL or missing references)
				//IL_0021: Unknown result type (might be due to invalid IL or missing references)
				return DoDecoratedOperation((IDatabase db) => db.ListRightPop(key, flags));
			}

			public Task<RedisValue> ListRightPopAsync(RedisKey key, CommandFlags flags = (CommandFlags)0)
			{
				//IL_0007: Unknown result type (might be due to invalid IL or missing references)
				//IL_0008: Unknown result type (might be due to invalid IL or missing references)
				//IL_000e: Unknown result type (might be due to invalid IL or missing references)
				//IL_000f: Unknown result type (might be due to invalid IL or missing references)
				return DoDecoratedOperation((IDatabase db) => ((IDatabaseAsync)db).ListRightPopAsync(key, flags));
			}

			public RedisValue ListRightPopLeftPush(RedisKey source, RedisKey destination, CommandFlags flags = (CommandFlags)0)
			{
				//IL_0007: Unknown result type (might be due to invalid IL or missing references)
				//IL_0008: Unknown result type (might be due to invalid IL or missing references)
				//IL_000e: Unknown result type (might be due to invalid IL or missing references)
				//IL_000f: Unknown result type (might be due to invalid IL or missing references)
				//IL_0015: Unknown result type (might be due to invalid IL or missing references)
				//IL_0016: Unknown result type (might be due to invalid IL or missing references)
				//IL_0028: Unknown result type (might be due to invalid IL or missing references)
				return DoDecoratedOperation((IDatabase db) => db.ListRightPopLeftPush(source, destination, flags));
			}

			public Task<RedisValue> ListRightPopLeftPushAsync(RedisKey source, RedisKey destination, CommandFlags flags = (CommandFlags)0)
			{
				//IL_0007: Unknown result type (might be due to invalid IL or missing references)
				//IL_0008: Unknown result type (might be due to invalid IL or missing references)
				//IL_000e: Unknown result type (might be due to invalid IL or missing references)
				//IL_000f: Unknown result type (might be due to invalid IL or missing references)
				//IL_0015: Unknown result type (might be due to invalid IL or missing references)
				//IL_0016: Unknown result type (might be due to invalid IL or missing references)
				return DoDecoratedOperation((IDatabase db) => ((IDatabaseAsync)db).ListRightPopLeftPushAsync(source, destination, flags));
			}

			public long ListRightPush(RedisKey key, RedisValue value, When when = (When)0, CommandFlags flags = (CommandFlags)0)
			{
				//IL_0007: Unknown result type (might be due to invalid IL or missing references)
				//IL_0008: Unknown result type (might be due to invalid IL or missing references)
				//IL_000e: Unknown result type (might be due to invalid IL or missing references)
				//IL_000f: Unknown result type (might be due to invalid IL or missing references)
				//IL_0015: Unknown result type (might be due to invalid IL or missing references)
				//IL_0016: Unknown result type (might be due to invalid IL or missing references)
				//IL_001c: Unknown result type (might be due to invalid IL or missing references)
				//IL_001e: Unknown result type (might be due to invalid IL or missing references)
				return DoDecoratedOperation((IDatabase db) => db.ListRightPush(key, value, when, flags));
			}

			public long ListRightPush(RedisKey key, RedisValue[] values, CommandFlags flags = (CommandFlags)0)
			{
				//IL_0007: Unknown result type (might be due to invalid IL or missing references)
				//IL_0008: Unknown result type (might be due to invalid IL or missing references)
				//IL_0015: Unknown result type (might be due to invalid IL or missing references)
				//IL_0016: Unknown result type (might be due to invalid IL or missing references)
				return DoDecoratedOperation((IDatabase db) => db.ListRightPush(key, values, flags));
			}

			public Task<long> ListRightPushAsync(RedisKey key, RedisValue value, When when = (When)0, CommandFlags flags = (CommandFlags)0)
			{
				//IL_0007: Unknown result type (might be due to invalid IL or missing references)
				//IL_0008: Unknown result type (might be due to invalid IL or missing references)
				//IL_000e: Unknown result type (might be due to invalid IL or missing references)
				//IL_000f: Unknown result type (might be due to invalid IL or missing references)
				//IL_0015: Unknown result type (might be due to invalid IL or missing references)
				//IL_0016: Unknown result type (might be due to invalid IL or missing references)
				//IL_001c: Unknown result type (might be due to invalid IL or missing references)
				//IL_001e: Unknown result type (might be due to invalid IL or missing references)
				return DoDecoratedOperation((IDatabase db) => ((IDatabaseAsync)db).ListRightPushAsync(key, value, when, flags));
			}

			public Task<long> ListRightPushAsync(RedisKey key, RedisValue[] values, CommandFlags flags = (CommandFlags)0)
			{
				//IL_0007: Unknown result type (might be due to invalid IL or missing references)
				//IL_0008: Unknown result type (might be due to invalid IL or missing references)
				//IL_0015: Unknown result type (might be due to invalid IL or missing references)
				//IL_0016: Unknown result type (might be due to invalid IL or missing references)
				return DoDecoratedOperation((IDatabase db) => ((IDatabaseAsync)db).ListRightPushAsync(key, values, flags));
			}

			public void ListSetByIndex(RedisKey key, long index, RedisValue value, CommandFlags flags = (CommandFlags)0)
			{
				//IL_0007: Unknown result type (might be due to invalid IL or missing references)
				//IL_0008: Unknown result type (might be due to invalid IL or missing references)
				//IL_0015: Unknown result type (might be due to invalid IL or missing references)
				//IL_0016: Unknown result type (might be due to invalid IL or missing references)
				//IL_001c: Unknown result type (might be due to invalid IL or missing references)
				//IL_001e: Unknown result type (might be due to invalid IL or missing references)
				DoDecoratedOperation(delegate(IDatabase db)
				{
					//IL_0002: Unknown result type (might be due to invalid IL or missing references)
					//IL_000e: Unknown result type (might be due to invalid IL or missing references)
					//IL_0014: Unknown result type (might be due to invalid IL or missing references)
					db.ListSetByIndex(key, index, value, flags);
				});
			}

			public Task ListSetByIndexAsync(RedisKey key, long index, RedisValue value, CommandFlags flags = (CommandFlags)0)
			{
				//IL_0007: Unknown result type (might be due to invalid IL or missing references)
				//IL_0008: Unknown result type (might be due to invalid IL or missing references)
				//IL_0015: Unknown result type (might be due to invalid IL or missing references)
				//IL_0016: Unknown result type (might be due to invalid IL or missing references)
				//IL_001c: Unknown result type (might be due to invalid IL or missing references)
				//IL_001e: Unknown result type (might be due to invalid IL or missing references)
				return DoDecoratedOperation((IDatabase db) => ((IDatabaseAsync)db).ListSetByIndexAsync(key, index, value, flags));
			}

			public void ListTrim(RedisKey key, long start, long stop, CommandFlags flags = (CommandFlags)0)
			{
				//IL_0007: Unknown result type (might be due to invalid IL or missing references)
				//IL_0008: Unknown result type (might be due to invalid IL or missing references)
				//IL_001c: Unknown result type (might be due to invalid IL or missing references)
				//IL_001e: Unknown result type (might be due to invalid IL or missing references)
				DoDecoratedOperation(delegate(IDatabase db)
				{
					//IL_0002: Unknown result type (might be due to invalid IL or missing references)
					//IL_0014: Unknown result type (might be due to invalid IL or missing references)
					db.ListTrim(key, start, stop, flags);
				});
			}

			public Task ListTrimAsync(RedisKey key, long start, long stop, CommandFlags flags = (CommandFlags)0)
			{
				//IL_0007: Unknown result type (might be due to invalid IL or missing references)
				//IL_0008: Unknown result type (might be due to invalid IL or missing references)
				//IL_001c: Unknown result type (might be due to invalid IL or missing references)
				//IL_001e: Unknown result type (might be due to invalid IL or missing references)
				return DoDecoratedOperation((IDatabase db) => ((IDatabaseAsync)db).ListTrimAsync(key, start, stop, flags));
			}

			public bool LockExtend(RedisKey key, RedisValue value, TimeSpan expiry, CommandFlags flags = (CommandFlags)0)
			{
				//IL_0007: Unknown result type (might be due to invalid IL or missing references)
				//IL_0008: Unknown result type (might be due to invalid IL or missing references)
				//IL_000e: Unknown result type (might be due to invalid IL or missing references)
				//IL_000f: Unknown result type (might be due to invalid IL or missing references)
				//IL_001c: Unknown result type (might be due to invalid IL or missing references)
				//IL_001e: Unknown result type (might be due to invalid IL or missing references)
				return DoDecoratedOperation((IDatabase db) => db.LockExtend(key, value, expiry, flags));
			}

			public Task<bool> LockExtendAsync(RedisKey key, RedisValue value, TimeSpan expiry, CommandFlags flags = (CommandFlags)0)
			{
				//IL_0007: Unknown result type (might be due to invalid IL or missing references)
				//IL_0008: Unknown result type (might be due to invalid IL or missing references)
				//IL_000e: Unknown result type (might be due to invalid IL or missing references)
				//IL_000f: Unknown result type (might be due to invalid IL or missing references)
				//IL_001c: Unknown result type (might be due to invalid IL or missing references)
				//IL_001e: Unknown result type (might be due to invalid IL or missing references)
				return DoDecoratedOperation((IDatabase db) => ((IDatabaseAsync)db).LockExtendAsync(key, value, expiry, flags));
			}

			public RedisValue LockQuery(RedisKey key, CommandFlags flags = (CommandFlags)0)
			{
				//IL_0007: Unknown result type (might be due to invalid IL or missing references)
				//IL_0008: Unknown result type (might be due to invalid IL or missing references)
				//IL_000e: Unknown result type (might be due to invalid IL or missing references)
				//IL_000f: Unknown result type (might be due to invalid IL or missing references)
				//IL_0021: Unknown result type (might be due to invalid IL or missing references)
				return DoDecoratedOperation((IDatabase db) => db.LockQuery(key, flags));
			}

			public Task<RedisValue> LockQueryAsync(RedisKey key, CommandFlags flags = (CommandFlags)0)
			{
				//IL_0007: Unknown result type (might be due to invalid IL or missing references)
				//IL_0008: Unknown result type (might be due to invalid IL or missing references)
				//IL_000e: Unknown result type (might be due to invalid IL or missing references)
				//IL_000f: Unknown result type (might be due to invalid IL or missing references)
				return DoDecoratedOperation((IDatabase db) => ((IDatabaseAsync)db).LockQueryAsync(key, flags));
			}

			public bool LockRelease(RedisKey key, RedisValue value, CommandFlags flags = (CommandFlags)0)
			{
				//IL_0007: Unknown result type (might be due to invalid IL or missing references)
				//IL_0008: Unknown result type (might be due to invalid IL or missing references)
				//IL_000e: Unknown result type (might be due to invalid IL or missing references)
				//IL_000f: Unknown result type (might be due to invalid IL or missing references)
				//IL_0015: Unknown result type (might be due to invalid IL or missing references)
				//IL_0016: Unknown result type (might be due to invalid IL or missing references)
				return DoDecoratedOperation((IDatabase db) => db.LockRelease(key, value, flags));
			}

			public Task<bool> LockReleaseAsync(RedisKey key, RedisValue value, CommandFlags flags = (CommandFlags)0)
			{
				//IL_0007: Unknown result type (might be due to invalid IL or missing references)
				//IL_0008: Unknown result type (might be due to invalid IL or missing references)
				//IL_000e: Unknown result type (might be due to invalid IL or missing references)
				//IL_000f: Unknown result type (might be due to invalid IL or missing references)
				//IL_0015: Unknown result type (might be due to invalid IL or missing references)
				//IL_0016: Unknown result type (might be due to invalid IL or missing references)
				return DoDecoratedOperation((IDatabase db) => ((IDatabaseAsync)db).LockReleaseAsync(key, value, flags));
			}

			public bool LockTake(RedisKey key, RedisValue value, TimeSpan expiry, CommandFlags flags = (CommandFlags)0)
			{
				//IL_0007: Unknown result type (might be due to invalid IL or missing references)
				//IL_0008: Unknown result type (might be due to invalid IL or missing references)
				//IL_000e: Unknown result type (might be due to invalid IL or missing references)
				//IL_000f: Unknown result type (might be due to invalid IL or missing references)
				//IL_001c: Unknown result type (might be due to invalid IL or missing references)
				//IL_001e: Unknown result type (might be due to invalid IL or missing references)
				return DoDecoratedOperation((IDatabase db) => db.LockTake(key, value, expiry, flags));
			}

			public Task<bool> LockTakeAsync(RedisKey key, RedisValue value, TimeSpan expiry, CommandFlags flags = (CommandFlags)0)
			{
				//IL_0007: Unknown result type (might be due to invalid IL or missing references)
				//IL_0008: Unknown result type (might be due to invalid IL or missing references)
				//IL_000e: Unknown result type (might be due to invalid IL or missing references)
				//IL_000f: Unknown result type (might be due to invalid IL or missing references)
				//IL_001c: Unknown result type (might be due to invalid IL or missing references)
				//IL_001e: Unknown result type (might be due to invalid IL or missing references)
				return DoDecoratedOperation((IDatabase db) => ((IDatabaseAsync)db).LockTakeAsync(key, value, expiry, flags));
			}

			public TimeSpan Ping(CommandFlags flags = (CommandFlags)0)
			{
				//IL_0007: Unknown result type (might be due to invalid IL or missing references)
				//IL_0008: Unknown result type (might be due to invalid IL or missing references)
				return DoDecoratedOperation((IDatabase db) => ((IRedis)db).Ping(flags));
			}

			public Task<TimeSpan> PingAsync(CommandFlags flags = (CommandFlags)0)
			{
				//IL_0007: Unknown result type (might be due to invalid IL or missing references)
				//IL_0008: Unknown result type (might be due to invalid IL or missing references)
				return DoDecoratedOperation((IDatabase db) => ((IRedisAsync)db).PingAsync(flags));
			}

			public long Publish(RedisChannel channel, RedisValue message, CommandFlags flags = (CommandFlags)0)
			{
				//IL_0007: Unknown result type (might be due to invalid IL or missing references)
				//IL_0008: Unknown result type (might be due to invalid IL or missing references)
				//IL_000e: Unknown result type (might be due to invalid IL or missing references)
				//IL_000f: Unknown result type (might be due to invalid IL or missing references)
				//IL_0015: Unknown result type (might be due to invalid IL or missing references)
				//IL_0016: Unknown result type (might be due to invalid IL or missing references)
				return DoDecoratedOperation((IDatabase db) => db.Publish(channel, message, flags));
			}

			public Task<long> PublishAsync(RedisChannel channel, RedisValue message, CommandFlags flags = (CommandFlags)0)
			{
				//IL_0007: Unknown result type (might be due to invalid IL or missing references)
				//IL_0008: Unknown result type (might be due to invalid IL or missing references)
				//IL_000e: Unknown result type (might be due to invalid IL or missing references)
				//IL_000f: Unknown result type (might be due to invalid IL or missing references)
				//IL_0015: Unknown result type (might be due to invalid IL or missing references)
				//IL_0016: Unknown result type (might be due to invalid IL or missing references)
				return DoDecoratedOperation((IDatabase db) => ((IDatabaseAsync)db).PublishAsync(channel, message, flags));
			}

			public RedisResult ScriptEvaluate(string script, RedisKey[] keys = null, RedisValue[] values = null, CommandFlags flags = (CommandFlags)0)
			{
				//IL_001c: Unknown result type (might be due to invalid IL or missing references)
				//IL_001e: Unknown result type (might be due to invalid IL or missing references)
				return DoDecoratedOperation((IDatabase db) => db.ScriptEvaluate(script, keys, values, flags));
			}

			public RedisResult ScriptEvaluate(byte[] hash, RedisKey[] keys = null, RedisValue[] values = null, CommandFlags flags = (CommandFlags)0)
			{
				//IL_001c: Unknown result type (might be due to invalid IL or missing references)
				//IL_001e: Unknown result type (might be due to invalid IL or missing references)
				return DoDecoratedOperation((IDatabase db) => db.ScriptEvaluate(hash, keys, values, flags));
			}

			public RedisResult ScriptEvaluate(LuaScript script, object parameters = null, CommandFlags flags = (CommandFlags)0)
			{
				//IL_0015: Unknown result type (might be due to invalid IL or missing references)
				//IL_0016: Unknown result type (might be due to invalid IL or missing references)
				return DoDecoratedOperation((IDatabase db) => db.ScriptEvaluate(script, parameters, flags));
			}

			public RedisResult ScriptEvaluate(LoadedLuaScript script, object parameters = null, CommandFlags flags = (CommandFlags)0)
			{
				//IL_0015: Unknown result type (might be due to invalid IL or missing references)
				//IL_0016: Unknown result type (might be due to invalid IL or missing references)
				return DoDecoratedOperation((IDatabase db) => db.ScriptEvaluate(script, parameters, flags));
			}

			public Task<RedisResult> ScriptEvaluateAsync(string script, RedisKey[] keys = null, RedisValue[] values = null, CommandFlags flags = (CommandFlags)0)
			{
				//IL_001c: Unknown result type (might be due to invalid IL or missing references)
				//IL_001e: Unknown result type (might be due to invalid IL or missing references)
				return DoDecoratedOperation((IDatabase db) => ((IDatabaseAsync)db).ScriptEvaluateAsync(script, keys, values, flags));
			}

			public Task<RedisResult> ScriptEvaluateAsync(byte[] hash, RedisKey[] keys = null, RedisValue[] values = null, CommandFlags flags = (CommandFlags)0)
			{
				//IL_001c: Unknown result type (might be due to invalid IL or missing references)
				//IL_001e: Unknown result type (might be due to invalid IL or missing references)
				return DoDecoratedOperation((IDatabase db) => ((IDatabaseAsync)db).ScriptEvaluateAsync(hash, keys, values, flags));
			}

			public Task<RedisResult> ScriptEvaluateAsync(LuaScript script, object parameters = null, CommandFlags flags = (CommandFlags)0)
			{
				//IL_0015: Unknown result type (might be due to invalid IL or missing references)
				//IL_0016: Unknown result type (might be due to invalid IL or missing references)
				return DoDecoratedOperation((IDatabase db) => ((IDatabaseAsync)db).ScriptEvaluateAsync(script, parameters, flags));
			}

			public Task<RedisResult> ScriptEvaluateAsync(LoadedLuaScript script, object parameters = null, CommandFlags flags = (CommandFlags)0)
			{
				//IL_0015: Unknown result type (might be due to invalid IL or missing references)
				//IL_0016: Unknown result type (might be due to invalid IL or missing references)
				return DoDecoratedOperation((IDatabase db) => ((IDatabaseAsync)db).ScriptEvaluateAsync(script, parameters, flags));
			}

			public bool SetAdd(RedisKey key, RedisValue value, CommandFlags flags = (CommandFlags)0)
			{
				//IL_0007: Unknown result type (might be due to invalid IL or missing references)
				//IL_0008: Unknown result type (might be due to invalid IL or missing references)
				//IL_000e: Unknown result type (might be due to invalid IL or missing references)
				//IL_000f: Unknown result type (might be due to invalid IL or missing references)
				//IL_0015: Unknown result type (might be due to invalid IL or missing references)
				//IL_0016: Unknown result type (might be due to invalid IL or missing references)
				return DoDecoratedOperation((IDatabase db) => db.SetAdd(key, value, flags));
			}

			public long SetAdd(RedisKey key, RedisValue[] values, CommandFlags flags = (CommandFlags)0)
			{
				//IL_0007: Unknown result type (might be due to invalid IL or missing references)
				//IL_0008: Unknown result type (might be due to invalid IL or missing references)
				//IL_0015: Unknown result type (might be due to invalid IL or missing references)
				//IL_0016: Unknown result type (might be due to invalid IL or missing references)
				return DoDecoratedOperation((IDatabase db) => db.SetAdd(key, values, flags));
			}

			public Task<bool> SetAddAsync(RedisKey key, RedisValue value, CommandFlags flags = (CommandFlags)0)
			{
				//IL_0007: Unknown result type (might be due to invalid IL or missing references)
				//IL_0008: Unknown result type (might be due to invalid IL or missing references)
				//IL_000e: Unknown result type (might be due to invalid IL or missing references)
				//IL_000f: Unknown result type (might be due to invalid IL or missing references)
				//IL_0015: Unknown result type (might be due to invalid IL or missing references)
				//IL_0016: Unknown result type (might be due to invalid IL or missing references)
				return DoDecoratedOperation((IDatabase db) => ((IDatabaseAsync)db).SetAddAsync(key, value, flags));
			}

			public Task<long> SetAddAsync(RedisKey key, RedisValue[] values, CommandFlags flags = (CommandFlags)0)
			{
				//IL_0007: Unknown result type (might be due to invalid IL or missing references)
				//IL_0008: Unknown result type (might be due to invalid IL or missing references)
				//IL_0015: Unknown result type (might be due to invalid IL or missing references)
				//IL_0016: Unknown result type (might be due to invalid IL or missing references)
				return DoDecoratedOperation((IDatabase db) => ((IDatabaseAsync)db).SetAddAsync(key, values, flags));
			}

			public RedisValue[] SetCombine(SetOperation operation, RedisKey first, RedisKey second, CommandFlags flags = (CommandFlags)0)
			{
				//IL_0007: Unknown result type (might be due to invalid IL or missing references)
				//IL_0008: Unknown result type (might be due to invalid IL or missing references)
				//IL_000e: Unknown result type (might be due to invalid IL or missing references)
				//IL_000f: Unknown result type (might be due to invalid IL or missing references)
				//IL_0015: Unknown result type (might be due to invalid IL or missing references)
				//IL_0016: Unknown result type (might be due to invalid IL or missing references)
				//IL_001c: Unknown result type (might be due to invalid IL or missing references)
				//IL_001e: Unknown result type (might be due to invalid IL or missing references)
				return DoDecoratedOperation((IDatabase db) => db.SetCombine(operation, first, second, flags));
			}

			public RedisValue[] SetCombine(SetOperation operation, RedisKey[] keys, CommandFlags flags = (CommandFlags)0)
			{
				//IL_0007: Unknown result type (might be due to invalid IL or missing references)
				//IL_0008: Unknown result type (might be due to invalid IL or missing references)
				//IL_0015: Unknown result type (might be due to invalid IL or missing references)
				//IL_0016: Unknown result type (might be due to invalid IL or missing references)
				return DoDecoratedOperation((IDatabase db) => db.SetCombine(operation, keys, flags));
			}

			public long SetCombineAndStore(SetOperation operation, RedisKey destination, RedisKey first, RedisKey second, CommandFlags flags = (CommandFlags)0)
			{
				//IL_0007: Unknown result type (might be due to invalid IL or missing references)
				//IL_0008: Unknown result type (might be due to invalid IL or missing references)
				//IL_000e: Unknown result type (might be due to invalid IL or missing references)
				//IL_000f: Unknown result type (might be due to invalid IL or missing references)
				//IL_0015: Unknown result type (might be due to invalid IL or missing references)
				//IL_0016: Unknown result type (might be due to invalid IL or missing references)
				//IL_001c: Unknown result type (might be due to invalid IL or missing references)
				//IL_001e: Unknown result type (might be due to invalid IL or missing references)
				//IL_0024: Unknown result type (might be due to invalid IL or missing references)
				//IL_0026: Unknown result type (might be due to invalid IL or missing references)
				return DoDecoratedOperation((IDatabase db) => db.SetCombineAndStore(operation, destination, first, second, flags));
			}

			public long SetCombineAndStore(SetOperation operation, RedisKey destination, RedisKey[] keys, CommandFlags flags = (CommandFlags)0)
			{
				//IL_0007: Unknown result type (might be due to invalid IL or missing references)
				//IL_0008: Unknown result type (might be due to invalid IL or missing references)
				//IL_000e: Unknown result type (might be due to invalid IL or missing references)
				//IL_000f: Unknown result type (might be due to invalid IL or missing references)
				//IL_001c: Unknown result type (might be due to invalid IL or missing references)
				//IL_001e: Unknown result type (might be due to invalid IL or missing references)
				return DoDecoratedOperation((IDatabase db) => db.SetCombineAndStore(operation, destination, keys, flags));
			}

			public Task<long> SetCombineAndStoreAsync(SetOperation operation, RedisKey destination, RedisKey first, RedisKey second, CommandFlags flags = (CommandFlags)0)
			{
				//IL_0007: Unknown result type (might be due to invalid IL or missing references)
				//IL_0008: Unknown result type (might be due to invalid IL or missing references)
				//IL_000e: Unknown result type (might be due to invalid IL or missing references)
				//IL_000f: Unknown result type (might be due to invalid IL or missing references)
				//IL_0015: Unknown result type (might be due to invalid IL or missing references)
				//IL_0016: Unknown result type (might be due to invalid IL or missing references)
				//IL_001c: Unknown result type (might be due to invalid IL or missing references)
				//IL_001e: Unknown result type (might be due to invalid IL or missing references)
				//IL_0024: Unknown result type (might be due to invalid IL or missing references)
				//IL_0026: Unknown result type (might be due to invalid IL or missing references)
				return DoDecoratedOperation((IDatabase db) => ((IDatabaseAsync)db).SetCombineAndStoreAsync(operation, destination, first, second, flags));
			}

			public Task<long> SetCombineAndStoreAsync(SetOperation operation, RedisKey destination, RedisKey[] keys, CommandFlags flags = (CommandFlags)0)
			{
				//IL_0007: Unknown result type (might be due to invalid IL or missing references)
				//IL_0008: Unknown result type (might be due to invalid IL or missing references)
				//IL_000e: Unknown result type (might be due to invalid IL or missing references)
				//IL_000f: Unknown result type (might be due to invalid IL or missing references)
				//IL_001c: Unknown result type (might be due to invalid IL or missing references)
				//IL_001e: Unknown result type (might be due to invalid IL or missing references)
				return DoDecoratedOperation((IDatabase db) => ((IDatabaseAsync)db).SetCombineAndStoreAsync(operation, destination, keys, flags));
			}

			public Task<RedisValue[]> SetCombineAsync(SetOperation operation, RedisKey first, RedisKey second, CommandFlags flags = (CommandFlags)0)
			{
				//IL_0007: Unknown result type (might be due to invalid IL or missing references)
				//IL_0008: Unknown result type (might be due to invalid IL or missing references)
				//IL_000e: Unknown result type (might be due to invalid IL or missing references)
				//IL_000f: Unknown result type (might be due to invalid IL or missing references)
				//IL_0015: Unknown result type (might be due to invalid IL or missing references)
				//IL_0016: Unknown result type (might be due to invalid IL or missing references)
				//IL_001c: Unknown result type (might be due to invalid IL or missing references)
				//IL_001e: Unknown result type (might be due to invalid IL or missing references)
				return DoDecoratedOperation((IDatabase db) => ((IDatabaseAsync)db).SetCombineAsync(operation, first, second, flags));
			}

			public Task<RedisValue[]> SetCombineAsync(SetOperation operation, RedisKey[] keys, CommandFlags flags = (CommandFlags)0)
			{
				//IL_0007: Unknown result type (might be due to invalid IL or missing references)
				//IL_0008: Unknown result type (might be due to invalid IL or missing references)
				//IL_0015: Unknown result type (might be due to invalid IL or missing references)
				//IL_0016: Unknown result type (might be due to invalid IL or missing references)
				return DoDecoratedOperation((IDatabase db) => ((IDatabaseAsync)db).SetCombineAsync(operation, keys, flags));
			}

			public bool SetContains(RedisKey key, RedisValue value, CommandFlags flags = (CommandFlags)0)
			{
				//IL_0007: Unknown result type (might be due to invalid IL or missing references)
				//IL_0008: Unknown result type (might be due to invalid IL or missing references)
				//IL_000e: Unknown result type (might be due to invalid IL or missing references)
				//IL_000f: Unknown result type (might be due to invalid IL or missing references)
				//IL_0015: Unknown result type (might be due to invalid IL or missing references)
				//IL_0016: Unknown result type (might be due to invalid IL or missing references)
				return DoDecoratedOperation((IDatabase db) => db.SetContains(key, value, flags));
			}

			public Task<bool> SetContainsAsync(RedisKey key, RedisValue value, CommandFlags flags = (CommandFlags)0)
			{
				//IL_0007: Unknown result type (might be due to invalid IL or missing references)
				//IL_0008: Unknown result type (might be due to invalid IL or missing references)
				//IL_000e: Unknown result type (might be due to invalid IL or missing references)
				//IL_000f: Unknown result type (might be due to invalid IL or missing references)
				//IL_0015: Unknown result type (might be due to invalid IL or missing references)
				//IL_0016: Unknown result type (might be due to invalid IL or missing references)
				return DoDecoratedOperation((IDatabase db) => ((IDatabaseAsync)db).SetContainsAsync(key, value, flags));
			}

			public long SetLength(RedisKey key, CommandFlags flags = (CommandFlags)0)
			{
				//IL_0007: Unknown result type (might be due to invalid IL or missing references)
				//IL_0008: Unknown result type (might be due to invalid IL or missing references)
				//IL_000e: Unknown result type (might be due to invalid IL or missing references)
				//IL_000f: Unknown result type (might be due to invalid IL or missing references)
				return DoDecoratedOperation((IDatabase db) => db.SetLength(key, flags));
			}

			public Task<long> SetLengthAsync(RedisKey key, CommandFlags flags = (CommandFlags)0)
			{
				//IL_0007: Unknown result type (might be due to invalid IL or missing references)
				//IL_0008: Unknown result type (might be due to invalid IL or missing references)
				//IL_000e: Unknown result type (might be due to invalid IL or missing references)
				//IL_000f: Unknown result type (might be due to invalid IL or missing references)
				return DoDecoratedOperation((IDatabase db) => ((IDatabaseAsync)db).SetLengthAsync(key, flags));
			}

			public RedisValue[] SetMembers(RedisKey key, CommandFlags flags = (CommandFlags)0)
			{
				//IL_0007: Unknown result type (might be due to invalid IL or missing references)
				//IL_0008: Unknown result type (might be due to invalid IL or missing references)
				//IL_000e: Unknown result type (might be due to invalid IL or missing references)
				//IL_000f: Unknown result type (might be due to invalid IL or missing references)
				return DoDecoratedOperation((IDatabase db) => db.SetMembers(key, flags));
			}

			public Task<RedisValue[]> SetMembersAsync(RedisKey key, CommandFlags flags = (CommandFlags)0)
			{
				//IL_0007: Unknown result type (might be due to invalid IL or missing references)
				//IL_0008: Unknown result type (might be due to invalid IL or missing references)
				//IL_000e: Unknown result type (might be due to invalid IL or missing references)
				//IL_000f: Unknown result type (might be due to invalid IL or missing references)
				return DoDecoratedOperation((IDatabase db) => ((IDatabaseAsync)db).SetMembersAsync(key, flags));
			}

			public bool SetMove(RedisKey source, RedisKey destination, RedisValue value, CommandFlags flags = (CommandFlags)0)
			{
				//IL_0007: Unknown result type (might be due to invalid IL or missing references)
				//IL_0008: Unknown result type (might be due to invalid IL or missing references)
				//IL_000e: Unknown result type (might be due to invalid IL or missing references)
				//IL_000f: Unknown result type (might be due to invalid IL or missing references)
				//IL_0015: Unknown result type (might be due to invalid IL or missing references)
				//IL_0016: Unknown result type (might be due to invalid IL or missing references)
				//IL_001c: Unknown result type (might be due to invalid IL or missing references)
				//IL_001e: Unknown result type (might be due to invalid IL or missing references)
				return DoDecoratedOperation((IDatabase db) => db.SetMove(source, destination, value, flags));
			}

			public Task<bool> SetMoveAsync(RedisKey source, RedisKey destination, RedisValue value, CommandFlags flags = (CommandFlags)0)
			{
				//IL_0007: Unknown result type (might be due to invalid IL or missing references)
				//IL_0008: Unknown result type (might be due to invalid IL or missing references)
				//IL_000e: Unknown result type (might be due to invalid IL or missing references)
				//IL_000f: Unknown result type (might be due to invalid IL or missing references)
				//IL_0015: Unknown result type (might be due to invalid IL or missing references)
				//IL_0016: Unknown result type (might be due to invalid IL or missing references)
				//IL_001c: Unknown result type (might be due to invalid IL or missing references)
				//IL_001e: Unknown result type (might be due to invalid IL or missing references)
				return DoDecoratedOperation((IDatabase db) => ((IDatabaseAsync)db).SetMoveAsync(source, destination, value, flags));
			}

			public RedisValue SetPop(RedisKey key, CommandFlags flags = (CommandFlags)0)
			{
				//IL_0007: Unknown result type (might be due to invalid IL or missing references)
				//IL_0008: Unknown result type (might be due to invalid IL or missing references)
				//IL_000e: Unknown result type (might be due to invalid IL or missing references)
				//IL_000f: Unknown result type (might be due to invalid IL or missing references)
				//IL_0021: Unknown result type (might be due to invalid IL or missing references)
				return DoDecoratedOperation((IDatabase db) => db.SetPop(key, flags));
			}

			public Task<RedisValue> SetPopAsync(RedisKey key, CommandFlags flags = (CommandFlags)0)
			{
				//IL_0007: Unknown result type (might be due to invalid IL or missing references)
				//IL_0008: Unknown result type (might be due to invalid IL or missing references)
				//IL_000e: Unknown result type (might be due to invalid IL or missing references)
				//IL_000f: Unknown result type (might be due to invalid IL or missing references)
				return DoDecoratedOperation((IDatabase db) => ((IDatabaseAsync)db).SetPopAsync(key, flags));
			}

			public RedisValue SetRandomMember(RedisKey key, CommandFlags flags = (CommandFlags)0)
			{
				//IL_0007: Unknown result type (might be due to invalid IL or missing references)
				//IL_0008: Unknown result type (might be due to invalid IL or missing references)
				//IL_000e: Unknown result type (might be due to invalid IL or missing references)
				//IL_000f: Unknown result type (might be due to invalid IL or missing references)
				//IL_0021: Unknown result type (might be due to invalid IL or missing references)
				return DoDecoratedOperation((IDatabase db) => db.SetRandomMember(key, flags));
			}

			public Task<RedisValue> SetRandomMemberAsync(RedisKey key, CommandFlags flags = (CommandFlags)0)
			{
				//IL_0007: Unknown result type (might be due to invalid IL or missing references)
				//IL_0008: Unknown result type (might be due to invalid IL or missing references)
				//IL_000e: Unknown result type (might be due to invalid IL or missing references)
				//IL_000f: Unknown result type (might be due to invalid IL or missing references)
				return DoDecoratedOperation((IDatabase db) => ((IDatabaseAsync)db).SetRandomMemberAsync(key, flags));
			}

			public RedisValue[] SetRandomMembers(RedisKey key, long count, CommandFlags flags = (CommandFlags)0)
			{
				//IL_0007: Unknown result type (might be due to invalid IL or missing references)
				//IL_0008: Unknown result type (might be due to invalid IL or missing references)
				//IL_0015: Unknown result type (might be due to invalid IL or missing references)
				//IL_0016: Unknown result type (might be due to invalid IL or missing references)
				return DoDecoratedOperation((IDatabase db) => db.SetRandomMembers(key, count, flags));
			}

			public Task<RedisValue[]> SetRandomMembersAsync(RedisKey key, long count, CommandFlags flags = (CommandFlags)0)
			{
				//IL_0007: Unknown result type (might be due to invalid IL or missing references)
				//IL_0008: Unknown result type (might be due to invalid IL or missing references)
				//IL_0015: Unknown result type (might be due to invalid IL or missing references)
				//IL_0016: Unknown result type (might be due to invalid IL or missing references)
				return DoDecoratedOperation((IDatabase db) => ((IDatabaseAsync)db).SetRandomMembersAsync(key, count, flags));
			}

			public bool SetRemove(RedisKey key, RedisValue value, CommandFlags flags = (CommandFlags)0)
			{
				//IL_0007: Unknown result type (might be due to invalid IL or missing references)
				//IL_0008: Unknown result type (might be due to invalid IL or missing references)
				//IL_000e: Unknown result type (might be due to invalid IL or missing references)
				//IL_000f: Unknown result type (might be due to invalid IL or missing references)
				//IL_0015: Unknown result type (might be due to invalid IL or missing references)
				//IL_0016: Unknown result type (might be due to invalid IL or missing references)
				return DoDecoratedOperation((IDatabase db) => db.SetRemove(key, value, flags));
			}

			public long SetRemove(RedisKey key, RedisValue[] values, CommandFlags flags = (CommandFlags)0)
			{
				//IL_0007: Unknown result type (might be due to invalid IL or missing references)
				//IL_0008: Unknown result type (might be due to invalid IL or missing references)
				//IL_0015: Unknown result type (might be due to invalid IL or missing references)
				//IL_0016: Unknown result type (might be due to invalid IL or missing references)
				return DoDecoratedOperation((IDatabase db) => db.SetRemove(key, values, flags));
			}

			public Task<bool> SetRemoveAsync(RedisKey key, RedisValue value, CommandFlags flags = (CommandFlags)0)
			{
				//IL_0007: Unknown result type (might be due to invalid IL or missing references)
				//IL_0008: Unknown result type (might be due to invalid IL or missing references)
				//IL_000e: Unknown result type (might be due to invalid IL or missing references)
				//IL_000f: Unknown result type (might be due to invalid IL or missing references)
				//IL_0015: Unknown result type (might be due to invalid IL or missing references)
				//IL_0016: Unknown result type (might be due to invalid IL or missing references)
				return DoDecoratedOperation((IDatabase db) => ((IDatabaseAsync)db).SetRemoveAsync(key, value, flags));
			}

			public Task<long> SetRemoveAsync(RedisKey key, RedisValue[] values, CommandFlags flags = (CommandFlags)0)
			{
				//IL_0007: Unknown result type (might be due to invalid IL or missing references)
				//IL_0008: Unknown result type (might be due to invalid IL or missing references)
				//IL_0015: Unknown result type (might be due to invalid IL or missing references)
				//IL_0016: Unknown result type (might be due to invalid IL or missing references)
				return DoDecoratedOperation((IDatabase db) => ((IDatabaseAsync)db).SetRemoveAsync(key, values, flags));
			}

			public IEnumerable<RedisValue> SetScan(RedisKey key, RedisValue pattern, int pageSize, CommandFlags flags)
			{
				//IL_0007: Unknown result type (might be due to invalid IL or missing references)
				//IL_0008: Unknown result type (might be due to invalid IL or missing references)
				//IL_000e: Unknown result type (might be due to invalid IL or missing references)
				//IL_000f: Unknown result type (might be due to invalid IL or missing references)
				//IL_001c: Unknown result type (might be due to invalid IL or missing references)
				//IL_001e: Unknown result type (might be due to invalid IL or missing references)
				return DoDecoratedOperation((IDatabase db) => db.SetScan(key, pattern, pageSize, flags));
			}

			public IEnumerable<RedisValue> SetScan(RedisKey key, RedisValue pattern = default(RedisValue), int pageSize = 10, long cursor = 0L, int pageOffset = 0, CommandFlags flags = (CommandFlags)0)
			{
				//IL_0007: Unknown result type (might be due to invalid IL or missing references)
				//IL_0008: Unknown result type (might be due to invalid IL or missing references)
				//IL_000e: Unknown result type (might be due to invalid IL or missing references)
				//IL_000f: Unknown result type (might be due to invalid IL or missing references)
				//IL_002c: Unknown result type (might be due to invalid IL or missing references)
				//IL_002e: Unknown result type (might be due to invalid IL or missing references)
				return DoDecoratedOperation((IDatabase db) => db.SetScan(key, pattern, pageSize, cursor, pageOffset, flags));
			}

			public RedisValue[] Sort(RedisKey key, long skip = 0L, long take = -1L, Order order = (Order)0, SortType sortType = (SortType)0, RedisValue by = default(RedisValue), RedisValue[] get = null, CommandFlags flags = (CommandFlags)0)
			{
				//IL_0007: Unknown result type (might be due to invalid IL or missing references)
				//IL_0008: Unknown result type (might be due to invalid IL or missing references)
				//IL_001c: Unknown result type (might be due to invalid IL or missing references)
				//IL_001e: Unknown result type (might be due to invalid IL or missing references)
				//IL_0024: Unknown result type (might be due to invalid IL or missing references)
				//IL_0026: Unknown result type (might be due to invalid IL or missing references)
				//IL_002c: Unknown result type (might be due to invalid IL or missing references)
				//IL_002e: Unknown result type (might be due to invalid IL or missing references)
				//IL_003c: Unknown result type (might be due to invalid IL or missing references)
				//IL_003e: Unknown result type (might be due to invalid IL or missing references)
				return DoDecoratedOperation((IDatabase db) => db.Sort(key, skip, take, order, sortType, by, get, flags));
			}

			public long SortAndStore(RedisKey destination, RedisKey key, long skip = 0L, long take = -1L, Order order = (Order)0, SortType sortType = (SortType)0, RedisValue by = default(RedisValue), RedisValue[] get = null, CommandFlags flags = (CommandFlags)0)
			{
				//IL_0007: Unknown result type (might be due to invalid IL or missing references)
				//IL_0008: Unknown result type (might be due to invalid IL or missing references)
				//IL_000e: Unknown result type (might be due to invalid IL or missing references)
				//IL_000f: Unknown result type (might be due to invalid IL or missing references)
				//IL_0024: Unknown result type (might be due to invalid IL or missing references)
				//IL_0026: Unknown result type (might be due to invalid IL or missing references)
				//IL_002c: Unknown result type (might be due to invalid IL or missing references)
				//IL_002e: Unknown result type (might be due to invalid IL or missing references)
				//IL_0034: Unknown result type (might be due to invalid IL or missing references)
				//IL_0036: Unknown result type (might be due to invalid IL or missing references)
				//IL_0044: Unknown result type (might be due to invalid IL or missing references)
				//IL_0046: Unknown result type (might be due to invalid IL or missing references)
				return DoDecoratedOperation((IDatabase db) => db.SortAndStore(destination, key, skip, take, order, sortType, by, get, flags));
			}

			public Task<long> SortAndStoreAsync(RedisKey destination, RedisKey key, long skip = 0L, long take = -1L, Order order = (Order)0, SortType sortType = (SortType)0, RedisValue by = default(RedisValue), RedisValue[] get = null, CommandFlags flags = (CommandFlags)0)
			{
				//IL_0007: Unknown result type (might be due to invalid IL or missing references)
				//IL_0008: Unknown result type (might be due to invalid IL or missing references)
				//IL_000e: Unknown result type (might be due to invalid IL or missing references)
				//IL_000f: Unknown result type (might be due to invalid IL or missing references)
				//IL_0024: Unknown result type (might be due to invalid IL or missing references)
				//IL_0026: Unknown result type (might be due to invalid IL or missing references)
				//IL_002c: Unknown result type (might be due to invalid IL or missing references)
				//IL_002e: Unknown result type (might be due to invalid IL or missing references)
				//IL_0034: Unknown result type (might be due to invalid IL or missing references)
				//IL_0036: Unknown result type (might be due to invalid IL or missing references)
				//IL_0044: Unknown result type (might be due to invalid IL or missing references)
				//IL_0046: Unknown result type (might be due to invalid IL or missing references)
				return DoDecoratedOperation((IDatabase db) => ((IDatabaseAsync)db).SortAndStoreAsync(destination, key, skip, take, order, sortType, by, get, flags));
			}

			public Task<RedisValue[]> SortAsync(RedisKey key, long skip = 0L, long take = -1L, Order order = (Order)0, SortType sortType = (SortType)0, RedisValue by = default(RedisValue), RedisValue[] get = null, CommandFlags flags = (CommandFlags)0)
			{
				//IL_0007: Unknown result type (might be due to invalid IL or missing references)
				//IL_0008: Unknown result type (might be due to invalid IL or missing references)
				//IL_001c: Unknown result type (might be due to invalid IL or missing references)
				//IL_001e: Unknown result type (might be due to invalid IL or missing references)
				//IL_0024: Unknown result type (might be due to invalid IL or missing references)
				//IL_0026: Unknown result type (might be due to invalid IL or missing references)
				//IL_002c: Unknown result type (might be due to invalid IL or missing references)
				//IL_002e: Unknown result type (might be due to invalid IL or missing references)
				//IL_003c: Unknown result type (might be due to invalid IL or missing references)
				//IL_003e: Unknown result type (might be due to invalid IL or missing references)
				return DoDecoratedOperation((IDatabase db) => ((IDatabaseAsync)db).SortAsync(key, skip, take, order, sortType, by, get, flags));
			}

			public bool SortedSetAdd(RedisKey key, RedisValue member, double score, CommandFlags flags)
			{
				//IL_0007: Unknown result type (might be due to invalid IL or missing references)
				//IL_0008: Unknown result type (might be due to invalid IL or missing references)
				//IL_000e: Unknown result type (might be due to invalid IL or missing references)
				//IL_000f: Unknown result type (might be due to invalid IL or missing references)
				//IL_001c: Unknown result type (might be due to invalid IL or missing references)
				//IL_001e: Unknown result type (might be due to invalid IL or missing references)
				return DoDecoratedOperation((IDatabase db) => db.SortedSetAdd(key, member, score, flags));
			}

			public bool SortedSetAdd(RedisKey key, RedisValue member, double score, When when = (When)0, CommandFlags flags = (CommandFlags)0)
			{
				//IL_0007: Unknown result type (might be due to invalid IL or missing references)
				//IL_0008: Unknown result type (might be due to invalid IL or missing references)
				//IL_000e: Unknown result type (might be due to invalid IL or missing references)
				//IL_000f: Unknown result type (might be due to invalid IL or missing references)
				//IL_001c: Unknown result type (might be due to invalid IL or missing references)
				//IL_001e: Unknown result type (might be due to invalid IL or missing references)
				//IL_0024: Unknown result type (might be due to invalid IL or missing references)
				//IL_0026: Unknown result type (might be due to invalid IL or missing references)
				return DoDecoratedOperation((IDatabase db) => db.SortedSetAdd(key, member, score, when, flags));
			}

			public long SortedSetAdd(RedisKey key, SortedSetEntry[] values, CommandFlags flags)
			{
				//IL_0007: Unknown result type (might be due to invalid IL or missing references)
				//IL_0008: Unknown result type (might be due to invalid IL or missing references)
				//IL_0015: Unknown result type (might be due to invalid IL or missing references)
				//IL_0016: Unknown result type (might be due to invalid IL or missing references)
				return DoDecoratedOperation((IDatabase db) => db.SortedSetAdd(key, values, flags));
			}

			public long SortedSetAdd(RedisKey key, SortedSetEntry[] values, When when = (When)0, CommandFlags flags = (CommandFlags)0)
			{
				//IL_0007: Unknown result type (might be due to invalid IL or missing references)
				//IL_0008: Unknown result type (might be due to invalid IL or missing references)
				//IL_0015: Unknown result type (might be due to invalid IL or missing references)
				//IL_0016: Unknown result type (might be due to invalid IL or missing references)
				//IL_001c: Unknown result type (might be due to invalid IL or missing references)
				//IL_001e: Unknown result type (might be due to invalid IL or missing references)
				return DoDecoratedOperation((IDatabase db) => db.SortedSetAdd(key, values, when, flags));
			}

			public Task<bool> SortedSetAddAsync(RedisKey key, RedisValue member, double score, CommandFlags flags)
			{
				//IL_0007: Unknown result type (might be due to invalid IL or missing references)
				//IL_0008: Unknown result type (might be due to invalid IL or missing references)
				//IL_000e: Unknown result type (might be due to invalid IL or missing references)
				//IL_000f: Unknown result type (might be due to invalid IL or missing references)
				//IL_001c: Unknown result type (might be due to invalid IL or missing references)
				//IL_001e: Unknown result type (might be due to invalid IL or missing references)
				return DoDecoratedOperation((IDatabase db) => ((IDatabaseAsync)db).SortedSetAddAsync(key, member, score, flags));
			}

			public Task<bool> SortedSetAddAsync(RedisKey key, RedisValue member, double score, When when = (When)0, CommandFlags flags = (CommandFlags)0)
			{
				//IL_0007: Unknown result type (might be due to invalid IL or missing references)
				//IL_0008: Unknown result type (might be due to invalid IL or missing references)
				//IL_000e: Unknown result type (might be due to invalid IL or missing references)
				//IL_000f: Unknown result type (might be due to invalid IL or missing references)
				//IL_001c: Unknown result type (might be due to invalid IL or missing references)
				//IL_001e: Unknown result type (might be due to invalid IL or missing references)
				//IL_0024: Unknown result type (might be due to invalid IL or missing references)
				//IL_0026: Unknown result type (might be due to invalid IL or missing references)
				return DoDecoratedOperation((IDatabase db) => ((IDatabaseAsync)db).SortedSetAddAsync(key, member, score, when, flags));
			}

			public Task<long> SortedSetAddAsync(RedisKey key, SortedSetEntry[] values, CommandFlags flags)
			{
				//IL_0007: Unknown result type (might be due to invalid IL or missing references)
				//IL_0008: Unknown result type (might be due to invalid IL or missing references)
				//IL_0015: Unknown result type (might be due to invalid IL or missing references)
				//IL_0016: Unknown result type (might be due to invalid IL or missing references)
				return DoDecoratedOperation((IDatabase db) => ((IDatabaseAsync)db).SortedSetAddAsync(key, values, flags));
			}

			public Task<long> SortedSetAddAsync(RedisKey key, SortedSetEntry[] values, When when = (When)0, CommandFlags flags = (CommandFlags)0)
			{
				//IL_0007: Unknown result type (might be due to invalid IL or missing references)
				//IL_0008: Unknown result type (might be due to invalid IL or missing references)
				//IL_0015: Unknown result type (might be due to invalid IL or missing references)
				//IL_0016: Unknown result type (might be due to invalid IL or missing references)
				//IL_001c: Unknown result type (might be due to invalid IL or missing references)
				//IL_001e: Unknown result type (might be due to invalid IL or missing references)
				return DoDecoratedOperation((IDatabase db) => ((IDatabaseAsync)db).SortedSetAddAsync(key, values, when, flags));
			}

			public long SortedSetCombineAndStore(SetOperation operation, RedisKey destination, RedisKey first, RedisKey second, Aggregate aggregate = (Aggregate)0, CommandFlags flags = (CommandFlags)0)
			{
				//IL_0007: Unknown result type (might be due to invalid IL or missing references)
				//IL_0008: Unknown result type (might be due to invalid IL or missing references)
				//IL_000e: Unknown result type (might be due to invalid IL or missing references)
				//IL_000f: Unknown result type (might be due to invalid IL or missing references)
				//IL_0015: Unknown result type (might be due to invalid IL or missing references)
				//IL_0016: Unknown result type (might be due to invalid IL or missing references)
				//IL_001c: Unknown result type (might be due to invalid IL or missing references)
				//IL_001e: Unknown result type (might be due to invalid IL or missing references)
				//IL_0024: Unknown result type (might be due to invalid IL or missing references)
				//IL_0026: Unknown result type (might be due to invalid IL or missing references)
				//IL_002c: Unknown result type (might be due to invalid IL or missing references)
				//IL_002e: Unknown result type (might be due to invalid IL or missing references)
				return DoDecoratedOperation((IDatabase db) => db.SortedSetCombineAndStore(operation, destination, first, second, aggregate, flags));
			}

			public long SortedSetCombineAndStore(SetOperation operation, RedisKey destination, RedisKey[] keys, double[] weights = null, Aggregate aggregate = (Aggregate)0, CommandFlags flags = (CommandFlags)0)
			{
				//IL_0007: Unknown result type (might be due to invalid IL or missing references)
				//IL_0008: Unknown result type (might be due to invalid IL or missing references)
				//IL_000e: Unknown result type (might be due to invalid IL or missing references)
				//IL_000f: Unknown result type (might be due to invalid IL or missing references)
				//IL_0024: Unknown result type (might be due to invalid IL or missing references)
				//IL_0026: Unknown result type (might be due to invalid IL or missing references)
				//IL_002c: Unknown result type (might be due to invalid IL or missing references)
				//IL_002e: Unknown result type (might be due to invalid IL or missing references)
				return DoDecoratedOperation((IDatabase db) => db.SortedSetCombineAndStore(operation, destination, keys, weights, aggregate, flags));
			}

			public Task<long> SortedSetCombineAndStoreAsync(SetOperation operation, RedisKey destination, RedisKey first, RedisKey second, Aggregate aggregate = (Aggregate)0, CommandFlags flags = (CommandFlags)0)
			{
				//IL_0007: Unknown result type (might be due to invalid IL or missing references)
				//IL_0008: Unknown result type (might be due to invalid IL or missing references)
				//IL_000e: Unknown result type (might be due to invalid IL or missing references)
				//IL_000f: Unknown result type (might be due to invalid IL or missing references)
				//IL_0015: Unknown result type (might be due to invalid IL or missing references)
				//IL_0016: Unknown result type (might be due to invalid IL or missing references)
				//IL_001c: Unknown result type (might be due to invalid IL or missing references)
				//IL_001e: Unknown result type (might be due to invalid IL or missing references)
				//IL_0024: Unknown result type (might be due to invalid IL or missing references)
				//IL_0026: Unknown result type (might be due to invalid IL or missing references)
				//IL_002c: Unknown result type (might be due to invalid IL or missing references)
				//IL_002e: Unknown result type (might be due to invalid IL or missing references)
				return DoDecoratedOperation((IDatabase db) => ((IDatabaseAsync)db).SortedSetCombineAndStoreAsync(operation, destination, first, second, aggregate, flags));
			}

			public Task<long> SortedSetCombineAndStoreAsync(SetOperation operation, RedisKey destination, RedisKey[] keys, double[] weights = null, Aggregate aggregate = (Aggregate)0, CommandFlags flags = (CommandFlags)0)
			{
				//IL_0007: Unknown result type (might be due to invalid IL or missing references)
				//IL_0008: Unknown result type (might be due to invalid IL or missing references)
				//IL_000e: Unknown result type (might be due to invalid IL or missing references)
				//IL_000f: Unknown result type (might be due to invalid IL or missing references)
				//IL_0024: Unknown result type (might be due to invalid IL or missing references)
				//IL_0026: Unknown result type (might be due to invalid IL or missing references)
				//IL_002c: Unknown result type (might be due to invalid IL or missing references)
				//IL_002e: Unknown result type (might be due to invalid IL or missing references)
				return DoDecoratedOperation((IDatabase db) => ((IDatabaseAsync)db).SortedSetCombineAndStoreAsync(operation, destination, keys, weights, aggregate, flags));
			}

			public double SortedSetDecrement(RedisKey key, RedisValue member, double value, CommandFlags flags = (CommandFlags)0)
			{
				//IL_0007: Unknown result type (might be due to invalid IL or missing references)
				//IL_0008: Unknown result type (might be due to invalid IL or missing references)
				//IL_000e: Unknown result type (might be due to invalid IL or missing references)
				//IL_000f: Unknown result type (might be due to invalid IL or missing references)
				//IL_001c: Unknown result type (might be due to invalid IL or missing references)
				//IL_001e: Unknown result type (might be due to invalid IL or missing references)
				return DoDecoratedOperation((IDatabase db) => db.SortedSetDecrement(key, member, value, flags));
			}

			public Task<double> SortedSetDecrementAsync(RedisKey key, RedisValue member, double value, CommandFlags flags = (CommandFlags)0)
			{
				//IL_0007: Unknown result type (might be due to invalid IL or missing references)
				//IL_0008: Unknown result type (might be due to invalid IL or missing references)
				//IL_000e: Unknown result type (might be due to invalid IL or missing references)
				//IL_000f: Unknown result type (might be due to invalid IL or missing references)
				//IL_001c: Unknown result type (might be due to invalid IL or missing references)
				//IL_001e: Unknown result type (might be due to invalid IL or missing references)
				return DoDecoratedOperation((IDatabase db) => ((IDatabaseAsync)db).SortedSetDecrementAsync(key, member, value, flags));
			}

			public double SortedSetIncrement(RedisKey key, RedisValue member, double value, CommandFlags flags = (CommandFlags)0)
			{
				//IL_0007: Unknown result type (might be due to invalid IL or missing references)
				//IL_0008: Unknown result type (might be due to invalid IL or missing references)
				//IL_000e: Unknown result type (might be due to invalid IL or missing references)
				//IL_000f: Unknown result type (might be due to invalid IL or missing references)
				//IL_001c: Unknown result type (might be due to invalid IL or missing references)
				//IL_001e: Unknown result type (might be due to invalid IL or missing references)
				return DoDecoratedOperation((IDatabase db) => db.SortedSetIncrement(key, member, value, flags));
			}

			public Task<double> SortedSetIncrementAsync(RedisKey key, RedisValue member, double value, CommandFlags flags = (CommandFlags)0)
			{
				//IL_0007: Unknown result type (might be due to invalid IL or missing references)
				//IL_0008: Unknown result type (might be due to invalid IL or missing references)
				//IL_000e: Unknown result type (might be due to invalid IL or missing references)
				//IL_000f: Unknown result type (might be due to invalid IL or missing references)
				//IL_001c: Unknown result type (might be due to invalid IL or missing references)
				//IL_001e: Unknown result type (might be due to invalid IL or missing references)
				return DoDecoratedOperation((IDatabase db) => ((IDatabaseAsync)db).SortedSetIncrementAsync(key, member, value, flags));
			}

			public long SortedSetLength(RedisKey key, double min = double.NegativeInfinity, double max = double.PositiveInfinity, Exclude exclude = (Exclude)0, CommandFlags flags = (CommandFlags)0)
			{
				//IL_0007: Unknown result type (might be due to invalid IL or missing references)
				//IL_0008: Unknown result type (might be due to invalid IL or missing references)
				//IL_001c: Unknown result type (might be due to invalid IL or missing references)
				//IL_001e: Unknown result type (might be due to invalid IL or missing references)
				//IL_0024: Unknown result type (might be due to invalid IL or missing references)
				//IL_0026: Unknown result type (might be due to invalid IL or missing references)
				return DoDecoratedOperation((IDatabase db) => db.SortedSetLength(key, min, max, exclude, flags));
			}

			public Task<long> SortedSetLengthAsync(RedisKey key, double min = double.NegativeInfinity, double max = double.PositiveInfinity, Exclude exclude = (Exclude)0, CommandFlags flags = (CommandFlags)0)
			{
				//IL_0007: Unknown result type (might be due to invalid IL or missing references)
				//IL_0008: Unknown result type (might be due to invalid IL or missing references)
				//IL_001c: Unknown result type (might be due to invalid IL or missing references)
				//IL_001e: Unknown result type (might be due to invalid IL or missing references)
				//IL_0024: Unknown result type (might be due to invalid IL or missing references)
				//IL_0026: Unknown result type (might be due to invalid IL or missing references)
				return DoDecoratedOperation((IDatabase db) => ((IDatabaseAsync)db).SortedSetLengthAsync(key, min, max, exclude, flags));
			}

			public long SortedSetLengthByValue(RedisKey key, RedisValue min, RedisValue max, Exclude exclude = (Exclude)0, CommandFlags flags = (CommandFlags)0)
			{
				//IL_0007: Unknown result type (might be due to invalid IL or missing references)
				//IL_0008: Unknown result type (might be due to invalid IL or missing references)
				//IL_000e: Unknown result type (might be due to invalid IL or missing references)
				//IL_000f: Unknown result type (might be due to invalid IL or missing references)
				//IL_0015: Unknown result type (might be due to invalid IL or missing references)
				//IL_0016: Unknown result type (might be due to invalid IL or missing references)
				//IL_001c: Unknown result type (might be due to invalid IL or missing references)
				//IL_001e: Unknown result type (might be due to invalid IL or missing references)
				//IL_0024: Unknown result type (might be due to invalid IL or missing references)
				//IL_0026: Unknown result type (might be due to invalid IL or missing references)
				return DoDecoratedOperation((IDatabase db) => db.SortedSetLengthByValue(key, min, max, exclude, flags));
			}

			public Task<long> SortedSetLengthByValueAsync(RedisKey key, RedisValue min, RedisValue max, Exclude exclude = (Exclude)0, CommandFlags flags = (CommandFlags)0)
			{
				//IL_0007: Unknown result type (might be due to invalid IL or missing references)
				//IL_0008: Unknown result type (might be due to invalid IL or missing references)
				//IL_000e: Unknown result type (might be due to invalid IL or missing references)
				//IL_000f: Unknown result type (might be due to invalid IL or missing references)
				//IL_0015: Unknown result type (might be due to invalid IL or missing references)
				//IL_0016: Unknown result type (might be due to invalid IL or missing references)
				//IL_001c: Unknown result type (might be due to invalid IL or missing references)
				//IL_001e: Unknown result type (might be due to invalid IL or missing references)
				//IL_0024: Unknown result type (might be due to invalid IL or missing references)
				//IL_0026: Unknown result type (might be due to invalid IL or missing references)
				return DoDecoratedOperation((IDatabase db) => ((IDatabaseAsync)db).SortedSetLengthByValueAsync(key, min, max, exclude, flags));
			}

			public RedisValue[] SortedSetRangeByRank(RedisKey key, long start = 0L, long stop = -1L, Order order = (Order)0, CommandFlags flags = (CommandFlags)0)
			{
				//IL_0007: Unknown result type (might be due to invalid IL or missing references)
				//IL_0008: Unknown result type (might be due to invalid IL or missing references)
				//IL_001c: Unknown result type (might be due to invalid IL or missing references)
				//IL_001e: Unknown result type (might be due to invalid IL or missing references)
				//IL_0024: Unknown result type (might be due to invalid IL or missing references)
				//IL_0026: Unknown result type (might be due to invalid IL or missing references)
				return DoDecoratedOperation((IDatabase db) => db.SortedSetRangeByRank(key, start, stop, order, flags));
			}

			public Task<RedisValue[]> SortedSetRangeByRankAsync(RedisKey key, long start = 0L, long stop = -1L, Order order = (Order)0, CommandFlags flags = (CommandFlags)0)
			{
				//IL_0007: Unknown result type (might be due to invalid IL or missing references)
				//IL_0008: Unknown result type (might be due to invalid IL or missing references)
				//IL_001c: Unknown result type (might be due to invalid IL or missing references)
				//IL_001e: Unknown result type (might be due to invalid IL or missing references)
				//IL_0024: Unknown result type (might be due to invalid IL or missing references)
				//IL_0026: Unknown result type (might be due to invalid IL or missing references)
				return DoDecoratedOperation((IDatabase db) => ((IDatabaseAsync)db).SortedSetRangeByRankAsync(key, start, stop, order, flags));
			}

			public SortedSetEntry[] SortedSetRangeByRankWithScores(RedisKey key, long start = 0L, long stop = -1L, Order order = (Order)0, CommandFlags flags = (CommandFlags)0)
			{
				//IL_0007: Unknown result type (might be due to invalid IL or missing references)
				//IL_0008: Unknown result type (might be due to invalid IL or missing references)
				//IL_001c: Unknown result type (might be due to invalid IL or missing references)
				//IL_001e: Unknown result type (might be due to invalid IL or missing references)
				//IL_0024: Unknown result type (might be due to invalid IL or missing references)
				//IL_0026: Unknown result type (might be due to invalid IL or missing references)
				return DoDecoratedOperation((IDatabase db) => db.SortedSetRangeByRankWithScores(key, start, stop, order, flags));
			}

			public Task<SortedSetEntry[]> SortedSetRangeByRankWithScoresAsync(RedisKey key, long start = 0L, long stop = -1L, Order order = (Order)0, CommandFlags flags = (CommandFlags)0)
			{
				//IL_0007: Unknown result type (might be due to invalid IL or missing references)
				//IL_0008: Unknown result type (might be due to invalid IL or missing references)
				//IL_001c: Unknown result type (might be due to invalid IL or missing references)
				//IL_001e: Unknown result type (might be due to invalid IL or missing references)
				//IL_0024: Unknown result type (might be due to invalid IL or missing references)
				//IL_0026: Unknown result type (might be due to invalid IL or missing references)
				return DoDecoratedOperation((IDatabase db) => ((IDatabaseAsync)db).SortedSetRangeByRankWithScoresAsync(key, start, stop, order, flags));
			}

			public RedisValue[] SortedSetRangeByScore(RedisKey key, double start = double.NegativeInfinity, double stop = double.PositiveInfinity, Exclude exclude = (Exclude)0, Order order = (Order)0, long skip = 0L, long take = -1L, CommandFlags flags = (CommandFlags)0)
			{
				//IL_0007: Unknown result type (might be due to invalid IL or missing references)
				//IL_0008: Unknown result type (might be due to invalid IL or missing references)
				//IL_001c: Unknown result type (might be due to invalid IL or missing references)
				//IL_001e: Unknown result type (might be due to invalid IL or missing references)
				//IL_0024: Unknown result type (might be due to invalid IL or missing references)
				//IL_0026: Unknown result type (might be due to invalid IL or missing references)
				//IL_003c: Unknown result type (might be due to invalid IL or missing references)
				//IL_003e: Unknown result type (might be due to invalid IL or missing references)
				return DoDecoratedOperation((IDatabase db) => db.SortedSetRangeByScore(key, start, stop, exclude, order, skip, take, flags));
			}

			public Task<RedisValue[]> SortedSetRangeByScoreAsync(RedisKey key, double start = double.NegativeInfinity, double stop = double.PositiveInfinity, Exclude exclude = (Exclude)0, Order order = (Order)0, long skip = 0L, long take = -1L, CommandFlags flags = (CommandFlags)0)
			{
				//IL_0007: Unknown result type (might be due to invalid IL or missing references)
				//IL_0008: Unknown result type (might be due to invalid IL or missing references)
				//IL_001c: Unknown result type (might be due to invalid IL or missing references)
				//IL_001e: Unknown result type (might be due to invalid IL or missing references)
				//IL_0024: Unknown result type (might be due to invalid IL or missing references)
				//IL_0026: Unknown result type (might be due to invalid IL or missing references)
				//IL_003c: Unknown result type (might be due to invalid IL or missing references)
				//IL_003e: Unknown result type (might be due to invalid IL or missing references)
				return DoDecoratedOperation((IDatabase db) => ((IDatabaseAsync)db).SortedSetRangeByScoreAsync(key, start, stop, exclude, order, skip, take, flags));
			}

			public SortedSetEntry[] SortedSetRangeByScoreWithScores(RedisKey key, double start = double.NegativeInfinity, double stop = double.PositiveInfinity, Exclude exclude = (Exclude)0, Order order = (Order)0, long skip = 0L, long take = -1L, CommandFlags flags = (CommandFlags)0)
			{
				//IL_0007: Unknown result type (might be due to invalid IL or missing references)
				//IL_0008: Unknown result type (might be due to invalid IL or missing references)
				//IL_001c: Unknown result type (might be due to invalid IL or missing references)
				//IL_001e: Unknown result type (might be due to invalid IL or missing references)
				//IL_0024: Unknown result type (might be due to invalid IL or missing references)
				//IL_0026: Unknown result type (might be due to invalid IL or missing references)
				//IL_003c: Unknown result type (might be due to invalid IL or missing references)
				//IL_003e: Unknown result type (might be due to invalid IL or missing references)
				return DoDecoratedOperation((IDatabase db) => db.SortedSetRangeByScoreWithScores(key, start, stop, exclude, order, skip, take, flags));
			}

			public Task<SortedSetEntry[]> SortedSetRangeByScoreWithScoresAsync(RedisKey key, double start = double.NegativeInfinity, double stop = double.PositiveInfinity, Exclude exclude = (Exclude)0, Order order = (Order)0, long skip = 0L, long take = -1L, CommandFlags flags = (CommandFlags)0)
			{
				//IL_0007: Unknown result type (might be due to invalid IL or missing references)
				//IL_0008: Unknown result type (might be due to invalid IL or missing references)
				//IL_001c: Unknown result type (might be due to invalid IL or missing references)
				//IL_001e: Unknown result type (might be due to invalid IL or missing references)
				//IL_0024: Unknown result type (might be due to invalid IL or missing references)
				//IL_0026: Unknown result type (might be due to invalid IL or missing references)
				//IL_003c: Unknown result type (might be due to invalid IL or missing references)
				//IL_003e: Unknown result type (might be due to invalid IL or missing references)
				return DoDecoratedOperation((IDatabase db) => ((IDatabaseAsync)db).SortedSetRangeByScoreWithScoresAsync(key, start, stop, exclude, order, skip, take, flags));
			}

			public RedisValue[] SortedSetRangeByValue(RedisKey key, RedisValue min = default(RedisValue), RedisValue max = default(RedisValue), Exclude exclude = (Exclude)0, long skip = 0L, long take = -1L, CommandFlags flags = (CommandFlags)0)
			{
				//IL_0007: Unknown result type (might be due to invalid IL or missing references)
				//IL_0008: Unknown result type (might be due to invalid IL or missing references)
				//IL_000e: Unknown result type (might be due to invalid IL or missing references)
				//IL_000f: Unknown result type (might be due to invalid IL or missing references)
				//IL_0015: Unknown result type (might be due to invalid IL or missing references)
				//IL_0016: Unknown result type (might be due to invalid IL or missing references)
				//IL_001c: Unknown result type (might be due to invalid IL or missing references)
				//IL_001e: Unknown result type (might be due to invalid IL or missing references)
				//IL_0034: Unknown result type (might be due to invalid IL or missing references)
				//IL_0036: Unknown result type (might be due to invalid IL or missing references)
				return DoDecoratedOperation((IDatabase db) => db.SortedSetRangeByValue(key, min, max, exclude, skip, take, flags));
			}

			public Task<RedisValue[]> SortedSetRangeByValueAsync(RedisKey key, RedisValue min = default(RedisValue), RedisValue max = default(RedisValue), Exclude exclude = (Exclude)0, long skip = 0L, long take = -1L, CommandFlags flags = (CommandFlags)0)
			{
				//IL_0007: Unknown result type (might be due to invalid IL or missing references)
				//IL_0008: Unknown result type (might be due to invalid IL or missing references)
				//IL_000e: Unknown result type (might be due to invalid IL or missing references)
				//IL_000f: Unknown result type (might be due to invalid IL or missing references)
				//IL_0015: Unknown result type (might be due to invalid IL or missing references)
				//IL_0016: Unknown result type (might be due to invalid IL or missing references)
				//IL_001c: Unknown result type (might be due to invalid IL or missing references)
				//IL_001e: Unknown result type (might be due to invalid IL or missing references)
				//IL_0034: Unknown result type (might be due to invalid IL or missing references)
				//IL_0036: Unknown result type (might be due to invalid IL or missing references)
				return DoDecoratedOperation((IDatabase db) => ((IDatabaseAsync)db).SortedSetRangeByValueAsync(key, min, max, exclude, skip, take, flags));
			}

			public long? SortedSetRank(RedisKey key, RedisValue member, Order order = (Order)0, CommandFlags flags = (CommandFlags)0)
			{
				//IL_0007: Unknown result type (might be due to invalid IL or missing references)
				//IL_0008: Unknown result type (might be due to invalid IL or missing references)
				//IL_000e: Unknown result type (might be due to invalid IL or missing references)
				//IL_000f: Unknown result type (might be due to invalid IL or missing references)
				//IL_0015: Unknown result type (might be due to invalid IL or missing references)
				//IL_0016: Unknown result type (might be due to invalid IL or missing references)
				//IL_001c: Unknown result type (might be due to invalid IL or missing references)
				//IL_001e: Unknown result type (might be due to invalid IL or missing references)
				return DoDecoratedOperation((IDatabase db) => db.SortedSetRank(key, member, order, flags));
			}

			public Task<long?> SortedSetRankAsync(RedisKey key, RedisValue member, Order order = (Order)0, CommandFlags flags = (CommandFlags)0)
			{
				//IL_0007: Unknown result type (might be due to invalid IL or missing references)
				//IL_0008: Unknown result type (might be due to invalid IL or missing references)
				//IL_000e: Unknown result type (might be due to invalid IL or missing references)
				//IL_000f: Unknown result type (might be due to invalid IL or missing references)
				//IL_0015: Unknown result type (might be due to invalid IL or missing references)
				//IL_0016: Unknown result type (might be due to invalid IL or missing references)
				//IL_001c: Unknown result type (might be due to invalid IL or missing references)
				//IL_001e: Unknown result type (might be due to invalid IL or missing references)
				return DoDecoratedOperation((IDatabase db) => ((IDatabaseAsync)db).SortedSetRankAsync(key, member, order, flags));
			}

			public bool SortedSetRemove(RedisKey key, RedisValue member, CommandFlags flags = (CommandFlags)0)
			{
				//IL_0007: Unknown result type (might be due to invalid IL or missing references)
				//IL_0008: Unknown result type (might be due to invalid IL or missing references)
				//IL_000e: Unknown result type (might be due to invalid IL or missing references)
				//IL_000f: Unknown result type (might be due to invalid IL or missing references)
				//IL_0015: Unknown result type (might be due to invalid IL or missing references)
				//IL_0016: Unknown result type (might be due to invalid IL or missing references)
				return DoDecoratedOperation((IDatabase db) => db.SortedSetRemove(key, member, flags));
			}

			public long SortedSetRemove(RedisKey key, RedisValue[] members, CommandFlags flags = (CommandFlags)0)
			{
				//IL_0007: Unknown result type (might be due to invalid IL or missing references)
				//IL_0008: Unknown result type (might be due to invalid IL or missing references)
				//IL_0015: Unknown result type (might be due to invalid IL or missing references)
				//IL_0016: Unknown result type (might be due to invalid IL or missing references)
				return DoDecoratedOperation((IDatabase db) => db.SortedSetRemove(key, members, flags));
			}

			public Task<bool> SortedSetRemoveAsync(RedisKey key, RedisValue member, CommandFlags flags = (CommandFlags)0)
			{
				//IL_0007: Unknown result type (might be due to invalid IL or missing references)
				//IL_0008: Unknown result type (might be due to invalid IL or missing references)
				//IL_000e: Unknown result type (might be due to invalid IL or missing references)
				//IL_000f: Unknown result type (might be due to invalid IL or missing references)
				//IL_0015: Unknown result type (might be due to invalid IL or missing references)
				//IL_0016: Unknown result type (might be due to invalid IL or missing references)
				return DoDecoratedOperation((IDatabase db) => ((IDatabaseAsync)db).SortedSetRemoveAsync(key, member, flags));
			}

			public Task<long> SortedSetRemoveAsync(RedisKey key, RedisValue[] members, CommandFlags flags = (CommandFlags)0)
			{
				//IL_0007: Unknown result type (might be due to invalid IL or missing references)
				//IL_0008: Unknown result type (might be due to invalid IL or missing references)
				//IL_0015: Unknown result type (might be due to invalid IL or missing references)
				//IL_0016: Unknown result type (might be due to invalid IL or missing references)
				return DoDecoratedOperation((IDatabase db) => ((IDatabaseAsync)db).SortedSetRemoveAsync(key, members, flags));
			}

			public long SortedSetRemoveRangeByRank(RedisKey key, long start, long stop, CommandFlags flags = (CommandFlags)0)
			{
				//IL_0007: Unknown result type (might be due to invalid IL or missing references)
				//IL_0008: Unknown result type (might be due to invalid IL or missing references)
				//IL_001c: Unknown result type (might be due to invalid IL or missing references)
				//IL_001e: Unknown result type (might be due to invalid IL or missing references)
				return DoDecoratedOperation((IDatabase db) => db.SortedSetRemoveRangeByRank(key, start, stop, flags));
			}

			public Task<long> SortedSetRemoveRangeByRankAsync(RedisKey key, long start, long stop, CommandFlags flags = (CommandFlags)0)
			{
				//IL_0007: Unknown result type (might be due to invalid IL or missing references)
				//IL_0008: Unknown result type (might be due to invalid IL or missing references)
				//IL_001c: Unknown result type (might be due to invalid IL or missing references)
				//IL_001e: Unknown result type (might be due to invalid IL or missing references)
				return DoDecoratedOperation((IDatabase db) => ((IDatabaseAsync)db).SortedSetRemoveRangeByRankAsync(key, start, stop, flags));
			}

			public long SortedSetRemoveRangeByScore(RedisKey key, double start, double stop, Exclude exclude = (Exclude)0, CommandFlags flags = (CommandFlags)0)
			{
				//IL_0007: Unknown result type (might be due to invalid IL or missing references)
				//IL_0008: Unknown result type (might be due to invalid IL or missing references)
				//IL_001c: Unknown result type (might be due to invalid IL or missing references)
				//IL_001e: Unknown result type (might be due to invalid IL or missing references)
				//IL_0024: Unknown result type (might be due to invalid IL or missing references)
				//IL_0026: Unknown result type (might be due to invalid IL or missing references)
				return DoDecoratedOperation((IDatabase db) => db.SortedSetRemoveRangeByScore(key, start, stop, exclude, flags));
			}

			public Task<long> SortedSetRemoveRangeByScoreAsync(RedisKey key, double start, double stop, Exclude exclude = (Exclude)0, CommandFlags flags = (CommandFlags)0)
			{
				//IL_0007: Unknown result type (might be due to invalid IL or missing references)
				//IL_0008: Unknown result type (might be due to invalid IL or missing references)
				//IL_001c: Unknown result type (might be due to invalid IL or missing references)
				//IL_001e: Unknown result type (might be due to invalid IL or missing references)
				//IL_0024: Unknown result type (might be due to invalid IL or missing references)
				//IL_0026: Unknown result type (might be due to invalid IL or missing references)
				return DoDecoratedOperation((IDatabase db) => ((IDatabaseAsync)db).SortedSetRemoveRangeByScoreAsync(key, start, stop, exclude, flags));
			}

			public long SortedSetRemoveRangeByValue(RedisKey key, RedisValue min, RedisValue max, Exclude exclude = (Exclude)0, CommandFlags flags = (CommandFlags)0)
			{
				//IL_0007: Unknown result type (might be due to invalid IL or missing references)
				//IL_0008: Unknown result type (might be due to invalid IL or missing references)
				//IL_000e: Unknown result type (might be due to invalid IL or missing references)
				//IL_000f: Unknown result type (might be due to invalid IL or missing references)
				//IL_0015: Unknown result type (might be due to invalid IL or missing references)
				//IL_0016: Unknown result type (might be due to invalid IL or missing references)
				//IL_001c: Unknown result type (might be due to invalid IL or missing references)
				//IL_001e: Unknown result type (might be due to invalid IL or missing references)
				//IL_0024: Unknown result type (might be due to invalid IL or missing references)
				//IL_0026: Unknown result type (might be due to invalid IL or missing references)
				return DoDecoratedOperation((IDatabase db) => db.SortedSetRemoveRangeByValue(key, min, max, exclude, flags));
			}

			public Task<long> SortedSetRemoveRangeByValueAsync(RedisKey key, RedisValue min, RedisValue max, Exclude exclude = (Exclude)0, CommandFlags flags = (CommandFlags)0)
			{
				//IL_0007: Unknown result type (might be due to invalid IL or missing references)
				//IL_0008: Unknown result type (might be due to invalid IL or missing references)
				//IL_000e: Unknown result type (might be due to invalid IL or missing references)
				//IL_000f: Unknown result type (might be due to invalid IL or missing references)
				//IL_0015: Unknown result type (might be due to invalid IL or missing references)
				//IL_0016: Unknown result type (might be due to invalid IL or missing references)
				//IL_001c: Unknown result type (might be due to invalid IL or missing references)
				//IL_001e: Unknown result type (might be due to invalid IL or missing references)
				//IL_0024: Unknown result type (might be due to invalid IL or missing references)
				//IL_0026: Unknown result type (might be due to invalid IL or missing references)
				return DoDecoratedOperation((IDatabase db) => ((IDatabaseAsync)db).SortedSetRemoveRangeByValueAsync(key, min, max, exclude, flags));
			}

			public IEnumerable<SortedSetEntry> SortedSetScan(RedisKey key, RedisValue pattern, int pageSize, CommandFlags flags)
			{
				//IL_0007: Unknown result type (might be due to invalid IL or missing references)
				//IL_0008: Unknown result type (might be due to invalid IL or missing references)
				//IL_000e: Unknown result type (might be due to invalid IL or missing references)
				//IL_000f: Unknown result type (might be due to invalid IL or missing references)
				//IL_001c: Unknown result type (might be due to invalid IL or missing references)
				//IL_001e: Unknown result type (might be due to invalid IL or missing references)
				return DoDecoratedOperation((IDatabase db) => db.SortedSetScan(key, pattern, pageSize, flags));
			}

			public IEnumerable<SortedSetEntry> SortedSetScan(RedisKey key, RedisValue pattern = default(RedisValue), int pageSize = 10, long cursor = 0L, int pageOffset = 0, CommandFlags flags = (CommandFlags)0)
			{
				//IL_0007: Unknown result type (might be due to invalid IL or missing references)
				//IL_0008: Unknown result type (might be due to invalid IL or missing references)
				//IL_000e: Unknown result type (might be due to invalid IL or missing references)
				//IL_000f: Unknown result type (might be due to invalid IL or missing references)
				//IL_002c: Unknown result type (might be due to invalid IL or missing references)
				//IL_002e: Unknown result type (might be due to invalid IL or missing references)
				return DoDecoratedOperation((IDatabase db) => db.SortedSetScan(key, pattern, pageSize, cursor, pageOffset, flags));
			}

			public double? SortedSetScore(RedisKey key, RedisValue member, CommandFlags flags = (CommandFlags)0)
			{
				//IL_0007: Unknown result type (might be due to invalid IL or missing references)
				//IL_0008: Unknown result type (might be due to invalid IL or missing references)
				//IL_000e: Unknown result type (might be due to invalid IL or missing references)
				//IL_000f: Unknown result type (might be due to invalid IL or missing references)
				//IL_0015: Unknown result type (might be due to invalid IL or missing references)
				//IL_0016: Unknown result type (might be due to invalid IL or missing references)
				return DoDecoratedOperation((IDatabase db) => db.SortedSetScore(key, member, flags));
			}

			public Task<double?> SortedSetScoreAsync(RedisKey key, RedisValue member, CommandFlags flags = (CommandFlags)0)
			{
				//IL_0007: Unknown result type (might be due to invalid IL or missing references)
				//IL_0008: Unknown result type (might be due to invalid IL or missing references)
				//IL_000e: Unknown result type (might be due to invalid IL or missing references)
				//IL_000f: Unknown result type (might be due to invalid IL or missing references)
				//IL_0015: Unknown result type (might be due to invalid IL or missing references)
				//IL_0016: Unknown result type (might be due to invalid IL or missing references)
				return DoDecoratedOperation((IDatabase db) => ((IDatabaseAsync)db).SortedSetScoreAsync(key, member, flags));
			}

			public long StringAppend(RedisKey key, RedisValue value, CommandFlags flags = (CommandFlags)0)
			{
				//IL_0007: Unknown result type (might be due to invalid IL or missing references)
				//IL_0008: Unknown result type (might be due to invalid IL or missing references)
				//IL_000e: Unknown result type (might be due to invalid IL or missing references)
				//IL_000f: Unknown result type (might be due to invalid IL or missing references)
				//IL_0015: Unknown result type (might be due to invalid IL or missing references)
				//IL_0016: Unknown result type (might be due to invalid IL or missing references)
				return DoDecoratedOperation((IDatabase db) => db.StringAppend(key, value, flags));
			}

			public Task<long> StringAppendAsync(RedisKey key, RedisValue value, CommandFlags flags = (CommandFlags)0)
			{
				//IL_0007: Unknown result type (might be due to invalid IL or missing references)
				//IL_0008: Unknown result type (might be due to invalid IL or missing references)
				//IL_000e: Unknown result type (might be due to invalid IL or missing references)
				//IL_000f: Unknown result type (might be due to invalid IL or missing references)
				//IL_0015: Unknown result type (might be due to invalid IL or missing references)
				//IL_0016: Unknown result type (might be due to invalid IL or missing references)
				return DoDecoratedOperation((IDatabase db) => ((IDatabaseAsync)db).StringAppendAsync(key, value, flags));
			}

			public long StringBitCount(RedisKey key, long start = 0L, long end = -1L, CommandFlags flags = (CommandFlags)0)
			{
				//IL_0007: Unknown result type (might be due to invalid IL or missing references)
				//IL_0008: Unknown result type (might be due to invalid IL or missing references)
				//IL_001c: Unknown result type (might be due to invalid IL or missing references)
				//IL_001e: Unknown result type (might be due to invalid IL or missing references)
				return DoDecoratedOperation((IDatabase db) => db.StringBitCount(key, start, end, flags));
			}

			public Task<long> StringBitCountAsync(RedisKey key, long start = 0L, long end = -1L, CommandFlags flags = (CommandFlags)0)
			{
				//IL_0007: Unknown result type (might be due to invalid IL or missing references)
				//IL_0008: Unknown result type (might be due to invalid IL or missing references)
				//IL_001c: Unknown result type (might be due to invalid IL or missing references)
				//IL_001e: Unknown result type (might be due to invalid IL or missing references)
				return DoDecoratedOperation((IDatabase db) => ((IDatabaseAsync)db).StringBitCountAsync(key, start, end, flags));
			}

			public long StringBitOperation(Bitwise operation, RedisKey destination, RedisKey first, RedisKey second = default(RedisKey), CommandFlags flags = (CommandFlags)0)
			{
				//IL_0007: Unknown result type (might be due to invalid IL or missing references)
				//IL_0008: Unknown result type (might be due to invalid IL or missing references)
				//IL_000e: Unknown result type (might be due to invalid IL or missing references)
				//IL_000f: Unknown result type (might be due to invalid IL or missing references)
				//IL_0015: Unknown result type (might be due to invalid IL or missing references)
				//IL_0016: Unknown result type (might be due to invalid IL or missing references)
				//IL_001c: Unknown result type (might be due to invalid IL or missing references)
				//IL_001e: Unknown result type (might be due to invalid IL or missing references)
				//IL_0024: Unknown result type (might be due to invalid IL or missing references)
				//IL_0026: Unknown result type (might be due to invalid IL or missing references)
				return DoDecoratedOperation((IDatabase db) => db.StringBitOperation(operation, destination, first, second, flags));
			}

			public long StringBitOperation(Bitwise operation, RedisKey destination, RedisKey[] keys, CommandFlags flags = (CommandFlags)0)
			{
				//IL_0007: Unknown result type (might be due to invalid IL or missing references)
				//IL_0008: Unknown result type (might be due to invalid IL or missing references)
				//IL_000e: Unknown result type (might be due to invalid IL or missing references)
				//IL_000f: Unknown result type (might be due to invalid IL or missing references)
				//IL_001c: Unknown result type (might be due to invalid IL or missing references)
				//IL_001e: Unknown result type (might be due to invalid IL or missing references)
				return DoDecoratedOperation((IDatabase db) => db.StringBitOperation(operation, destination, keys, flags));
			}

			public Task<long> StringBitOperationAsync(Bitwise operation, RedisKey destination, RedisKey first, RedisKey second = default(RedisKey), CommandFlags flags = (CommandFlags)0)
			{
				//IL_0007: Unknown result type (might be due to invalid IL or missing references)
				//IL_0008: Unknown result type (might be due to invalid IL or missing references)
				//IL_000e: Unknown result type (might be due to invalid IL or missing references)
				//IL_000f: Unknown result type (might be due to invalid IL or missing references)
				//IL_0015: Unknown result type (might be due to invalid IL or missing references)
				//IL_0016: Unknown result type (might be due to invalid IL or missing references)
				//IL_001c: Unknown result type (might be due to invalid IL or missing references)
				//IL_001e: Unknown result type (might be due to invalid IL or missing references)
				//IL_0024: Unknown result type (might be due to invalid IL or missing references)
				//IL_0026: Unknown result type (might be due to invalid IL or missing references)
				return DoDecoratedOperation((IDatabase db) => ((IDatabaseAsync)db).StringBitOperationAsync(operation, destination, first, second, flags));
			}

			public Task<long> StringBitOperationAsync(Bitwise operation, RedisKey destination, RedisKey[] keys, CommandFlags flags = (CommandFlags)0)
			{
				//IL_0007: Unknown result type (might be due to invalid IL or missing references)
				//IL_0008: Unknown result type (might be due to invalid IL or missing references)
				//IL_000e: Unknown result type (might be due to invalid IL or missing references)
				//IL_000f: Unknown result type (might be due to invalid IL or missing references)
				//IL_001c: Unknown result type (might be due to invalid IL or missing references)
				//IL_001e: Unknown result type (might be due to invalid IL or missing references)
				return DoDecoratedOperation((IDatabase db) => ((IDatabaseAsync)db).StringBitOperationAsync(operation, destination, keys, flags));
			}

			public long StringBitPosition(RedisKey key, bool bit, long start = 0L, long end = -1L, CommandFlags flags = (CommandFlags)0)
			{
				//IL_0007: Unknown result type (might be due to invalid IL or missing references)
				//IL_0008: Unknown result type (might be due to invalid IL or missing references)
				//IL_0024: Unknown result type (might be due to invalid IL or missing references)
				//IL_0026: Unknown result type (might be due to invalid IL or missing references)
				return DoDecoratedOperation((IDatabase db) => db.StringBitPosition(key, bit, start, end, flags));
			}

			public Task<long> StringBitPositionAsync(RedisKey key, bool bit, long start = 0L, long end = -1L, CommandFlags flags = (CommandFlags)0)
			{
				//IL_0007: Unknown result type (might be due to invalid IL or missing references)
				//IL_0008: Unknown result type (might be due to invalid IL or missing references)
				//IL_0024: Unknown result type (might be due to invalid IL or missing references)
				//IL_0026: Unknown result type (might be due to invalid IL or missing references)
				return DoDecoratedOperation((IDatabase db) => ((IDatabaseAsync)db).StringBitPositionAsync(key, bit, start, end, flags));
			}

			public long StringDecrement(RedisKey key, long value = 1L, CommandFlags flags = (CommandFlags)0)
			{
				//IL_0007: Unknown result type (might be due to invalid IL or missing references)
				//IL_0008: Unknown result type (might be due to invalid IL or missing references)
				//IL_0015: Unknown result type (might be due to invalid IL or missing references)
				//IL_0016: Unknown result type (might be due to invalid IL or missing references)
				return DoDecoratedOperation((IDatabase db) => db.StringDecrement(key, value, flags));
			}

			public double StringDecrement(RedisKey key, double value, CommandFlags flags = (CommandFlags)0)
			{
				//IL_0007: Unknown result type (might be due to invalid IL or missing references)
				//IL_0008: Unknown result type (might be due to invalid IL or missing references)
				//IL_0015: Unknown result type (might be due to invalid IL or missing references)
				//IL_0016: Unknown result type (might be due to invalid IL or missing references)
				return DoDecoratedOperation((IDatabase db) => db.StringDecrement(key, value, flags));
			}

			public Task<long> StringDecrementAsync(RedisKey key, long value = 1L, CommandFlags flags = (CommandFlags)0)
			{
				//IL_0007: Unknown result type (might be due to invalid IL or missing references)
				//IL_0008: Unknown result type (might be due to invalid IL or missing references)
				//IL_0015: Unknown result type (might be due to invalid IL or missing references)
				//IL_0016: Unknown result type (might be due to invalid IL or missing references)
				return DoDecoratedOperation((IDatabase db) => ((IDatabaseAsync)db).StringDecrementAsync(key, value, flags));
			}

			public Task<double> StringDecrementAsync(RedisKey key, double value, CommandFlags flags = (CommandFlags)0)
			{
				//IL_0007: Unknown result type (might be due to invalid IL or missing references)
				//IL_0008: Unknown result type (might be due to invalid IL or missing references)
				//IL_0015: Unknown result type (might be due to invalid IL or missing references)
				//IL_0016: Unknown result type (might be due to invalid IL or missing references)
				return DoDecoratedOperation((IDatabase db) => ((IDatabaseAsync)db).StringDecrementAsync(key, value, flags));
			}

			public RedisValue StringGet(RedisKey key, CommandFlags flags = (CommandFlags)0)
			{
				//IL_0007: Unknown result type (might be due to invalid IL or missing references)
				//IL_0008: Unknown result type (might be due to invalid IL or missing references)
				//IL_000e: Unknown result type (might be due to invalid IL or missing references)
				//IL_000f: Unknown result type (might be due to invalid IL or missing references)
				//IL_0021: Unknown result type (might be due to invalid IL or missing references)
				return DoDecoratedOperation((IDatabase db) => db.StringGet(key, flags));
			}

			public RedisValue[] StringGet(RedisKey[] keys, CommandFlags flags = (CommandFlags)0)
			{
				//IL_000e: Unknown result type (might be due to invalid IL or missing references)
				//IL_000f: Unknown result type (might be due to invalid IL or missing references)
				return DoDecoratedOperation((IDatabase db) => db.StringGet(keys, flags));
			}

			public Task<RedisValue> StringGetAsync(RedisKey key, CommandFlags flags = (CommandFlags)0)
			{
				//IL_0007: Unknown result type (might be due to invalid IL or missing references)
				//IL_0008: Unknown result type (might be due to invalid IL or missing references)
				//IL_000e: Unknown result type (might be due to invalid IL or missing references)
				//IL_000f: Unknown result type (might be due to invalid IL or missing references)
				return DoDecoratedOperation((IDatabase db) => ((IDatabaseAsync)db).StringGetAsync(key, flags));
			}

			public Task<RedisValue[]> StringGetAsync(RedisKey[] keys, CommandFlags flags = (CommandFlags)0)
			{
				//IL_000e: Unknown result type (might be due to invalid IL or missing references)
				//IL_000f: Unknown result type (might be due to invalid IL or missing references)
				return DoDecoratedOperation((IDatabase db) => ((IDatabaseAsync)db).StringGetAsync(keys, flags));
			}

			public bool StringGetBit(RedisKey key, long offset, CommandFlags flags = (CommandFlags)0)
			{
				//IL_0007: Unknown result type (might be due to invalid IL or missing references)
				//IL_0008: Unknown result type (might be due to invalid IL or missing references)
				//IL_0015: Unknown result type (might be due to invalid IL or missing references)
				//IL_0016: Unknown result type (might be due to invalid IL or missing references)
				return DoDecoratedOperation((IDatabase db) => db.StringGetBit(key, offset, flags));
			}

			public Task<bool> StringGetBitAsync(RedisKey key, long offset, CommandFlags flags = (CommandFlags)0)
			{
				//IL_0007: Unknown result type (might be due to invalid IL or missing references)
				//IL_0008: Unknown result type (might be due to invalid IL or missing references)
				//IL_0015: Unknown result type (might be due to invalid IL or missing references)
				//IL_0016: Unknown result type (might be due to invalid IL or missing references)
				return DoDecoratedOperation((IDatabase db) => ((IDatabaseAsync)db).StringGetBitAsync(key, offset, flags));
			}

			public RedisValue StringGetRange(RedisKey key, long start, long end, CommandFlags flags = (CommandFlags)0)
			{
				//IL_0007: Unknown result type (might be due to invalid IL or missing references)
				//IL_0008: Unknown result type (might be due to invalid IL or missing references)
				//IL_001c: Unknown result type (might be due to invalid IL or missing references)
				//IL_001e: Unknown result type (might be due to invalid IL or missing references)
				//IL_0030: Unknown result type (might be due to invalid IL or missing references)
				return DoDecoratedOperation((IDatabase db) => db.StringGetRange(key, start, end, flags));
			}

			public Task<RedisValue> StringGetRangeAsync(RedisKey key, long start, long end, CommandFlags flags = (CommandFlags)0)
			{
				//IL_0007: Unknown result type (might be due to invalid IL or missing references)
				//IL_0008: Unknown result type (might be due to invalid IL or missing references)
				//IL_001c: Unknown result type (might be due to invalid IL or missing references)
				//IL_001e: Unknown result type (might be due to invalid IL or missing references)
				return DoDecoratedOperation((IDatabase db) => ((IDatabaseAsync)db).StringGetRangeAsync(key, start, end, flags));
			}

			public RedisValue StringGetSet(RedisKey key, RedisValue value, CommandFlags flags = (CommandFlags)0)
			{
				//IL_0007: Unknown result type (might be due to invalid IL or missing references)
				//IL_0008: Unknown result type (might be due to invalid IL or missing references)
				//IL_000e: Unknown result type (might be due to invalid IL or missing references)
				//IL_000f: Unknown result type (might be due to invalid IL or missing references)
				//IL_0015: Unknown result type (might be due to invalid IL or missing references)
				//IL_0016: Unknown result type (might be due to invalid IL or missing references)
				//IL_0028: Unknown result type (might be due to invalid IL or missing references)
				return DoDecoratedOperation((IDatabase db) => db.StringGetSet(key, value, flags));
			}

			public Task<RedisValue> StringGetSetAsync(RedisKey key, RedisValue value, CommandFlags flags = (CommandFlags)0)
			{
				//IL_0007: Unknown result type (might be due to invalid IL or missing references)
				//IL_0008: Unknown result type (might be due to invalid IL or missing references)
				//IL_000e: Unknown result type (might be due to invalid IL or missing references)
				//IL_000f: Unknown result type (might be due to invalid IL or missing references)
				//IL_0015: Unknown result type (might be due to invalid IL or missing references)
				//IL_0016: Unknown result type (might be due to invalid IL or missing references)
				return DoDecoratedOperation((IDatabase db) => ((IDatabaseAsync)db).StringGetSetAsync(key, value, flags));
			}

			public RedisValueWithExpiry StringGetWithExpiry(RedisKey key, CommandFlags flags = (CommandFlags)0)
			{
				//IL_0007: Unknown result type (might be due to invalid IL or missing references)
				//IL_0008: Unknown result type (might be due to invalid IL or missing references)
				//IL_000e: Unknown result type (might be due to invalid IL or missing references)
				//IL_000f: Unknown result type (might be due to invalid IL or missing references)
				//IL_0021: Unknown result type (might be due to invalid IL or missing references)
				return DoDecoratedOperation((IDatabase db) => db.StringGetWithExpiry(key, flags));
			}

			public Task<RedisValueWithExpiry> StringGetWithExpiryAsync(RedisKey key, CommandFlags flags = (CommandFlags)0)
			{
				//IL_0007: Unknown result type (might be due to invalid IL or missing references)
				//IL_0008: Unknown result type (might be due to invalid IL or missing references)
				//IL_000e: Unknown result type (might be due to invalid IL or missing references)
				//IL_000f: Unknown result type (might be due to invalid IL or missing references)
				return DoDecoratedOperation((IDatabase db) => ((IDatabaseAsync)db).StringGetWithExpiryAsync(key, flags));
			}

			public long StringIncrement(RedisKey key, long value = 1L, CommandFlags flags = (CommandFlags)0)
			{
				//IL_0007: Unknown result type (might be due to invalid IL or missing references)
				//IL_0008: Unknown result type (might be due to invalid IL or missing references)
				//IL_0015: Unknown result type (might be due to invalid IL or missing references)
				//IL_0016: Unknown result type (might be due to invalid IL or missing references)
				return DoDecoratedOperation((IDatabase db) => db.StringIncrement(key, value, flags));
			}

			public double StringIncrement(RedisKey key, double value, CommandFlags flags = (CommandFlags)0)
			{
				//IL_0007: Unknown result type (might be due to invalid IL or missing references)
				//IL_0008: Unknown result type (might be due to invalid IL or missing references)
				//IL_0015: Unknown result type (might be due to invalid IL or missing references)
				//IL_0016: Unknown result type (might be due to invalid IL or missing references)
				return DoDecoratedOperation((IDatabase db) => db.StringIncrement(key, value, flags));
			}

			public Task<long> StringIncrementAsync(RedisKey key, long value = 1L, CommandFlags flags = (CommandFlags)0)
			{
				//IL_0007: Unknown result type (might be due to invalid IL or missing references)
				//IL_0008: Unknown result type (might be due to invalid IL or missing references)
				//IL_0015: Unknown result type (might be due to invalid IL or missing references)
				//IL_0016: Unknown result type (might be due to invalid IL or missing references)
				return DoDecoratedOperation((IDatabase db) => ((IDatabaseAsync)db).StringIncrementAsync(key, value, flags));
			}

			public Task<double> StringIncrementAsync(RedisKey key, double value, CommandFlags flags = (CommandFlags)0)
			{
				//IL_0007: Unknown result type (might be due to invalid IL or missing references)
				//IL_0008: Unknown result type (might be due to invalid IL or missing references)
				//IL_0015: Unknown result type (might be due to invalid IL or missing references)
				//IL_0016: Unknown result type (might be due to invalid IL or missing references)
				return DoDecoratedOperation((IDatabase db) => ((IDatabaseAsync)db).StringIncrementAsync(key, value, flags));
			}

			public long StringLength(RedisKey key, CommandFlags flags = (CommandFlags)0)
			{
				//IL_0007: Unknown result type (might be due to invalid IL or missing references)
				//IL_0008: Unknown result type (might be due to invalid IL or missing references)
				//IL_000e: Unknown result type (might be due to invalid IL or missing references)
				//IL_000f: Unknown result type (might be due to invalid IL or missing references)
				return DoDecoratedOperation((IDatabase db) => db.StringLength(key, flags));
			}

			public Task<long> StringLengthAsync(RedisKey key, CommandFlags flags = (CommandFlags)0)
			{
				//IL_0007: Unknown result type (might be due to invalid IL or missing references)
				//IL_0008: Unknown result type (might be due to invalid IL or missing references)
				//IL_000e: Unknown result type (might be due to invalid IL or missing references)
				//IL_000f: Unknown result type (might be due to invalid IL or missing references)
				return DoDecoratedOperation((IDatabase db) => ((IDatabaseAsync)db).StringLengthAsync(key, flags));
			}

			public bool StringSet(RedisKey key, RedisValue value, TimeSpan? expiry = null, When when = (When)0, CommandFlags flags = (CommandFlags)0)
			{
				//IL_0007: Unknown result type (might be due to invalid IL or missing references)
				//IL_0008: Unknown result type (might be due to invalid IL or missing references)
				//IL_000e: Unknown result type (might be due to invalid IL or missing references)
				//IL_000f: Unknown result type (might be due to invalid IL or missing references)
				//IL_001c: Unknown result type (might be due to invalid IL or missing references)
				//IL_001e: Unknown result type (might be due to invalid IL or missing references)
				//IL_0024: Unknown result type (might be due to invalid IL or missing references)
				//IL_0026: Unknown result type (might be due to invalid IL or missing references)
				return DoDecoratedOperation((IDatabase db) => db.StringSet(key, value, expiry, when, flags));
			}

			public bool StringSet(KeyValuePair<RedisKey, RedisValue>[] values, When when = (When)0, CommandFlags flags = (CommandFlags)0)
			{
				//IL_000e: Unknown result type (might be due to invalid IL or missing references)
				//IL_000f: Unknown result type (might be due to invalid IL or missing references)
				//IL_0015: Unknown result type (might be due to invalid IL or missing references)
				//IL_0016: Unknown result type (might be due to invalid IL or missing references)
				return DoDecoratedOperation((IDatabase db) => db.StringSet(values, when, flags));
			}

			public Task<bool> StringSetAsync(RedisKey key, RedisValue value, TimeSpan? expiry = null, When when = (When)0, CommandFlags flags = (CommandFlags)0)
			{
				//IL_0007: Unknown result type (might be due to invalid IL or missing references)
				//IL_0008: Unknown result type (might be due to invalid IL or missing references)
				//IL_000e: Unknown result type (might be due to invalid IL or missing references)
				//IL_000f: Unknown result type (might be due to invalid IL or missing references)
				//IL_001c: Unknown result type (might be due to invalid IL or missing references)
				//IL_001e: Unknown result type (might be due to invalid IL or missing references)
				//IL_0024: Unknown result type (might be due to invalid IL or missing references)
				//IL_0026: Unknown result type (might be due to invalid IL or missing references)
				return DoDecoratedOperation((IDatabase db) => ((IDatabaseAsync)db).StringSetAsync(key, value, expiry, when, flags));
			}

			public Task<bool> StringSetAsync(KeyValuePair<RedisKey, RedisValue>[] values, When when = (When)0, CommandFlags flags = (CommandFlags)0)
			{
				//IL_000e: Unknown result type (might be due to invalid IL or missing references)
				//IL_000f: Unknown result type (might be due to invalid IL or missing references)
				//IL_0015: Unknown result type (might be due to invalid IL or missing references)
				//IL_0016: Unknown result type (might be due to invalid IL or missing references)
				return DoDecoratedOperation((IDatabase db) => ((IDatabaseAsync)db).StringSetAsync(values, when, flags));
			}

			public bool StringSetBit(RedisKey key, long offset, bool bit, CommandFlags flags = (CommandFlags)0)
			{
				//IL_0007: Unknown result type (might be due to invalid IL or missing references)
				//IL_0008: Unknown result type (might be due to invalid IL or missing references)
				//IL_001c: Unknown result type (might be due to invalid IL or missing references)
				//IL_001e: Unknown result type (might be due to invalid IL or missing references)
				return DoDecoratedOperation((IDatabase db) => db.StringSetBit(key, offset, bit, flags));
			}

			public Task<bool> StringSetBitAsync(RedisKey key, long offset, bool bit, CommandFlags flags = (CommandFlags)0)
			{
				//IL_0007: Unknown result type (might be due to invalid IL or missing references)
				//IL_0008: Unknown result type (might be due to invalid IL or missing references)
				//IL_001c: Unknown result type (might be due to invalid IL or missing references)
				//IL_001e: Unknown result type (might be due to invalid IL or missing references)
				return DoDecoratedOperation((IDatabase db) => ((IDatabaseAsync)db).StringSetBitAsync(key, offset, bit, flags));
			}

			public RedisValue StringSetRange(RedisKey key, long offset, RedisValue value, CommandFlags flags = (CommandFlags)0)
			{
				//IL_0007: Unknown result type (might be due to invalid IL or missing references)
				//IL_0008: Unknown result type (might be due to invalid IL or missing references)
				//IL_0015: Unknown result type (might be due to invalid IL or missing references)
				//IL_0016: Unknown result type (might be due to invalid IL or missing references)
				//IL_001c: Unknown result type (might be due to invalid IL or missing references)
				//IL_001e: Unknown result type (might be due to invalid IL or missing references)
				//IL_0030: Unknown result type (might be due to invalid IL or missing references)
				return DoDecoratedOperation((IDatabase db) => db.StringSetRange(key, offset, value, flags));
			}

			public Task<RedisValue> StringSetRangeAsync(RedisKey key, long offset, RedisValue value, CommandFlags flags = (CommandFlags)0)
			{
				//IL_0007: Unknown result type (might be due to invalid IL or missing references)
				//IL_0008: Unknown result type (might be due to invalid IL or missing references)
				//IL_0015: Unknown result type (might be due to invalid IL or missing references)
				//IL_0016: Unknown result type (might be due to invalid IL or missing references)
				//IL_001c: Unknown result type (might be due to invalid IL or missing references)
				//IL_001e: Unknown result type (might be due to invalid IL or missing references)
				return DoDecoratedOperation((IDatabase db) => ((IDatabaseAsync)db).StringSetRangeAsync(key, offset, value, flags));
			}

			public bool TryWait(Task task)
			{
				return DoDecoratedOperation((IDatabase db) => ((IRedisAsync)db).TryWait(task));
			}

			public void Wait(Task task)
			{
				DoDecoratedOperation(delegate(IDatabase db)
				{
					((IRedisAsync)db).Wait(task);
				});
			}

			public T Wait<T>(Task<T> task)
			{
				return DoDecoratedOperation((IDatabase db) => ((IRedisAsync)db).Wait<T>(task));
			}

			public void WaitAll(params Task[] tasks)
			{
				DoDecoratedOperation(delegate(IDatabase db)
				{
					((IRedisAsync)db).WaitAll(tasks);
				});
			}

			protected override void RaiseBadStateExceptionOccurred()
			{
				Action action = BadStateExceptionOccurred;
				if (action != null)
				{
					action();
				}
			}
		}

		private abstract class BadStateReportingBase<T> where T : class
		{
			[CompilerGenerated]
			private readonly T _003CDecorated_003Ek__BackingField;

			protected T Decorated
			{
				[CompilerGenerated]
				get
				{
					return _003CDecorated_003Ek__BackingField;
				}
			}

			public abstract event Action BadStateExceptionOccurred;

			protected BadStateReportingBase(T decorated)
			{
				if (decorated == null)
				{
					throw new ArgumentNullException("decorated");
				}
				_003CDecorated_003Ek__BackingField = decorated;
			}

			protected TResult DoDecoratedOperation<TResult>(Func<T, TResult> operation)
			{
				try
				{
					return operation(Decorated);
				}
				catch (RedisConnectionException)
				{
					RaiseBadStateExceptionOccurred();
					throw;
				}
				catch (RedisTimeoutException)
				{
					RaiseBadStateExceptionOccurred();
					throw;
				}
			}

			protected void DoDecoratedOperation(Action<T> operation)
			{
				try
				{
					operation(Decorated);
				}
				catch (RedisConnectionException)
				{
					RaiseBadStateExceptionOccurred();
					throw;
				}
				catch (RedisTimeoutException)
				{
					RaiseBadStateExceptionOccurred();
					throw;
				}
			}

			protected abstract void RaiseBadStateExceptionOccurred();
		}

		private class BadStateReportingBatch : BadStateReportingBase<IBatch>, IBatch, IDatabaseAsync, IRedisAsync
		{
			public ConnectionMultiplexer Multiplexer
			{
				get
				{
					return ((IRedisAsync)base.Decorated).Multiplexer;
				}
			}

			public override event Action BadStateExceptionOccurred;

			public BadStateReportingBatch(IBatch decorated)
				: base(decorated)
			{
			}

			public Task<RedisValue> DebugObjectAsync(RedisKey key, CommandFlags flags = (CommandFlags)0)
			{
				//IL_0007: Unknown result type (might be due to invalid IL or missing references)
				//IL_0008: Unknown result type (might be due to invalid IL or missing references)
				//IL_000e: Unknown result type (might be due to invalid IL or missing references)
				//IL_000f: Unknown result type (might be due to invalid IL or missing references)
				return DoDecoratedOperation((IBatch b) => ((IDatabaseAsync)b).DebugObjectAsync(key, flags));
			}

			public void Execute()
			{
				base.Decorated.Execute();
			}

			public Task<RedisResult> ExecuteAsync(string command, params object[] args)
			{
				return DoDecoratedOperation((IBatch b) => ((IDatabaseAsync)b).ExecuteAsync(command, args));
			}

			public Task<RedisResult> ExecuteAsync(string command, ICollection<object> args, CommandFlags flags = (CommandFlags)0)
			{
				//IL_0015: Unknown result type (might be due to invalid IL or missing references)
				//IL_0016: Unknown result type (might be due to invalid IL or missing references)
				return DoDecoratedOperation((IBatch b) => ((IDatabaseAsync)b).ExecuteAsync(command, args, flags));
			}

			public Task<bool> GeoAddAsync(RedisKey key, double longitude, double latitude, RedisValue member, CommandFlags flags = (CommandFlags)0)
			{
				//IL_0007: Unknown result type (might be due to invalid IL or missing references)
				//IL_0008: Unknown result type (might be due to invalid IL or missing references)
				//IL_001c: Unknown result type (might be due to invalid IL or missing references)
				//IL_001e: Unknown result type (might be due to invalid IL or missing references)
				//IL_0024: Unknown result type (might be due to invalid IL or missing references)
				//IL_0026: Unknown result type (might be due to invalid IL or missing references)
				return DoDecoratedOperation((IBatch b) => ((IDatabaseAsync)b).GeoAddAsync(key, longitude, latitude, member, flags));
			}

			public Task<bool> GeoAddAsync(RedisKey key, GeoEntry value, CommandFlags flags = (CommandFlags)0)
			{
				//IL_0007: Unknown result type (might be due to invalid IL or missing references)
				//IL_0008: Unknown result type (might be due to invalid IL or missing references)
				//IL_000e: Unknown result type (might be due to invalid IL or missing references)
				//IL_000f: Unknown result type (might be due to invalid IL or missing references)
				//IL_0015: Unknown result type (might be due to invalid IL or missing references)
				//IL_0016: Unknown result type (might be due to invalid IL or missing references)
				return DoDecoratedOperation((IBatch b) => ((IDatabaseAsync)b).GeoAddAsync(key, value, flags));
			}

			public Task<long> GeoAddAsync(RedisKey key, GeoEntry[] values, CommandFlags flags = (CommandFlags)0)
			{
				//IL_0007: Unknown result type (might be due to invalid IL or missing references)
				//IL_0008: Unknown result type (might be due to invalid IL or missing references)
				//IL_0015: Unknown result type (might be due to invalid IL or missing references)
				//IL_0016: Unknown result type (might be due to invalid IL or missing references)
				return DoDecoratedOperation((IBatch b) => ((IDatabaseAsync)b).GeoAddAsync(key, values, flags));
			}

			public Task<double?> GeoDistanceAsync(RedisKey key, RedisValue member1, RedisValue member2, GeoUnit unit = (GeoUnit)0, CommandFlags flags = (CommandFlags)0)
			{
				//IL_0007: Unknown result type (might be due to invalid IL or missing references)
				//IL_0008: Unknown result type (might be due to invalid IL or missing references)
				//IL_000e: Unknown result type (might be due to invalid IL or missing references)
				//IL_000f: Unknown result type (might be due to invalid IL or missing references)
				//IL_0015: Unknown result type (might be due to invalid IL or missing references)
				//IL_0016: Unknown result type (might be due to invalid IL or missing references)
				//IL_001c: Unknown result type (might be due to invalid IL or missing references)
				//IL_001e: Unknown result type (might be due to invalid IL or missing references)
				//IL_0024: Unknown result type (might be due to invalid IL or missing references)
				//IL_0026: Unknown result type (might be due to invalid IL or missing references)
				return DoDecoratedOperation((IBatch b) => ((IDatabaseAsync)b).GeoDistanceAsync(key, member1, member2, unit, flags));
			}

			public Task<string[]> GeoHashAsync(RedisKey key, RedisValue[] members, CommandFlags flags = (CommandFlags)0)
			{
				//IL_0007: Unknown result type (might be due to invalid IL or missing references)
				//IL_0008: Unknown result type (might be due to invalid IL or missing references)
				//IL_0015: Unknown result type (might be due to invalid IL or missing references)
				//IL_0016: Unknown result type (might be due to invalid IL or missing references)
				return DoDecoratedOperation((IBatch b) => ((IDatabaseAsync)b).GeoHashAsync(key, members, flags));
			}

			public Task<string> GeoHashAsync(RedisKey key, RedisValue member, CommandFlags flags = (CommandFlags)0)
			{
				//IL_0007: Unknown result type (might be due to invalid IL or missing references)
				//IL_0008: Unknown result type (might be due to invalid IL or missing references)
				//IL_000e: Unknown result type (might be due to invalid IL or missing references)
				//IL_000f: Unknown result type (might be due to invalid IL or missing references)
				//IL_0015: Unknown result type (might be due to invalid IL or missing references)
				//IL_0016: Unknown result type (might be due to invalid IL or missing references)
				return DoDecoratedOperation((IBatch b) => ((IDatabaseAsync)b).GeoHashAsync(key, member, flags));
			}

			public Task<GeoPosition?[]> GeoPositionAsync(RedisKey key, RedisValue[] members, CommandFlags flags = (CommandFlags)0)
			{
				//IL_0007: Unknown result type (might be due to invalid IL or missing references)
				//IL_0008: Unknown result type (might be due to invalid IL or missing references)
				//IL_0015: Unknown result type (might be due to invalid IL or missing references)
				//IL_0016: Unknown result type (might be due to invalid IL or missing references)
				return DoDecoratedOperation((IBatch b) => ((IDatabaseAsync)b).GeoPositionAsync(key, members, flags));
			}

			public Task<GeoPosition?> GeoPositionAsync(RedisKey key, RedisValue member, CommandFlags flags = (CommandFlags)0)
			{
				//IL_0007: Unknown result type (might be due to invalid IL or missing references)
				//IL_0008: Unknown result type (might be due to invalid IL or missing references)
				//IL_000e: Unknown result type (might be due to invalid IL or missing references)
				//IL_000f: Unknown result type (might be due to invalid IL or missing references)
				//IL_0015: Unknown result type (might be due to invalid IL or missing references)
				//IL_0016: Unknown result type (might be due to invalid IL or missing references)
				return DoDecoratedOperation((IBatch b) => ((IDatabaseAsync)b).GeoPositionAsync(key, member, flags));
			}

			public Task<GeoRadiusResult[]> GeoRadiusAsync(RedisKey key, RedisValue member, double radius, GeoUnit unit = (GeoUnit)0, int count = -1, Order? order = null, GeoRadiusOptions options = (GeoRadiusOptions)3, CommandFlags flags = (CommandFlags)0)
			{
				//IL_0007: Unknown result type (might be due to invalid IL or missing references)
				//IL_0008: Unknown result type (might be due to invalid IL or missing references)
				//IL_000e: Unknown result type (might be due to invalid IL or missing references)
				//IL_000f: Unknown result type (might be due to invalid IL or missing references)
				//IL_001c: Unknown result type (might be due to invalid IL or missing references)
				//IL_001e: Unknown result type (might be due to invalid IL or missing references)
				//IL_0034: Unknown result type (might be due to invalid IL or missing references)
				//IL_0036: Unknown result type (might be due to invalid IL or missing references)
				//IL_003c: Unknown result type (might be due to invalid IL or missing references)
				//IL_003e: Unknown result type (might be due to invalid IL or missing references)
				return DoDecoratedOperation((IBatch b) => ((IDatabaseAsync)b).GeoRadiusAsync(key, member, radius, unit, count, order, options, flags));
			}

			public Task<GeoRadiusResult[]> GeoRadiusAsync(RedisKey key, double longitude, double latitude, double radius, GeoUnit unit = (GeoUnit)0, int count = -1, Order? order = null, GeoRadiusOptions options = (GeoRadiusOptions)3, CommandFlags flags = (CommandFlags)0)
			{
				//IL_0007: Unknown result type (might be due to invalid IL or missing references)
				//IL_0008: Unknown result type (might be due to invalid IL or missing references)
				//IL_0024: Unknown result type (might be due to invalid IL or missing references)
				//IL_0026: Unknown result type (might be due to invalid IL or missing references)
				//IL_003c: Unknown result type (might be due to invalid IL or missing references)
				//IL_003e: Unknown result type (might be due to invalid IL or missing references)
				//IL_0044: Unknown result type (might be due to invalid IL or missing references)
				//IL_0046: Unknown result type (might be due to invalid IL or missing references)
				return DoDecoratedOperation((IBatch b) => ((IDatabaseAsync)b).GeoRadiusAsync(key, longitude, latitude, radius, unit, count, order, options, flags));
			}

			public Task<bool> GeoRemoveAsync(RedisKey key, RedisValue member, CommandFlags flags = (CommandFlags)0)
			{
				//IL_0007: Unknown result type (might be due to invalid IL or missing references)
				//IL_0008: Unknown result type (might be due to invalid IL or missing references)
				//IL_000e: Unknown result type (might be due to invalid IL or missing references)
				//IL_000f: Unknown result type (might be due to invalid IL or missing references)
				//IL_0015: Unknown result type (might be due to invalid IL or missing references)
				//IL_0016: Unknown result type (might be due to invalid IL or missing references)
				return DoDecoratedOperation((IBatch b) => ((IDatabaseAsync)b).GeoRemoveAsync(key, member, flags));
			}

			public Task<long> HashDecrementAsync(RedisKey key, RedisValue hashField, long value = 1L, CommandFlags flags = (CommandFlags)0)
			{
				//IL_0007: Unknown result type (might be due to invalid IL or missing references)
				//IL_0008: Unknown result type (might be due to invalid IL or missing references)
				//IL_000e: Unknown result type (might be due to invalid IL or missing references)
				//IL_000f: Unknown result type (might be due to invalid IL or missing references)
				//IL_001c: Unknown result type (might be due to invalid IL or missing references)
				//IL_001e: Unknown result type (might be due to invalid IL or missing references)
				return DoDecoratedOperation((IBatch b) => ((IDatabaseAsync)b).HashDecrementAsync(key, hashField, value, flags));
			}

			public Task<double> HashDecrementAsync(RedisKey key, RedisValue hashField, double value, CommandFlags flags = (CommandFlags)0)
			{
				//IL_0007: Unknown result type (might be due to invalid IL or missing references)
				//IL_0008: Unknown result type (might be due to invalid IL or missing references)
				//IL_000e: Unknown result type (might be due to invalid IL or missing references)
				//IL_000f: Unknown result type (might be due to invalid IL or missing references)
				//IL_001c: Unknown result type (might be due to invalid IL or missing references)
				//IL_001e: Unknown result type (might be due to invalid IL or missing references)
				return DoDecoratedOperation((IBatch b) => ((IDatabaseAsync)b).HashDecrementAsync(key, hashField, value, flags));
			}

			public Task<bool> HashDeleteAsync(RedisKey key, RedisValue hashField, CommandFlags flags = (CommandFlags)0)
			{
				//IL_0007: Unknown result type (might be due to invalid IL or missing references)
				//IL_0008: Unknown result type (might be due to invalid IL or missing references)
				//IL_000e: Unknown result type (might be due to invalid IL or missing references)
				//IL_000f: Unknown result type (might be due to invalid IL or missing references)
				//IL_0015: Unknown result type (might be due to invalid IL or missing references)
				//IL_0016: Unknown result type (might be due to invalid IL or missing references)
				return DoDecoratedOperation((IBatch b) => ((IDatabaseAsync)b).HashDeleteAsync(key, hashField, flags));
			}

			public Task<long> HashDeleteAsync(RedisKey key, RedisValue[] hashFields, CommandFlags flags = (CommandFlags)0)
			{
				//IL_0007: Unknown result type (might be due to invalid IL or missing references)
				//IL_0008: Unknown result type (might be due to invalid IL or missing references)
				//IL_0015: Unknown result type (might be due to invalid IL or missing references)
				//IL_0016: Unknown result type (might be due to invalid IL or missing references)
				return DoDecoratedOperation((IBatch b) => ((IDatabaseAsync)b).HashDeleteAsync(key, hashFields, flags));
			}

			public Task<bool> HashExistsAsync(RedisKey key, RedisValue hashField, CommandFlags flags = (CommandFlags)0)
			{
				//IL_0007: Unknown result type (might be due to invalid IL or missing references)
				//IL_0008: Unknown result type (might be due to invalid IL or missing references)
				//IL_000e: Unknown result type (might be due to invalid IL or missing references)
				//IL_000f: Unknown result type (might be due to invalid IL or missing references)
				//IL_0015: Unknown result type (might be due to invalid IL or missing references)
				//IL_0016: Unknown result type (might be due to invalid IL or missing references)
				return DoDecoratedOperation((IBatch b) => ((IDatabaseAsync)b).HashExistsAsync(key, hashField, flags));
			}

			public Task<HashEntry[]> HashGetAllAsync(RedisKey key, CommandFlags flags = (CommandFlags)0)
			{
				//IL_0007: Unknown result type (might be due to invalid IL or missing references)
				//IL_0008: Unknown result type (might be due to invalid IL or missing references)
				//IL_000e: Unknown result type (might be due to invalid IL or missing references)
				//IL_000f: Unknown result type (might be due to invalid IL or missing references)
				return DoDecoratedOperation((IBatch b) => ((IDatabaseAsync)b).HashGetAllAsync(key, flags));
			}

			public Task<RedisValue> HashGetAsync(RedisKey key, RedisValue hashField, CommandFlags flags = (CommandFlags)0)
			{
				//IL_0007: Unknown result type (might be due to invalid IL or missing references)
				//IL_0008: Unknown result type (might be due to invalid IL or missing references)
				//IL_000e: Unknown result type (might be due to invalid IL or missing references)
				//IL_000f: Unknown result type (might be due to invalid IL or missing references)
				//IL_0015: Unknown result type (might be due to invalid IL or missing references)
				//IL_0016: Unknown result type (might be due to invalid IL or missing references)
				return DoDecoratedOperation((IBatch b) => ((IDatabaseAsync)b).HashGetAsync(key, hashField, flags));
			}

			public Task<RedisValue[]> HashGetAsync(RedisKey key, RedisValue[] hashFields, CommandFlags flags = (CommandFlags)0)
			{
				//IL_0007: Unknown result type (might be due to invalid IL or missing references)
				//IL_0008: Unknown result type (might be due to invalid IL or missing references)
				//IL_0015: Unknown result type (might be due to invalid IL or missing references)
				//IL_0016: Unknown result type (might be due to invalid IL or missing references)
				return DoDecoratedOperation((IBatch b) => ((IDatabaseAsync)b).HashGetAsync(key, hashFields, flags));
			}

			public Task<long> HashIncrementAsync(RedisKey key, RedisValue hashField, long value = 1L, CommandFlags flags = (CommandFlags)0)
			{
				//IL_0007: Unknown result type (might be due to invalid IL or missing references)
				//IL_0008: Unknown result type (might be due to invalid IL or missing references)
				//IL_000e: Unknown result type (might be due to invalid IL or missing references)
				//IL_000f: Unknown result type (might be due to invalid IL or missing references)
				//IL_001c: Unknown result type (might be due to invalid IL or missing references)
				//IL_001e: Unknown result type (might be due to invalid IL or missing references)
				return DoDecoratedOperation((IBatch b) => ((IDatabaseAsync)b).HashIncrementAsync(key, hashField, value, flags));
			}

			public Task<double> HashIncrementAsync(RedisKey key, RedisValue hashField, double value, CommandFlags flags = (CommandFlags)0)
			{
				//IL_0007: Unknown result type (might be due to invalid IL or missing references)
				//IL_0008: Unknown result type (might be due to invalid IL or missing references)
				//IL_000e: Unknown result type (might be due to invalid IL or missing references)
				//IL_000f: Unknown result type (might be due to invalid IL or missing references)
				//IL_001c: Unknown result type (might be due to invalid IL or missing references)
				//IL_001e: Unknown result type (might be due to invalid IL or missing references)
				return DoDecoratedOperation((IBatch b) => ((IDatabaseAsync)b).HashIncrementAsync(key, hashField, value, flags));
			}

			public Task<RedisValue[]> HashKeysAsync(RedisKey key, CommandFlags flags = (CommandFlags)0)
			{
				//IL_0007: Unknown result type (might be due to invalid IL or missing references)
				//IL_0008: Unknown result type (might be due to invalid IL or missing references)
				//IL_000e: Unknown result type (might be due to invalid IL or missing references)
				//IL_000f: Unknown result type (might be due to invalid IL or missing references)
				return DoDecoratedOperation((IBatch b) => ((IDatabaseAsync)b).HashKeysAsync(key, flags));
			}

			public Task<long> HashLengthAsync(RedisKey key, CommandFlags flags = (CommandFlags)0)
			{
				//IL_0007: Unknown result type (might be due to invalid IL or missing references)
				//IL_0008: Unknown result type (might be due to invalid IL or missing references)
				//IL_000e: Unknown result type (might be due to invalid IL or missing references)
				//IL_000f: Unknown result type (might be due to invalid IL or missing references)
				return DoDecoratedOperation((IBatch b) => ((IDatabaseAsync)b).HashLengthAsync(key, flags));
			}

			public Task HashSetAsync(RedisKey key, HashEntry[] hashFields, CommandFlags flags = (CommandFlags)0)
			{
				//IL_0007: Unknown result type (might be due to invalid IL or missing references)
				//IL_0008: Unknown result type (might be due to invalid IL or missing references)
				//IL_0015: Unknown result type (might be due to invalid IL or missing references)
				//IL_0016: Unknown result type (might be due to invalid IL or missing references)
				return DoDecoratedOperation((IBatch b) => ((IDatabaseAsync)b).HashSetAsync(key, hashFields, flags));
			}

			public Task<bool> HashSetAsync(RedisKey key, RedisValue hashField, RedisValue value, When when = (When)0, CommandFlags flags = (CommandFlags)0)
			{
				//IL_0007: Unknown result type (might be due to invalid IL or missing references)
				//IL_0008: Unknown result type (might be due to invalid IL or missing references)
				//IL_000e: Unknown result type (might be due to invalid IL or missing references)
				//IL_000f: Unknown result type (might be due to invalid IL or missing references)
				//IL_0015: Unknown result type (might be due to invalid IL or missing references)
				//IL_0016: Unknown result type (might be due to invalid IL or missing references)
				//IL_001c: Unknown result type (might be due to invalid IL or missing references)
				//IL_001e: Unknown result type (might be due to invalid IL or missing references)
				//IL_0024: Unknown result type (might be due to invalid IL or missing references)
				//IL_0026: Unknown result type (might be due to invalid IL or missing references)
				return DoDecoratedOperation((IBatch b) => ((IDatabaseAsync)b).HashSetAsync(key, hashField, value, when, flags));
			}

			public Task<RedisValue[]> HashValuesAsync(RedisKey key, CommandFlags flags = (CommandFlags)0)
			{
				//IL_0007: Unknown result type (might be due to invalid IL or missing references)
				//IL_0008: Unknown result type (might be due to invalid IL or missing references)
				//IL_000e: Unknown result type (might be due to invalid IL or missing references)
				//IL_000f: Unknown result type (might be due to invalid IL or missing references)
				return DoDecoratedOperation((IBatch b) => ((IDatabaseAsync)b).HashValuesAsync(key, flags));
			}

			public Task<bool> HyperLogLogAddAsync(RedisKey key, RedisValue value, CommandFlags flags = (CommandFlags)0)
			{
				//IL_0007: Unknown result type (might be due to invalid IL or missing references)
				//IL_0008: Unknown result type (might be due to invalid IL or missing references)
				//IL_000e: Unknown result type (might be due to invalid IL or missing references)
				//IL_000f: Unknown result type (might be due to invalid IL or missing references)
				//IL_0015: Unknown result type (might be due to invalid IL or missing references)
				//IL_0016: Unknown result type (might be due to invalid IL or missing references)
				return DoDecoratedOperation((IBatch b) => ((IDatabaseAsync)b).HyperLogLogAddAsync(key, value, flags));
			}

			public Task<bool> HyperLogLogAddAsync(RedisKey key, RedisValue[] values, CommandFlags flags = (CommandFlags)0)
			{
				//IL_0007: Unknown result type (might be due to invalid IL or missing references)
				//IL_0008: Unknown result type (might be due to invalid IL or missing references)
				//IL_0015: Unknown result type (might be due to invalid IL or missing references)
				//IL_0016: Unknown result type (might be due to invalid IL or missing references)
				return DoDecoratedOperation((IBatch b) => ((IDatabaseAsync)b).HyperLogLogAddAsync(key, values, flags));
			}

			public Task<long> HyperLogLogLengthAsync(RedisKey key, CommandFlags flags = (CommandFlags)0)
			{
				//IL_0007: Unknown result type (might be due to invalid IL or missing references)
				//IL_0008: Unknown result type (might be due to invalid IL or missing references)
				//IL_000e: Unknown result type (might be due to invalid IL or missing references)
				//IL_000f: Unknown result type (might be due to invalid IL or missing references)
				return DoDecoratedOperation((IBatch b) => ((IDatabaseAsync)b).HyperLogLogLengthAsync(key, flags));
			}

			public Task<long> HyperLogLogLengthAsync(RedisKey[] keys, CommandFlags flags = (CommandFlags)0)
			{
				//IL_000e: Unknown result type (might be due to invalid IL or missing references)
				//IL_000f: Unknown result type (might be due to invalid IL or missing references)
				return DoDecoratedOperation((IBatch b) => ((IDatabaseAsync)b).HyperLogLogLengthAsync(keys, flags));
			}

			public Task HyperLogLogMergeAsync(RedisKey destination, RedisKey first, RedisKey second, CommandFlags flags = (CommandFlags)0)
			{
				//IL_0007: Unknown result type (might be due to invalid IL or missing references)
				//IL_0008: Unknown result type (might be due to invalid IL or missing references)
				//IL_000e: Unknown result type (might be due to invalid IL or missing references)
				//IL_000f: Unknown result type (might be due to invalid IL or missing references)
				//IL_0015: Unknown result type (might be due to invalid IL or missing references)
				//IL_0016: Unknown result type (might be due to invalid IL or missing references)
				//IL_001c: Unknown result type (might be due to invalid IL or missing references)
				//IL_001e: Unknown result type (might be due to invalid IL or missing references)
				return DoDecoratedOperation((IBatch b) => ((IDatabaseAsync)b).HyperLogLogMergeAsync(destination, first, second, flags));
			}

			public Task HyperLogLogMergeAsync(RedisKey destination, RedisKey[] sourceKeys, CommandFlags flags = (CommandFlags)0)
			{
				//IL_0007: Unknown result type (might be due to invalid IL or missing references)
				//IL_0008: Unknown result type (might be due to invalid IL or missing references)
				//IL_0015: Unknown result type (might be due to invalid IL or missing references)
				//IL_0016: Unknown result type (might be due to invalid IL or missing references)
				return DoDecoratedOperation((IBatch b) => ((IDatabaseAsync)b).HyperLogLogMergeAsync(destination, sourceKeys, flags));
			}

			public Task<EndPoint> IdentifyEndpointAsync(RedisKey key = default(RedisKey), CommandFlags flags = (CommandFlags)0)
			{
				//IL_0007: Unknown result type (might be due to invalid IL or missing references)
				//IL_0008: Unknown result type (might be due to invalid IL or missing references)
				//IL_000e: Unknown result type (might be due to invalid IL or missing references)
				//IL_000f: Unknown result type (might be due to invalid IL or missing references)
				return DoDecoratedOperation((IBatch b) => ((IDatabaseAsync)b).IdentifyEndpointAsync(key, flags));
			}

			public bool IsConnected(RedisKey key, CommandFlags flags = (CommandFlags)0)
			{
				//IL_0007: Unknown result type (might be due to invalid IL or missing references)
				//IL_0008: Unknown result type (might be due to invalid IL or missing references)
				//IL_000e: Unknown result type (might be due to invalid IL or missing references)
				//IL_000f: Unknown result type (might be due to invalid IL or missing references)
				return DoDecoratedOperation((IBatch b) => ((IDatabaseAsync)b).IsConnected(key, flags));
			}

			public Task<bool> KeyDeleteAsync(RedisKey key, CommandFlags flags = (CommandFlags)0)
			{
				//IL_0007: Unknown result type (might be due to invalid IL or missing references)
				//IL_0008: Unknown result type (might be due to invalid IL or missing references)
				//IL_000e: Unknown result type (might be due to invalid IL or missing references)
				//IL_000f: Unknown result type (might be due to invalid IL or missing references)
				return DoDecoratedOperation((IBatch b) => ((IDatabaseAsync)b).KeyDeleteAsync(key, flags));
			}

			public Task<long> KeyDeleteAsync(RedisKey[] keys, CommandFlags flags = (CommandFlags)0)
			{
				//IL_000e: Unknown result type (might be due to invalid IL or missing references)
				//IL_000f: Unknown result type (might be due to invalid IL or missing references)
				return DoDecoratedOperation((IBatch b) => ((IDatabaseAsync)b).KeyDeleteAsync(keys, flags));
			}

			public Task<byte[]> KeyDumpAsync(RedisKey key, CommandFlags flags = (CommandFlags)0)
			{
				//IL_0007: Unknown result type (might be due to invalid IL or missing references)
				//IL_0008: Unknown result type (might be due to invalid IL or missing references)
				//IL_000e: Unknown result type (might be due to invalid IL or missing references)
				//IL_000f: Unknown result type (might be due to invalid IL or missing references)
				return DoDecoratedOperation((IBatch b) => ((IDatabaseAsync)b).KeyDumpAsync(key, flags));
			}

			public Task<bool> KeyExistsAsync(RedisKey key, CommandFlags flags = (CommandFlags)0)
			{
				//IL_0007: Unknown result type (might be due to invalid IL or missing references)
				//IL_0008: Unknown result type (might be due to invalid IL or missing references)
				//IL_000e: Unknown result type (might be due to invalid IL or missing references)
				//IL_000f: Unknown result type (might be due to invalid IL or missing references)
				return DoDecoratedOperation((IBatch b) => ((IDatabaseAsync)b).KeyExistsAsync(key, flags));
			}

			public Task<bool> KeyExpireAsync(RedisKey key, TimeSpan? expiry, CommandFlags flags = (CommandFlags)0)
			{
				//IL_0007: Unknown result type (might be due to invalid IL or missing references)
				//IL_0008: Unknown result type (might be due to invalid IL or missing references)
				//IL_0015: Unknown result type (might be due to invalid IL or missing references)
				//IL_0016: Unknown result type (might be due to invalid IL or missing references)
				return DoDecoratedOperation((IBatch b) => ((IDatabaseAsync)b).KeyExpireAsync(key, expiry, flags));
			}

			public Task<bool> KeyExpireAsync(RedisKey key, DateTime? expiry, CommandFlags flags = (CommandFlags)0)
			{
				//IL_0007: Unknown result type (might be due to invalid IL or missing references)
				//IL_0008: Unknown result type (might be due to invalid IL or missing references)
				//IL_0015: Unknown result type (might be due to invalid IL or missing references)
				//IL_0016: Unknown result type (might be due to invalid IL or missing references)
				return DoDecoratedOperation((IBatch b) => ((IDatabaseAsync)b).KeyExpireAsync(key, expiry, flags));
			}

			public Task KeyMigrateAsync(RedisKey key, EndPoint toServer, int toDatabase = 0, int timeoutMilliseconds = 0, MigrateOptions migrateOptions = (MigrateOptions)0, CommandFlags flags = (CommandFlags)0)
			{
				//IL_0007: Unknown result type (might be due to invalid IL or missing references)
				//IL_0008: Unknown result type (might be due to invalid IL or missing references)
				//IL_0024: Unknown result type (might be due to invalid IL or missing references)
				//IL_0026: Unknown result type (might be due to invalid IL or missing references)
				//IL_002c: Unknown result type (might be due to invalid IL or missing references)
				//IL_002e: Unknown result type (might be due to invalid IL or missing references)
				return DoDecoratedOperation((IBatch b) => ((IDatabaseAsync)b).KeyMigrateAsync(key, toServer, toDatabase, timeoutMilliseconds, migrateOptions, flags));
			}

			public Task<bool> KeyMoveAsync(RedisKey key, int database, CommandFlags flags = (CommandFlags)0)
			{
				//IL_0007: Unknown result type (might be due to invalid IL or missing references)
				//IL_0008: Unknown result type (might be due to invalid IL or missing references)
				//IL_0015: Unknown result type (might be due to invalid IL or missing references)
				//IL_0016: Unknown result type (might be due to invalid IL or missing references)
				return DoDecoratedOperation((IBatch b) => ((IDatabaseAsync)b).KeyMoveAsync(key, database, flags));
			}

			public Task<bool> KeyPersistAsync(RedisKey key, CommandFlags flags = (CommandFlags)0)
			{
				//IL_0007: Unknown result type (might be due to invalid IL or missing references)
				//IL_0008: Unknown result type (might be due to invalid IL or missing references)
				//IL_000e: Unknown result type (might be due to invalid IL or missing references)
				//IL_000f: Unknown result type (might be due to invalid IL or missing references)
				return DoDecoratedOperation((IBatch b) => ((IDatabaseAsync)b).KeyPersistAsync(key, flags));
			}

			public Task<RedisKey> KeyRandomAsync(CommandFlags flags = (CommandFlags)0)
			{
				//IL_0007: Unknown result type (might be due to invalid IL or missing references)
				//IL_0008: Unknown result type (might be due to invalid IL or missing references)
				return DoDecoratedOperation((IBatch b) => ((IDatabaseAsync)b).KeyRandomAsync(flags));
			}

			public Task<bool> KeyRenameAsync(RedisKey key, RedisKey newKey, When when = (When)0, CommandFlags flags = (CommandFlags)0)
			{
				//IL_0007: Unknown result type (might be due to invalid IL or missing references)
				//IL_0008: Unknown result type (might be due to invalid IL or missing references)
				//IL_000e: Unknown result type (might be due to invalid IL or missing references)
				//IL_000f: Unknown result type (might be due to invalid IL or missing references)
				//IL_0015: Unknown result type (might be due to invalid IL or missing references)
				//IL_0016: Unknown result type (might be due to invalid IL or missing references)
				//IL_001c: Unknown result type (might be due to invalid IL or missing references)
				//IL_001e: Unknown result type (might be due to invalid IL or missing references)
				return DoDecoratedOperation((IBatch b) => ((IDatabaseAsync)b).KeyRenameAsync(key, newKey, when, flags));
			}

			public Task KeyRestoreAsync(RedisKey key, byte[] value, TimeSpan? expiry = null, CommandFlags flags = (CommandFlags)0)
			{
				//IL_0007: Unknown result type (might be due to invalid IL or missing references)
				//IL_0008: Unknown result type (might be due to invalid IL or missing references)
				//IL_001c: Unknown result type (might be due to invalid IL or missing references)
				//IL_001e: Unknown result type (might be due to invalid IL or missing references)
				return DoDecoratedOperation((IBatch b) => ((IDatabaseAsync)b).KeyRestoreAsync(key, value, expiry, flags));
			}

			public Task<TimeSpan?> KeyTimeToLiveAsync(RedisKey key, CommandFlags flags = (CommandFlags)0)
			{
				//IL_0007: Unknown result type (might be due to invalid IL or missing references)
				//IL_0008: Unknown result type (might be due to invalid IL or missing references)
				//IL_000e: Unknown result type (might be due to invalid IL or missing references)
				//IL_000f: Unknown result type (might be due to invalid IL or missing references)
				return DoDecoratedOperation((IBatch b) => ((IDatabaseAsync)b).KeyTimeToLiveAsync(key, flags));
			}

			public Task<RedisType> KeyTypeAsync(RedisKey key, CommandFlags flags = (CommandFlags)0)
			{
				//IL_0007: Unknown result type (might be due to invalid IL or missing references)
				//IL_0008: Unknown result type (might be due to invalid IL or missing references)
				//IL_000e: Unknown result type (might be due to invalid IL or missing references)
				//IL_000f: Unknown result type (might be due to invalid IL or missing references)
				return DoDecoratedOperation((IBatch b) => ((IDatabaseAsync)b).KeyTypeAsync(key, flags));
			}

			public Task<RedisValue> ListGetByIndexAsync(RedisKey key, long index, CommandFlags flags = (CommandFlags)0)
			{
				//IL_0007: Unknown result type (might be due to invalid IL or missing references)
				//IL_0008: Unknown result type (might be due to invalid IL or missing references)
				//IL_0015: Unknown result type (might be due to invalid IL or missing references)
				//IL_0016: Unknown result type (might be due to invalid IL or missing references)
				return DoDecoratedOperation((IBatch b) => ((IDatabaseAsync)b).ListGetByIndexAsync(key, index, flags));
			}

			public Task<long> ListInsertAfterAsync(RedisKey key, RedisValue pivot, RedisValue value, CommandFlags flags = (CommandFlags)0)
			{
				//IL_0007: Unknown result type (might be due to invalid IL or missing references)
				//IL_0008: Unknown result type (might be due to invalid IL or missing references)
				//IL_000e: Unknown result type (might be due to invalid IL or missing references)
				//IL_000f: Unknown result type (might be due to invalid IL or missing references)
				//IL_0015: Unknown result type (might be due to invalid IL or missing references)
				//IL_0016: Unknown result type (might be due to invalid IL or missing references)
				//IL_001c: Unknown result type (might be due to invalid IL or missing references)
				//IL_001e: Unknown result type (might be due to invalid IL or missing references)
				return DoDecoratedOperation((IBatch b) => ((IDatabaseAsync)b).ListInsertAfterAsync(key, pivot, value, flags));
			}

			public Task<long> ListInsertBeforeAsync(RedisKey key, RedisValue pivot, RedisValue value, CommandFlags flags = (CommandFlags)0)
			{
				//IL_0007: Unknown result type (might be due to invalid IL or missing references)
				//IL_0008: Unknown result type (might be due to invalid IL or missing references)
				//IL_000e: Unknown result type (might be due to invalid IL or missing references)
				//IL_000f: Unknown result type (might be due to invalid IL or missing references)
				//IL_0015: Unknown result type (might be due to invalid IL or missing references)
				//IL_0016: Unknown result type (might be due to invalid IL or missing references)
				//IL_001c: Unknown result type (might be due to invalid IL or missing references)
				//IL_001e: Unknown result type (might be due to invalid IL or missing references)
				return DoDecoratedOperation((IBatch b) => ((IDatabaseAsync)b).ListInsertBeforeAsync(key, pivot, value, flags));
			}

			public Task<RedisValue> ListLeftPopAsync(RedisKey key, CommandFlags flags = (CommandFlags)0)
			{
				//IL_0007: Unknown result type (might be due to invalid IL or missing references)
				//IL_0008: Unknown result type (might be due to invalid IL or missing references)
				//IL_000e: Unknown result type (might be due to invalid IL or missing references)
				//IL_000f: Unknown result type (might be due to invalid IL or missing references)
				return DoDecoratedOperation((IBatch b) => ((IDatabaseAsync)b).ListLeftPopAsync(key, flags));
			}

			public Task<long> ListLeftPushAsync(RedisKey key, RedisValue value, When when = (When)0, CommandFlags flags = (CommandFlags)0)
			{
				//IL_0007: Unknown result type (might be due to invalid IL or missing references)
				//IL_0008: Unknown result type (might be due to invalid IL or missing references)
				//IL_000e: Unknown result type (might be due to invalid IL or missing references)
				//IL_000f: Unknown result type (might be due to invalid IL or missing references)
				//IL_0015: Unknown result type (might be due to invalid IL or missing references)
				//IL_0016: Unknown result type (might be due to invalid IL or missing references)
				//IL_001c: Unknown result type (might be due to invalid IL or missing references)
				//IL_001e: Unknown result type (might be due to invalid IL or missing references)
				return DoDecoratedOperation((IBatch b) => ((IDatabaseAsync)b).ListLeftPushAsync(key, value, when, flags));
			}

			public Task<long> ListLeftPushAsync(RedisKey key, RedisValue[] values, CommandFlags flags = (CommandFlags)0)
			{
				//IL_0007: Unknown result type (might be due to invalid IL or missing references)
				//IL_0008: Unknown result type (might be due to invalid IL or missing references)
				//IL_0015: Unknown result type (might be due to invalid IL or missing references)
				//IL_0016: Unknown result type (might be due to invalid IL or missing references)
				return DoDecoratedOperation((IBatch b) => ((IDatabaseAsync)b).ListLeftPushAsync(key, values, flags));
			}

			public Task<long> ListLengthAsync(RedisKey key, CommandFlags flags = (CommandFlags)0)
			{
				//IL_0007: Unknown result type (might be due to invalid IL or missing references)
				//IL_0008: Unknown result type (might be due to invalid IL or missing references)
				//IL_000e: Unknown result type (might be due to invalid IL or missing references)
				//IL_000f: Unknown result type (might be due to invalid IL or missing references)
				return DoDecoratedOperation((IBatch b) => ((IDatabaseAsync)b).ListLengthAsync(key, flags));
			}

			public Task<RedisValue[]> ListRangeAsync(RedisKey key, long start = 0L, long stop = -1L, CommandFlags flags = (CommandFlags)0)
			{
				//IL_0007: Unknown result type (might be due to invalid IL or missing references)
				//IL_0008: Unknown result type (might be due to invalid IL or missing references)
				//IL_001c: Unknown result type (might be due to invalid IL or missing references)
				//IL_001e: Unknown result type (might be due to invalid IL or missing references)
				return DoDecoratedOperation((IBatch b) => ((IDatabaseAsync)b).ListRangeAsync(key, start, stop, flags));
			}

			public Task<long> ListRemoveAsync(RedisKey key, RedisValue value, long count = 0L, CommandFlags flags = (CommandFlags)0)
			{
				//IL_0007: Unknown result type (might be due to invalid IL or missing references)
				//IL_0008: Unknown result type (might be due to invalid IL or missing references)
				//IL_000e: Unknown result type (might be due to invalid IL or missing references)
				//IL_000f: Unknown result type (might be due to invalid IL or missing references)
				//IL_001c: Unknown result type (might be due to invalid IL or missing references)
				//IL_001e: Unknown result type (might be due to invalid IL or missing references)
				return DoDecoratedOperation((IBatch b) => ((IDatabaseAsync)b).ListRemoveAsync(key, value, count, flags));
			}

			public Task<RedisValue> ListRightPopAsync(RedisKey key, CommandFlags flags = (CommandFlags)0)
			{
				//IL_0007: Unknown result type (might be due to invalid IL or missing references)
				//IL_0008: Unknown result type (might be due to invalid IL or missing references)
				//IL_000e: Unknown result type (might be due to invalid IL or missing references)
				//IL_000f: Unknown result type (might be due to invalid IL or missing references)
				return DoDecoratedOperation((IBatch b) => ((IDatabaseAsync)b).ListRightPopAsync(key, flags));
			}

			public Task<RedisValue> ListRightPopLeftPushAsync(RedisKey source, RedisKey destination, CommandFlags flags = (CommandFlags)0)
			{
				//IL_0007: Unknown result type (might be due to invalid IL or missing references)
				//IL_0008: Unknown result type (might be due to invalid IL or missing references)
				//IL_000e: Unknown result type (might be due to invalid IL or missing references)
				//IL_000f: Unknown result type (might be due to invalid IL or missing references)
				//IL_0015: Unknown result type (might be due to invalid IL or missing references)
				//IL_0016: Unknown result type (might be due to invalid IL or missing references)
				return DoDecoratedOperation((IBatch b) => ((IDatabaseAsync)b).ListRightPopLeftPushAsync(source, destination, flags));
			}

			public Task<long> ListRightPushAsync(RedisKey key, RedisValue value, When when = (When)0, CommandFlags flags = (CommandFlags)0)
			{
				//IL_0007: Unknown result type (might be due to invalid IL or missing references)
				//IL_0008: Unknown result type (might be due to invalid IL or missing references)
				//IL_000e: Unknown result type (might be due to invalid IL or missing references)
				//IL_000f: Unknown result type (might be due to invalid IL or missing references)
				//IL_0015: Unknown result type (might be due to invalid IL or missing references)
				//IL_0016: Unknown result type (might be due to invalid IL or missing references)
				//IL_001c: Unknown result type (might be due to invalid IL or missing references)
				//IL_001e: Unknown result type (might be due to invalid IL or missing references)
				return DoDecoratedOperation((IBatch b) => ((IDatabaseAsync)b).ListRightPushAsync(key, value, when, flags));
			}

			public Task<long> ListRightPushAsync(RedisKey key, RedisValue[] values, CommandFlags flags = (CommandFlags)0)
			{
				//IL_0007: Unknown result type (might be due to invalid IL or missing references)
				//IL_0008: Unknown result type (might be due to invalid IL or missing references)
				//IL_0015: Unknown result type (might be due to invalid IL or missing references)
				//IL_0016: Unknown result type (might be due to invalid IL or missing references)
				return DoDecoratedOperation((IBatch b) => ((IDatabaseAsync)b).ListRightPushAsync(key, values, flags));
			}

			public Task ListSetByIndexAsync(RedisKey key, long index, RedisValue value, CommandFlags flags = (CommandFlags)0)
			{
				//IL_0007: Unknown result type (might be due to invalid IL or missing references)
				//IL_0008: Unknown result type (might be due to invalid IL or missing references)
				//IL_0015: Unknown result type (might be due to invalid IL or missing references)
				//IL_0016: Unknown result type (might be due to invalid IL or missing references)
				//IL_001c: Unknown result type (might be due to invalid IL or missing references)
				//IL_001e: Unknown result type (might be due to invalid IL or missing references)
				return DoDecoratedOperation((IBatch b) => ((IDatabaseAsync)b).ListSetByIndexAsync(key, index, value, flags));
			}

			public Task ListTrimAsync(RedisKey key, long start, long stop, CommandFlags flags = (CommandFlags)0)
			{
				//IL_0007: Unknown result type (might be due to invalid IL or missing references)
				//IL_0008: Unknown result type (might be due to invalid IL or missing references)
				//IL_001c: Unknown result type (might be due to invalid IL or missing references)
				//IL_001e: Unknown result type (might be due to invalid IL or missing references)
				return DoDecoratedOperation((IBatch b) => ((IDatabaseAsync)b).ListTrimAsync(key, start, stop, flags));
			}

			public Task<bool> LockExtendAsync(RedisKey key, RedisValue value, TimeSpan expiry, CommandFlags flags = (CommandFlags)0)
			{
				//IL_0007: Unknown result type (might be due to invalid IL or missing references)
				//IL_0008: Unknown result type (might be due to invalid IL or missing references)
				//IL_000e: Unknown result type (might be due to invalid IL or missing references)
				//IL_000f: Unknown result type (might be due to invalid IL or missing references)
				//IL_001c: Unknown result type (might be due to invalid IL or missing references)
				//IL_001e: Unknown result type (might be due to invalid IL or missing references)
				return DoDecoratedOperation((IBatch b) => ((IDatabaseAsync)b).LockExtendAsync(key, value, expiry, flags));
			}

			public Task<RedisValue> LockQueryAsync(RedisKey key, CommandFlags flags = (CommandFlags)0)
			{
				//IL_0007: Unknown result type (might be due to invalid IL or missing references)
				//IL_0008: Unknown result type (might be due to invalid IL or missing references)
				//IL_000e: Unknown result type (might be due to invalid IL or missing references)
				//IL_000f: Unknown result type (might be due to invalid IL or missing references)
				return DoDecoratedOperation((IBatch b) => ((IDatabaseAsync)b).LockQueryAsync(key, flags));
			}

			public Task<bool> LockReleaseAsync(RedisKey key, RedisValue value, CommandFlags flags = (CommandFlags)0)
			{
				//IL_0007: Unknown result type (might be due to invalid IL or missing references)
				//IL_0008: Unknown result type (might be due to invalid IL or missing references)
				//IL_000e: Unknown result type (might be due to invalid IL or missing references)
				//IL_000f: Unknown result type (might be due to invalid IL or missing references)
				//IL_0015: Unknown result type (might be due to invalid IL or missing references)
				//IL_0016: Unknown result type (might be due to invalid IL or missing references)
				return DoDecoratedOperation((IBatch b) => ((IDatabaseAsync)b).LockReleaseAsync(key, value, flags));
			}

			public Task<bool> LockTakeAsync(RedisKey key, RedisValue value, TimeSpan expiry, CommandFlags flags = (CommandFlags)0)
			{
				//IL_0007: Unknown result type (might be due to invalid IL or missing references)
				//IL_0008: Unknown result type (might be due to invalid IL or missing references)
				//IL_000e: Unknown result type (might be due to invalid IL or missing references)
				//IL_000f: Unknown result type (might be due to invalid IL or missing references)
				//IL_001c: Unknown result type (might be due to invalid IL or missing references)
				//IL_001e: Unknown result type (might be due to invalid IL or missing references)
				return DoDecoratedOperation((IBatch b) => ((IDatabaseAsync)b).LockTakeAsync(key, value, expiry, flags));
			}

			public Task<TimeSpan> PingAsync(CommandFlags flags = (CommandFlags)0)
			{
				//IL_0007: Unknown result type (might be due to invalid IL or missing references)
				//IL_0008: Unknown result type (might be due to invalid IL or missing references)
				return DoDecoratedOperation((IBatch b) => ((IRedisAsync)b).PingAsync(flags));
			}

			public Task<long> PublishAsync(RedisChannel channel, RedisValue message, CommandFlags flags = (CommandFlags)0)
			{
				//IL_0007: Unknown result type (might be due to invalid IL or missing references)
				//IL_0008: Unknown result type (might be due to invalid IL or missing references)
				//IL_000e: Unknown result type (might be due to invalid IL or missing references)
				//IL_000f: Unknown result type (might be due to invalid IL or missing references)
				//IL_0015: Unknown result type (might be due to invalid IL or missing references)
				//IL_0016: Unknown result type (might be due to invalid IL or missing references)
				return DoDecoratedOperation((IBatch b) => ((IDatabaseAsync)b).PublishAsync(channel, message, flags));
			}

			public Task<RedisResult> ScriptEvaluateAsync(string script, RedisKey[] keys = null, RedisValue[] values = null, CommandFlags flags = (CommandFlags)0)
			{
				//IL_001c: Unknown result type (might be due to invalid IL or missing references)
				//IL_001e: Unknown result type (might be due to invalid IL or missing references)
				return DoDecoratedOperation((IBatch b) => ((IDatabaseAsync)b).ScriptEvaluateAsync(script, keys, values, flags));
			}

			public Task<RedisResult> ScriptEvaluateAsync(byte[] hash, RedisKey[] keys = null, RedisValue[] values = null, CommandFlags flags = (CommandFlags)0)
			{
				//IL_001c: Unknown result type (might be due to invalid IL or missing references)
				//IL_001e: Unknown result type (might be due to invalid IL or missing references)
				return DoDecoratedOperation((IBatch b) => ((IDatabaseAsync)b).ScriptEvaluateAsync(hash, keys, values, flags));
			}

			public Task<RedisResult> ScriptEvaluateAsync(LuaScript script, object parameters = null, CommandFlags flags = (CommandFlags)0)
			{
				//IL_0015: Unknown result type (might be due to invalid IL or missing references)
				//IL_0016: Unknown result type (might be due to invalid IL or missing references)
				return DoDecoratedOperation((IBatch b) => ((IDatabaseAsync)b).ScriptEvaluateAsync(script, parameters, flags));
			}

			public Task<RedisResult> ScriptEvaluateAsync(LoadedLuaScript script, object parameters = null, CommandFlags flags = (CommandFlags)0)
			{
				//IL_0015: Unknown result type (might be due to invalid IL or missing references)
				//IL_0016: Unknown result type (might be due to invalid IL or missing references)
				return DoDecoratedOperation((IBatch b) => ((IDatabaseAsync)b).ScriptEvaluateAsync(script, parameters, flags));
			}

			public Task<bool> SetAddAsync(RedisKey key, RedisValue value, CommandFlags flags = (CommandFlags)0)
			{
				//IL_0007: Unknown result type (might be due to invalid IL or missing references)
				//IL_0008: Unknown result type (might be due to invalid IL or missing references)
				//IL_000e: Unknown result type (might be due to invalid IL or missing references)
				//IL_000f: Unknown result type (might be due to invalid IL or missing references)
				//IL_0015: Unknown result type (might be due to invalid IL or missing references)
				//IL_0016: Unknown result type (might be due to invalid IL or missing references)
				return DoDecoratedOperation((IBatch b) => ((IDatabaseAsync)b).SetAddAsync(key, value, flags));
			}

			public Task<long> SetAddAsync(RedisKey key, RedisValue[] values, CommandFlags flags = (CommandFlags)0)
			{
				//IL_0007: Unknown result type (might be due to invalid IL or missing references)
				//IL_0008: Unknown result type (might be due to invalid IL or missing references)
				//IL_0015: Unknown result type (might be due to invalid IL or missing references)
				//IL_0016: Unknown result type (might be due to invalid IL or missing references)
				return DoDecoratedOperation((IBatch b) => ((IDatabaseAsync)b).SetAddAsync(key, values, flags));
			}

			public Task<long> SetCombineAndStoreAsync(SetOperation operation, RedisKey destination, RedisKey first, RedisKey second, CommandFlags flags = (CommandFlags)0)
			{
				//IL_0007: Unknown result type (might be due to invalid IL or missing references)
				//IL_0008: Unknown result type (might be due to invalid IL or missing references)
				//IL_000e: Unknown result type (might be due to invalid IL or missing references)
				//IL_000f: Unknown result type (might be due to invalid IL or missing references)
				//IL_0015: Unknown result type (might be due to invalid IL or missing references)
				//IL_0016: Unknown result type (might be due to invalid IL or missing references)
				//IL_001c: Unknown result type (might be due to invalid IL or missing references)
				//IL_001e: Unknown result type (might be due to invalid IL or missing references)
				//IL_0024: Unknown result type (might be due to invalid IL or missing references)
				//IL_0026: Unknown result type (might be due to invalid IL or missing references)
				return DoDecoratedOperation((IBatch b) => ((IDatabaseAsync)b).SetCombineAndStoreAsync(operation, destination, first, second, flags));
			}

			public Task<long> SetCombineAndStoreAsync(SetOperation operation, RedisKey destination, RedisKey[] keys, CommandFlags flags = (CommandFlags)0)
			{
				//IL_0007: Unknown result type (might be due to invalid IL or missing references)
				//IL_0008: Unknown result type (might be due to invalid IL or missing references)
				//IL_000e: Unknown result type (might be due to invalid IL or missing references)
				//IL_000f: Unknown result type (might be due to invalid IL or missing references)
				//IL_001c: Unknown result type (might be due to invalid IL or missing references)
				//IL_001e: Unknown result type (might be due to invalid IL or missing references)
				return DoDecoratedOperation((IBatch b) => ((IDatabaseAsync)b).SetCombineAndStoreAsync(operation, destination, keys, flags));
			}

			public Task<RedisValue[]> SetCombineAsync(SetOperation operation, RedisKey first, RedisKey second, CommandFlags flags = (CommandFlags)0)
			{
				//IL_0007: Unknown result type (might be due to invalid IL or missing references)
				//IL_0008: Unknown result type (might be due to invalid IL or missing references)
				//IL_000e: Unknown result type (might be due to invalid IL or missing references)
				//IL_000f: Unknown result type (might be due to invalid IL or missing references)
				//IL_0015: Unknown result type (might be due to invalid IL or missing references)
				//IL_0016: Unknown result type (might be due to invalid IL or missing references)
				//IL_001c: Unknown result type (might be due to invalid IL or missing references)
				//IL_001e: Unknown result type (might be due to invalid IL or missing references)
				return DoDecoratedOperation((IBatch b) => ((IDatabaseAsync)b).SetCombineAsync(operation, first, second, flags));
			}

			public Task<RedisValue[]> SetCombineAsync(SetOperation operation, RedisKey[] keys, CommandFlags flags = (CommandFlags)0)
			{
				//IL_0007: Unknown result type (might be due to invalid IL or missing references)
				//IL_0008: Unknown result type (might be due to invalid IL or missing references)
				//IL_0015: Unknown result type (might be due to invalid IL or missing references)
				//IL_0016: Unknown result type (might be due to invalid IL or missing references)
				return DoDecoratedOperation((IBatch b) => ((IDatabaseAsync)b).SetCombineAsync(operation, keys, flags));
			}

			public Task<bool> SetContainsAsync(RedisKey key, RedisValue value, CommandFlags flags = (CommandFlags)0)
			{
				//IL_0007: Unknown result type (might be due to invalid IL or missing references)
				//IL_0008: Unknown result type (might be due to invalid IL or missing references)
				//IL_000e: Unknown result type (might be due to invalid IL or missing references)
				//IL_000f: Unknown result type (might be due to invalid IL or missing references)
				//IL_0015: Unknown result type (might be due to invalid IL or missing references)
				//IL_0016: Unknown result type (might be due to invalid IL or missing references)
				return DoDecoratedOperation((IBatch b) => ((IDatabaseAsync)b).SetContainsAsync(key, value, flags));
			}

			public Task<long> SetLengthAsync(RedisKey key, CommandFlags flags = (CommandFlags)0)
			{
				//IL_0007: Unknown result type (might be due to invalid IL or missing references)
				//IL_0008: Unknown result type (might be due to invalid IL or missing references)
				//IL_000e: Unknown result type (might be due to invalid IL or missing references)
				//IL_000f: Unknown result type (might be due to invalid IL or missing references)
				return DoDecoratedOperation((IBatch b) => ((IDatabaseAsync)b).SetLengthAsync(key, flags));
			}

			public Task<RedisValue[]> SetMembersAsync(RedisKey key, CommandFlags flags = (CommandFlags)0)
			{
				//IL_0007: Unknown result type (might be due to invalid IL or missing references)
				//IL_0008: Unknown result type (might be due to invalid IL or missing references)
				//IL_000e: Unknown result type (might be due to invalid IL or missing references)
				//IL_000f: Unknown result type (might be due to invalid IL or missing references)
				return DoDecoratedOperation((IBatch b) => ((IDatabaseAsync)b).SetMembersAsync(key, flags));
			}

			public Task<bool> SetMoveAsync(RedisKey source, RedisKey destination, RedisValue value, CommandFlags flags = (CommandFlags)0)
			{
				//IL_0007: Unknown result type (might be due to invalid IL or missing references)
				//IL_0008: Unknown result type (might be due to invalid IL or missing references)
				//IL_000e: Unknown result type (might be due to invalid IL or missing references)
				//IL_000f: Unknown result type (might be due to invalid IL or missing references)
				//IL_0015: Unknown result type (might be due to invalid IL or missing references)
				//IL_0016: Unknown result type (might be due to invalid IL or missing references)
				//IL_001c: Unknown result type (might be due to invalid IL or missing references)
				//IL_001e: Unknown result type (might be due to invalid IL or missing references)
				return DoDecoratedOperation((IBatch b) => ((IDatabaseAsync)b).SetMoveAsync(source, destination, value, flags));
			}

			public Task<RedisValue> SetPopAsync(RedisKey key, CommandFlags flags = (CommandFlags)0)
			{
				//IL_0007: Unknown result type (might be due to invalid IL or missing references)
				//IL_0008: Unknown result type (might be due to invalid IL or missing references)
				//IL_000e: Unknown result type (might be due to invalid IL or missing references)
				//IL_000f: Unknown result type (might be due to invalid IL or missing references)
				return DoDecoratedOperation((IBatch b) => ((IDatabaseAsync)b).SetPopAsync(key, flags));
			}

			public Task<RedisValue> SetRandomMemberAsync(RedisKey key, CommandFlags flags = (CommandFlags)0)
			{
				//IL_0007: Unknown result type (might be due to invalid IL or missing references)
				//IL_0008: Unknown result type (might be due to invalid IL or missing references)
				//IL_000e: Unknown result type (might be due to invalid IL or missing references)
				//IL_000f: Unknown result type (might be due to invalid IL or missing references)
				return DoDecoratedOperation((IBatch b) => ((IDatabaseAsync)b).SetRandomMemberAsync(key, flags));
			}

			public Task<RedisValue[]> SetRandomMembersAsync(RedisKey key, long count, CommandFlags flags = (CommandFlags)0)
			{
				//IL_0007: Unknown result type (might be due to invalid IL or missing references)
				//IL_0008: Unknown result type (might be due to invalid IL or missing references)
				//IL_0015: Unknown result type (might be due to invalid IL or missing references)
				//IL_0016: Unknown result type (might be due to invalid IL or missing references)
				return DoDecoratedOperation((IBatch b) => ((IDatabaseAsync)b).SetRandomMembersAsync(key, count, flags));
			}

			public Task<bool> SetRemoveAsync(RedisKey key, RedisValue value, CommandFlags flags = (CommandFlags)0)
			{
				//IL_0007: Unknown result type (might be due to invalid IL or missing references)
				//IL_0008: Unknown result type (might be due to invalid IL or missing references)
				//IL_000e: Unknown result type (might be due to invalid IL or missing references)
				//IL_000f: Unknown result type (might be due to invalid IL or missing references)
				//IL_0015: Unknown result type (might be due to invalid IL or missing references)
				//IL_0016: Unknown result type (might be due to invalid IL or missing references)
				return DoDecoratedOperation((IBatch b) => ((IDatabaseAsync)b).SetRemoveAsync(key, value, flags));
			}

			public Task<long> SetRemoveAsync(RedisKey key, RedisValue[] values, CommandFlags flags = (CommandFlags)0)
			{
				//IL_0007: Unknown result type (might be due to invalid IL or missing references)
				//IL_0008: Unknown result type (might be due to invalid IL or missing references)
				//IL_0015: Unknown result type (might be due to invalid IL or missing references)
				//IL_0016: Unknown result type (might be due to invalid IL or missing references)
				return DoDecoratedOperation((IBatch b) => ((IDatabaseAsync)b).SetRemoveAsync(key, values, flags));
			}

			public Task<long> SortAndStoreAsync(RedisKey destination, RedisKey key, long skip = 0L, long take = -1L, Order order = (Order)0, SortType sortType = (SortType)0, RedisValue by = default(RedisValue), RedisValue[] get = null, CommandFlags flags = (CommandFlags)0)
			{
				//IL_0007: Unknown result type (might be due to invalid IL or missing references)
				//IL_0008: Unknown result type (might be due to invalid IL or missing references)
				//IL_000e: Unknown result type (might be due to invalid IL or missing references)
				//IL_000f: Unknown result type (might be due to invalid IL or missing references)
				//IL_0024: Unknown result type (might be due to invalid IL or missing references)
				//IL_0026: Unknown result type (might be due to invalid IL or missing references)
				//IL_002c: Unknown result type (might be due to invalid IL or missing references)
				//IL_002e: Unknown result type (might be due to invalid IL or missing references)
				//IL_0034: Unknown result type (might be due to invalid IL or missing references)
				//IL_0036: Unknown result type (might be due to invalid IL or missing references)
				//IL_0044: Unknown result type (might be due to invalid IL or missing references)
				//IL_0046: Unknown result type (might be due to invalid IL or missing references)
				return DoDecoratedOperation((IBatch b) => ((IDatabaseAsync)b).SortAndStoreAsync(destination, key, skip, take, order, sortType, by, get, flags));
			}

			public Task<RedisValue[]> SortAsync(RedisKey key, long skip = 0L, long take = -1L, Order order = (Order)0, SortType sortType = (SortType)0, RedisValue by = default(RedisValue), RedisValue[] get = null, CommandFlags flags = (CommandFlags)0)
			{
				//IL_0007: Unknown result type (might be due to invalid IL or missing references)
				//IL_0008: Unknown result type (might be due to invalid IL or missing references)
				//IL_001c: Unknown result type (might be due to invalid IL or missing references)
				//IL_001e: Unknown result type (might be due to invalid IL or missing references)
				//IL_0024: Unknown result type (might be due to invalid IL or missing references)
				//IL_0026: Unknown result type (might be due to invalid IL or missing references)
				//IL_002c: Unknown result type (might be due to invalid IL or missing references)
				//IL_002e: Unknown result type (might be due to invalid IL or missing references)
				//IL_003c: Unknown result type (might be due to invalid IL or missing references)
				//IL_003e: Unknown result type (might be due to invalid IL or missing references)
				return DoDecoratedOperation((IBatch b) => ((IDatabaseAsync)b).SortAsync(key, skip, take, order, sortType, by, get, flags));
			}

			public Task<bool> SortedSetAddAsync(RedisKey key, RedisValue member, double score, CommandFlags flags)
			{
				//IL_0007: Unknown result type (might be due to invalid IL or missing references)
				//IL_0008: Unknown result type (might be due to invalid IL or missing references)
				//IL_000e: Unknown result type (might be due to invalid IL or missing references)
				//IL_000f: Unknown result type (might be due to invalid IL or missing references)
				//IL_001c: Unknown result type (might be due to invalid IL or missing references)
				//IL_001e: Unknown result type (might be due to invalid IL or missing references)
				return DoDecoratedOperation((IBatch b) => ((IDatabaseAsync)b).SortedSetAddAsync(key, member, score, flags));
			}

			public Task<bool> SortedSetAddAsync(RedisKey key, RedisValue member, double score, When when = (When)0, CommandFlags flags = (CommandFlags)0)
			{
				//IL_0007: Unknown result type (might be due to invalid IL or missing references)
				//IL_0008: Unknown result type (might be due to invalid IL or missing references)
				//IL_000e: Unknown result type (might be due to invalid IL or missing references)
				//IL_000f: Unknown result type (might be due to invalid IL or missing references)
				//IL_001c: Unknown result type (might be due to invalid IL or missing references)
				//IL_001e: Unknown result type (might be due to invalid IL or missing references)
				//IL_0024: Unknown result type (might be due to invalid IL or missing references)
				//IL_0026: Unknown result type (might be due to invalid IL or missing references)
				return DoDecoratedOperation((IBatch b) => ((IDatabaseAsync)b).SortedSetAddAsync(key, member, score, when, flags));
			}

			public Task<long> SortedSetAddAsync(RedisKey key, SortedSetEntry[] values, CommandFlags flags)
			{
				//IL_0007: Unknown result type (might be due to invalid IL or missing references)
				//IL_0008: Unknown result type (might be due to invalid IL or missing references)
				//IL_0015: Unknown result type (might be due to invalid IL or missing references)
				//IL_0016: Unknown result type (might be due to invalid IL or missing references)
				return DoDecoratedOperation((IBatch b) => ((IDatabaseAsync)b).SortedSetAddAsync(key, values, flags));
			}

			public Task<long> SortedSetAddAsync(RedisKey key, SortedSetEntry[] values, When when = (When)0, CommandFlags flags = (CommandFlags)0)
			{
				//IL_0007: Unknown result type (might be due to invalid IL or missing references)
				//IL_0008: Unknown result type (might be due to invalid IL or missing references)
				//IL_0015: Unknown result type (might be due to invalid IL or missing references)
				//IL_0016: Unknown result type (might be due to invalid IL or missing references)
				//IL_001c: Unknown result type (might be due to invalid IL or missing references)
				//IL_001e: Unknown result type (might be due to invalid IL or missing references)
				return DoDecoratedOperation((IBatch b) => ((IDatabaseAsync)b).SortedSetAddAsync(key, values, when, flags));
			}

			public Task<long> SortedSetCombineAndStoreAsync(SetOperation operation, RedisKey destination, RedisKey first, RedisKey second, Aggregate aggregate = (Aggregate)0, CommandFlags flags = (CommandFlags)0)
			{
				//IL_0007: Unknown result type (might be due to invalid IL or missing references)
				//IL_0008: Unknown result type (might be due to invalid IL or missing references)
				//IL_000e: Unknown result type (might be due to invalid IL or missing references)
				//IL_000f: Unknown result type (might be due to invalid IL or missing references)
				//IL_0015: Unknown result type (might be due to invalid IL or missing references)
				//IL_0016: Unknown result type (might be due to invalid IL or missing references)
				//IL_001c: Unknown result type (might be due to invalid IL or missing references)
				//IL_001e: Unknown result type (might be due to invalid IL or missing references)
				//IL_0024: Unknown result type (might be due to invalid IL or missing references)
				//IL_0026: Unknown result type (might be due to invalid IL or missing references)
				//IL_002c: Unknown result type (might be due to invalid IL or missing references)
				//IL_002e: Unknown result type (might be due to invalid IL or missing references)
				return DoDecoratedOperation((IBatch b) => ((IDatabaseAsync)b).SortedSetCombineAndStoreAsync(operation, destination, first, second, aggregate, flags));
			}

			public Task<long> SortedSetCombineAndStoreAsync(SetOperation operation, RedisKey destination, RedisKey[] keys, double[] weights = null, Aggregate aggregate = (Aggregate)0, CommandFlags flags = (CommandFlags)0)
			{
				//IL_0007: Unknown result type (might be due to invalid IL or missing references)
				//IL_0008: Unknown result type (might be due to invalid IL or missing references)
				//IL_000e: Unknown result type (might be due to invalid IL or missing references)
				//IL_000f: Unknown result type (might be due to invalid IL or missing references)
				//IL_0024: Unknown result type (might be due to invalid IL or missing references)
				//IL_0026: Unknown result type (might be due to invalid IL or missing references)
				//IL_002c: Unknown result type (might be due to invalid IL or missing references)
				//IL_002e: Unknown result type (might be due to invalid IL or missing references)
				return DoDecoratedOperation((IBatch b) => ((IDatabaseAsync)b).SortedSetCombineAndStoreAsync(operation, destination, keys, weights, aggregate, flags));
			}

			public Task<double> SortedSetDecrementAsync(RedisKey key, RedisValue member, double value, CommandFlags flags = (CommandFlags)0)
			{
				//IL_0007: Unknown result type (might be due to invalid IL or missing references)
				//IL_0008: Unknown result type (might be due to invalid IL or missing references)
				//IL_000e: Unknown result type (might be due to invalid IL or missing references)
				//IL_000f: Unknown result type (might be due to invalid IL or missing references)
				//IL_001c: Unknown result type (might be due to invalid IL or missing references)
				//IL_001e: Unknown result type (might be due to invalid IL or missing references)
				return DoDecoratedOperation((IBatch b) => ((IDatabaseAsync)b).SortedSetDecrementAsync(key, member, value, flags));
			}

			public Task<double> SortedSetIncrementAsync(RedisKey key, RedisValue member, double value, CommandFlags flags = (CommandFlags)0)
			{
				//IL_0007: Unknown result type (might be due to invalid IL or missing references)
				//IL_0008: Unknown result type (might be due to invalid IL or missing references)
				//IL_000e: Unknown result type (might be due to invalid IL or missing references)
				//IL_000f: Unknown result type (might be due to invalid IL or missing references)
				//IL_001c: Unknown result type (might be due to invalid IL or missing references)
				//IL_001e: Unknown result type (might be due to invalid IL or missing references)
				return DoDecoratedOperation((IBatch b) => ((IDatabaseAsync)b).SortedSetIncrementAsync(key, member, value, flags));
			}

			public Task<long> SortedSetLengthAsync(RedisKey key, double min = double.NegativeInfinity, double max = double.PositiveInfinity, Exclude exclude = (Exclude)0, CommandFlags flags = (CommandFlags)0)
			{
				//IL_0007: Unknown result type (might be due to invalid IL or missing references)
				//IL_0008: Unknown result type (might be due to invalid IL or missing references)
				//IL_001c: Unknown result type (might be due to invalid IL or missing references)
				//IL_001e: Unknown result type (might be due to invalid IL or missing references)
				//IL_0024: Unknown result type (might be due to invalid IL or missing references)
				//IL_0026: Unknown result type (might be due to invalid IL or missing references)
				return DoDecoratedOperation((IBatch b) => ((IDatabaseAsync)b).SortedSetLengthAsync(key, min, max, exclude, flags));
			}

			public Task<long> SortedSetLengthByValueAsync(RedisKey key, RedisValue min, RedisValue max, Exclude exclude = (Exclude)0, CommandFlags flags = (CommandFlags)0)
			{
				//IL_0007: Unknown result type (might be due to invalid IL or missing references)
				//IL_0008: Unknown result type (might be due to invalid IL or missing references)
				//IL_000e: Unknown result type (might be due to invalid IL or missing references)
				//IL_000f: Unknown result type (might be due to invalid IL or missing references)
				//IL_0015: Unknown result type (might be due to invalid IL or missing references)
				//IL_0016: Unknown result type (might be due to invalid IL or missing references)
				//IL_001c: Unknown result type (might be due to invalid IL or missing references)
				//IL_001e: Unknown result type (might be due to invalid IL or missing references)
				//IL_0024: Unknown result type (might be due to invalid IL or missing references)
				//IL_0026: Unknown result type (might be due to invalid IL or missing references)
				return DoDecoratedOperation((IBatch b) => ((IDatabaseAsync)b).SortedSetLengthByValueAsync(key, min, max, exclude, flags));
			}

			public Task<RedisValue[]> SortedSetRangeByRankAsync(RedisKey key, long start = 0L, long stop = -1L, Order order = (Order)0, CommandFlags flags = (CommandFlags)0)
			{
				//IL_0007: Unknown result type (might be due to invalid IL or missing references)
				//IL_0008: Unknown result type (might be due to invalid IL or missing references)
				//IL_001c: Unknown result type (might be due to invalid IL or missing references)
				//IL_001e: Unknown result type (might be due to invalid IL or missing references)
				//IL_0024: Unknown result type (might be due to invalid IL or missing references)
				//IL_0026: Unknown result type (might be due to invalid IL or missing references)
				return DoDecoratedOperation((IBatch b) => ((IDatabaseAsync)b).SortedSetRangeByRankAsync(key, start, stop, order, flags));
			}

			public Task<SortedSetEntry[]> SortedSetRangeByRankWithScoresAsync(RedisKey key, long start = 0L, long stop = -1L, Order order = (Order)0, CommandFlags flags = (CommandFlags)0)
			{
				//IL_0007: Unknown result type (might be due to invalid IL or missing references)
				//IL_0008: Unknown result type (might be due to invalid IL or missing references)
				//IL_001c: Unknown result type (might be due to invalid IL or missing references)
				//IL_001e: Unknown result type (might be due to invalid IL or missing references)
				//IL_0024: Unknown result type (might be due to invalid IL or missing references)
				//IL_0026: Unknown result type (might be due to invalid IL or missing references)
				return DoDecoratedOperation((IBatch b) => ((IDatabaseAsync)b).SortedSetRangeByRankWithScoresAsync(key, start, stop, order, flags));
			}

			public Task<RedisValue[]> SortedSetRangeByScoreAsync(RedisKey key, double start = double.NegativeInfinity, double stop = double.PositiveInfinity, Exclude exclude = (Exclude)0, Order order = (Order)0, long skip = 0L, long take = -1L, CommandFlags flags = (CommandFlags)0)
			{
				//IL_0007: Unknown result type (might be due to invalid IL or missing references)
				//IL_0008: Unknown result type (might be due to invalid IL or missing references)
				//IL_001c: Unknown result type (might be due to invalid IL or missing references)
				//IL_001e: Unknown result type (might be due to invalid IL or missing references)
				//IL_0024: Unknown result type (might be due to invalid IL or missing references)
				//IL_0026: Unknown result type (might be due to invalid IL or missing references)
				//IL_003c: Unknown result type (might be due to invalid IL or missing references)
				//IL_003e: Unknown result type (might be due to invalid IL or missing references)
				return DoDecoratedOperation((IBatch b) => ((IDatabaseAsync)b).SortedSetRangeByScoreAsync(key, start, stop, exclude, order, skip, take, flags));
			}

			public Task<SortedSetEntry[]> SortedSetRangeByScoreWithScoresAsync(RedisKey key, double start = double.NegativeInfinity, double stop = double.PositiveInfinity, Exclude exclude = (Exclude)0, Order order = (Order)0, long skip = 0L, long take = -1L, CommandFlags flags = (CommandFlags)0)
			{
				//IL_0007: Unknown result type (might be due to invalid IL or missing references)
				//IL_0008: Unknown result type (might be due to invalid IL or missing references)
				//IL_001c: Unknown result type (might be due to invalid IL or missing references)
				//IL_001e: Unknown result type (might be due to invalid IL or missing references)
				//IL_0024: Unknown result type (might be due to invalid IL or missing references)
				//IL_0026: Unknown result type (might be due to invalid IL or missing references)
				//IL_003c: Unknown result type (might be due to invalid IL or missing references)
				//IL_003e: Unknown result type (might be due to invalid IL or missing references)
				return DoDecoratedOperation((IBatch b) => ((IDatabaseAsync)b).SortedSetRangeByScoreWithScoresAsync(key, start, stop, exclude, order, skip, take, flags));
			}

			public Task<RedisValue[]> SortedSetRangeByValueAsync(RedisKey key, RedisValue min = default(RedisValue), RedisValue max = default(RedisValue), Exclude exclude = (Exclude)0, long skip = 0L, long take = -1L, CommandFlags flags = (CommandFlags)0)
			{
				//IL_0007: Unknown result type (might be due to invalid IL or missing references)
				//IL_0008: Unknown result type (might be due to invalid IL or missing references)
				//IL_000e: Unknown result type (might be due to invalid IL or missing references)
				//IL_000f: Unknown result type (might be due to invalid IL or missing references)
				//IL_0015: Unknown result type (might be due to invalid IL or missing references)
				//IL_0016: Unknown result type (might be due to invalid IL or missing references)
				//IL_001c: Unknown result type (might be due to invalid IL or missing references)
				//IL_001e: Unknown result type (might be due to invalid IL or missing references)
				//IL_0034: Unknown result type (might be due to invalid IL or missing references)
				//IL_0036: Unknown result type (might be due to invalid IL or missing references)
				return DoDecoratedOperation((IBatch b) => ((IDatabaseAsync)b).SortedSetRangeByValueAsync(key, min, max, exclude, skip, take, flags));
			}

			public Task<long?> SortedSetRankAsync(RedisKey key, RedisValue member, Order order = (Order)0, CommandFlags flags = (CommandFlags)0)
			{
				//IL_0007: Unknown result type (might be due to invalid IL or missing references)
				//IL_0008: Unknown result type (might be due to invalid IL or missing references)
				//IL_000e: Unknown result type (might be due to invalid IL or missing references)
				//IL_000f: Unknown result type (might be due to invalid IL or missing references)
				//IL_0015: Unknown result type (might be due to invalid IL or missing references)
				//IL_0016: Unknown result type (might be due to invalid IL or missing references)
				//IL_001c: Unknown result type (might be due to invalid IL or missing references)
				//IL_001e: Unknown result type (might be due to invalid IL or missing references)
				return DoDecoratedOperation((IBatch b) => ((IDatabaseAsync)b).SortedSetRankAsync(key, member, order, flags));
			}

			public Task<bool> SortedSetRemoveAsync(RedisKey key, RedisValue member, CommandFlags flags = (CommandFlags)0)
			{
				//IL_0007: Unknown result type (might be due to invalid IL or missing references)
				//IL_0008: Unknown result type (might be due to invalid IL or missing references)
				//IL_000e: Unknown result type (might be due to invalid IL or missing references)
				//IL_000f: Unknown result type (might be due to invalid IL or missing references)
				//IL_0015: Unknown result type (might be due to invalid IL or missing references)
				//IL_0016: Unknown result type (might be due to invalid IL or missing references)
				return DoDecoratedOperation((IBatch b) => ((IDatabaseAsync)b).SortedSetRemoveAsync(key, member, flags));
			}

			public Task<long> SortedSetRemoveAsync(RedisKey key, RedisValue[] members, CommandFlags flags = (CommandFlags)0)
			{
				//IL_0007: Unknown result type (might be due to invalid IL or missing references)
				//IL_0008: Unknown result type (might be due to invalid IL or missing references)
				//IL_0015: Unknown result type (might be due to invalid IL or missing references)
				//IL_0016: Unknown result type (might be due to invalid IL or missing references)
				return DoDecoratedOperation((IBatch b) => ((IDatabaseAsync)b).SortedSetRemoveAsync(key, members, flags));
			}

			public Task<long> SortedSetRemoveRangeByRankAsync(RedisKey key, long start, long stop, CommandFlags flags = (CommandFlags)0)
			{
				//IL_0007: Unknown result type (might be due to invalid IL or missing references)
				//IL_0008: Unknown result type (might be due to invalid IL or missing references)
				//IL_001c: Unknown result type (might be due to invalid IL or missing references)
				//IL_001e: Unknown result type (might be due to invalid IL or missing references)
				return DoDecoratedOperation((IBatch b) => ((IDatabaseAsync)b).SortedSetRemoveRangeByRankAsync(key, start, stop, flags));
			}

			public Task<long> SortedSetRemoveRangeByScoreAsync(RedisKey key, double start, double stop, Exclude exclude = (Exclude)0, CommandFlags flags = (CommandFlags)0)
			{
				//IL_0007: Unknown result type (might be due to invalid IL or missing references)
				//IL_0008: Unknown result type (might be due to invalid IL or missing references)
				//IL_001c: Unknown result type (might be due to invalid IL or missing references)
				//IL_001e: Unknown result type (might be due to invalid IL or missing references)
				//IL_0024: Unknown result type (might be due to invalid IL or missing references)
				//IL_0026: Unknown result type (might be due to invalid IL or missing references)
				return DoDecoratedOperation((IBatch b) => ((IDatabaseAsync)b).SortedSetRemoveRangeByScoreAsync(key, start, stop, exclude, flags));
			}

			public Task<long> SortedSetRemoveRangeByValueAsync(RedisKey key, RedisValue min, RedisValue max, Exclude exclude = (Exclude)0, CommandFlags flags = (CommandFlags)0)
			{
				//IL_0007: Unknown result type (might be due to invalid IL or missing references)
				//IL_0008: Unknown result type (might be due to invalid IL or missing references)
				//IL_000e: Unknown result type (might be due to invalid IL or missing references)
				//IL_000f: Unknown result type (might be due to invalid IL or missing references)
				//IL_0015: Unknown result type (might be due to invalid IL or missing references)
				//IL_0016: Unknown result type (might be due to invalid IL or missing references)
				//IL_001c: Unknown result type (might be due to invalid IL or missing references)
				//IL_001e: Unknown result type (might be due to invalid IL or missing references)
				//IL_0024: Unknown result type (might be due to invalid IL or missing references)
				//IL_0026: Unknown result type (might be due to invalid IL or missing references)
				return DoDecoratedOperation((IBatch b) => ((IDatabaseAsync)b).SortedSetRemoveRangeByValueAsync(key, min, max, exclude, flags));
			}

			public Task<double?> SortedSetScoreAsync(RedisKey key, RedisValue member, CommandFlags flags = (CommandFlags)0)
			{
				//IL_0007: Unknown result type (might be due to invalid IL or missing references)
				//IL_0008: Unknown result type (might be due to invalid IL or missing references)
				//IL_000e: Unknown result type (might be due to invalid IL or missing references)
				//IL_000f: Unknown result type (might be due to invalid IL or missing references)
				//IL_0015: Unknown result type (might be due to invalid IL or missing references)
				//IL_0016: Unknown result type (might be due to invalid IL or missing references)
				return DoDecoratedOperation((IBatch b) => ((IDatabaseAsync)b).SortedSetScoreAsync(key, member, flags));
			}

			public Task<long> StringAppendAsync(RedisKey key, RedisValue value, CommandFlags flags = (CommandFlags)0)
			{
				//IL_0007: Unknown result type (might be due to invalid IL or missing references)
				//IL_0008: Unknown result type (might be due to invalid IL or missing references)
				//IL_000e: Unknown result type (might be due to invalid IL or missing references)
				//IL_000f: Unknown result type (might be due to invalid IL or missing references)
				//IL_0015: Unknown result type (might be due to invalid IL or missing references)
				//IL_0016: Unknown result type (might be due to invalid IL or missing references)
				return DoDecoratedOperation((IBatch b) => ((IDatabaseAsync)b).StringAppendAsync(key, value, flags));
			}

			public Task<long> StringBitCountAsync(RedisKey key, long start = 0L, long end = -1L, CommandFlags flags = (CommandFlags)0)
			{
				//IL_0007: Unknown result type (might be due to invalid IL or missing references)
				//IL_0008: Unknown result type (might be due to invalid IL or missing references)
				//IL_001c: Unknown result type (might be due to invalid IL or missing references)
				//IL_001e: Unknown result type (might be due to invalid IL or missing references)
				return DoDecoratedOperation((IBatch b) => ((IDatabaseAsync)b).StringBitCountAsync(key, start, end, flags));
			}

			public Task<long> StringBitOperationAsync(Bitwise operation, RedisKey destination, RedisKey first, RedisKey second = default(RedisKey), CommandFlags flags = (CommandFlags)0)
			{
				//IL_0007: Unknown result type (might be due to invalid IL or missing references)
				//IL_0008: Unknown result type (might be due to invalid IL or missing references)
				//IL_000e: Unknown result type (might be due to invalid IL or missing references)
				//IL_000f: Unknown result type (might be due to invalid IL or missing references)
				//IL_0015: Unknown result type (might be due to invalid IL or missing references)
				//IL_0016: Unknown result type (might be due to invalid IL or missing references)
				//IL_001c: Unknown result type (might be due to invalid IL or missing references)
				//IL_001e: Unknown result type (might be due to invalid IL or missing references)
				//IL_0024: Unknown result type (might be due to invalid IL or missing references)
				//IL_0026: Unknown result type (might be due to invalid IL or missing references)
				return DoDecoratedOperation((IBatch b) => ((IDatabaseAsync)b).StringBitOperationAsync(operation, destination, first, second, flags));
			}

			public Task<long> StringBitOperationAsync(Bitwise operation, RedisKey destination, RedisKey[] keys, CommandFlags flags = (CommandFlags)0)
			{
				//IL_0007: Unknown result type (might be due to invalid IL or missing references)
				//IL_0008: Unknown result type (might be due to invalid IL or missing references)
				//IL_000e: Unknown result type (might be due to invalid IL or missing references)
				//IL_000f: Unknown result type (might be due to invalid IL or missing references)
				//IL_001c: Unknown result type (might be due to invalid IL or missing references)
				//IL_001e: Unknown result type (might be due to invalid IL or missing references)
				return DoDecoratedOperation((IBatch b) => ((IDatabaseAsync)b).StringBitOperationAsync(operation, destination, keys, flags));
			}

			public Task<long> StringBitPositionAsync(RedisKey key, bool bit, long start = 0L, long end = -1L, CommandFlags flags = (CommandFlags)0)
			{
				//IL_0007: Unknown result type (might be due to invalid IL or missing references)
				//IL_0008: Unknown result type (might be due to invalid IL or missing references)
				//IL_0024: Unknown result type (might be due to invalid IL or missing references)
				//IL_0026: Unknown result type (might be due to invalid IL or missing references)
				return DoDecoratedOperation((IBatch b) => ((IDatabaseAsync)b).StringBitPositionAsync(key, bit, start, end, flags));
			}

			public Task<long> StringDecrementAsync(RedisKey key, long value = 1L, CommandFlags flags = (CommandFlags)0)
			{
				//IL_0007: Unknown result type (might be due to invalid IL or missing references)
				//IL_0008: Unknown result type (might be due to invalid IL or missing references)
				//IL_0015: Unknown result type (might be due to invalid IL or missing references)
				//IL_0016: Unknown result type (might be due to invalid IL or missing references)
				return DoDecoratedOperation((IBatch b) => ((IDatabaseAsync)b).StringDecrementAsync(key, value, flags));
			}

			public Task<double> StringDecrementAsync(RedisKey key, double value, CommandFlags flags = (CommandFlags)0)
			{
				//IL_0007: Unknown result type (might be due to invalid IL or missing references)
				//IL_0008: Unknown result type (might be due to invalid IL or missing references)
				//IL_0015: Unknown result type (might be due to invalid IL or missing references)
				//IL_0016: Unknown result type (might be due to invalid IL or missing references)
				return DoDecoratedOperation((IBatch b) => ((IDatabaseAsync)b).StringDecrementAsync(key, value, flags));
			}

			public Task<RedisValue> StringGetAsync(RedisKey key, CommandFlags flags = (CommandFlags)0)
			{
				//IL_0007: Unknown result type (might be due to invalid IL or missing references)
				//IL_0008: Unknown result type (might be due to invalid IL or missing references)
				//IL_000e: Unknown result type (might be due to invalid IL or missing references)
				//IL_000f: Unknown result type (might be due to invalid IL or missing references)
				return DoDecoratedOperation((IBatch b) => ((IDatabaseAsync)b).StringGetAsync(key, flags));
			}

			public Task<RedisValue[]> StringGetAsync(RedisKey[] keys, CommandFlags flags = (CommandFlags)0)
			{
				//IL_000e: Unknown result type (might be due to invalid IL or missing references)
				//IL_000f: Unknown result type (might be due to invalid IL or missing references)
				return DoDecoratedOperation((IBatch b) => ((IDatabaseAsync)b).StringGetAsync(keys, flags));
			}

			public Task<bool> StringGetBitAsync(RedisKey key, long offset, CommandFlags flags = (CommandFlags)0)
			{
				//IL_0007: Unknown result type (might be due to invalid IL or missing references)
				//IL_0008: Unknown result type (might be due to invalid IL or missing references)
				//IL_0015: Unknown result type (might be due to invalid IL or missing references)
				//IL_0016: Unknown result type (might be due to invalid IL or missing references)
				return DoDecoratedOperation((IBatch b) => ((IDatabaseAsync)b).StringGetBitAsync(key, offset, flags));
			}

			public Task<RedisValue> StringGetRangeAsync(RedisKey key, long start, long end, CommandFlags flags = (CommandFlags)0)
			{
				//IL_0007: Unknown result type (might be due to invalid IL or missing references)
				//IL_0008: Unknown result type (might be due to invalid IL or missing references)
				//IL_001c: Unknown result type (might be due to invalid IL or missing references)
				//IL_001e: Unknown result type (might be due to invalid IL or missing references)
				return DoDecoratedOperation((IBatch b) => ((IDatabaseAsync)b).StringGetRangeAsync(key, start, end, flags));
			}

			public Task<RedisValue> StringGetSetAsync(RedisKey key, RedisValue value, CommandFlags flags = (CommandFlags)0)
			{
				//IL_0007: Unknown result type (might be due to invalid IL or missing references)
				//IL_0008: Unknown result type (might be due to invalid IL or missing references)
				//IL_000e: Unknown result type (might be due to invalid IL or missing references)
				//IL_000f: Unknown result type (might be due to invalid IL or missing references)
				//IL_0015: Unknown result type (might be due to invalid IL or missing references)
				//IL_0016: Unknown result type (might be due to invalid IL or missing references)
				return DoDecoratedOperation((IBatch b) => ((IDatabaseAsync)b).StringGetSetAsync(key, value, flags));
			}

			public Task<RedisValueWithExpiry> StringGetWithExpiryAsync(RedisKey key, CommandFlags flags = (CommandFlags)0)
			{
				//IL_0007: Unknown result type (might be due to invalid IL or missing references)
				//IL_0008: Unknown result type (might be due to invalid IL or missing references)
				//IL_000e: Unknown result type (might be due to invalid IL or missing references)
				//IL_000f: Unknown result type (might be due to invalid IL or missing references)
				return DoDecoratedOperation((IBatch b) => ((IDatabaseAsync)b).StringGetWithExpiryAsync(key, flags));
			}

			public Task<long> StringIncrementAsync(RedisKey key, long value = 1L, CommandFlags flags = (CommandFlags)0)
			{
				//IL_0007: Unknown result type (might be due to invalid IL or missing references)
				//IL_0008: Unknown result type (might be due to invalid IL or missing references)
				//IL_0015: Unknown result type (might be due to invalid IL or missing references)
				//IL_0016: Unknown result type (might be due to invalid IL or missing references)
				return DoDecoratedOperation((IBatch b) => ((IDatabaseAsync)b).StringIncrementAsync(key, value, flags));
			}

			public Task<double> StringIncrementAsync(RedisKey key, double value, CommandFlags flags = (CommandFlags)0)
			{
				//IL_0007: Unknown result type (might be due to invalid IL or missing references)
				//IL_0008: Unknown result type (might be due to invalid IL or missing references)
				//IL_0015: Unknown result type (might be due to invalid IL or missing references)
				//IL_0016: Unknown result type (might be due to invalid IL or missing references)
				return DoDecoratedOperation((IBatch b) => ((IDatabaseAsync)b).StringIncrementAsync(key, value, flags));
			}

			public Task<long> StringLengthAsync(RedisKey key, CommandFlags flags = (CommandFlags)0)
			{
				//IL_0007: Unknown result type (might be due to invalid IL or missing references)
				//IL_0008: Unknown result type (might be due to invalid IL or missing references)
				//IL_000e: Unknown result type (might be due to invalid IL or missing references)
				//IL_000f: Unknown result type (might be due to invalid IL or missing references)
				return DoDecoratedOperation((IBatch b) => ((IDatabaseAsync)b).StringLengthAsync(key, flags));
			}

			public Task<bool> StringSetAsync(RedisKey key, RedisValue value, TimeSpan? expiry = null, When when = (When)0, CommandFlags flags = (CommandFlags)0)
			{
				//IL_0007: Unknown result type (might be due to invalid IL or missing references)
				//IL_0008: Unknown result type (might be due to invalid IL or missing references)
				//IL_000e: Unknown result type (might be due to invalid IL or missing references)
				//IL_000f: Unknown result type (might be due to invalid IL or missing references)
				//IL_001c: Unknown result type (might be due to invalid IL or missing references)
				//IL_001e: Unknown result type (might be due to invalid IL or missing references)
				//IL_0024: Unknown result type (might be due to invalid IL or missing references)
				//IL_0026: Unknown result type (might be due to invalid IL or missing references)
				return DoDecoratedOperation((IBatch b) => ((IDatabaseAsync)b).StringSetAsync(key, value, expiry, when, flags));
			}

			public Task<bool> StringSetAsync(KeyValuePair<RedisKey, RedisValue>[] values, When when = (When)0, CommandFlags flags = (CommandFlags)0)
			{
				//IL_000e: Unknown result type (might be due to invalid IL or missing references)
				//IL_000f: Unknown result type (might be due to invalid IL or missing references)
				//IL_0015: Unknown result type (might be due to invalid IL or missing references)
				//IL_0016: Unknown result type (might be due to invalid IL or missing references)
				return DoDecoratedOperation((IBatch b) => ((IDatabaseAsync)b).StringSetAsync(values, when, flags));
			}

			public Task<bool> StringSetBitAsync(RedisKey key, long offset, bool bit, CommandFlags flags = (CommandFlags)0)
			{
				//IL_0007: Unknown result type (might be due to invalid IL or missing references)
				//IL_0008: Unknown result type (might be due to invalid IL or missing references)
				//IL_001c: Unknown result type (might be due to invalid IL or missing references)
				//IL_001e: Unknown result type (might be due to invalid IL or missing references)
				return DoDecoratedOperation((IBatch b) => ((IDatabaseAsync)b).StringSetBitAsync(key, offset, bit, flags));
			}

			public Task<RedisValue> StringSetRangeAsync(RedisKey key, long offset, RedisValue value, CommandFlags flags = (CommandFlags)0)
			{
				//IL_0007: Unknown result type (might be due to invalid IL or missing references)
				//IL_0008: Unknown result type (might be due to invalid IL or missing references)
				//IL_0015: Unknown result type (might be due to invalid IL or missing references)
				//IL_0016: Unknown result type (might be due to invalid IL or missing references)
				//IL_001c: Unknown result type (might be due to invalid IL or missing references)
				//IL_001e: Unknown result type (might be due to invalid IL or missing references)
				return DoDecoratedOperation((IBatch b) => ((IDatabaseAsync)b).StringSetRangeAsync(key, offset, value, flags));
			}

			public bool TryWait(Task task)
			{
				return DoDecoratedOperation((IBatch b) => ((IRedisAsync)b).TryWait(task));
			}

			public void Wait(Task task)
			{
				DoDecoratedOperation(delegate(IBatch b)
				{
					((IRedisAsync)b).Wait(task);
				});
			}

			public T Wait<T>(Task<T> task)
			{
				return DoDecoratedOperation((IBatch b) => ((IRedisAsync)b).Wait<T>(task));
			}

			public void WaitAll(params Task[] tasks)
			{
				DoDecoratedOperation(delegate(IBatch b)
				{
					((IRedisAsync)b).WaitAll(tasks);
				});
			}

			protected override void RaiseBadStateExceptionOccurred()
			{
				Action action = BadStateExceptionOccurred;
				if (action != null)
				{
					action();
				}
			}
		}

		private class BadStateReportingServer : BadStateReportingBase<IServer>, IServer, IRedis, IRedisAsync
		{
			public ClusterConfiguration ClusterConfiguration
			{
				get
				{
					return base.Decorated.ClusterConfiguration;
				}
			}

			public EndPoint EndPoint
			{
				get
				{
					return base.Decorated.EndPoint;
				}
			}

			public RedisFeatures Features
			{
				get
				{
					//IL_0006: Unknown result type (might be due to invalid IL or missing references)
					return base.Decorated.Features;
				}
			}

			public bool IsConnected
			{
				get
				{
					return base.Decorated.IsConnected;
				}
			}

			public bool IsSlave
			{
				get
				{
					return base.Decorated.IsSlave;
				}
			}

			public bool AllowSlaveWrites
			{
				get
				{
					return base.Decorated.AllowSlaveWrites;
				}
				set
				{
					base.Decorated.AllowSlaveWrites = value;
				}
			}

			public ServerType ServerType
			{
				get
				{
					//IL_0006: Unknown result type (might be due to invalid IL or missing references)
					return base.Decorated.ServerType;
				}
			}

			public Version Version
			{
				get
				{
					return base.Decorated.Version;
				}
			}

			public ConnectionMultiplexer Multiplexer
			{
				get
				{
					return ((IRedisAsync)base.Decorated).Multiplexer;
				}
			}

			public override event Action BadStateExceptionOccurred;

			public BadStateReportingServer(IServer decorated)
				: base(decorated)
			{
			}

			protected override void RaiseBadStateExceptionOccurred()
			{
				Action action = BadStateExceptionOccurred;
				if (action != null)
				{
					action();
				}
			}

			public void ClientKill(EndPoint endpoint, CommandFlags flags = (CommandFlags)0)
			{
				//IL_000e: Unknown result type (might be due to invalid IL or missing references)
				//IL_000f: Unknown result type (might be due to invalid IL or missing references)
				DoDecoratedOperation(delegate(IServer s)
				{
					//IL_0008: Unknown result type (might be due to invalid IL or missing references)
					s.ClientKill(endpoint, flags);
				});
			}

			public Task ClientKillAsync(EndPoint endpoint, CommandFlags flags = (CommandFlags)0)
			{
				//IL_000e: Unknown result type (might be due to invalid IL or missing references)
				//IL_000f: Unknown result type (might be due to invalid IL or missing references)
				return DoDecoratedOperation((IServer s) => s.ClientKillAsync(endpoint, flags));
			}

			public long ClientKill(long? id = null, ClientType? clientType = null, EndPoint endpoint = null, bool skipMe = true, CommandFlags flags = (CommandFlags)0)
			{
				//IL_0024: Unknown result type (might be due to invalid IL or missing references)
				//IL_0026: Unknown result type (might be due to invalid IL or missing references)
				return DoDecoratedOperation((IServer s) => s.ClientKill(id, clientType, endpoint, skipMe, flags));
			}

			public Task<long> ClientKillAsync(long? id = null, ClientType? clientType = null, EndPoint endpoint = null, bool skipMe = true, CommandFlags flags = (CommandFlags)0)
			{
				//IL_0024: Unknown result type (might be due to invalid IL or missing references)
				//IL_0026: Unknown result type (might be due to invalid IL or missing references)
				return DoDecoratedOperation((IServer s) => s.ClientKillAsync(id, clientType, endpoint, skipMe, flags));
			}

			public ClientInfo[] ClientList(CommandFlags flags = (CommandFlags)0)
			{
				//IL_0007: Unknown result type (might be due to invalid IL or missing references)
				//IL_0008: Unknown result type (might be due to invalid IL or missing references)
				return DoDecoratedOperation((IServer s) => s.ClientList(flags));
			}

			public Task<ClientInfo[]> ClientListAsync(CommandFlags flags = (CommandFlags)0)
			{
				//IL_0007: Unknown result type (might be due to invalid IL or missing references)
				//IL_0008: Unknown result type (might be due to invalid IL or missing references)
				return DoDecoratedOperation((IServer s) => s.ClientListAsync(flags));
			}

			public ClusterConfiguration ClusterNodes(CommandFlags flags = (CommandFlags)0)
			{
				//IL_0007: Unknown result type (might be due to invalid IL or missing references)
				//IL_0008: Unknown result type (might be due to invalid IL or missing references)
				return DoDecoratedOperation((IServer s) => s.ClusterNodes(flags));
			}

			public Task<ClusterConfiguration> ClusterNodesAsync(CommandFlags flags = (CommandFlags)0)
			{
				//IL_0007: Unknown result type (might be due to invalid IL or missing references)
				//IL_0008: Unknown result type (might be due to invalid IL or missing references)
				return DoDecoratedOperation((IServer s) => s.ClusterNodesAsync(flags));
			}

			public string ClusterNodesRaw(CommandFlags flags = (CommandFlags)0)
			{
				//IL_0007: Unknown result type (might be due to invalid IL or missing references)
				//IL_0008: Unknown result type (might be due to invalid IL or missing references)
				return DoDecoratedOperation((IServer s) => s.ClusterNodesRaw(flags));
			}

			public Task<string> ClusterNodesRawAsync(CommandFlags flags = (CommandFlags)0)
			{
				//IL_0007: Unknown result type (might be due to invalid IL or missing references)
				//IL_0008: Unknown result type (might be due to invalid IL or missing references)
				return DoDecoratedOperation((IServer s) => s.ClusterNodesRawAsync(flags));
			}

			public KeyValuePair<string, string>[] ConfigGet(RedisValue pattern = default(RedisValue), CommandFlags flags = (CommandFlags)0)
			{
				//IL_0007: Unknown result type (might be due to invalid IL or missing references)
				//IL_0008: Unknown result type (might be due to invalid IL or missing references)
				//IL_000e: Unknown result type (might be due to invalid IL or missing references)
				//IL_000f: Unknown result type (might be due to invalid IL or missing references)
				return DoDecoratedOperation((IServer s) => s.ConfigGet(pattern, flags));
			}

			public Task<KeyValuePair<string, string>[]> ConfigGetAsync(RedisValue pattern = default(RedisValue), CommandFlags flags = (CommandFlags)0)
			{
				//IL_0007: Unknown result type (might be due to invalid IL or missing references)
				//IL_0008: Unknown result type (might be due to invalid IL or missing references)
				//IL_000e: Unknown result type (might be due to invalid IL or missing references)
				//IL_000f: Unknown result type (might be due to invalid IL or missing references)
				return DoDecoratedOperation((IServer s) => s.ConfigGetAsync(pattern, flags));
			}

			public void ConfigResetStatistics(CommandFlags flags = (CommandFlags)0)
			{
				//IL_0007: Unknown result type (might be due to invalid IL or missing references)
				//IL_0008: Unknown result type (might be due to invalid IL or missing references)
				DoDecoratedOperation(delegate(IServer s)
				{
					//IL_0002: Unknown result type (might be due to invalid IL or missing references)
					s.ConfigResetStatistics(flags);
				});
			}

			public Task ConfigResetStatisticsAsync(CommandFlags flags = (CommandFlags)0)
			{
				//IL_0007: Unknown result type (might be due to invalid IL or missing references)
				//IL_0008: Unknown result type (might be due to invalid IL or missing references)
				return DoDecoratedOperation((IServer s) => s.ConfigResetStatisticsAsync(flags));
			}

			public void ConfigRewrite(CommandFlags flags = (CommandFlags)0)
			{
				//IL_0007: Unknown result type (might be due to invalid IL or missing references)
				//IL_0008: Unknown result type (might be due to invalid IL or missing references)
				DoDecoratedOperation(delegate(IServer s)
				{
					//IL_0002: Unknown result type (might be due to invalid IL or missing references)
					s.ConfigRewrite(flags);
				});
			}

			public Task ConfigRewriteAsync(CommandFlags flags = (CommandFlags)0)
			{
				//IL_0007: Unknown result type (might be due to invalid IL or missing references)
				//IL_0008: Unknown result type (might be due to invalid IL or missing references)
				return DoDecoratedOperation((IServer s) => s.ConfigRewriteAsync(flags));
			}

			public void ConfigSet(RedisValue setting, RedisValue value, CommandFlags flags = (CommandFlags)0)
			{
				//IL_0007: Unknown result type (might be due to invalid IL or missing references)
				//IL_0008: Unknown result type (might be due to invalid IL or missing references)
				//IL_000e: Unknown result type (might be due to invalid IL or missing references)
				//IL_000f: Unknown result type (might be due to invalid IL or missing references)
				//IL_0015: Unknown result type (might be due to invalid IL or missing references)
				//IL_0016: Unknown result type (might be due to invalid IL or missing references)
				DoDecoratedOperation(delegate(IServer s)
				{
					//IL_0002: Unknown result type (might be due to invalid IL or missing references)
					//IL_0008: Unknown result type (might be due to invalid IL or missing references)
					//IL_000e: Unknown result type (might be due to invalid IL or missing references)
					s.ConfigSet(setting, value, flags);
				});
			}

			public Task ConfigSetAsync(RedisValue setting, RedisValue value, CommandFlags flags = (CommandFlags)0)
			{
				//IL_0007: Unknown result type (might be due to invalid IL or missing references)
				//IL_0008: Unknown result type (might be due to invalid IL or missing references)
				//IL_000e: Unknown result type (might be due to invalid IL or missing references)
				//IL_000f: Unknown result type (might be due to invalid IL or missing references)
				//IL_0015: Unknown result type (might be due to invalid IL or missing references)
				//IL_0016: Unknown result type (might be due to invalid IL or missing references)
				return DoDecoratedOperation((IServer s) => s.ConfigSetAsync(setting, value, flags));
			}

			public long DatabaseSize(int database = 0, CommandFlags flags = (CommandFlags)0)
			{
				//IL_000e: Unknown result type (might be due to invalid IL or missing references)
				//IL_000f: Unknown result type (might be due to invalid IL or missing references)
				return DoDecoratedOperation((IServer s) => s.DatabaseSize(database, flags));
			}

			public Task<long> DatabaseSizeAsync(int database = 0, CommandFlags flags = (CommandFlags)0)
			{
				//IL_000e: Unknown result type (might be due to invalid IL or missing references)
				//IL_000f: Unknown result type (might be due to invalid IL or missing references)
				return DoDecoratedOperation((IServer s) => s.DatabaseSizeAsync(database, flags));
			}

			public RedisValue Echo(RedisValue message, CommandFlags flags = (CommandFlags)0)
			{
				//IL_0007: Unknown result type (might be due to invalid IL or missing references)
				//IL_0008: Unknown result type (might be due to invalid IL or missing references)
				//IL_000e: Unknown result type (might be due to invalid IL or missing references)
				//IL_000f: Unknown result type (might be due to invalid IL or missing references)
				//IL_0021: Unknown result type (might be due to invalid IL or missing references)
				return DoDecoratedOperation((IServer s) => s.Echo(message, flags));
			}

			public Task<RedisValue> EchoAsync(RedisValue message, CommandFlags flags = (CommandFlags)0)
			{
				//IL_0007: Unknown result type (might be due to invalid IL or missing references)
				//IL_0008: Unknown result type (might be due to invalid IL or missing references)
				//IL_000e: Unknown result type (might be due to invalid IL or missing references)
				//IL_000f: Unknown result type (might be due to invalid IL or missing references)
				return DoDecoratedOperation((IServer s) => s.EchoAsync(message, flags));
			}

			public void FlushAllDatabases(CommandFlags flags = (CommandFlags)0)
			{
				//IL_0007: Unknown result type (might be due to invalid IL or missing references)
				//IL_0008: Unknown result type (might be due to invalid IL or missing references)
				DoDecoratedOperation(delegate(IServer s)
				{
					//IL_0002: Unknown result type (might be due to invalid IL or missing references)
					s.FlushAllDatabases(flags);
				});
			}

			public Task FlushAllDatabasesAsync(CommandFlags flags = (CommandFlags)0)
			{
				//IL_0007: Unknown result type (might be due to invalid IL or missing references)
				//IL_0008: Unknown result type (might be due to invalid IL or missing references)
				return DoDecoratedOperation((IServer s) => s.FlushAllDatabasesAsync(flags));
			}

			public void FlushDatabase(int database = 0, CommandFlags flags = (CommandFlags)0)
			{
				//IL_000e: Unknown result type (might be due to invalid IL or missing references)
				//IL_000f: Unknown result type (might be due to invalid IL or missing references)
				DoDecoratedOperation(delegate(IServer s)
				{
					//IL_0008: Unknown result type (might be due to invalid IL or missing references)
					s.FlushDatabase(database, flags);
				});
			}

			public Task FlushDatabaseAsync(int database = 0, CommandFlags flags = (CommandFlags)0)
			{
				//IL_000e: Unknown result type (might be due to invalid IL or missing references)
				//IL_000f: Unknown result type (might be due to invalid IL or missing references)
				return DoDecoratedOperation((IServer s) => s.FlushDatabaseAsync(database, flags));
			}

			public ServerCounters GetCounters()
			{
				return DoDecoratedOperation((IServer s) => s.GetCounters());
			}

			public IGrouping<string, KeyValuePair<string, string>>[] Info(RedisValue section = default(RedisValue), CommandFlags flags = (CommandFlags)0)
			{
				//IL_0007: Unknown result type (might be due to invalid IL or missing references)
				//IL_0008: Unknown result type (might be due to invalid IL or missing references)
				//IL_000e: Unknown result type (might be due to invalid IL or missing references)
				//IL_000f: Unknown result type (might be due to invalid IL or missing references)
				return DoDecoratedOperation((IServer s) => s.Info(section, flags));
			}

			public Task<IGrouping<string, KeyValuePair<string, string>>[]> InfoAsync(RedisValue section = default(RedisValue), CommandFlags flags = (CommandFlags)0)
			{
				//IL_0007: Unknown result type (might be due to invalid IL or missing references)
				//IL_0008: Unknown result type (might be due to invalid IL or missing references)
				//IL_000e: Unknown result type (might be due to invalid IL or missing references)
				//IL_000f: Unknown result type (might be due to invalid IL or missing references)
				return DoDecoratedOperation((IServer s) => s.InfoAsync(section, flags));
			}

			public string InfoRaw(RedisValue section = default(RedisValue), CommandFlags flags = (CommandFlags)0)
			{
				//IL_0007: Unknown result type (might be due to invalid IL or missing references)
				//IL_0008: Unknown result type (might be due to invalid IL or missing references)
				//IL_000e: Unknown result type (might be due to invalid IL or missing references)
				//IL_000f: Unknown result type (might be due to invalid IL or missing references)
				return DoDecoratedOperation((IServer s) => s.InfoRaw(section, flags));
			}

			public Task<string> InfoRawAsync(RedisValue section = default(RedisValue), CommandFlags flags = (CommandFlags)0)
			{
				//IL_0007: Unknown result type (might be due to invalid IL or missing references)
				//IL_0008: Unknown result type (might be due to invalid IL or missing references)
				//IL_000e: Unknown result type (might be due to invalid IL or missing references)
				//IL_000f: Unknown result type (might be due to invalid IL or missing references)
				return DoDecoratedOperation((IServer s) => s.InfoRawAsync(section, flags));
			}

			public IEnumerable<RedisKey> Keys(int database, RedisValue pattern, int pageSize, CommandFlags flags)
			{
				//IL_000e: Unknown result type (might be due to invalid IL or missing references)
				//IL_000f: Unknown result type (might be due to invalid IL or missing references)
				//IL_001c: Unknown result type (might be due to invalid IL or missing references)
				//IL_001e: Unknown result type (might be due to invalid IL or missing references)
				return DoDecoratedOperation((IServer s) => s.Keys(database, pattern, pageSize, flags));
			}

			public IEnumerable<RedisKey> Keys(int database = 0, RedisValue pattern = default(RedisValue), int pageSize = 10, long cursor = 0L, int pageOffset = 0, CommandFlags flags = (CommandFlags)0)
			{
				//IL_000e: Unknown result type (might be due to invalid IL or missing references)
				//IL_000f: Unknown result type (might be due to invalid IL or missing references)
				//IL_002c: Unknown result type (might be due to invalid IL or missing references)
				//IL_002e: Unknown result type (might be due to invalid IL or missing references)
				return DoDecoratedOperation((IServer s) => s.Keys(database, pattern, pageSize, cursor, pageOffset, flags));
			}

			public DateTime LastSave(CommandFlags flags = (CommandFlags)0)
			{
				//IL_0007: Unknown result type (might be due to invalid IL or missing references)
				//IL_0008: Unknown result type (might be due to invalid IL or missing references)
				return DoDecoratedOperation((IServer s) => s.LastSave(flags));
			}

			public Task<DateTime> LastSaveAsync(CommandFlags flags = (CommandFlags)0)
			{
				//IL_0007: Unknown result type (might be due to invalid IL or missing references)
				//IL_0008: Unknown result type (might be due to invalid IL or missing references)
				return DoDecoratedOperation((IServer s) => s.LastSaveAsync(flags));
			}

			public void MakeMaster(ReplicationChangeOptions options, TextWriter log = null)
			{
				//IL_0007: Unknown result type (might be due to invalid IL or missing references)
				//IL_0008: Unknown result type (might be due to invalid IL or missing references)
				DoDecoratedOperation(delegate(IServer s)
				{
					//IL_0002: Unknown result type (might be due to invalid IL or missing references)
					s.MakeMaster(options, log);
				});
			}

			public void Save(SaveType type, CommandFlags flags = (CommandFlags)0)
			{
				//IL_0007: Unknown result type (might be due to invalid IL or missing references)
				//IL_0008: Unknown result type (might be due to invalid IL or missing references)
				//IL_000e: Unknown result type (might be due to invalid IL or missing references)
				//IL_000f: Unknown result type (might be due to invalid IL or missing references)
				DoDecoratedOperation(delegate(IServer s)
				{
					//IL_0002: Unknown result type (might be due to invalid IL or missing references)
					//IL_0008: Unknown result type (might be due to invalid IL or missing references)
					s.Save(type, flags);
				});
			}

			public Task SaveAsync(SaveType type, CommandFlags flags = (CommandFlags)0)
			{
				//IL_0007: Unknown result type (might be due to invalid IL or missing references)
				//IL_0008: Unknown result type (might be due to invalid IL or missing references)
				//IL_000e: Unknown result type (might be due to invalid IL or missing references)
				//IL_000f: Unknown result type (might be due to invalid IL or missing references)
				return DoDecoratedOperation((IServer s) => s.SaveAsync(type, flags));
			}

			public bool ScriptExists(string script, CommandFlags flags = (CommandFlags)0)
			{
				//IL_000e: Unknown result type (might be due to invalid IL or missing references)
				//IL_000f: Unknown result type (might be due to invalid IL or missing references)
				return DoDecoratedOperation((IServer s) => s.ScriptExists(script, flags));
			}

			public bool ScriptExists(byte[] sha1, CommandFlags flags = (CommandFlags)0)
			{
				//IL_000e: Unknown result type (might be due to invalid IL or missing references)
				//IL_000f: Unknown result type (might be due to invalid IL or missing references)
				return DoDecoratedOperation((IServer s) => s.ScriptExists(sha1, flags));
			}

			public Task<bool> ScriptExistsAsync(string script, CommandFlags flags = (CommandFlags)0)
			{
				//IL_000e: Unknown result type (might be due to invalid IL or missing references)
				//IL_000f: Unknown result type (might be due to invalid IL or missing references)
				return DoDecoratedOperation((IServer s) => s.ScriptExistsAsync(script, flags));
			}

			public Task<bool> ScriptExistsAsync(byte[] sha1, CommandFlags flags = (CommandFlags)0)
			{
				//IL_000e: Unknown result type (might be due to invalid IL or missing references)
				//IL_000f: Unknown result type (might be due to invalid IL or missing references)
				return DoDecoratedOperation((IServer s) => s.ScriptExistsAsync(sha1, flags));
			}

			public void ScriptFlush(CommandFlags flags = (CommandFlags)0)
			{
				//IL_0007: Unknown result type (might be due to invalid IL or missing references)
				//IL_0008: Unknown result type (might be due to invalid IL or missing references)
				DoDecoratedOperation(delegate(IServer s)
				{
					//IL_0002: Unknown result type (might be due to invalid IL or missing references)
					s.ScriptFlush(flags);
				});
			}

			public Task ScriptFlushAsync(CommandFlags flags = (CommandFlags)0)
			{
				//IL_0007: Unknown result type (might be due to invalid IL or missing references)
				//IL_0008: Unknown result type (might be due to invalid IL or missing references)
				return DoDecoratedOperation((IServer s) => s.ScriptFlushAsync(flags));
			}

			public byte[] ScriptLoad(string script, CommandFlags flags = (CommandFlags)0)
			{
				//IL_000e: Unknown result type (might be due to invalid IL or missing references)
				//IL_000f: Unknown result type (might be due to invalid IL or missing references)
				return DoDecoratedOperation((IServer s) => s.ScriptLoad(script, flags));
			}

			public LoadedLuaScript ScriptLoad(LuaScript script, CommandFlags flags = (CommandFlags)0)
			{
				//IL_000e: Unknown result type (might be due to invalid IL or missing references)
				//IL_000f: Unknown result type (might be due to invalid IL or missing references)
				return DoDecoratedOperation((IServer s) => s.ScriptLoad(script, flags));
			}

			public Task<byte[]> ScriptLoadAsync(string script, CommandFlags flags = (CommandFlags)0)
			{
				//IL_000e: Unknown result type (might be due to invalid IL or missing references)
				//IL_000f: Unknown result type (might be due to invalid IL or missing references)
				return DoDecoratedOperation((IServer s) => s.ScriptLoadAsync(script, flags));
			}

			public Task<LoadedLuaScript> ScriptLoadAsync(LuaScript script, CommandFlags flags = (CommandFlags)0)
			{
				//IL_000e: Unknown result type (might be due to invalid IL or missing references)
				//IL_000f: Unknown result type (might be due to invalid IL or missing references)
				return DoDecoratedOperation((IServer s) => s.ScriptLoadAsync(script, flags));
			}

			public void Shutdown(ShutdownMode shutdownMode = (ShutdownMode)0, CommandFlags flags = (CommandFlags)0)
			{
				//IL_0007: Unknown result type (might be due to invalid IL or missing references)
				//IL_0008: Unknown result type (might be due to invalid IL or missing references)
				//IL_000e: Unknown result type (might be due to invalid IL or missing references)
				//IL_000f: Unknown result type (might be due to invalid IL or missing references)
				DoDecoratedOperation(delegate(IServer s)
				{
					//IL_0002: Unknown result type (might be due to invalid IL or missing references)
					//IL_0008: Unknown result type (might be due to invalid IL or missing references)
					s.Shutdown(shutdownMode, flags);
				});
			}

			public void SlaveOf(EndPoint master, CommandFlags flags = (CommandFlags)0)
			{
				//IL_000e: Unknown result type (might be due to invalid IL or missing references)
				//IL_000f: Unknown result type (might be due to invalid IL or missing references)
				DoDecoratedOperation(delegate(IServer s)
				{
					//IL_0008: Unknown result type (might be due to invalid IL or missing references)
					s.SlaveOf(master, flags);
				});
			}

			public Task SlaveOfAsync(EndPoint master, CommandFlags flags = (CommandFlags)0)
			{
				//IL_000e: Unknown result type (might be due to invalid IL or missing references)
				//IL_000f: Unknown result type (might be due to invalid IL or missing references)
				return DoDecoratedOperation((IServer s) => s.SlaveOfAsync(master, flags));
			}

			public CommandTrace[] SlowlogGet(int count = 0, CommandFlags flags = (CommandFlags)0)
			{
				//IL_000e: Unknown result type (might be due to invalid IL or missing references)
				//IL_000f: Unknown result type (might be due to invalid IL or missing references)
				return DoDecoratedOperation((IServer s) => s.SlowlogGet(count, flags));
			}

			public Task<CommandTrace[]> SlowlogGetAsync(int count = 0, CommandFlags flags = (CommandFlags)0)
			{
				//IL_000e: Unknown result type (might be due to invalid IL or missing references)
				//IL_000f: Unknown result type (might be due to invalid IL or missing references)
				return DoDecoratedOperation((IServer s) => s.SlowlogGetAsync(count, flags));
			}

			public void SlowlogReset(CommandFlags flags = (CommandFlags)0)
			{
				//IL_0007: Unknown result type (might be due to invalid IL or missing references)
				//IL_0008: Unknown result type (might be due to invalid IL or missing references)
				DoDecoratedOperation(delegate(IServer s)
				{
					//IL_0002: Unknown result type (might be due to invalid IL or missing references)
					s.SlowlogReset(flags);
				});
			}

			public Task SlowlogResetAsync(CommandFlags flags = (CommandFlags)0)
			{
				//IL_0007: Unknown result type (might be due to invalid IL or missing references)
				//IL_0008: Unknown result type (might be due to invalid IL or missing references)
				return DoDecoratedOperation((IServer s) => s.SlowlogResetAsync(flags));
			}

			public RedisChannel[] SubscriptionChannels(RedisChannel pattern = default(RedisChannel), CommandFlags flags = (CommandFlags)0)
			{
				//IL_0007: Unknown result type (might be due to invalid IL or missing references)
				//IL_0008: Unknown result type (might be due to invalid IL or missing references)
				//IL_000e: Unknown result type (might be due to invalid IL or missing references)
				//IL_000f: Unknown result type (might be due to invalid IL or missing references)
				return DoDecoratedOperation((IServer s) => s.SubscriptionChannels(pattern, flags));
			}

			public Task<RedisChannel[]> SubscriptionChannelsAsync(RedisChannel pattern = default(RedisChannel), CommandFlags flags = (CommandFlags)0)
			{
				//IL_0007: Unknown result type (might be due to invalid IL or missing references)
				//IL_0008: Unknown result type (might be due to invalid IL or missing references)
				//IL_000e: Unknown result type (might be due to invalid IL or missing references)
				//IL_000f: Unknown result type (might be due to invalid IL or missing references)
				return DoDecoratedOperation((IServer s) => s.SubscriptionChannelsAsync(pattern, flags));
			}

			public long SubscriptionPatternCount(CommandFlags flags = (CommandFlags)0)
			{
				//IL_0007: Unknown result type (might be due to invalid IL or missing references)
				//IL_0008: Unknown result type (might be due to invalid IL or missing references)
				return DoDecoratedOperation((IServer s) => s.SubscriptionPatternCount(flags));
			}

			public Task<long> SubscriptionPatternCountAsync(CommandFlags flags = (CommandFlags)0)
			{
				//IL_0007: Unknown result type (might be due to invalid IL or missing references)
				//IL_0008: Unknown result type (might be due to invalid IL or missing references)
				return DoDecoratedOperation((IServer s) => s.SubscriptionPatternCountAsync(flags));
			}

			public long SubscriptionSubscriberCount(RedisChannel channel, CommandFlags flags = (CommandFlags)0)
			{
				//IL_0007: Unknown result type (might be due to invalid IL or missing references)
				//IL_0008: Unknown result type (might be due to invalid IL or missing references)
				//IL_000e: Unknown result type (might be due to invalid IL or missing references)
				//IL_000f: Unknown result type (might be due to invalid IL or missing references)
				return DoDecoratedOperation((IServer s) => s.SubscriptionSubscriberCount(channel, flags));
			}

			public Task<long> SubscriptionSubscriberCountAsync(RedisChannel channel, CommandFlags flags = (CommandFlags)0)
			{
				//IL_0007: Unknown result type (might be due to invalid IL or missing references)
				//IL_0008: Unknown result type (might be due to invalid IL or missing references)
				//IL_000e: Unknown result type (might be due to invalid IL or missing references)
				//IL_000f: Unknown result type (might be due to invalid IL or missing references)
				return DoDecoratedOperation((IServer s) => s.SubscriptionSubscriberCountAsync(channel, flags));
			}

			public DateTime Time(CommandFlags flags = (CommandFlags)0)
			{
				//IL_0007: Unknown result type (might be due to invalid IL or missing references)
				//IL_0008: Unknown result type (might be due to invalid IL or missing references)
				return DoDecoratedOperation((IServer s) => s.Time(flags));
			}

			public Task<DateTime> TimeAsync(CommandFlags flags = (CommandFlags)0)
			{
				//IL_0007: Unknown result type (might be due to invalid IL or missing references)
				//IL_0008: Unknown result type (might be due to invalid IL or missing references)
				return DoDecoratedOperation((IServer s) => s.TimeAsync(flags));
			}

			public EndPoint SentinelGetMasterAddressByName(string serviceName, CommandFlags flags = (CommandFlags)0)
			{
				//IL_000e: Unknown result type (might be due to invalid IL or missing references)
				//IL_000f: Unknown result type (might be due to invalid IL or missing references)
				return DoDecoratedOperation((IServer s) => s.SentinelGetMasterAddressByName(serviceName, flags));
			}

			public Task<EndPoint> SentinelGetMasterAddressByNameAsync(string serviceName, CommandFlags flags = (CommandFlags)0)
			{
				//IL_000e: Unknown result type (might be due to invalid IL or missing references)
				//IL_000f: Unknown result type (might be due to invalid IL or missing references)
				return DoDecoratedOperation((IServer s) => s.SentinelGetMasterAddressByNameAsync(serviceName, flags));
			}

			public KeyValuePair<string, string>[] SentinelMaster(string serviceName, CommandFlags flags = (CommandFlags)0)
			{
				//IL_000e: Unknown result type (might be due to invalid IL or missing references)
				//IL_000f: Unknown result type (might be due to invalid IL or missing references)
				return DoDecoratedOperation((IServer s) => s.SentinelMaster(serviceName, flags));
			}

			public Task<KeyValuePair<string, string>[]> SentinelMasterAsync(string serviceName, CommandFlags flags = (CommandFlags)0)
			{
				//IL_000e: Unknown result type (might be due to invalid IL or missing references)
				//IL_000f: Unknown result type (might be due to invalid IL or missing references)
				return DoDecoratedOperation((IServer s) => s.SentinelMasterAsync(serviceName, flags));
			}

			public KeyValuePair<string, string>[][] SentinelMasters(CommandFlags flags = (CommandFlags)0)
			{
				//IL_0007: Unknown result type (might be due to invalid IL or missing references)
				//IL_0008: Unknown result type (might be due to invalid IL or missing references)
				return DoDecoratedOperation((IServer s) => s.SentinelMasters(flags));
			}

			public Task<KeyValuePair<string, string>[][]> SentinelMastersAsync(CommandFlags flags = (CommandFlags)0)
			{
				//IL_0007: Unknown result type (might be due to invalid IL or missing references)
				//IL_0008: Unknown result type (might be due to invalid IL or missing references)
				return DoDecoratedOperation((IServer s) => s.SentinelMastersAsync(flags));
			}

			public KeyValuePair<string, string>[][] SentinelSlaves(string serviceName, CommandFlags flags = (CommandFlags)0)
			{
				//IL_000e: Unknown result type (might be due to invalid IL or missing references)
				//IL_000f: Unknown result type (might be due to invalid IL or missing references)
				return DoDecoratedOperation((IServer s) => s.SentinelSlaves(serviceName, flags));
			}

			public Task<KeyValuePair<string, string>[][]> SentinelSlavesAsync(string serviceName, CommandFlags flags = (CommandFlags)0)
			{
				//IL_000e: Unknown result type (might be due to invalid IL or missing references)
				//IL_000f: Unknown result type (might be due to invalid IL or missing references)
				return DoDecoratedOperation((IServer s) => s.SentinelSlavesAsync(serviceName, flags));
			}

			public void SentinelFailover(string serviceName, CommandFlags flags = (CommandFlags)0)
			{
				//IL_000e: Unknown result type (might be due to invalid IL or missing references)
				//IL_000f: Unknown result type (might be due to invalid IL or missing references)
				DoDecoratedOperation(delegate(IServer s)
				{
					//IL_0008: Unknown result type (might be due to invalid IL or missing references)
					s.SentinelFailover(serviceName, flags);
				});
			}

			public Task SentinelFailoverAsync(string serviceName, CommandFlags flags = (CommandFlags)0)
			{
				//IL_000e: Unknown result type (might be due to invalid IL or missing references)
				//IL_000f: Unknown result type (might be due to invalid IL or missing references)
				return DoDecoratedOperation((IServer s) => s.SentinelFailoverAsync(serviceName, flags));
			}

			public TimeSpan Ping(CommandFlags flags = (CommandFlags)0)
			{
				//IL_0007: Unknown result type (might be due to invalid IL or missing references)
				//IL_0008: Unknown result type (might be due to invalid IL or missing references)
				return DoDecoratedOperation((IServer s) => ((IRedis)s).Ping(flags));
			}

			public Task<TimeSpan> PingAsync(CommandFlags flags = (CommandFlags)0)
			{
				//IL_0007: Unknown result type (might be due to invalid IL or missing references)
				//IL_0008: Unknown result type (might be due to invalid IL or missing references)
				return DoDecoratedOperation((IServer s) => ((IRedisAsync)s).PingAsync(flags));
			}

			public bool TryWait(Task task)
			{
				return DoDecoratedOperation((IServer s) => ((IRedisAsync)s).TryWait(task));
			}

			public void Wait(Task task)
			{
				DoDecoratedOperation(delegate(IServer s)
				{
					((IRedisAsync)s).Wait(task);
				});
			}

			public T Wait<T>(Task<T> task)
			{
				return DoDecoratedOperation((IServer s) => ((IRedisAsync)s).Wait<T>(task));
			}

			public void WaitAll(params Task[] tasks)
			{
				DoDecoratedOperation(delegate(IServer s)
				{
					((IRedisAsync)s).WaitAll(tasks);
				});
			}
		}

		private class BadStateReportingTransaction : BadStateReportingBase<ITransaction>, ITransaction, IBatch, IDatabaseAsync, IRedisAsync
		{
			public ConnectionMultiplexer Multiplexer
			{
				get
				{
					return ((IRedisAsync)base.Decorated).Multiplexer;
				}
			}

			public override event Action BadStateExceptionOccurred;

			public BadStateReportingTransaction(ITransaction decorated)
				: base(decorated)
			{
			}

			protected override void RaiseBadStateExceptionOccurred()
			{
				Action action = BadStateExceptionOccurred;
				if (action != null)
				{
					action();
				}
			}

			public ConditionResult AddCondition(Condition condition)
			{
				return base.Decorated.AddCondition(condition);
			}

			public bool Execute(CommandFlags flags = (CommandFlags)0)
			{
				//IL_0006: Unknown result type (might be due to invalid IL or missing references)
				return base.Decorated.Execute(flags);
			}

			public Task<bool> ExecuteAsync(CommandFlags flags = (CommandFlags)0)
			{
				//IL_0006: Unknown result type (might be due to invalid IL or missing references)
				return base.Decorated.ExecuteAsync(flags);
			}

			public void Execute()
			{
				base.Decorated.Execute((CommandFlags)0);
			}

			public Task<RedisValue> DebugObjectAsync(RedisKey key, CommandFlags flags = (CommandFlags)0)
			{
				//IL_0007: Unknown result type (might be due to invalid IL or missing references)
				//IL_0008: Unknown result type (might be due to invalid IL or missing references)
				//IL_000e: Unknown result type (might be due to invalid IL or missing references)
				//IL_000f: Unknown result type (might be due to invalid IL or missing references)
				return DoDecoratedOperation((ITransaction t) => ((IDatabaseAsync)t).DebugObjectAsync(key, flags));
			}

			public Task<bool> GeoAddAsync(RedisKey key, double longitude, double latitude, RedisValue member, CommandFlags flags = (CommandFlags)0)
			{
				//IL_0007: Unknown result type (might be due to invalid IL or missing references)
				//IL_0008: Unknown result type (might be due to invalid IL or missing references)
				//IL_001c: Unknown result type (might be due to invalid IL or missing references)
				//IL_001e: Unknown result type (might be due to invalid IL or missing references)
				//IL_0024: Unknown result type (might be due to invalid IL or missing references)
				//IL_0026: Unknown result type (might be due to invalid IL or missing references)
				return DoDecoratedOperation((ITransaction t) => ((IDatabaseAsync)t).GeoAddAsync(key, longitude, latitude, member, flags));
			}

			public Task<bool> GeoAddAsync(RedisKey key, GeoEntry value, CommandFlags flags = (CommandFlags)0)
			{
				//IL_0007: Unknown result type (might be due to invalid IL or missing references)
				//IL_0008: Unknown result type (might be due to invalid IL or missing references)
				//IL_000e: Unknown result type (might be due to invalid IL or missing references)
				//IL_000f: Unknown result type (might be due to invalid IL or missing references)
				//IL_0015: Unknown result type (might be due to invalid IL or missing references)
				//IL_0016: Unknown result type (might be due to invalid IL or missing references)
				return DoDecoratedOperation((ITransaction t) => ((IDatabaseAsync)t).GeoAddAsync(key, value, flags));
			}

			public Task<long> GeoAddAsync(RedisKey key, GeoEntry[] values, CommandFlags flags = (CommandFlags)0)
			{
				//IL_0007: Unknown result type (might be due to invalid IL or missing references)
				//IL_0008: Unknown result type (might be due to invalid IL or missing references)
				//IL_0015: Unknown result type (might be due to invalid IL or missing references)
				//IL_0016: Unknown result type (might be due to invalid IL or missing references)
				return DoDecoratedOperation((ITransaction t) => ((IDatabaseAsync)t).GeoAddAsync(key, values, flags));
			}

			public Task<bool> GeoRemoveAsync(RedisKey key, RedisValue member, CommandFlags flags = (CommandFlags)0)
			{
				//IL_0007: Unknown result type (might be due to invalid IL or missing references)
				//IL_0008: Unknown result type (might be due to invalid IL or missing references)
				//IL_000e: Unknown result type (might be due to invalid IL or missing references)
				//IL_000f: Unknown result type (might be due to invalid IL or missing references)
				//IL_0015: Unknown result type (might be due to invalid IL or missing references)
				//IL_0016: Unknown result type (might be due to invalid IL or missing references)
				return DoDecoratedOperation((ITransaction t) => ((IDatabaseAsync)t).GeoRemoveAsync(key, member, flags));
			}

			public Task<double?> GeoDistanceAsync(RedisKey key, RedisValue member1, RedisValue member2, GeoUnit unit = (GeoUnit)0, CommandFlags flags = (CommandFlags)0)
			{
				//IL_0007: Unknown result type (might be due to invalid IL or missing references)
				//IL_0008: Unknown result type (might be due to invalid IL or missing references)
				//IL_000e: Unknown result type (might be due to invalid IL or missing references)
				//IL_000f: Unknown result type (might be due to invalid IL or missing references)
				//IL_0015: Unknown result type (might be due to invalid IL or missing references)
				//IL_0016: Unknown result type (might be due to invalid IL or missing references)
				//IL_001c: Unknown result type (might be due to invalid IL or missing references)
				//IL_001e: Unknown result type (might be due to invalid IL or missing references)
				//IL_0024: Unknown result type (might be due to invalid IL or missing references)
				//IL_0026: Unknown result type (might be due to invalid IL or missing references)
				return DoDecoratedOperation((ITransaction t) => ((IDatabaseAsync)t).GeoDistanceAsync(key, member1, member2, unit, flags));
			}

			public Task<string[]> GeoHashAsync(RedisKey key, RedisValue[] members, CommandFlags flags = (CommandFlags)0)
			{
				//IL_0007: Unknown result type (might be due to invalid IL or missing references)
				//IL_0008: Unknown result type (might be due to invalid IL or missing references)
				//IL_0015: Unknown result type (might be due to invalid IL or missing references)
				//IL_0016: Unknown result type (might be due to invalid IL or missing references)
				return DoDecoratedOperation((ITransaction t) => ((IDatabaseAsync)t).GeoHashAsync(key, members, flags));
			}

			public Task<string> GeoHashAsync(RedisKey key, RedisValue member, CommandFlags flags = (CommandFlags)0)
			{
				//IL_0007: Unknown result type (might be due to invalid IL or missing references)
				//IL_0008: Unknown result type (might be due to invalid IL or missing references)
				//IL_000e: Unknown result type (might be due to invalid IL or missing references)
				//IL_000f: Unknown result type (might be due to invalid IL or missing references)
				//IL_0015: Unknown result type (might be due to invalid IL or missing references)
				//IL_0016: Unknown result type (might be due to invalid IL or missing references)
				return DoDecoratedOperation((ITransaction t) => ((IDatabaseAsync)t).GeoHashAsync(key, member, flags));
			}

			public Task<GeoPosition?[]> GeoPositionAsync(RedisKey key, RedisValue[] members, CommandFlags flags = (CommandFlags)0)
			{
				//IL_0007: Unknown result type (might be due to invalid IL or missing references)
				//IL_0008: Unknown result type (might be due to invalid IL or missing references)
				//IL_0015: Unknown result type (might be due to invalid IL or missing references)
				//IL_0016: Unknown result type (might be due to invalid IL or missing references)
				return DoDecoratedOperation((ITransaction t) => ((IDatabaseAsync)t).GeoPositionAsync(key, members, flags));
			}

			public Task<GeoPosition?> GeoPositionAsync(RedisKey key, RedisValue member, CommandFlags flags = (CommandFlags)0)
			{
				//IL_0007: Unknown result type (might be due to invalid IL or missing references)
				//IL_0008: Unknown result type (might be due to invalid IL or missing references)
				//IL_000e: Unknown result type (might be due to invalid IL or missing references)
				//IL_000f: Unknown result type (might be due to invalid IL or missing references)
				//IL_0015: Unknown result type (might be due to invalid IL or missing references)
				//IL_0016: Unknown result type (might be due to invalid IL or missing references)
				return DoDecoratedOperation((ITransaction t) => ((IDatabaseAsync)t).GeoPositionAsync(key, member, flags));
			}

			public Task<GeoRadiusResult[]> GeoRadiusAsync(RedisKey key, RedisValue member, double radius, GeoUnit unit = (GeoUnit)0, int count = -1, Order? order = null, GeoRadiusOptions options = (GeoRadiusOptions)3, CommandFlags flags = (CommandFlags)0)
			{
				//IL_0007: Unknown result type (might be due to invalid IL or missing references)
				//IL_0008: Unknown result type (might be due to invalid IL or missing references)
				//IL_000e: Unknown result type (might be due to invalid IL or missing references)
				//IL_000f: Unknown result type (might be due to invalid IL or missing references)
				//IL_001c: Unknown result type (might be due to invalid IL or missing references)
				//IL_001e: Unknown result type (might be due to invalid IL or missing references)
				//IL_0034: Unknown result type (might be due to invalid IL or missing references)
				//IL_0036: Unknown result type (might be due to invalid IL or missing references)
				//IL_003c: Unknown result type (might be due to invalid IL or missing references)
				//IL_003e: Unknown result type (might be due to invalid IL or missing references)
				return DoDecoratedOperation((ITransaction t) => ((IDatabaseAsync)t).GeoRadiusAsync(key, member, radius, unit, count, order, options, flags));
			}

			public Task<GeoRadiusResult[]> GeoRadiusAsync(RedisKey key, double longitude, double latitude, double radius, GeoUnit unit = (GeoUnit)0, int count = -1, Order? order = null, GeoRadiusOptions options = (GeoRadiusOptions)3, CommandFlags flags = (CommandFlags)0)
			{
				//IL_0007: Unknown result type (might be due to invalid IL or missing references)
				//IL_0008: Unknown result type (might be due to invalid IL or missing references)
				//IL_0024: Unknown result type (might be due to invalid IL or missing references)
				//IL_0026: Unknown result type (might be due to invalid IL or missing references)
				//IL_003c: Unknown result type (might be due to invalid IL or missing references)
				//IL_003e: Unknown result type (might be due to invalid IL or missing references)
				//IL_0044: Unknown result type (might be due to invalid IL or missing references)
				//IL_0046: Unknown result type (might be due to invalid IL or missing references)
				return DoDecoratedOperation((ITransaction t) => ((IDatabaseAsync)t).GeoRadiusAsync(key, longitude, latitude, radius, unit, count, order, options, flags));
			}

			public Task<long> HashDecrementAsync(RedisKey key, RedisValue hashField, long value = 1L, CommandFlags flags = (CommandFlags)0)
			{
				//IL_0007: Unknown result type (might be due to invalid IL or missing references)
				//IL_0008: Unknown result type (might be due to invalid IL or missing references)
				//IL_000e: Unknown result type (might be due to invalid IL or missing references)
				//IL_000f: Unknown result type (might be due to invalid IL or missing references)
				//IL_001c: Unknown result type (might be due to invalid IL or missing references)
				//IL_001e: Unknown result type (might be due to invalid IL or missing references)
				return DoDecoratedOperation((ITransaction t) => ((IDatabaseAsync)t).HashDecrementAsync(key, hashField, value, flags));
			}

			public Task<double> HashDecrementAsync(RedisKey key, RedisValue hashField, double value, CommandFlags flags = (CommandFlags)0)
			{
				//IL_0007: Unknown result type (might be due to invalid IL or missing references)
				//IL_0008: Unknown result type (might be due to invalid IL or missing references)
				//IL_000e: Unknown result type (might be due to invalid IL or missing references)
				//IL_000f: Unknown result type (might be due to invalid IL or missing references)
				//IL_001c: Unknown result type (might be due to invalid IL or missing references)
				//IL_001e: Unknown result type (might be due to invalid IL or missing references)
				return DoDecoratedOperation((ITransaction t) => ((IDatabaseAsync)t).HashDecrementAsync(key, hashField, value, flags));
			}

			public Task<bool> HashDeleteAsync(RedisKey key, RedisValue hashField, CommandFlags flags = (CommandFlags)0)
			{
				//IL_0007: Unknown result type (might be due to invalid IL or missing references)
				//IL_0008: Unknown result type (might be due to invalid IL or missing references)
				//IL_000e: Unknown result type (might be due to invalid IL or missing references)
				//IL_000f: Unknown result type (might be due to invalid IL or missing references)
				//IL_0015: Unknown result type (might be due to invalid IL or missing references)
				//IL_0016: Unknown result type (might be due to invalid IL or missing references)
				return DoDecoratedOperation((ITransaction t) => ((IDatabaseAsync)t).HashDeleteAsync(key, hashField, flags));
			}

			public Task<long> HashDeleteAsync(RedisKey key, RedisValue[] hashFields, CommandFlags flags = (CommandFlags)0)
			{
				//IL_0007: Unknown result type (might be due to invalid IL or missing references)
				//IL_0008: Unknown result type (might be due to invalid IL or missing references)
				//IL_0015: Unknown result type (might be due to invalid IL or missing references)
				//IL_0016: Unknown result type (might be due to invalid IL or missing references)
				return DoDecoratedOperation((ITransaction t) => ((IDatabaseAsync)t).HashDeleteAsync(key, hashFields, flags));
			}

			public Task<bool> HashExistsAsync(RedisKey key, RedisValue hashField, CommandFlags flags = (CommandFlags)0)
			{
				//IL_0007: Unknown result type (might be due to invalid IL or missing references)
				//IL_0008: Unknown result type (might be due to invalid IL or missing references)
				//IL_000e: Unknown result type (might be due to invalid IL or missing references)
				//IL_000f: Unknown result type (might be due to invalid IL or missing references)
				//IL_0015: Unknown result type (might be due to invalid IL or missing references)
				//IL_0016: Unknown result type (might be due to invalid IL or missing references)
				return DoDecoratedOperation((ITransaction t) => ((IDatabaseAsync)t).HashExistsAsync(key, hashField, flags));
			}

			public Task<HashEntry[]> HashGetAllAsync(RedisKey key, CommandFlags flags = (CommandFlags)0)
			{
				//IL_0007: Unknown result type (might be due to invalid IL or missing references)
				//IL_0008: Unknown result type (might be due to invalid IL or missing references)
				//IL_000e: Unknown result type (might be due to invalid IL or missing references)
				//IL_000f: Unknown result type (might be due to invalid IL or missing references)
				return DoDecoratedOperation((ITransaction t) => ((IDatabaseAsync)t).HashGetAllAsync(key, flags));
			}

			public Task<RedisValue> HashGetAsync(RedisKey key, RedisValue hashField, CommandFlags flags = (CommandFlags)0)
			{
				//IL_0007: Unknown result type (might be due to invalid IL or missing references)
				//IL_0008: Unknown result type (might be due to invalid IL or missing references)
				//IL_000e: Unknown result type (might be due to invalid IL or missing references)
				//IL_000f: Unknown result type (might be due to invalid IL or missing references)
				//IL_0015: Unknown result type (might be due to invalid IL or missing references)
				//IL_0016: Unknown result type (might be due to invalid IL or missing references)
				return DoDecoratedOperation((ITransaction t) => ((IDatabaseAsync)t).HashGetAsync(key, hashField, flags));
			}

			public Task<RedisValue[]> HashGetAsync(RedisKey key, RedisValue[] hashFields, CommandFlags flags = (CommandFlags)0)
			{
				//IL_0007: Unknown result type (might be due to invalid IL or missing references)
				//IL_0008: Unknown result type (might be due to invalid IL or missing references)
				//IL_0015: Unknown result type (might be due to invalid IL or missing references)
				//IL_0016: Unknown result type (might be due to invalid IL or missing references)
				return DoDecoratedOperation((ITransaction t) => ((IDatabaseAsync)t).HashGetAsync(key, hashFields, flags));
			}

			public Task<long> HashIncrementAsync(RedisKey key, RedisValue hashField, long value = 1L, CommandFlags flags = (CommandFlags)0)
			{
				//IL_0007: Unknown result type (might be due to invalid IL or missing references)
				//IL_0008: Unknown result type (might be due to invalid IL or missing references)
				//IL_000e: Unknown result type (might be due to invalid IL or missing references)
				//IL_000f: Unknown result type (might be due to invalid IL or missing references)
				//IL_001c: Unknown result type (might be due to invalid IL or missing references)
				//IL_001e: Unknown result type (might be due to invalid IL or missing references)
				return DoDecoratedOperation((ITransaction t) => ((IDatabaseAsync)t).HashIncrementAsync(key, hashField, value, flags));
			}

			public Task<double> HashIncrementAsync(RedisKey key, RedisValue hashField, double value, CommandFlags flags = (CommandFlags)0)
			{
				//IL_0007: Unknown result type (might be due to invalid IL or missing references)
				//IL_0008: Unknown result type (might be due to invalid IL or missing references)
				//IL_000e: Unknown result type (might be due to invalid IL or missing references)
				//IL_000f: Unknown result type (might be due to invalid IL or missing references)
				//IL_001c: Unknown result type (might be due to invalid IL or missing references)
				//IL_001e: Unknown result type (might be due to invalid IL or missing references)
				return DoDecoratedOperation((ITransaction t) => ((IDatabaseAsync)t).HashIncrementAsync(key, hashField, value, flags));
			}

			public Task<RedisValue[]> HashKeysAsync(RedisKey key, CommandFlags flags = (CommandFlags)0)
			{
				//IL_0007: Unknown result type (might be due to invalid IL or missing references)
				//IL_0008: Unknown result type (might be due to invalid IL or missing references)
				//IL_000e: Unknown result type (might be due to invalid IL or missing references)
				//IL_000f: Unknown result type (might be due to invalid IL or missing references)
				return DoDecoratedOperation((ITransaction t) => ((IDatabaseAsync)t).HashKeysAsync(key, flags));
			}

			public Task<long> HashLengthAsync(RedisKey key, CommandFlags flags = (CommandFlags)0)
			{
				//IL_0007: Unknown result type (might be due to invalid IL or missing references)
				//IL_0008: Unknown result type (might be due to invalid IL or missing references)
				//IL_000e: Unknown result type (might be due to invalid IL or missing references)
				//IL_000f: Unknown result type (might be due to invalid IL or missing references)
				return DoDecoratedOperation((ITransaction t) => ((IDatabaseAsync)t).HashLengthAsync(key, flags));
			}

			public Task HashSetAsync(RedisKey key, HashEntry[] hashFields, CommandFlags flags = (CommandFlags)0)
			{
				//IL_0007: Unknown result type (might be due to invalid IL or missing references)
				//IL_0008: Unknown result type (might be due to invalid IL or missing references)
				//IL_0015: Unknown result type (might be due to invalid IL or missing references)
				//IL_0016: Unknown result type (might be due to invalid IL or missing references)
				return DoDecoratedOperation((ITransaction t) => ((IDatabaseAsync)t).HashSetAsync(key, hashFields, flags));
			}

			public Task<bool> HashSetAsync(RedisKey key, RedisValue hashField, RedisValue value, When when = (When)0, CommandFlags flags = (CommandFlags)0)
			{
				//IL_0007: Unknown result type (might be due to invalid IL or missing references)
				//IL_0008: Unknown result type (might be due to invalid IL or missing references)
				//IL_000e: Unknown result type (might be due to invalid IL or missing references)
				//IL_000f: Unknown result type (might be due to invalid IL or missing references)
				//IL_0015: Unknown result type (might be due to invalid IL or missing references)
				//IL_0016: Unknown result type (might be due to invalid IL or missing references)
				//IL_001c: Unknown result type (might be due to invalid IL or missing references)
				//IL_001e: Unknown result type (might be due to invalid IL or missing references)
				//IL_0024: Unknown result type (might be due to invalid IL or missing references)
				//IL_0026: Unknown result type (might be due to invalid IL or missing references)
				return DoDecoratedOperation((ITransaction t) => ((IDatabaseAsync)t).HashSetAsync(key, hashField, value, when, flags));
			}

			public Task<RedisValue[]> HashValuesAsync(RedisKey key, CommandFlags flags = (CommandFlags)0)
			{
				//IL_0007: Unknown result type (might be due to invalid IL or missing references)
				//IL_0008: Unknown result type (might be due to invalid IL or missing references)
				//IL_000e: Unknown result type (might be due to invalid IL or missing references)
				//IL_000f: Unknown result type (might be due to invalid IL or missing references)
				return DoDecoratedOperation((ITransaction t) => ((IDatabaseAsync)t).HashValuesAsync(key, flags));
			}

			public Task<bool> HyperLogLogAddAsync(RedisKey key, RedisValue value, CommandFlags flags = (CommandFlags)0)
			{
				//IL_0007: Unknown result type (might be due to invalid IL or missing references)
				//IL_0008: Unknown result type (might be due to invalid IL or missing references)
				//IL_000e: Unknown result type (might be due to invalid IL or missing references)
				//IL_000f: Unknown result type (might be due to invalid IL or missing references)
				//IL_0015: Unknown result type (might be due to invalid IL or missing references)
				//IL_0016: Unknown result type (might be due to invalid IL or missing references)
				return DoDecoratedOperation((ITransaction t) => ((IDatabaseAsync)t).HyperLogLogAddAsync(key, value, flags));
			}

			public Task<bool> HyperLogLogAddAsync(RedisKey key, RedisValue[] values, CommandFlags flags = (CommandFlags)0)
			{
				//IL_0007: Unknown result type (might be due to invalid IL or missing references)
				//IL_0008: Unknown result type (might be due to invalid IL or missing references)
				//IL_0015: Unknown result type (might be due to invalid IL or missing references)
				//IL_0016: Unknown result type (might be due to invalid IL or missing references)
				return DoDecoratedOperation((ITransaction t) => ((IDatabaseAsync)t).HyperLogLogAddAsync(key, values, flags));
			}

			public Task<long> HyperLogLogLengthAsync(RedisKey key, CommandFlags flags = (CommandFlags)0)
			{
				//IL_0007: Unknown result type (might be due to invalid IL or missing references)
				//IL_0008: Unknown result type (might be due to invalid IL or missing references)
				//IL_000e: Unknown result type (might be due to invalid IL or missing references)
				//IL_000f: Unknown result type (might be due to invalid IL or missing references)
				return DoDecoratedOperation((ITransaction t) => ((IDatabaseAsync)t).HyperLogLogLengthAsync(key, flags));
			}

			public Task<long> HyperLogLogLengthAsync(RedisKey[] keys, CommandFlags flags = (CommandFlags)0)
			{
				//IL_000e: Unknown result type (might be due to invalid IL or missing references)
				//IL_000f: Unknown result type (might be due to invalid IL or missing references)
				return DoDecoratedOperation((ITransaction t) => ((IDatabaseAsync)t).HyperLogLogLengthAsync(keys, flags));
			}

			public Task HyperLogLogMergeAsync(RedisKey destination, RedisKey first, RedisKey second, CommandFlags flags = (CommandFlags)0)
			{
				//IL_0007: Unknown result type (might be due to invalid IL or missing references)
				//IL_0008: Unknown result type (might be due to invalid IL or missing references)
				//IL_000e: Unknown result type (might be due to invalid IL or missing references)
				//IL_000f: Unknown result type (might be due to invalid IL or missing references)
				//IL_0015: Unknown result type (might be due to invalid IL or missing references)
				//IL_0016: Unknown result type (might be due to invalid IL or missing references)
				//IL_001c: Unknown result type (might be due to invalid IL or missing references)
				//IL_001e: Unknown result type (might be due to invalid IL or missing references)
				return DoDecoratedOperation((ITransaction t) => ((IDatabaseAsync)t).HyperLogLogMergeAsync(destination, first, second, flags));
			}

			public Task HyperLogLogMergeAsync(RedisKey destination, RedisKey[] sourceKeys, CommandFlags flags = (CommandFlags)0)
			{
				//IL_0007: Unknown result type (might be due to invalid IL or missing references)
				//IL_0008: Unknown result type (might be due to invalid IL or missing references)
				//IL_0015: Unknown result type (might be due to invalid IL or missing references)
				//IL_0016: Unknown result type (might be due to invalid IL or missing references)
				return DoDecoratedOperation((ITransaction t) => ((IDatabaseAsync)t).HyperLogLogMergeAsync(destination, sourceKeys, flags));
			}

			public Task<EndPoint> IdentifyEndpointAsync(RedisKey key = default(RedisKey), CommandFlags flags = (CommandFlags)0)
			{
				//IL_0007: Unknown result type (might be due to invalid IL or missing references)
				//IL_0008: Unknown result type (might be due to invalid IL or missing references)
				//IL_000e: Unknown result type (might be due to invalid IL or missing references)
				//IL_000f: Unknown result type (might be due to invalid IL or missing references)
				return DoDecoratedOperation((ITransaction t) => ((IDatabaseAsync)t).IdentifyEndpointAsync(key, flags));
			}

			public bool IsConnected(RedisKey key, CommandFlags flags = (CommandFlags)0)
			{
				//IL_0007: Unknown result type (might be due to invalid IL or missing references)
				//IL_0008: Unknown result type (might be due to invalid IL or missing references)
				//IL_000e: Unknown result type (might be due to invalid IL or missing references)
				//IL_000f: Unknown result type (might be due to invalid IL or missing references)
				return DoDecoratedOperation((ITransaction t) => ((IDatabaseAsync)t).IsConnected(key, flags));
			}

			public Task<bool> KeyDeleteAsync(RedisKey key, CommandFlags flags = (CommandFlags)0)
			{
				//IL_0007: Unknown result type (might be due to invalid IL or missing references)
				//IL_0008: Unknown result type (might be due to invalid IL or missing references)
				//IL_000e: Unknown result type (might be due to invalid IL or missing references)
				//IL_000f: Unknown result type (might be due to invalid IL or missing references)
				return DoDecoratedOperation((ITransaction t) => ((IDatabaseAsync)t).KeyDeleteAsync(key, flags));
			}

			public Task<long> KeyDeleteAsync(RedisKey[] keys, CommandFlags flags = (CommandFlags)0)
			{
				//IL_000e: Unknown result type (might be due to invalid IL or missing references)
				//IL_000f: Unknown result type (might be due to invalid IL or missing references)
				return DoDecoratedOperation((ITransaction t) => ((IDatabaseAsync)t).KeyDeleteAsync(keys, flags));
			}

			public Task<byte[]> KeyDumpAsync(RedisKey key, CommandFlags flags = (CommandFlags)0)
			{
				//IL_0007: Unknown result type (might be due to invalid IL or missing references)
				//IL_0008: Unknown result type (might be due to invalid IL or missing references)
				//IL_000e: Unknown result type (might be due to invalid IL or missing references)
				//IL_000f: Unknown result type (might be due to invalid IL or missing references)
				return DoDecoratedOperation((ITransaction t) => ((IDatabaseAsync)t).KeyDumpAsync(key, flags));
			}

			public Task<bool> KeyExistsAsync(RedisKey key, CommandFlags flags = (CommandFlags)0)
			{
				//IL_0007: Unknown result type (might be due to invalid IL or missing references)
				//IL_0008: Unknown result type (might be due to invalid IL or missing references)
				//IL_000e: Unknown result type (might be due to invalid IL or missing references)
				//IL_000f: Unknown result type (might be due to invalid IL or missing references)
				return DoDecoratedOperation((ITransaction t) => ((IDatabaseAsync)t).KeyExistsAsync(key, flags));
			}

			public Task<bool> KeyExpireAsync(RedisKey key, TimeSpan? expiry, CommandFlags flags = (CommandFlags)0)
			{
				//IL_0007: Unknown result type (might be due to invalid IL or missing references)
				//IL_0008: Unknown result type (might be due to invalid IL or missing references)
				//IL_0015: Unknown result type (might be due to invalid IL or missing references)
				//IL_0016: Unknown result type (might be due to invalid IL or missing references)
				return DoDecoratedOperation((ITransaction t) => ((IDatabaseAsync)t).KeyExpireAsync(key, expiry, flags));
			}

			public Task<bool> KeyExpireAsync(RedisKey key, DateTime? expiry, CommandFlags flags = (CommandFlags)0)
			{
				//IL_0007: Unknown result type (might be due to invalid IL or missing references)
				//IL_0008: Unknown result type (might be due to invalid IL or missing references)
				//IL_0015: Unknown result type (might be due to invalid IL or missing references)
				//IL_0016: Unknown result type (might be due to invalid IL or missing references)
				return DoDecoratedOperation((ITransaction t) => ((IDatabaseAsync)t).KeyExpireAsync(key, expiry, flags));
			}

			public Task KeyMigrateAsync(RedisKey key, EndPoint toServer, int toDatabase = 0, int timeoutMilliseconds = 0, MigrateOptions migrateOptions = (MigrateOptions)0, CommandFlags flags = (CommandFlags)0)
			{
				//IL_0007: Unknown result type (might be due to invalid IL or missing references)
				//IL_0008: Unknown result type (might be due to invalid IL or missing references)
				//IL_0024: Unknown result type (might be due to invalid IL or missing references)
				//IL_0026: Unknown result type (might be due to invalid IL or missing references)
				//IL_002c: Unknown result type (might be due to invalid IL or missing references)
				//IL_002e: Unknown result type (might be due to invalid IL or missing references)
				return DoDecoratedOperation((ITransaction t) => ((IDatabaseAsync)t).KeyMigrateAsync(key, toServer, toDatabase, timeoutMilliseconds, migrateOptions, flags));
			}

			public Task<bool> KeyMoveAsync(RedisKey key, int database, CommandFlags flags = (CommandFlags)0)
			{
				//IL_0007: Unknown result type (might be due to invalid IL or missing references)
				//IL_0008: Unknown result type (might be due to invalid IL or missing references)
				//IL_0015: Unknown result type (might be due to invalid IL or missing references)
				//IL_0016: Unknown result type (might be due to invalid IL or missing references)
				return DoDecoratedOperation((ITransaction t) => ((IDatabaseAsync)t).KeyMoveAsync(key, database, flags));
			}

			public Task<bool> KeyPersistAsync(RedisKey key, CommandFlags flags = (CommandFlags)0)
			{
				//IL_0007: Unknown result type (might be due to invalid IL or missing references)
				//IL_0008: Unknown result type (might be due to invalid IL or missing references)
				//IL_000e: Unknown result type (might be due to invalid IL or missing references)
				//IL_000f: Unknown result type (might be due to invalid IL or missing references)
				return DoDecoratedOperation((ITransaction t) => ((IDatabaseAsync)t).KeyPersistAsync(key, flags));
			}

			public Task<RedisKey> KeyRandomAsync(CommandFlags flags = (CommandFlags)0)
			{
				//IL_0007: Unknown result type (might be due to invalid IL or missing references)
				//IL_0008: Unknown result type (might be due to invalid IL or missing references)
				return DoDecoratedOperation((ITransaction t) => ((IDatabaseAsync)t).KeyRandomAsync(flags));
			}

			public Task<bool> KeyRenameAsync(RedisKey key, RedisKey newKey, When when = (When)0, CommandFlags flags = (CommandFlags)0)
			{
				//IL_0007: Unknown result type (might be due to invalid IL or missing references)
				//IL_0008: Unknown result type (might be due to invalid IL or missing references)
				//IL_000e: Unknown result type (might be due to invalid IL or missing references)
				//IL_000f: Unknown result type (might be due to invalid IL or missing references)
				//IL_0015: Unknown result type (might be due to invalid IL or missing references)
				//IL_0016: Unknown result type (might be due to invalid IL or missing references)
				//IL_001c: Unknown result type (might be due to invalid IL or missing references)
				//IL_001e: Unknown result type (might be due to invalid IL or missing references)
				return DoDecoratedOperation((ITransaction t) => ((IDatabaseAsync)t).KeyRenameAsync(key, newKey, when, flags));
			}

			public Task KeyRestoreAsync(RedisKey key, byte[] value, TimeSpan? expiry = null, CommandFlags flags = (CommandFlags)0)
			{
				//IL_0007: Unknown result type (might be due to invalid IL or missing references)
				//IL_0008: Unknown result type (might be due to invalid IL or missing references)
				//IL_001c: Unknown result type (might be due to invalid IL or missing references)
				//IL_001e: Unknown result type (might be due to invalid IL or missing references)
				return DoDecoratedOperation((ITransaction t) => ((IDatabaseAsync)t).KeyRestoreAsync(key, value, expiry, flags));
			}

			public Task<TimeSpan?> KeyTimeToLiveAsync(RedisKey key, CommandFlags flags = (CommandFlags)0)
			{
				//IL_0007: Unknown result type (might be due to invalid IL or missing references)
				//IL_0008: Unknown result type (might be due to invalid IL or missing references)
				//IL_000e: Unknown result type (might be due to invalid IL or missing references)
				//IL_000f: Unknown result type (might be due to invalid IL or missing references)
				return DoDecoratedOperation((ITransaction t) => ((IDatabaseAsync)t).KeyTimeToLiveAsync(key, flags));
			}

			public Task<RedisType> KeyTypeAsync(RedisKey key, CommandFlags flags = (CommandFlags)0)
			{
				//IL_0007: Unknown result type (might be due to invalid IL or missing references)
				//IL_0008: Unknown result type (might be due to invalid IL or missing references)
				//IL_000e: Unknown result type (might be due to invalid IL or missing references)
				//IL_000f: Unknown result type (might be due to invalid IL or missing references)
				return DoDecoratedOperation((ITransaction t) => ((IDatabaseAsync)t).KeyTypeAsync(key, flags));
			}

			public Task<RedisValue> ListGetByIndexAsync(RedisKey key, long index, CommandFlags flags = (CommandFlags)0)
			{
				//IL_0007: Unknown result type (might be due to invalid IL or missing references)
				//IL_0008: Unknown result type (might be due to invalid IL or missing references)
				//IL_0015: Unknown result type (might be due to invalid IL or missing references)
				//IL_0016: Unknown result type (might be due to invalid IL or missing references)
				return DoDecoratedOperation((ITransaction t) => ((IDatabaseAsync)t).ListGetByIndexAsync(key, index, flags));
			}

			public Task<long> ListInsertAfterAsync(RedisKey key, RedisValue pivot, RedisValue value, CommandFlags flags = (CommandFlags)0)
			{
				//IL_0007: Unknown result type (might be due to invalid IL or missing references)
				//IL_0008: Unknown result type (might be due to invalid IL or missing references)
				//IL_000e: Unknown result type (might be due to invalid IL or missing references)
				//IL_000f: Unknown result type (might be due to invalid IL or missing references)
				//IL_0015: Unknown result type (might be due to invalid IL or missing references)
				//IL_0016: Unknown result type (might be due to invalid IL or missing references)
				//IL_001c: Unknown result type (might be due to invalid IL or missing references)
				//IL_001e: Unknown result type (might be due to invalid IL or missing references)
				return DoDecoratedOperation((ITransaction t) => ((IDatabaseAsync)t).ListInsertAfterAsync(key, pivot, value, flags));
			}

			public Task<long> ListInsertBeforeAsync(RedisKey key, RedisValue pivot, RedisValue value, CommandFlags flags = (CommandFlags)0)
			{
				//IL_0007: Unknown result type (might be due to invalid IL or missing references)
				//IL_0008: Unknown result type (might be due to invalid IL or missing references)
				//IL_000e: Unknown result type (might be due to invalid IL or missing references)
				//IL_000f: Unknown result type (might be due to invalid IL or missing references)
				//IL_0015: Unknown result type (might be due to invalid IL or missing references)
				//IL_0016: Unknown result type (might be due to invalid IL or missing references)
				//IL_001c: Unknown result type (might be due to invalid IL or missing references)
				//IL_001e: Unknown result type (might be due to invalid IL or missing references)
				return DoDecoratedOperation((ITransaction t) => ((IDatabaseAsync)t).ListInsertBeforeAsync(key, pivot, value, flags));
			}

			public Task<RedisValue> ListLeftPopAsync(RedisKey key, CommandFlags flags = (CommandFlags)0)
			{
				//IL_0007: Unknown result type (might be due to invalid IL or missing references)
				//IL_0008: Unknown result type (might be due to invalid IL or missing references)
				//IL_000e: Unknown result type (might be due to invalid IL or missing references)
				//IL_000f: Unknown result type (might be due to invalid IL or missing references)
				return DoDecoratedOperation((ITransaction t) => ((IDatabaseAsync)t).ListLeftPopAsync(key, flags));
			}

			public Task<long> ListLeftPushAsync(RedisKey key, RedisValue value, When when = (When)0, CommandFlags flags = (CommandFlags)0)
			{
				//IL_0007: Unknown result type (might be due to invalid IL or missing references)
				//IL_0008: Unknown result type (might be due to invalid IL or missing references)
				//IL_000e: Unknown result type (might be due to invalid IL or missing references)
				//IL_000f: Unknown result type (might be due to invalid IL or missing references)
				//IL_0015: Unknown result type (might be due to invalid IL or missing references)
				//IL_0016: Unknown result type (might be due to invalid IL or missing references)
				//IL_001c: Unknown result type (might be due to invalid IL or missing references)
				//IL_001e: Unknown result type (might be due to invalid IL or missing references)
				return DoDecoratedOperation((ITransaction t) => ((IDatabaseAsync)t).ListLeftPushAsync(key, value, when, flags));
			}

			public Task<long> ListLeftPushAsync(RedisKey key, RedisValue[] values, CommandFlags flags = (CommandFlags)0)
			{
				//IL_0007: Unknown result type (might be due to invalid IL or missing references)
				//IL_0008: Unknown result type (might be due to invalid IL or missing references)
				//IL_0015: Unknown result type (might be due to invalid IL or missing references)
				//IL_0016: Unknown result type (might be due to invalid IL or missing references)
				return DoDecoratedOperation((ITransaction t) => ((IDatabaseAsync)t).ListLeftPushAsync(key, values, flags));
			}

			public Task<long> ListLengthAsync(RedisKey key, CommandFlags flags = (CommandFlags)0)
			{
				//IL_0007: Unknown result type (might be due to invalid IL or missing references)
				//IL_0008: Unknown result type (might be due to invalid IL or missing references)
				//IL_000e: Unknown result type (might be due to invalid IL or missing references)
				//IL_000f: Unknown result type (might be due to invalid IL or missing references)
				return DoDecoratedOperation((ITransaction t) => ((IDatabaseAsync)t).ListLengthAsync(key, flags));
			}

			public Task<RedisValue[]> ListRangeAsync(RedisKey key, long start = 0L, long stop = -1L, CommandFlags flags = (CommandFlags)0)
			{
				//IL_0007: Unknown result type (might be due to invalid IL or missing references)
				//IL_0008: Unknown result type (might be due to invalid IL or missing references)
				//IL_001c: Unknown result type (might be due to invalid IL or missing references)
				//IL_001e: Unknown result type (might be due to invalid IL or missing references)
				return DoDecoratedOperation((ITransaction t) => ((IDatabaseAsync)t).ListRangeAsync(key, start, stop, flags));
			}

			public Task<long> ListRemoveAsync(RedisKey key, RedisValue value, long count = 0L, CommandFlags flags = (CommandFlags)0)
			{
				//IL_0007: Unknown result type (might be due to invalid IL or missing references)
				//IL_0008: Unknown result type (might be due to invalid IL or missing references)
				//IL_000e: Unknown result type (might be due to invalid IL or missing references)
				//IL_000f: Unknown result type (might be due to invalid IL or missing references)
				//IL_001c: Unknown result type (might be due to invalid IL or missing references)
				//IL_001e: Unknown result type (might be due to invalid IL or missing references)
				return DoDecoratedOperation((ITransaction t) => ((IDatabaseAsync)t).ListRemoveAsync(key, value, count, flags));
			}

			public Task<RedisValue> ListRightPopAsync(RedisKey key, CommandFlags flags = (CommandFlags)0)
			{
				//IL_0007: Unknown result type (might be due to invalid IL or missing references)
				//IL_0008: Unknown result type (might be due to invalid IL or missing references)
				//IL_000e: Unknown result type (might be due to invalid IL or missing references)
				//IL_000f: Unknown result type (might be due to invalid IL or missing references)
				return DoDecoratedOperation((ITransaction t) => ((IDatabaseAsync)t).ListRightPopAsync(key, flags));
			}

			public Task<RedisValue> ListRightPopLeftPushAsync(RedisKey source, RedisKey destination, CommandFlags flags = (CommandFlags)0)
			{
				//IL_0007: Unknown result type (might be due to invalid IL or missing references)
				//IL_0008: Unknown result type (might be due to invalid IL or missing references)
				//IL_000e: Unknown result type (might be due to invalid IL or missing references)
				//IL_000f: Unknown result type (might be due to invalid IL or missing references)
				//IL_0015: Unknown result type (might be due to invalid IL or missing references)
				//IL_0016: Unknown result type (might be due to invalid IL or missing references)
				return DoDecoratedOperation((ITransaction t) => ((IDatabaseAsync)t).ListRightPopLeftPushAsync(source, destination, flags));
			}

			public Task<long> ListRightPushAsync(RedisKey key, RedisValue value, When when = (When)0, CommandFlags flags = (CommandFlags)0)
			{
				//IL_0007: Unknown result type (might be due to invalid IL or missing references)
				//IL_0008: Unknown result type (might be due to invalid IL or missing references)
				//IL_000e: Unknown result type (might be due to invalid IL or missing references)
				//IL_000f: Unknown result type (might be due to invalid IL or missing references)
				//IL_0015: Unknown result type (might be due to invalid IL or missing references)
				//IL_0016: Unknown result type (might be due to invalid IL or missing references)
				//IL_001c: Unknown result type (might be due to invalid IL or missing references)
				//IL_001e: Unknown result type (might be due to invalid IL or missing references)
				return DoDecoratedOperation((ITransaction t) => ((IDatabaseAsync)t).ListRightPushAsync(key, value, when, flags));
			}

			public Task<long> ListRightPushAsync(RedisKey key, RedisValue[] values, CommandFlags flags = (CommandFlags)0)
			{
				//IL_0007: Unknown result type (might be due to invalid IL or missing references)
				//IL_0008: Unknown result type (might be due to invalid IL or missing references)
				//IL_0015: Unknown result type (might be due to invalid IL or missing references)
				//IL_0016: Unknown result type (might be due to invalid IL or missing references)
				return DoDecoratedOperation((ITransaction t) => ((IDatabaseAsync)t).ListRightPushAsync(key, values, flags));
			}

			public Task ListSetByIndexAsync(RedisKey key, long index, RedisValue value, CommandFlags flags = (CommandFlags)0)
			{
				//IL_0007: Unknown result type (might be due to invalid IL or missing references)
				//IL_0008: Unknown result type (might be due to invalid IL or missing references)
				//IL_0015: Unknown result type (might be due to invalid IL or missing references)
				//IL_0016: Unknown result type (might be due to invalid IL or missing references)
				//IL_001c: Unknown result type (might be due to invalid IL or missing references)
				//IL_001e: Unknown result type (might be due to invalid IL or missing references)
				return DoDecoratedOperation((ITransaction t) => ((IDatabaseAsync)t).ListSetByIndexAsync(key, index, value, flags));
			}

			public Task ListTrimAsync(RedisKey key, long start, long stop, CommandFlags flags = (CommandFlags)0)
			{
				//IL_0007: Unknown result type (might be due to invalid IL or missing references)
				//IL_0008: Unknown result type (might be due to invalid IL or missing references)
				//IL_001c: Unknown result type (might be due to invalid IL or missing references)
				//IL_001e: Unknown result type (might be due to invalid IL or missing references)
				return DoDecoratedOperation((ITransaction t) => ((IDatabaseAsync)t).ListTrimAsync(key, start, stop, flags));
			}

			public Task<bool> LockExtendAsync(RedisKey key, RedisValue value, TimeSpan expiry, CommandFlags flags = (CommandFlags)0)
			{
				//IL_0007: Unknown result type (might be due to invalid IL or missing references)
				//IL_0008: Unknown result type (might be due to invalid IL or missing references)
				//IL_000e: Unknown result type (might be due to invalid IL or missing references)
				//IL_000f: Unknown result type (might be due to invalid IL or missing references)
				//IL_001c: Unknown result type (might be due to invalid IL or missing references)
				//IL_001e: Unknown result type (might be due to invalid IL or missing references)
				return DoDecoratedOperation((ITransaction t) => ((IDatabaseAsync)t).LockExtendAsync(key, value, expiry, flags));
			}

			public Task<RedisValue> LockQueryAsync(RedisKey key, CommandFlags flags = (CommandFlags)0)
			{
				//IL_0007: Unknown result type (might be due to invalid IL or missing references)
				//IL_0008: Unknown result type (might be due to invalid IL or missing references)
				//IL_000e: Unknown result type (might be due to invalid IL or missing references)
				//IL_000f: Unknown result type (might be due to invalid IL or missing references)
				return DoDecoratedOperation((ITransaction t) => ((IDatabaseAsync)t).LockQueryAsync(key, flags));
			}

			public Task<bool> LockReleaseAsync(RedisKey key, RedisValue value, CommandFlags flags = (CommandFlags)0)
			{
				//IL_0007: Unknown result type (might be due to invalid IL or missing references)
				//IL_0008: Unknown result type (might be due to invalid IL or missing references)
				//IL_000e: Unknown result type (might be due to invalid IL or missing references)
				//IL_000f: Unknown result type (might be due to invalid IL or missing references)
				//IL_0015: Unknown result type (might be due to invalid IL or missing references)
				//IL_0016: Unknown result type (might be due to invalid IL or missing references)
				return DoDecoratedOperation((ITransaction t) => ((IDatabaseAsync)t).LockReleaseAsync(key, value, flags));
			}

			public Task<bool> LockTakeAsync(RedisKey key, RedisValue value, TimeSpan expiry, CommandFlags flags = (CommandFlags)0)
			{
				//IL_0007: Unknown result type (might be due to invalid IL or missing references)
				//IL_0008: Unknown result type (might be due to invalid IL or missing references)
				//IL_000e: Unknown result type (might be due to invalid IL or missing references)
				//IL_000f: Unknown result type (might be due to invalid IL or missing references)
				//IL_001c: Unknown result type (might be due to invalid IL or missing references)
				//IL_001e: Unknown result type (might be due to invalid IL or missing references)
				return DoDecoratedOperation((ITransaction t) => ((IDatabaseAsync)t).LockTakeAsync(key, value, expiry, flags));
			}

			public Task<long> PublishAsync(RedisChannel channel, RedisValue message, CommandFlags flags = (CommandFlags)0)
			{
				//IL_0007: Unknown result type (might be due to invalid IL or missing references)
				//IL_0008: Unknown result type (might be due to invalid IL or missing references)
				//IL_000e: Unknown result type (might be due to invalid IL or missing references)
				//IL_000f: Unknown result type (might be due to invalid IL or missing references)
				//IL_0015: Unknown result type (might be due to invalid IL or missing references)
				//IL_0016: Unknown result type (might be due to invalid IL or missing references)
				return DoDecoratedOperation((ITransaction t) => ((IDatabaseAsync)t).PublishAsync(channel, message, flags));
			}

			public Task<RedisResult> ScriptEvaluateAsync(string script, RedisKey[] keys = null, RedisValue[] values = null, CommandFlags flags = (CommandFlags)0)
			{
				//IL_001c: Unknown result type (might be due to invalid IL or missing references)
				//IL_001e: Unknown result type (might be due to invalid IL or missing references)
				return DoDecoratedOperation((ITransaction t) => ((IDatabaseAsync)t).ScriptEvaluateAsync(script, keys, values, flags));
			}

			public Task<RedisResult> ExecuteAsync(string command, params object[] args)
			{
				return DoDecoratedOperation((ITransaction t) => ((IDatabaseAsync)t).ExecuteAsync(command, args));
			}

			public Task<RedisResult> ExecuteAsync(string command, ICollection<object> args, CommandFlags flags = (CommandFlags)0)
			{
				//IL_0015: Unknown result type (might be due to invalid IL or missing references)
				//IL_0016: Unknown result type (might be due to invalid IL or missing references)
				return DoDecoratedOperation((ITransaction t) => ((IDatabaseAsync)t).ExecuteAsync(command, args, flags));
			}

			public Task<RedisResult> ScriptEvaluateAsync(byte[] hash, RedisKey[] keys = null, RedisValue[] values = null, CommandFlags flags = (CommandFlags)0)
			{
				//IL_001c: Unknown result type (might be due to invalid IL or missing references)
				//IL_001e: Unknown result type (might be due to invalid IL or missing references)
				return DoDecoratedOperation((ITransaction t) => ((IDatabaseAsync)t).ScriptEvaluateAsync(hash, keys, values, flags));
			}

			public Task<RedisResult> ScriptEvaluateAsync(LuaScript script, object parameters = null, CommandFlags flags = (CommandFlags)0)
			{
				//IL_0015: Unknown result type (might be due to invalid IL or missing references)
				//IL_0016: Unknown result type (might be due to invalid IL or missing references)
				return DoDecoratedOperation((ITransaction t) => ((IDatabaseAsync)t).ScriptEvaluateAsync(script, parameters, flags));
			}

			public Task<RedisResult> ScriptEvaluateAsync(LoadedLuaScript script, object parameters = null, CommandFlags flags = (CommandFlags)0)
			{
				//IL_0015: Unknown result type (might be due to invalid IL or missing references)
				//IL_0016: Unknown result type (might be due to invalid IL or missing references)
				return DoDecoratedOperation((ITransaction t) => ((IDatabaseAsync)t).ScriptEvaluateAsync(script, parameters, flags));
			}

			public Task<bool> SetAddAsync(RedisKey key, RedisValue value, CommandFlags flags = (CommandFlags)0)
			{
				//IL_0007: Unknown result type (might be due to invalid IL or missing references)
				//IL_0008: Unknown result type (might be due to invalid IL or missing references)
				//IL_000e: Unknown result type (might be due to invalid IL or missing references)
				//IL_000f: Unknown result type (might be due to invalid IL or missing references)
				//IL_0015: Unknown result type (might be due to invalid IL or missing references)
				//IL_0016: Unknown result type (might be due to invalid IL or missing references)
				return DoDecoratedOperation((ITransaction t) => ((IDatabaseAsync)t).SetAddAsync(key, value, flags));
			}

			public Task<long> SetAddAsync(RedisKey key, RedisValue[] values, CommandFlags flags = (CommandFlags)0)
			{
				//IL_0007: Unknown result type (might be due to invalid IL or missing references)
				//IL_0008: Unknown result type (might be due to invalid IL or missing references)
				//IL_0015: Unknown result type (might be due to invalid IL or missing references)
				//IL_0016: Unknown result type (might be due to invalid IL or missing references)
				return DoDecoratedOperation((ITransaction t) => ((IDatabaseAsync)t).SetAddAsync(key, values, flags));
			}

			public Task<long> SetCombineAndStoreAsync(SetOperation operation, RedisKey destination, RedisKey first, RedisKey second, CommandFlags flags = (CommandFlags)0)
			{
				//IL_0007: Unknown result type (might be due to invalid IL or missing references)
				//IL_0008: Unknown result type (might be due to invalid IL or missing references)
				//IL_000e: Unknown result type (might be due to invalid IL or missing references)
				//IL_000f: Unknown result type (might be due to invalid IL or missing references)
				//IL_0015: Unknown result type (might be due to invalid IL or missing references)
				//IL_0016: Unknown result type (might be due to invalid IL or missing references)
				//IL_001c: Unknown result type (might be due to invalid IL or missing references)
				//IL_001e: Unknown result type (might be due to invalid IL or missing references)
				//IL_0024: Unknown result type (might be due to invalid IL or missing references)
				//IL_0026: Unknown result type (might be due to invalid IL or missing references)
				return DoDecoratedOperation((ITransaction t) => ((IDatabaseAsync)t).SetCombineAndStoreAsync(operation, destination, first, second, flags));
			}

			public Task<long> SetCombineAndStoreAsync(SetOperation operation, RedisKey destination, RedisKey[] keys, CommandFlags flags = (CommandFlags)0)
			{
				//IL_0007: Unknown result type (might be due to invalid IL or missing references)
				//IL_0008: Unknown result type (might be due to invalid IL or missing references)
				//IL_000e: Unknown result type (might be due to invalid IL or missing references)
				//IL_000f: Unknown result type (might be due to invalid IL or missing references)
				//IL_001c: Unknown result type (might be due to invalid IL or missing references)
				//IL_001e: Unknown result type (might be due to invalid IL or missing references)
				return DoDecoratedOperation((ITransaction t) => ((IDatabaseAsync)t).SetCombineAndStoreAsync(operation, destination, keys, flags));
			}

			public Task<RedisValue[]> SetCombineAsync(SetOperation operation, RedisKey first, RedisKey second, CommandFlags flags = (CommandFlags)0)
			{
				//IL_0007: Unknown result type (might be due to invalid IL or missing references)
				//IL_0008: Unknown result type (might be due to invalid IL or missing references)
				//IL_000e: Unknown result type (might be due to invalid IL or missing references)
				//IL_000f: Unknown result type (might be due to invalid IL or missing references)
				//IL_0015: Unknown result type (might be due to invalid IL or missing references)
				//IL_0016: Unknown result type (might be due to invalid IL or missing references)
				//IL_001c: Unknown result type (might be due to invalid IL or missing references)
				//IL_001e: Unknown result type (might be due to invalid IL or missing references)
				return DoDecoratedOperation((ITransaction t) => ((IDatabaseAsync)t).SetCombineAsync(operation, first, second, flags));
			}

			public Task<RedisValue[]> SetCombineAsync(SetOperation operation, RedisKey[] keys, CommandFlags flags = (CommandFlags)0)
			{
				//IL_0007: Unknown result type (might be due to invalid IL or missing references)
				//IL_0008: Unknown result type (might be due to invalid IL or missing references)
				//IL_0015: Unknown result type (might be due to invalid IL or missing references)
				//IL_0016: Unknown result type (might be due to invalid IL or missing references)
				return DoDecoratedOperation((ITransaction t) => ((IDatabaseAsync)t).SetCombineAsync(operation, keys, flags));
			}

			public Task<bool> SetContainsAsync(RedisKey key, RedisValue value, CommandFlags flags = (CommandFlags)0)
			{
				//IL_0007: Unknown result type (might be due to invalid IL or missing references)
				//IL_0008: Unknown result type (might be due to invalid IL or missing references)
				//IL_000e: Unknown result type (might be due to invalid IL or missing references)
				//IL_000f: Unknown result type (might be due to invalid IL or missing references)
				//IL_0015: Unknown result type (might be due to invalid IL or missing references)
				//IL_0016: Unknown result type (might be due to invalid IL or missing references)
				return DoDecoratedOperation((ITransaction t) => ((IDatabaseAsync)t).SetContainsAsync(key, value, flags));
			}

			public Task<long> SetLengthAsync(RedisKey key, CommandFlags flags = (CommandFlags)0)
			{
				//IL_0007: Unknown result type (might be due to invalid IL or missing references)
				//IL_0008: Unknown result type (might be due to invalid IL or missing references)
				//IL_000e: Unknown result type (might be due to invalid IL or missing references)
				//IL_000f: Unknown result type (might be due to invalid IL or missing references)
				return DoDecoratedOperation((ITransaction t) => ((IDatabaseAsync)t).SetLengthAsync(key, flags));
			}

			public Task<RedisValue[]> SetMembersAsync(RedisKey key, CommandFlags flags = (CommandFlags)0)
			{
				//IL_0007: Unknown result type (might be due to invalid IL or missing references)
				//IL_0008: Unknown result type (might be due to invalid IL or missing references)
				//IL_000e: Unknown result type (might be due to invalid IL or missing references)
				//IL_000f: Unknown result type (might be due to invalid IL or missing references)
				return DoDecoratedOperation((ITransaction t) => ((IDatabaseAsync)t).SetMembersAsync(key, flags));
			}

			public Task<bool> SetMoveAsync(RedisKey source, RedisKey destination, RedisValue value, CommandFlags flags = (CommandFlags)0)
			{
				//IL_0007: Unknown result type (might be due to invalid IL or missing references)
				//IL_0008: Unknown result type (might be due to invalid IL or missing references)
				//IL_000e: Unknown result type (might be due to invalid IL or missing references)
				//IL_000f: Unknown result type (might be due to invalid IL or missing references)
				//IL_0015: Unknown result type (might be due to invalid IL or missing references)
				//IL_0016: Unknown result type (might be due to invalid IL or missing references)
				//IL_001c: Unknown result type (might be due to invalid IL or missing references)
				//IL_001e: Unknown result type (might be due to invalid IL or missing references)
				return DoDecoratedOperation((ITransaction t) => ((IDatabaseAsync)t).SetMoveAsync(source, destination, value, flags));
			}

			public Task<RedisValue> SetPopAsync(RedisKey key, CommandFlags flags = (CommandFlags)0)
			{
				//IL_0007: Unknown result type (might be due to invalid IL or missing references)
				//IL_0008: Unknown result type (might be due to invalid IL or missing references)
				//IL_000e: Unknown result type (might be due to invalid IL or missing references)
				//IL_000f: Unknown result type (might be due to invalid IL or missing references)
				return DoDecoratedOperation((ITransaction t) => ((IDatabaseAsync)t).SetPopAsync(key, flags));
			}

			public Task<RedisValue> SetRandomMemberAsync(RedisKey key, CommandFlags flags = (CommandFlags)0)
			{
				//IL_0007: Unknown result type (might be due to invalid IL or missing references)
				//IL_0008: Unknown result type (might be due to invalid IL or missing references)
				//IL_000e: Unknown result type (might be due to invalid IL or missing references)
				//IL_000f: Unknown result type (might be due to invalid IL or missing references)
				return DoDecoratedOperation((ITransaction t) => ((IDatabaseAsync)t).SetRandomMemberAsync(key, flags));
			}

			public Task<RedisValue[]> SetRandomMembersAsync(RedisKey key, long count, CommandFlags flags = (CommandFlags)0)
			{
				//IL_0007: Unknown result type (might be due to invalid IL or missing references)
				//IL_0008: Unknown result type (might be due to invalid IL or missing references)
				//IL_0015: Unknown result type (might be due to invalid IL or missing references)
				//IL_0016: Unknown result type (might be due to invalid IL or missing references)
				return DoDecoratedOperation((ITransaction t) => ((IDatabaseAsync)t).SetRandomMembersAsync(key, count, flags));
			}

			public Task<bool> SetRemoveAsync(RedisKey key, RedisValue value, CommandFlags flags = (CommandFlags)0)
			{
				//IL_0007: Unknown result type (might be due to invalid IL or missing references)
				//IL_0008: Unknown result type (might be due to invalid IL or missing references)
				//IL_000e: Unknown result type (might be due to invalid IL or missing references)
				//IL_000f: Unknown result type (might be due to invalid IL or missing references)
				//IL_0015: Unknown result type (might be due to invalid IL or missing references)
				//IL_0016: Unknown result type (might be due to invalid IL or missing references)
				return DoDecoratedOperation((ITransaction t) => ((IDatabaseAsync)t).SetRemoveAsync(key, value, flags));
			}

			public Task<long> SetRemoveAsync(RedisKey key, RedisValue[] values, CommandFlags flags = (CommandFlags)0)
			{
				//IL_0007: Unknown result type (might be due to invalid IL or missing references)
				//IL_0008: Unknown result type (might be due to invalid IL or missing references)
				//IL_0015: Unknown result type (might be due to invalid IL or missing references)
				//IL_0016: Unknown result type (might be due to invalid IL or missing references)
				return DoDecoratedOperation((ITransaction t) => ((IDatabaseAsync)t).SetRemoveAsync(key, values, flags));
			}

			public Task<long> SortAndStoreAsync(RedisKey destination, RedisKey key, long skip = 0L, long take = -1L, Order order = (Order)0, SortType sortType = (SortType)0, RedisValue by = default(RedisValue), RedisValue[] get = null, CommandFlags flags = (CommandFlags)0)
			{
				//IL_0007: Unknown result type (might be due to invalid IL or missing references)
				//IL_0008: Unknown result type (might be due to invalid IL or missing references)
				//IL_000e: Unknown result type (might be due to invalid IL or missing references)
				//IL_000f: Unknown result type (might be due to invalid IL or missing references)
				//IL_0024: Unknown result type (might be due to invalid IL or missing references)
				//IL_0026: Unknown result type (might be due to invalid IL or missing references)
				//IL_002c: Unknown result type (might be due to invalid IL or missing references)
				//IL_002e: Unknown result type (might be due to invalid IL or missing references)
				//IL_0034: Unknown result type (might be due to invalid IL or missing references)
				//IL_0036: Unknown result type (might be due to invalid IL or missing references)
				//IL_0044: Unknown result type (might be due to invalid IL or missing references)
				//IL_0046: Unknown result type (might be due to invalid IL or missing references)
				return DoDecoratedOperation((ITransaction t) => ((IDatabaseAsync)t).SortAndStoreAsync(destination, key, skip, take, order, sortType, by, get, flags));
			}

			public Task<RedisValue[]> SortAsync(RedisKey key, long skip = 0L, long take = -1L, Order order = (Order)0, SortType sortType = (SortType)0, RedisValue by = default(RedisValue), RedisValue[] get = null, CommandFlags flags = (CommandFlags)0)
			{
				//IL_0007: Unknown result type (might be due to invalid IL or missing references)
				//IL_0008: Unknown result type (might be due to invalid IL or missing references)
				//IL_001c: Unknown result type (might be due to invalid IL or missing references)
				//IL_001e: Unknown result type (might be due to invalid IL or missing references)
				//IL_0024: Unknown result type (might be due to invalid IL or missing references)
				//IL_0026: Unknown result type (might be due to invalid IL or missing references)
				//IL_002c: Unknown result type (might be due to invalid IL or missing references)
				//IL_002e: Unknown result type (might be due to invalid IL or missing references)
				//IL_003c: Unknown result type (might be due to invalid IL or missing references)
				//IL_003e: Unknown result type (might be due to invalid IL or missing references)
				return DoDecoratedOperation((ITransaction t) => ((IDatabaseAsync)t).SortAsync(key, skip, take, order, sortType, by, get, flags));
			}

			public Task<bool> SortedSetAddAsync(RedisKey key, RedisValue member, double score, CommandFlags flags)
			{
				//IL_0007: Unknown result type (might be due to invalid IL or missing references)
				//IL_0008: Unknown result type (might be due to invalid IL or missing references)
				//IL_000e: Unknown result type (might be due to invalid IL or missing references)
				//IL_000f: Unknown result type (might be due to invalid IL or missing references)
				//IL_001c: Unknown result type (might be due to invalid IL or missing references)
				//IL_001e: Unknown result type (might be due to invalid IL or missing references)
				return DoDecoratedOperation((ITransaction t) => ((IDatabaseAsync)t).SortedSetAddAsync(key, member, score, flags));
			}

			public Task<bool> SortedSetAddAsync(RedisKey key, RedisValue member, double score, When when = (When)0, CommandFlags flags = (CommandFlags)0)
			{
				//IL_0007: Unknown result type (might be due to invalid IL or missing references)
				//IL_0008: Unknown result type (might be due to invalid IL or missing references)
				//IL_000e: Unknown result type (might be due to invalid IL or missing references)
				//IL_000f: Unknown result type (might be due to invalid IL or missing references)
				//IL_001c: Unknown result type (might be due to invalid IL or missing references)
				//IL_001e: Unknown result type (might be due to invalid IL or missing references)
				//IL_0024: Unknown result type (might be due to invalid IL or missing references)
				//IL_0026: Unknown result type (might be due to invalid IL or missing references)
				return DoDecoratedOperation((ITransaction t) => ((IDatabaseAsync)t).SortedSetAddAsync(key, member, score, when, flags));
			}

			public Task<long> SortedSetAddAsync(RedisKey key, SortedSetEntry[] values, CommandFlags flags)
			{
				//IL_0007: Unknown result type (might be due to invalid IL or missing references)
				//IL_0008: Unknown result type (might be due to invalid IL or missing references)
				//IL_0015: Unknown result type (might be due to invalid IL or missing references)
				//IL_0016: Unknown result type (might be due to invalid IL or missing references)
				return DoDecoratedOperation((ITransaction t) => ((IDatabaseAsync)t).SortedSetAddAsync(key, values, flags));
			}

			public Task<long> SortedSetAddAsync(RedisKey key, SortedSetEntry[] values, When when = (When)0, CommandFlags flags = (CommandFlags)0)
			{
				//IL_0007: Unknown result type (might be due to invalid IL or missing references)
				//IL_0008: Unknown result type (might be due to invalid IL or missing references)
				//IL_0015: Unknown result type (might be due to invalid IL or missing references)
				//IL_0016: Unknown result type (might be due to invalid IL or missing references)
				//IL_001c: Unknown result type (might be due to invalid IL or missing references)
				//IL_001e: Unknown result type (might be due to invalid IL or missing references)
				return DoDecoratedOperation((ITransaction t) => ((IDatabaseAsync)t).SortedSetAddAsync(key, values, when, flags));
			}

			public Task<long> SortedSetCombineAndStoreAsync(SetOperation operation, RedisKey destination, RedisKey first, RedisKey second, Aggregate aggregate = (Aggregate)0, CommandFlags flags = (CommandFlags)0)
			{
				//IL_0007: Unknown result type (might be due to invalid IL or missing references)
				//IL_0008: Unknown result type (might be due to invalid IL or missing references)
				//IL_000e: Unknown result type (might be due to invalid IL or missing references)
				//IL_000f: Unknown result type (might be due to invalid IL or missing references)
				//IL_0015: Unknown result type (might be due to invalid IL or missing references)
				//IL_0016: Unknown result type (might be due to invalid IL or missing references)
				//IL_001c: Unknown result type (might be due to invalid IL or missing references)
				//IL_001e: Unknown result type (might be due to invalid IL or missing references)
				//IL_0024: Unknown result type (might be due to invalid IL or missing references)
				//IL_0026: Unknown result type (might be due to invalid IL or missing references)
				//IL_002c: Unknown result type (might be due to invalid IL or missing references)
				//IL_002e: Unknown result type (might be due to invalid IL or missing references)
				return DoDecoratedOperation((ITransaction t) => ((IDatabaseAsync)t).SortedSetCombineAndStoreAsync(operation, destination, first, second, aggregate, flags));
			}

			public Task<long> SortedSetCombineAndStoreAsync(SetOperation operation, RedisKey destination, RedisKey[] keys, double[] weights = null, Aggregate aggregate = (Aggregate)0, CommandFlags flags = (CommandFlags)0)
			{
				//IL_0007: Unknown result type (might be due to invalid IL or missing references)
				//IL_0008: Unknown result type (might be due to invalid IL or missing references)
				//IL_000e: Unknown result type (might be due to invalid IL or missing references)
				//IL_000f: Unknown result type (might be due to invalid IL or missing references)
				//IL_0024: Unknown result type (might be due to invalid IL or missing references)
				//IL_0026: Unknown result type (might be due to invalid IL or missing references)
				//IL_002c: Unknown result type (might be due to invalid IL or missing references)
				//IL_002e: Unknown result type (might be due to invalid IL or missing references)
				return DoDecoratedOperation((ITransaction t) => ((IDatabaseAsync)t).SortedSetCombineAndStoreAsync(operation, destination, keys, weights, aggregate, flags));
			}

			public Task<double> SortedSetDecrementAsync(RedisKey key, RedisValue member, double value, CommandFlags flags = (CommandFlags)0)
			{
				//IL_0007: Unknown result type (might be due to invalid IL or missing references)
				//IL_0008: Unknown result type (might be due to invalid IL or missing references)
				//IL_000e: Unknown result type (might be due to invalid IL or missing references)
				//IL_000f: Unknown result type (might be due to invalid IL or missing references)
				//IL_001c: Unknown result type (might be due to invalid IL or missing references)
				//IL_001e: Unknown result type (might be due to invalid IL or missing references)
				return DoDecoratedOperation((ITransaction t) => ((IDatabaseAsync)t).SortedSetDecrementAsync(key, member, value, flags));
			}

			public Task<double> SortedSetIncrementAsync(RedisKey key, RedisValue member, double value, CommandFlags flags = (CommandFlags)0)
			{
				//IL_0007: Unknown result type (might be due to invalid IL or missing references)
				//IL_0008: Unknown result type (might be due to invalid IL or missing references)
				//IL_000e: Unknown result type (might be due to invalid IL or missing references)
				//IL_000f: Unknown result type (might be due to invalid IL or missing references)
				//IL_001c: Unknown result type (might be due to invalid IL or missing references)
				//IL_001e: Unknown result type (might be due to invalid IL or missing references)
				return DoDecoratedOperation((ITransaction t) => ((IDatabaseAsync)t).SortedSetIncrementAsync(key, member, value, flags));
			}

			public Task<long> SortedSetLengthAsync(RedisKey key, double min = double.NegativeInfinity, double max = double.PositiveInfinity, Exclude exclude = (Exclude)0, CommandFlags flags = (CommandFlags)0)
			{
				//IL_0007: Unknown result type (might be due to invalid IL or missing references)
				//IL_0008: Unknown result type (might be due to invalid IL or missing references)
				//IL_001c: Unknown result type (might be due to invalid IL or missing references)
				//IL_001e: Unknown result type (might be due to invalid IL or missing references)
				//IL_0024: Unknown result type (might be due to invalid IL or missing references)
				//IL_0026: Unknown result type (might be due to invalid IL or missing references)
				return DoDecoratedOperation((ITransaction t) => ((IDatabaseAsync)t).SortedSetLengthAsync(key, min, max, exclude, flags));
			}

			public Task<long> SortedSetLengthByValueAsync(RedisKey key, RedisValue min, RedisValue max, Exclude exclude = (Exclude)0, CommandFlags flags = (CommandFlags)0)
			{
				//IL_0007: Unknown result type (might be due to invalid IL or missing references)
				//IL_0008: Unknown result type (might be due to invalid IL or missing references)
				//IL_000e: Unknown result type (might be due to invalid IL or missing references)
				//IL_000f: Unknown result type (might be due to invalid IL or missing references)
				//IL_0015: Unknown result type (might be due to invalid IL or missing references)
				//IL_0016: Unknown result type (might be due to invalid IL or missing references)
				//IL_001c: Unknown result type (might be due to invalid IL or missing references)
				//IL_001e: Unknown result type (might be due to invalid IL or missing references)
				//IL_0024: Unknown result type (might be due to invalid IL or missing references)
				//IL_0026: Unknown result type (might be due to invalid IL or missing references)
				return DoDecoratedOperation((ITransaction t) => ((IDatabaseAsync)t).SortedSetLengthByValueAsync(key, min, max, exclude, flags));
			}

			public Task<RedisValue[]> SortedSetRangeByRankAsync(RedisKey key, long start = 0L, long stop = -1L, Order order = (Order)0, CommandFlags flags = (CommandFlags)0)
			{
				//IL_0007: Unknown result type (might be due to invalid IL or missing references)
				//IL_0008: Unknown result type (might be due to invalid IL or missing references)
				//IL_001c: Unknown result type (might be due to invalid IL or missing references)
				//IL_001e: Unknown result type (might be due to invalid IL or missing references)
				//IL_0024: Unknown result type (might be due to invalid IL or missing references)
				//IL_0026: Unknown result type (might be due to invalid IL or missing references)
				return DoDecoratedOperation((ITransaction t) => ((IDatabaseAsync)t).SortedSetRangeByRankAsync(key, start, stop, order, flags));
			}

			public Task<SortedSetEntry[]> SortedSetRangeByRankWithScoresAsync(RedisKey key, long start = 0L, long stop = -1L, Order order = (Order)0, CommandFlags flags = (CommandFlags)0)
			{
				//IL_0007: Unknown result type (might be due to invalid IL or missing references)
				//IL_0008: Unknown result type (might be due to invalid IL or missing references)
				//IL_001c: Unknown result type (might be due to invalid IL or missing references)
				//IL_001e: Unknown result type (might be due to invalid IL or missing references)
				//IL_0024: Unknown result type (might be due to invalid IL or missing references)
				//IL_0026: Unknown result type (might be due to invalid IL or missing references)
				return DoDecoratedOperation((ITransaction t) => ((IDatabaseAsync)t).SortedSetRangeByRankWithScoresAsync(key, start, stop, order, flags));
			}

			public Task<RedisValue[]> SortedSetRangeByScoreAsync(RedisKey key, double start = double.NegativeInfinity, double stop = double.PositiveInfinity, Exclude exclude = (Exclude)0, Order order = (Order)0, long skip = 0L, long take = -1L, CommandFlags flags = (CommandFlags)0)
			{
				//IL_0007: Unknown result type (might be due to invalid IL or missing references)
				//IL_0008: Unknown result type (might be due to invalid IL or missing references)
				//IL_001c: Unknown result type (might be due to invalid IL or missing references)
				//IL_001e: Unknown result type (might be due to invalid IL or missing references)
				//IL_0024: Unknown result type (might be due to invalid IL or missing references)
				//IL_0026: Unknown result type (might be due to invalid IL or missing references)
				//IL_003c: Unknown result type (might be due to invalid IL or missing references)
				//IL_003e: Unknown result type (might be due to invalid IL or missing references)
				return DoDecoratedOperation((ITransaction t) => ((IDatabaseAsync)t).SortedSetRangeByScoreAsync(key, start, stop, exclude, order, skip, take, flags));
			}

			public Task<SortedSetEntry[]> SortedSetRangeByScoreWithScoresAsync(RedisKey key, double start = double.NegativeInfinity, double stop = double.PositiveInfinity, Exclude exclude = (Exclude)0, Order order = (Order)0, long skip = 0L, long take = -1L, CommandFlags flags = (CommandFlags)0)
			{
				//IL_0007: Unknown result type (might be due to invalid IL or missing references)
				//IL_0008: Unknown result type (might be due to invalid IL or missing references)
				//IL_001c: Unknown result type (might be due to invalid IL or missing references)
				//IL_001e: Unknown result type (might be due to invalid IL or missing references)
				//IL_0024: Unknown result type (might be due to invalid IL or missing references)
				//IL_0026: Unknown result type (might be due to invalid IL or missing references)
				//IL_003c: Unknown result type (might be due to invalid IL or missing references)
				//IL_003e: Unknown result type (might be due to invalid IL or missing references)
				return DoDecoratedOperation((ITransaction t) => ((IDatabaseAsync)t).SortedSetRangeByScoreWithScoresAsync(key, start, stop, exclude, order, skip, take, flags));
			}

			public Task<RedisValue[]> SortedSetRangeByValueAsync(RedisKey key, RedisValue min = default(RedisValue), RedisValue max = default(RedisValue), Exclude exclude = (Exclude)0, long skip = 0L, long take = -1L, CommandFlags flags = (CommandFlags)0)
			{
				//IL_0007: Unknown result type (might be due to invalid IL or missing references)
				//IL_0008: Unknown result type (might be due to invalid IL or missing references)
				//IL_000e: Unknown result type (might be due to invalid IL or missing references)
				//IL_000f: Unknown result type (might be due to invalid IL or missing references)
				//IL_0015: Unknown result type (might be due to invalid IL or missing references)
				//IL_0016: Unknown result type (might be due to invalid IL or missing references)
				//IL_001c: Unknown result type (might be due to invalid IL or missing references)
				//IL_001e: Unknown result type (might be due to invalid IL or missing references)
				//IL_0034: Unknown result type (might be due to invalid IL or missing references)
				//IL_0036: Unknown result type (might be due to invalid IL or missing references)
				return DoDecoratedOperation((ITransaction t) => ((IDatabaseAsync)t).SortedSetRangeByValueAsync(key, min, max, exclude, skip, take, flags));
			}

			public Task<long?> SortedSetRankAsync(RedisKey key, RedisValue member, Order order = (Order)0, CommandFlags flags = (CommandFlags)0)
			{
				//IL_0007: Unknown result type (might be due to invalid IL or missing references)
				//IL_0008: Unknown result type (might be due to invalid IL or missing references)
				//IL_000e: Unknown result type (might be due to invalid IL or missing references)
				//IL_000f: Unknown result type (might be due to invalid IL or missing references)
				//IL_0015: Unknown result type (might be due to invalid IL or missing references)
				//IL_0016: Unknown result type (might be due to invalid IL or missing references)
				//IL_001c: Unknown result type (might be due to invalid IL or missing references)
				//IL_001e: Unknown result type (might be due to invalid IL or missing references)
				return DoDecoratedOperation((ITransaction t) => ((IDatabaseAsync)t).SortedSetRankAsync(key, member, order, flags));
			}

			public Task<bool> SortedSetRemoveAsync(RedisKey key, RedisValue member, CommandFlags flags = (CommandFlags)0)
			{
				//IL_0007: Unknown result type (might be due to invalid IL or missing references)
				//IL_0008: Unknown result type (might be due to invalid IL or missing references)
				//IL_000e: Unknown result type (might be due to invalid IL or missing references)
				//IL_000f: Unknown result type (might be due to invalid IL or missing references)
				//IL_0015: Unknown result type (might be due to invalid IL or missing references)
				//IL_0016: Unknown result type (might be due to invalid IL or missing references)
				return DoDecoratedOperation((ITransaction t) => ((IDatabaseAsync)t).SortedSetRemoveAsync(key, member, flags));
			}

			public Task<long> SortedSetRemoveAsync(RedisKey key, RedisValue[] members, CommandFlags flags = (CommandFlags)0)
			{
				//IL_0007: Unknown result type (might be due to invalid IL or missing references)
				//IL_0008: Unknown result type (might be due to invalid IL or missing references)
				//IL_0015: Unknown result type (might be due to invalid IL or missing references)
				//IL_0016: Unknown result type (might be due to invalid IL or missing references)
				return DoDecoratedOperation((ITransaction t) => ((IDatabaseAsync)t).SortedSetRemoveAsync(key, members, flags));
			}

			public Task<long> SortedSetRemoveRangeByRankAsync(RedisKey key, long start, long stop, CommandFlags flags = (CommandFlags)0)
			{
				//IL_0007: Unknown result type (might be due to invalid IL or missing references)
				//IL_0008: Unknown result type (might be due to invalid IL or missing references)
				//IL_001c: Unknown result type (might be due to invalid IL or missing references)
				//IL_001e: Unknown result type (might be due to invalid IL or missing references)
				return DoDecoratedOperation((ITransaction t) => ((IDatabaseAsync)t).SortedSetRemoveRangeByRankAsync(key, start, stop, flags));
			}

			public Task<long> SortedSetRemoveRangeByScoreAsync(RedisKey key, double start, double stop, Exclude exclude = (Exclude)0, CommandFlags flags = (CommandFlags)0)
			{
				//IL_0007: Unknown result type (might be due to invalid IL or missing references)
				//IL_0008: Unknown result type (might be due to invalid IL or missing references)
				//IL_001c: Unknown result type (might be due to invalid IL or missing references)
				//IL_001e: Unknown result type (might be due to invalid IL or missing references)
				//IL_0024: Unknown result type (might be due to invalid IL or missing references)
				//IL_0026: Unknown result type (might be due to invalid IL or missing references)
				return DoDecoratedOperation((ITransaction t) => ((IDatabaseAsync)t).SortedSetRemoveRangeByScoreAsync(key, start, stop, exclude, flags));
			}

			public Task<long> SortedSetRemoveRangeByValueAsync(RedisKey key, RedisValue min, RedisValue max, Exclude exclude = (Exclude)0, CommandFlags flags = (CommandFlags)0)
			{
				//IL_0007: Unknown result type (might be due to invalid IL or missing references)
				//IL_0008: Unknown result type (might be due to invalid IL or missing references)
				//IL_000e: Unknown result type (might be due to invalid IL or missing references)
				//IL_000f: Unknown result type (might be due to invalid IL or missing references)
				//IL_0015: Unknown result type (might be due to invalid IL or missing references)
				//IL_0016: Unknown result type (might be due to invalid IL or missing references)
				//IL_001c: Unknown result type (might be due to invalid IL or missing references)
				//IL_001e: Unknown result type (might be due to invalid IL or missing references)
				//IL_0024: Unknown result type (might be due to invalid IL or missing references)
				//IL_0026: Unknown result type (might be due to invalid IL or missing references)
				return DoDecoratedOperation((ITransaction t) => ((IDatabaseAsync)t).SortedSetRemoveRangeByValueAsync(key, min, max, exclude, flags));
			}

			public Task<double?> SortedSetScoreAsync(RedisKey key, RedisValue member, CommandFlags flags = (CommandFlags)0)
			{
				//IL_0007: Unknown result type (might be due to invalid IL or missing references)
				//IL_0008: Unknown result type (might be due to invalid IL or missing references)
				//IL_000e: Unknown result type (might be due to invalid IL or missing references)
				//IL_000f: Unknown result type (might be due to invalid IL or missing references)
				//IL_0015: Unknown result type (might be due to invalid IL or missing references)
				//IL_0016: Unknown result type (might be due to invalid IL or missing references)
				return DoDecoratedOperation((ITransaction t) => ((IDatabaseAsync)t).SortedSetScoreAsync(key, member, flags));
			}

			public Task<long> StringAppendAsync(RedisKey key, RedisValue value, CommandFlags flags = (CommandFlags)0)
			{
				//IL_0007: Unknown result type (might be due to invalid IL or missing references)
				//IL_0008: Unknown result type (might be due to invalid IL or missing references)
				//IL_000e: Unknown result type (might be due to invalid IL or missing references)
				//IL_000f: Unknown result type (might be due to invalid IL or missing references)
				//IL_0015: Unknown result type (might be due to invalid IL or missing references)
				//IL_0016: Unknown result type (might be due to invalid IL or missing references)
				return DoDecoratedOperation((ITransaction t) => ((IDatabaseAsync)t).StringAppendAsync(key, value, flags));
			}

			public Task<long> StringBitCountAsync(RedisKey key, long start = 0L, long end = -1L, CommandFlags flags = (CommandFlags)0)
			{
				//IL_0007: Unknown result type (might be due to invalid IL or missing references)
				//IL_0008: Unknown result type (might be due to invalid IL or missing references)
				//IL_001c: Unknown result type (might be due to invalid IL or missing references)
				//IL_001e: Unknown result type (might be due to invalid IL or missing references)
				return DoDecoratedOperation((ITransaction t) => ((IDatabaseAsync)t).StringBitCountAsync(key, start, end, flags));
			}

			public Task<long> StringBitOperationAsync(Bitwise operation, RedisKey destination, RedisKey first, RedisKey second = default(RedisKey), CommandFlags flags = (CommandFlags)0)
			{
				//IL_0007: Unknown result type (might be due to invalid IL or missing references)
				//IL_0008: Unknown result type (might be due to invalid IL or missing references)
				//IL_000e: Unknown result type (might be due to invalid IL or missing references)
				//IL_000f: Unknown result type (might be due to invalid IL or missing references)
				//IL_0015: Unknown result type (might be due to invalid IL or missing references)
				//IL_0016: Unknown result type (might be due to invalid IL or missing references)
				//IL_001c: Unknown result type (might be due to invalid IL or missing references)
				//IL_001e: Unknown result type (might be due to invalid IL or missing references)
				//IL_0024: Unknown result type (might be due to invalid IL or missing references)
				//IL_0026: Unknown result type (might be due to invalid IL or missing references)
				return DoDecoratedOperation((ITransaction t) => ((IDatabaseAsync)t).StringBitOperationAsync(operation, destination, first, second, flags));
			}

			public Task<long> StringBitOperationAsync(Bitwise operation, RedisKey destination, RedisKey[] keys, CommandFlags flags = (CommandFlags)0)
			{
				//IL_0007: Unknown result type (might be due to invalid IL or missing references)
				//IL_0008: Unknown result type (might be due to invalid IL or missing references)
				//IL_000e: Unknown result type (might be due to invalid IL or missing references)
				//IL_000f: Unknown result type (might be due to invalid IL or missing references)
				//IL_001c: Unknown result type (might be due to invalid IL or missing references)
				//IL_001e: Unknown result type (might be due to invalid IL or missing references)
				return DoDecoratedOperation((ITransaction t) => ((IDatabaseAsync)t).StringBitOperationAsync(operation, destination, keys, flags));
			}

			public Task<long> StringBitPositionAsync(RedisKey key, bool bit, long start = 0L, long end = -1L, CommandFlags flags = (CommandFlags)0)
			{
				//IL_0007: Unknown result type (might be due to invalid IL or missing references)
				//IL_0008: Unknown result type (might be due to invalid IL or missing references)
				//IL_0024: Unknown result type (might be due to invalid IL or missing references)
				//IL_0026: Unknown result type (might be due to invalid IL or missing references)
				return DoDecoratedOperation((ITransaction t) => ((IDatabaseAsync)t).StringBitPositionAsync(key, bit, start, end, flags));
			}

			public Task<long> StringDecrementAsync(RedisKey key, long value = 1L, CommandFlags flags = (CommandFlags)0)
			{
				//IL_0007: Unknown result type (might be due to invalid IL or missing references)
				//IL_0008: Unknown result type (might be due to invalid IL or missing references)
				//IL_0015: Unknown result type (might be due to invalid IL or missing references)
				//IL_0016: Unknown result type (might be due to invalid IL or missing references)
				return DoDecoratedOperation((ITransaction t) => ((IDatabaseAsync)t).StringDecrementAsync(key, value, flags));
			}

			public Task<double> StringDecrementAsync(RedisKey key, double value, CommandFlags flags = (CommandFlags)0)
			{
				//IL_0007: Unknown result type (might be due to invalid IL or missing references)
				//IL_0008: Unknown result type (might be due to invalid IL or missing references)
				//IL_0015: Unknown result type (might be due to invalid IL or missing references)
				//IL_0016: Unknown result type (might be due to invalid IL or missing references)
				return DoDecoratedOperation((ITransaction t) => ((IDatabaseAsync)t).StringDecrementAsync(key, value, flags));
			}

			public Task<RedisValue> StringGetAsync(RedisKey key, CommandFlags flags = (CommandFlags)0)
			{
				//IL_0007: Unknown result type (might be due to invalid IL or missing references)
				//IL_0008: Unknown result type (might be due to invalid IL or missing references)
				//IL_000e: Unknown result type (might be due to invalid IL or missing references)
				//IL_000f: Unknown result type (might be due to invalid IL or missing references)
				return DoDecoratedOperation((ITransaction t) => ((IDatabaseAsync)t).StringGetAsync(key, flags));
			}

			public Task<RedisValue[]> StringGetAsync(RedisKey[] keys, CommandFlags flags = (CommandFlags)0)
			{
				//IL_000e: Unknown result type (might be due to invalid IL or missing references)
				//IL_000f: Unknown result type (might be due to invalid IL or missing references)
				return DoDecoratedOperation((ITransaction t) => ((IDatabaseAsync)t).StringGetAsync(keys, flags));
			}

			public Task<bool> StringGetBitAsync(RedisKey key, long offset, CommandFlags flags = (CommandFlags)0)
			{
				//IL_0007: Unknown result type (might be due to invalid IL or missing references)
				//IL_0008: Unknown result type (might be due to invalid IL or missing references)
				//IL_0015: Unknown result type (might be due to invalid IL or missing references)
				//IL_0016: Unknown result type (might be due to invalid IL or missing references)
				return DoDecoratedOperation((ITransaction t) => ((IDatabaseAsync)t).StringGetBitAsync(key, offset, flags));
			}

			public Task<RedisValue> StringGetRangeAsync(RedisKey key, long start, long end, CommandFlags flags = (CommandFlags)0)
			{
				//IL_0007: Unknown result type (might be due to invalid IL or missing references)
				//IL_0008: Unknown result type (might be due to invalid IL or missing references)
				//IL_001c: Unknown result type (might be due to invalid IL or missing references)
				//IL_001e: Unknown result type (might be due to invalid IL or missing references)
				return DoDecoratedOperation((ITransaction t) => ((IDatabaseAsync)t).StringGetRangeAsync(key, start, end, flags));
			}

			public Task<RedisValue> StringGetSetAsync(RedisKey key, RedisValue value, CommandFlags flags = (CommandFlags)0)
			{
				//IL_0007: Unknown result type (might be due to invalid IL or missing references)
				//IL_0008: Unknown result type (might be due to invalid IL or missing references)
				//IL_000e: Unknown result type (might be due to invalid IL or missing references)
				//IL_000f: Unknown result type (might be due to invalid IL or missing references)
				//IL_0015: Unknown result type (might be due to invalid IL or missing references)
				//IL_0016: Unknown result type (might be due to invalid IL or missing references)
				return DoDecoratedOperation((ITransaction t) => ((IDatabaseAsync)t).StringGetSetAsync(key, value, flags));
			}

			public Task<RedisValueWithExpiry> StringGetWithExpiryAsync(RedisKey key, CommandFlags flags = (CommandFlags)0)
			{
				//IL_0007: Unknown result type (might be due to invalid IL or missing references)
				//IL_0008: Unknown result type (might be due to invalid IL or missing references)
				//IL_000e: Unknown result type (might be due to invalid IL or missing references)
				//IL_000f: Unknown result type (might be due to invalid IL or missing references)
				return DoDecoratedOperation((ITransaction t) => ((IDatabaseAsync)t).StringGetWithExpiryAsync(key, flags));
			}

			public Task<long> StringIncrementAsync(RedisKey key, long value = 1L, CommandFlags flags = (CommandFlags)0)
			{
				//IL_0007: Unknown result type (might be due to invalid IL or missing references)
				//IL_0008: Unknown result type (might be due to invalid IL or missing references)
				//IL_0015: Unknown result type (might be due to invalid IL or missing references)
				//IL_0016: Unknown result type (might be due to invalid IL or missing references)
				return DoDecoratedOperation((ITransaction t) => ((IDatabaseAsync)t).StringIncrementAsync(key, value, flags));
			}

			public Task<double> StringIncrementAsync(RedisKey key, double value, CommandFlags flags = (CommandFlags)0)
			{
				//IL_0007: Unknown result type (might be due to invalid IL or missing references)
				//IL_0008: Unknown result type (might be due to invalid IL or missing references)
				//IL_0015: Unknown result type (might be due to invalid IL or missing references)
				//IL_0016: Unknown result type (might be due to invalid IL or missing references)
				return DoDecoratedOperation((ITransaction t) => ((IDatabaseAsync)t).StringIncrementAsync(key, value, flags));
			}

			public Task<long> StringLengthAsync(RedisKey key, CommandFlags flags = (CommandFlags)0)
			{
				//IL_0007: Unknown result type (might be due to invalid IL or missing references)
				//IL_0008: Unknown result type (might be due to invalid IL or missing references)
				//IL_000e: Unknown result type (might be due to invalid IL or missing references)
				//IL_000f: Unknown result type (might be due to invalid IL or missing references)
				return DoDecoratedOperation((ITransaction t) => ((IDatabaseAsync)t).StringLengthAsync(key, flags));
			}

			public Task<bool> StringSetAsync(RedisKey key, RedisValue value, TimeSpan? expiry = null, When when = (When)0, CommandFlags flags = (CommandFlags)0)
			{
				//IL_0007: Unknown result type (might be due to invalid IL or missing references)
				//IL_0008: Unknown result type (might be due to invalid IL or missing references)
				//IL_000e: Unknown result type (might be due to invalid IL or missing references)
				//IL_000f: Unknown result type (might be due to invalid IL or missing references)
				//IL_001c: Unknown result type (might be due to invalid IL or missing references)
				//IL_001e: Unknown result type (might be due to invalid IL or missing references)
				//IL_0024: Unknown result type (might be due to invalid IL or missing references)
				//IL_0026: Unknown result type (might be due to invalid IL or missing references)
				return DoDecoratedOperation((ITransaction t) => ((IDatabaseAsync)t).StringSetAsync(key, value, expiry, when, flags));
			}

			public Task<bool> StringSetAsync(KeyValuePair<RedisKey, RedisValue>[] values, When when = (When)0, CommandFlags flags = (CommandFlags)0)
			{
				//IL_000e: Unknown result type (might be due to invalid IL or missing references)
				//IL_000f: Unknown result type (might be due to invalid IL or missing references)
				//IL_0015: Unknown result type (might be due to invalid IL or missing references)
				//IL_0016: Unknown result type (might be due to invalid IL or missing references)
				return DoDecoratedOperation((ITransaction t) => ((IDatabaseAsync)t).StringSetAsync(values, when, flags));
			}

			public Task<bool> StringSetBitAsync(RedisKey key, long offset, bool bit, CommandFlags flags = (CommandFlags)0)
			{
				//IL_0007: Unknown result type (might be due to invalid IL or missing references)
				//IL_0008: Unknown result type (might be due to invalid IL or missing references)
				//IL_001c: Unknown result type (might be due to invalid IL or missing references)
				//IL_001e: Unknown result type (might be due to invalid IL or missing references)
				return DoDecoratedOperation((ITransaction t) => ((IDatabaseAsync)t).StringSetBitAsync(key, offset, bit, flags));
			}

			public Task<RedisValue> StringSetRangeAsync(RedisKey key, long offset, RedisValue value, CommandFlags flags = (CommandFlags)0)
			{
				//IL_0007: Unknown result type (might be due to invalid IL or missing references)
				//IL_0008: Unknown result type (might be due to invalid IL or missing references)
				//IL_0015: Unknown result type (might be due to invalid IL or missing references)
				//IL_0016: Unknown result type (might be due to invalid IL or missing references)
				//IL_001c: Unknown result type (might be due to invalid IL or missing references)
				//IL_001e: Unknown result type (might be due to invalid IL or missing references)
				return DoDecoratedOperation((ITransaction t) => ((IDatabaseAsync)t).StringSetRangeAsync(key, offset, value, flags));
			}

			public Task<TimeSpan> PingAsync(CommandFlags flags = (CommandFlags)0)
			{
				//IL_0007: Unknown result type (might be due to invalid IL or missing references)
				//IL_0008: Unknown result type (might be due to invalid IL or missing references)
				return DoDecoratedOperation((ITransaction t) => ((IRedisAsync)t).PingAsync(flags));
			}

			public bool TryWait(Task task)
			{
				return DoDecoratedOperation((ITransaction t) => ((IRedisAsync)t).TryWait(task));
			}

			public void Wait(Task task)
			{
				DoDecoratedOperation(delegate(ITransaction t)
				{
					((IRedisAsync)t).Wait(task);
				});
			}

			public T Wait<T>(Task<T> task)
			{
				return DoDecoratedOperation((ITransaction t) => ((IRedisAsync)t).Wait<T>(task));
			}

			public void WaitAll(params Task[] tasks)
			{
				DoDecoratedOperation(delegate(ITransaction t)
				{
					((IRedisAsync)t).WaitAll(tasks);
				});
			}
		}

		private class BadStateReportingSubscriber : BadStateReportingBase<ISubscriber>, ISubscriber, IRedis, IRedisAsync
		{
			public ConnectionMultiplexer Multiplexer
			{
				get
				{
					return ((IRedisAsync)base.Decorated).Multiplexer;
				}
			}

			public override event Action BadStateExceptionOccurred;

			public BadStateReportingSubscriber(ISubscriber decorated)
				: base(decorated)
			{
			}

			public EndPoint IdentifyEndpoint(RedisChannel channel, CommandFlags flags = (CommandFlags)0)
			{
				//IL_0007: Unknown result type (might be due to invalid IL or missing references)
				//IL_0008: Unknown result type (might be due to invalid IL or missing references)
				//IL_000e: Unknown result type (might be due to invalid IL or missing references)
				//IL_000f: Unknown result type (might be due to invalid IL or missing references)
				return DoDecoratedOperation((ISubscriber s) => s.IdentifyEndpoint(channel, flags));
			}

			public Task<EndPoint> IdentifyEndpointAsync(RedisChannel channel, CommandFlags flags = (CommandFlags)0)
			{
				//IL_0007: Unknown result type (might be due to invalid IL or missing references)
				//IL_0008: Unknown result type (might be due to invalid IL or missing references)
				//IL_000e: Unknown result type (might be due to invalid IL or missing references)
				//IL_000f: Unknown result type (might be due to invalid IL or missing references)
				return DoDecoratedOperation((ISubscriber s) => s.IdentifyEndpointAsync(channel, flags));
			}

			public bool IsConnected(RedisChannel channel = default(RedisChannel))
			{
				//IL_0007: Unknown result type (might be due to invalid IL or missing references)
				//IL_0008: Unknown result type (might be due to invalid IL or missing references)
				return DoDecoratedOperation((ISubscriber s) => s.IsConnected(channel));
			}

			public long Publish(RedisChannel channel, RedisValue message, CommandFlags flags = (CommandFlags)0)
			{
				//IL_0007: Unknown result type (might be due to invalid IL or missing references)
				//IL_0008: Unknown result type (might be due to invalid IL or missing references)
				//IL_000e: Unknown result type (might be due to invalid IL or missing references)
				//IL_000f: Unknown result type (might be due to invalid IL or missing references)
				//IL_0015: Unknown result type (might be due to invalid IL or missing references)
				//IL_0016: Unknown result type (might be due to invalid IL or missing references)
				return DoDecoratedOperation((ISubscriber s) => s.Publish(channel, message, flags));
			}

			public Task<long> PublishAsync(RedisChannel channel, RedisValue message, CommandFlags flags = (CommandFlags)0)
			{
				//IL_0007: Unknown result type (might be due to invalid IL or missing references)
				//IL_0008: Unknown result type (might be due to invalid IL or missing references)
				//IL_000e: Unknown result type (might be due to invalid IL or missing references)
				//IL_000f: Unknown result type (might be due to invalid IL or missing references)
				//IL_0015: Unknown result type (might be due to invalid IL or missing references)
				//IL_0016: Unknown result type (might be due to invalid IL or missing references)
				return DoDecoratedOperation((ISubscriber s) => s.PublishAsync(channel, message, flags));
			}

			public void Subscribe(RedisChannel channel, Action<RedisChannel, RedisValue> handler, CommandFlags flags = (CommandFlags)0)
			{
				//IL_0007: Unknown result type (might be due to invalid IL or missing references)
				//IL_0008: Unknown result type (might be due to invalid IL or missing references)
				//IL_0015: Unknown result type (might be due to invalid IL or missing references)
				//IL_0016: Unknown result type (might be due to invalid IL or missing references)
				DoDecoratedOperation(delegate(ISubscriber s)
				{
					//IL_0002: Unknown result type (might be due to invalid IL or missing references)
					//IL_000e: Unknown result type (might be due to invalid IL or missing references)
					s.Subscribe(channel, handler, flags);
				});
			}

			public Task SubscribeAsync(RedisChannel channel, Action<RedisChannel, RedisValue> handler, CommandFlags flags = (CommandFlags)0)
			{
				//IL_0007: Unknown result type (might be due to invalid IL or missing references)
				//IL_0008: Unknown result type (might be due to invalid IL or missing references)
				//IL_0015: Unknown result type (might be due to invalid IL or missing references)
				//IL_0016: Unknown result type (might be due to invalid IL or missing references)
				return DoDecoratedOperation((ISubscriber s) => s.SubscribeAsync(channel, handler, flags));
			}

			public EndPoint SubscribedEndpoint(RedisChannel channel)
			{
				//IL_0007: Unknown result type (might be due to invalid IL or missing references)
				//IL_0008: Unknown result type (might be due to invalid IL or missing references)
				return DoDecoratedOperation((ISubscriber s) => s.SubscribedEndpoint(channel));
			}

			public void Unsubscribe(RedisChannel channel, Action<RedisChannel, RedisValue> handler = null, CommandFlags flags = (CommandFlags)0)
			{
				//IL_0007: Unknown result type (might be due to invalid IL or missing references)
				//IL_0008: Unknown result type (might be due to invalid IL or missing references)
				//IL_0015: Unknown result type (might be due to invalid IL or missing references)
				//IL_0016: Unknown result type (might be due to invalid IL or missing references)
				DoDecoratedOperation(delegate(ISubscriber s)
				{
					//IL_0002: Unknown result type (might be due to invalid IL or missing references)
					//IL_000e: Unknown result type (might be due to invalid IL or missing references)
					s.Unsubscribe(channel, handler, flags);
				});
			}

			public void UnsubscribeAll(CommandFlags flags = (CommandFlags)0)
			{
				//IL_0007: Unknown result type (might be due to invalid IL or missing references)
				//IL_0008: Unknown result type (might be due to invalid IL or missing references)
				DoDecoratedOperation(delegate(ISubscriber s)
				{
					//IL_0002: Unknown result type (might be due to invalid IL or missing references)
					s.UnsubscribeAll(flags);
				});
			}

			public Task UnsubscribeAllAsync(CommandFlags flags = (CommandFlags)0)
			{
				//IL_0007: Unknown result type (might be due to invalid IL or missing references)
				//IL_0008: Unknown result type (might be due to invalid IL or missing references)
				return DoDecoratedOperation((ISubscriber s) => s.UnsubscribeAllAsync(flags));
			}

			public Task UnsubscribeAsync(RedisChannel channel, Action<RedisChannel, RedisValue> handler = null, CommandFlags flags = (CommandFlags)0)
			{
				//IL_0007: Unknown result type (might be due to invalid IL or missing references)
				//IL_0008: Unknown result type (might be due to invalid IL or missing references)
				//IL_0015: Unknown result type (might be due to invalid IL or missing references)
				//IL_0016: Unknown result type (might be due to invalid IL or missing references)
				return DoDecoratedOperation((ISubscriber s) => s.UnsubscribeAsync(channel, handler, flags));
			}

			public TimeSpan Ping(CommandFlags flags = (CommandFlags)0)
			{
				//IL_0007: Unknown result type (might be due to invalid IL or missing references)
				//IL_0008: Unknown result type (might be due to invalid IL or missing references)
				return DoDecoratedOperation((ISubscriber s) => ((IRedis)s).Ping(flags));
			}

			public Task<TimeSpan> PingAsync(CommandFlags flags = (CommandFlags)0)
			{
				//IL_0007: Unknown result type (might be due to invalid IL or missing references)
				//IL_0008: Unknown result type (might be due to invalid IL or missing references)
				return DoDecoratedOperation((ISubscriber s) => ((IRedisAsync)s).PingAsync(flags));
			}

			public bool TryWait(Task task)
			{
				return DoDecoratedOperation((ISubscriber s) => ((IRedisAsync)s).TryWait(task));
			}

			public void Wait(Task task)
			{
				DoDecoratedOperation(delegate(ISubscriber s)
				{
					((IRedisAsync)s).Wait(task);
				});
			}

			public T Wait<T>(Task<T> task)
			{
				return DoDecoratedOperation((ISubscriber s) => ((IRedisAsync)s).Wait<T>(task));
			}

			public void WaitAll(params Task[] tasks)
			{
				DoDecoratedOperation(delegate(ISubscriber s)
				{
					((IRedisAsync)s).WaitAll(tasks);
				});
			}

			protected override void RaiseBadStateExceptionOccurred()
			{
				Action action = BadStateExceptionOccurred;
				if (action != null)
				{
					action();
				}
			}
		}

		private IConnectionMultiplexer _Decorated;

		private readonly IConnectionBuilder _ConnectionBuilder;

		private readonly ConfigurationOptions _ConfigurationOptions;

		private readonly ReaderWriterLockSlim _ReaderWriterLockSlim;

		private readonly BadStateRecorder _BadStateRecorder;

		private volatile bool _IsDisposed;

		public string ClientName
		{
			get
			{
				return _Decorated.ClientName;
			}
		}

		public string Configuration
		{
			get
			{
				return _Decorated.Configuration;
			}
		}

		public int TimeoutMilliseconds
		{
			get
			{
				return _Decorated.TimeoutMilliseconds;
			}
		}

		public long OperationCount
		{
			get
			{
				return _Decorated.OperationCount;
			}
		}

		public bool PreserveAsyncOrder
		{
			get
			{
				return _Decorated.PreserveAsyncOrder;
			}
			set
			{
				_Decorated.PreserveAsyncOrder = value;
			}
		}

		public bool IsConnected
		{
			get
			{
				return _Decorated.IsConnected;
			}
		}

		public bool IncludeDetailInExceptions
		{
			get
			{
				return _Decorated.IncludeDetailInExceptions;
			}
			set
			{
				_Decorated.IncludeDetailInExceptions = value;
			}
		}

		public int StormLogThreshold
		{
			get
			{
				return _Decorated.StormLogThreshold;
			}
			set
			{
				_Decorated.StormLogThreshold = value;
			}
		}

		public event EventHandler<RedisErrorEventArgs> ErrorMessage;

		public event EventHandler<ConnectionFailedEventArgs> ConnectionFailed;

		public event EventHandler<InternalErrorEventArgs> InternalError;

		public event EventHandler<ConnectionFailedEventArgs> ConnectionRestored;

		public event EventHandler<EndPointEventArgs> ConfigurationChanged;

		public event EventHandler<EndPointEventArgs> ConfigurationChangedBroadcast;

		public event EventHandler<HashSlotMovedEventArgs> HashSlotMoved;

		public SelfHealingConnectionMultiplexer(IConnectionMultiplexer initialConnectionMultiplexer, IConnectionBuilder connectionBuilder, ConfigurationOptions configurationOptions, ISelfHealingConnectionMultiplexerSettings settings, Func<DateTime> getCurrentTime)
		{
			if (initialConnectionMultiplexer == null)
			{
				throw new ArgumentNullException("initialConnectionMultiplexer");
			}
			_Decorated = initialConnectionMultiplexer;
			if (connectionBuilder == null)
			{
				throw new ArgumentNullException("connectionBuilder");
			}
			_ConnectionBuilder = connectionBuilder;
			if (configurationOptions == null)
			{
				throw new ArgumentNullException("configurationOptions");
			}
			_ConfigurationOptions = configurationOptions;
			_ReaderWriterLockSlim = new ReaderWriterLockSlim();
			_BadStateRecorder = new BadStateRecorder(settings, getCurrentTime);
			_BadStateRecorder.BadStateDetected += OnBadStateDetected;
		}

		~SelfHealingConnectionMultiplexer()
		{
			Dispose(false);
		}

		public void BeginProfiling(object forContext)
		{
			DoDecoratedOperation(delegate(IConnectionMultiplexer cm)
			{
				cm.BeginProfiling(forContext);
			});
		}

		public void Close(bool allowCommandsToComplete = true)
		{
			DoDecoratedOperation(delegate(IConnectionMultiplexer cm)
			{
				cm.Close(allowCommandsToComplete);
			});
		}

		public Task CloseAsync(bool allowCommandsToComplete = true)
		{
			return DoDecoratedOperation((IConnectionMultiplexer cm) => cm.CloseAsync(allowCommandsToComplete));
		}

		public bool Configure(TextWriter log = null)
		{
			return DoDecoratedOperation((IConnectionMultiplexer cm) => cm.Configure(log));
		}

		public Task<bool> ConfigureAsync(TextWriter log = null)
		{
			return DoDecoratedOperation((IConnectionMultiplexer cm) => cm.ConfigureAsync(log));
		}

		public void Dispose()
		{
			Dispose(true);
			GC.SuppressFinalize(this);
		}

		private void Dispose(bool isDisposing)
		{
			if (!_IsDisposed)
			{
				if (isDisposing)
				{
					_ReaderWriterLockSlim.Dispose();
					_BadStateRecorder.BadStateDetected -= OnBadStateDetected;
					_Decorated.ConfigurationChangedBroadcast -= OnConfigurationChangedBroadcast;
					_Decorated.ConfigurationChanged -= OnConfigurationChanged;
					_Decorated.ConnectionFailed -= OnConnectionFailed;
					_Decorated.ConnectionRestored -= OnConnectionRestored;
					_Decorated.ErrorMessage -= OnErrorMessage;
					_Decorated.HashSlotMoved -= OnHashSlotMoved;
					_Decorated.InternalError -= OnInternalError;
					_Decorated.Dispose();
				}
				_IsDisposed = true;
			}
		}

		public ProfiledCommandEnumerable FinishProfiling(object forContext, bool allowCleanupSweep = true)
		{
			//IL_0021: Unknown result type (might be due to invalid IL or missing references)
			return DoDecoratedOperation((IConnectionMultiplexer cm) => cm.FinishProfiling(forContext, allowCleanupSweep));
		}

		public ServerCounters GetCounters()
		{
			return DoDecoratedOperation((IConnectionMultiplexer cm) => cm.GetCounters());
		}

		public IDatabase GetDatabase(int db = -1, object asyncState = null)
		{
			BadStateReportingDatabase badStateReportingDatabase = new BadStateReportingDatabase(DoDecoratedOperation((IConnectionMultiplexer cm) => cm.GetDatabase(db, asyncState)));
			badStateReportingDatabase.BadStateExceptionOccurred += _BadStateRecorder.Record;
			return (IDatabase)(object)badStateReportingDatabase;
		}

		public EndPoint[] GetEndPoints(bool configuredOnly = false)
		{
			return DoDecoratedOperation((IConnectionMultiplexer cm) => cm.GetEndPoints(configuredOnly));
		}

		public IServer GetServer(string host, int port, object asyncState = null)
		{
			BadStateReportingServer badStateReportingServer = new BadStateReportingServer(DoDecoratedOperation((IConnectionMultiplexer cm) => cm.GetServer(host, port, asyncState)));
			badStateReportingServer.BadStateExceptionOccurred += _BadStateRecorder.Record;
			return (IServer)(object)badStateReportingServer;
		}

		public IServer GetServer(string hostAndPort, object asyncState = null)
		{
			BadStateReportingServer badStateReportingServer = new BadStateReportingServer(DoDecoratedOperation((IConnectionMultiplexer cm) => cm.GetServer(hostAndPort, asyncState)));
			badStateReportingServer.BadStateExceptionOccurred += _BadStateRecorder.Record;
			return (IServer)(object)badStateReportingServer;
		}

		public IServer GetServer(IPAddress host, int port)
		{
			BadStateReportingServer badStateReportingServer = new BadStateReportingServer(DoDecoratedOperation((IConnectionMultiplexer cm) => cm.GetServer(host, port)));
			badStateReportingServer.BadStateExceptionOccurred += _BadStateRecorder.Record;
			return (IServer)(object)badStateReportingServer;
		}

		public IServer GetServer(EndPoint endpoint, object asyncState = null)
		{
			BadStateReportingServer badStateReportingServer = new BadStateReportingServer(DoDecoratedOperation((IConnectionMultiplexer cm) => cm.GetServer(endpoint, asyncState)));
			badStateReportingServer.BadStateExceptionOccurred += _BadStateRecorder.Record;
			return (IServer)(object)badStateReportingServer;
		}

		public string GetStatus()
		{
			return DoDecoratedOperation((IConnectionMultiplexer cm) => cm.GetStatus());
		}

		public void GetStatus(TextWriter log)
		{
			DoDecoratedOperation(delegate(IConnectionMultiplexer cm)
			{
				cm.GetStatus(log);
			});
		}

		public string GetStormLog()
		{
			return DoDecoratedOperation((IConnectionMultiplexer cm) => cm.GetStormLog());
		}

		public ISubscriber GetSubscriber(object asyncState = null)
		{
			BadStateReportingSubscriber badStateReportingSubscriber = new BadStateReportingSubscriber(DoDecoratedOperation((IConnectionMultiplexer cm) => cm.GetSubscriber(asyncState)));
			badStateReportingSubscriber.BadStateExceptionOccurred += _BadStateRecorder.Record;
			return (ISubscriber)(object)badStateReportingSubscriber;
		}

		public int HashSlot(RedisKey key)
		{
			//IL_0007: Unknown result type (might be due to invalid IL or missing references)
			//IL_0008: Unknown result type (might be due to invalid IL or missing references)
			return DoDecoratedOperation((IConnectionMultiplexer cm) => cm.HashSlot(key));
		}

		public long PublishReconfigure(CommandFlags flags = (CommandFlags)0)
		{
			//IL_0007: Unknown result type (might be due to invalid IL or missing references)
			//IL_0008: Unknown result type (might be due to invalid IL or missing references)
			return DoDecoratedOperation((IConnectionMultiplexer cm) => cm.PublishReconfigure(flags));
		}

		public Task<long> PublishReconfigureAsync(CommandFlags flags = (CommandFlags)0)
		{
			//IL_0007: Unknown result type (might be due to invalid IL or missing references)
			//IL_0008: Unknown result type (might be due to invalid IL or missing references)
			return DoDecoratedOperation((IConnectionMultiplexer cm) => cm.PublishReconfigureAsync(flags));
		}

		public void RegisterProfiler(IProfiler profiler)
		{
			DoDecoratedOperation(delegate(IConnectionMultiplexer cm)
			{
				cm.RegisterProfiler(profiler);
			});
		}

		public void ResetStormLog()
		{
			DoDecoratedOperation(delegate(IConnectionMultiplexer cm)
			{
				cm.ResetStormLog();
			});
		}

		public void Wait(Task task)
		{
			DoDecoratedOperation(delegate(IConnectionMultiplexer cm)
			{
				cm.Wait(task);
			});
		}

		public T Wait<T>(Task<T> task)
		{
			return DoDecoratedOperation((IConnectionMultiplexer cm) => cm.Wait<T>(task));
		}

		public void WaitAll(params Task[] tasks)
		{
			DoDecoratedOperation(delegate(IConnectionMultiplexer cm)
			{
				cm.WaitAll(tasks);
			});
		}

		private void OnBadStateDetected(long recorderVersion)
		{
			if (_BadStateRecorder.Version != recorderVersion)
			{
				return;
			}
			_ReaderWriterLockSlim.TryEnterWriteLock(-1);
			try
			{
				IConnectionMultiplexer val = null;
				if (_BadStateRecorder.Reset(recorderVersion))
				{
					IConnectionMultiplexer result = Task.Run(() => _ConnectionBuilder.CreateConnectionMultiplexerAsync(_ConfigurationOptions)).GetAwaiter().GetResult();
					_Decorated.ErrorMessage -= OnErrorMessage;
					result.ErrorMessage += OnErrorMessage;
					_Decorated.ConnectionFailed -= OnConnectionFailed;
					result.ConnectionFailed += OnConnectionFailed;
					_Decorated.InternalError -= OnInternalError;
					result.InternalError += OnInternalError;
					_Decorated.ConnectionRestored -= OnConnectionRestored;
					result.ConnectionRestored += OnConnectionRestored;
					_Decorated.ConfigurationChanged -= OnConfigurationChanged;
					result.ConfigurationChanged += OnConfigurationChanged;
					_Decorated.ConfigurationChangedBroadcast -= OnConfigurationChangedBroadcast;
					result.ConfigurationChangedBroadcast += OnConfigurationChangedBroadcast;
					_Decorated.HashSlotMoved -= OnHashSlotMoved;
					result.HashSlotMoved += OnHashSlotMoved;
					val = Interlocked.Exchange(ref _Decorated, result);
				}
				if (val != null)
				{
					val.Dispose();
				}
			}
			finally
			{
				_ReaderWriterLockSlim.ExitWriteLock();
			}
		}

		private void OnHashSlotMoved(object sender, HashSlotMovedEventArgs e)
		{
			EventHandler<HashSlotMovedEventArgs> eventHandler = this.HashSlotMoved;
			if (eventHandler != null)
			{
				eventHandler(sender, e);
			}
		}

		private void OnConfigurationChangedBroadcast(object sender, EndPointEventArgs e)
		{
			EventHandler<EndPointEventArgs> eventHandler = this.ConfigurationChangedBroadcast;
			if (eventHandler != null)
			{
				eventHandler(sender, e);
			}
		}

		private void OnConfigurationChanged(object sender, EndPointEventArgs e)
		{
			EventHandler<EndPointEventArgs> eventHandler = this.ConfigurationChanged;
			if (eventHandler != null)
			{
				eventHandler(sender, e);
			}
		}

		private void OnConnectionRestored(object sender, ConnectionFailedEventArgs e)
		{
			EventHandler<ConnectionFailedEventArgs> eventHandler = this.ConnectionRestored;
			if (eventHandler != null)
			{
				eventHandler(sender, e);
			}
		}

		private void OnInternalError(object sender, InternalErrorEventArgs e)
		{
			EventHandler<InternalErrorEventArgs> eventHandler = this.InternalError;
			if (eventHandler != null)
			{
				eventHandler(sender, e);
			}
		}

		private void OnConnectionFailed(object sender, ConnectionFailedEventArgs e)
		{
			EventHandler<ConnectionFailedEventArgs> eventHandler = this.ConnectionFailed;
			if (eventHandler != null)
			{
				eventHandler(sender, e);
			}
		}

		private void OnErrorMessage(object sender, RedisErrorEventArgs e)
		{
			EventHandler<RedisErrorEventArgs> eventHandler = this.ErrorMessage;
			if (eventHandler != null)
			{
				eventHandler(sender, e);
			}
		}

		private T DoDecoratedOperation<T>(Func<IConnectionMultiplexer, T> operation)
		{
			if (_IsDisposed)
			{
				throw new ObjectDisposedException("SelfHealingConnectionMultiplexer");
			}
			try
			{
				_ReaderWriterLockSlim.TryEnterReadLock(-1);
				T result = operation(_Decorated);
				_ReaderWriterLockSlim.ExitReadLock();
				return result;
			}
			catch (RedisConnectionException)
			{
				_ReaderWriterLockSlim.ExitReadLock();
				_BadStateRecorder.Record();
				throw;
			}
			catch (RedisTimeoutException)
			{
				_ReaderWriterLockSlim.ExitReadLock();
				_BadStateRecorder.Record();
				throw;
			}
		}

		private void DoDecoratedOperation(Action<IConnectionMultiplexer> operation)
		{
			if (_IsDisposed)
			{
				throw new ObjectDisposedException("SelfHealingConnectionMultiplexer");
			}
			try
			{
				_ReaderWriterLockSlim.TryEnterReadLock(-1);
				operation(_Decorated);
				_ReaderWriterLockSlim.ExitReadLock();
			}
			catch (RedisConnectionException)
			{
				_ReaderWriterLockSlim.ExitReadLock();
				_BadStateRecorder.Record();
				throw;
			}
			catch (RedisTimeoutException)
			{
				_ReaderWriterLockSlim.ExitReadLock();
				_BadStateRecorder.Record();
				throw;
			}
		}
	}

	[StructLayout(LayoutKind.Auto)]
	[CompilerGenerated]
	private struct _003CCreateConnectionMultiplexerAsync_003Ed__5 : IAsyncStateMachine
	{
		public int _003C_003E1__state;

		public AsyncTaskMethodBuilder<IConnectionMultiplexer> _003C_003Et__builder;

		public SelfHealingConnectionBuilder _003C_003E4__this;

		public ConfigurationOptions configuration;

		private ConfiguredTaskAwaitable<IConnectionMultiplexer>.ConfiguredTaskAwaiter _003C_003Eu__1;

		private void MoveNext()
		{
			int num = _003C_003E1__state;
			SelfHealingConnectionBuilder selfHealingConnectionBuilder = _003C_003E4__this;
			IConnectionMultiplexer result;
			try
			{
				ConfiguredTaskAwaitable<IConnectionMultiplexer>.ConfiguredTaskAwaiter awaiter;
				if (num != 0)
				{
					awaiter = selfHealingConnectionBuilder._WrappedConnectionBuilder.CreateConnectionMultiplexerAsync(configuration).ConfigureAwait(false).GetAwaiter();
					if (!awaiter.IsCompleted)
					{
						num = (_003C_003E1__state = 0);
						_003C_003Eu__1 = awaiter;
						_003C_003Et__builder.AwaitUnsafeOnCompleted(ref awaiter, ref this);
						return;
					}
				}
				else
				{
					awaiter = _003C_003Eu__1;
					_003C_003Eu__1 = default(ConfiguredTaskAwaitable<IConnectionMultiplexer>.ConfiguredTaskAwaiter);
					num = (_003C_003E1__state = -1);
				}
				result = (IConnectionMultiplexer)(object)new SelfHealingConnectionMultiplexer(awaiter.GetResult(), selfHealingConnectionBuilder._WrappedConnectionBuilder, configuration, selfHealingConnectionBuilder._Settings, selfHealingConnectionBuilder._GetCurrentTimeFunc);
			}
			catch (Exception exception)
			{
				_003C_003E1__state = -2;
				_003C_003Et__builder.SetException(exception);
				return;
			}
			_003C_003E1__state = -2;
			_003C_003Et__builder.SetResult(result);
		}

		void IAsyncStateMachine.MoveNext()
		{
			//ILSpy generated this explicit interface implementation from .override directive in MoveNext
			this.MoveNext();
		}

		[DebuggerHidden]
		private void SetStateMachine(IAsyncStateMachine stateMachine)
		{
			_003C_003Et__builder.SetStateMachine(stateMachine);
		}

		void IAsyncStateMachine.SetStateMachine(IAsyncStateMachine stateMachine)
		{
			//ILSpy generated this explicit interface implementation from .override directive in SetStateMachine
			this.SetStateMachine(stateMachine);
		}
	}

	private readonly IConnectionBuilder _WrappedConnectionBuilder;

	private readonly ISelfHealingConnectionMultiplexerSettings _Settings;

	private readonly Func<DateTime> _GetCurrentTimeFunc;

	public SelfHealingConnectionBuilder(IConnectionBuilder wrappedConnectionBuilder, ISelfHealingConnectionMultiplexerSettings settings, Func<DateTime> getCurrentTimeFunc)
	{
		if (wrappedConnectionBuilder == null)
		{
			throw new ArgumentNullException("wrappedConnectionBuilder");
		}
		_WrappedConnectionBuilder = wrappedConnectionBuilder;
		if (settings == null)
		{
			throw new ArgumentNullException("settings");
		}
		_Settings = settings;
		if (getCurrentTimeFunc == null)
		{
			throw new ArgumentNullException("getCurrentTimeFunc");
		}
		_GetCurrentTimeFunc = getCurrentTimeFunc;
	}

	[AsyncStateMachine(typeof(_003CCreateConnectionMultiplexerAsync_003Ed__5))]
	public Task<IConnectionMultiplexer> CreateConnectionMultiplexerAsync(ConfigurationOptions configuration)
	{
		_003CCreateConnectionMultiplexerAsync_003Ed__5 stateMachine = default(_003CCreateConnectionMultiplexerAsync_003Ed__5);
		stateMachine._003C_003E4__this = this;
		stateMachine.configuration = configuration;
		stateMachine._003C_003Et__builder = AsyncTaskMethodBuilder<IConnectionMultiplexer>.Create();
		stateMachine._003C_003E1__state = -1;
		AsyncTaskMethodBuilder<IConnectionMultiplexer> asyncTaskMethodBuilder = stateMachine._003C_003Et__builder;
		asyncTaskMethodBuilder.Start(ref stateMachine);
		return stateMachine._003C_003Et__builder.Task;
	}
}
