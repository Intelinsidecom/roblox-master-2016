using System;
using System.Collections.Generic;
using System.Collections.ObjectModel;
using System.Linq;
using System.Net;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using System.Threading.Tasks;
using Roblox.Instrumentation;
using StackExchange.Redis;

namespace Roblox.Redis
{
	public class RlecRedisClient : RedisClientBase<RedisClientOptions>
	{
		[StructLayout(LayoutKind.Auto)]
		[CompilerGenerated]
		private struct _003C_003Ec__DisplayClass16_0
		{
			public RlecRedisClient _003C_003E4__this;

			public string excludedEndpoint;
		}

		private readonly object _MultiplexerCreationSync = new object();

		private readonly Random _Random = new Random();

		private string[] _RedisEndpoints;

		private IConnectionMultiplexer _Multiplexer;

		public RlecRedisClient(ICounterRegistry counterRegistry, IEnumerable<string> redisEndpoints, string performanceMonitorCategory, Action<Exception> exceptionHandler = null, RedisClientOptions clientOptions = null)
			: base(counterRegistry, performanceMonitorCategory, clientOptions, exceptionHandler)
		{
			_RedisEndpoints = redisEndpoints.ToArray();
			PickRandomEndpoint(null);
		}

		public RlecRedisClient(ICounterRegistry counterRegistry, RedisEndpoints redisEndpoints, string performanceMonitorCategory, Action<Exception> exceptionHandler = null, RedisClientOptions clientOptions = null)
			: this(counterRegistry, redisEndpoints.Endpoints, performanceMonitorCategory, exceptionHandler, clientOptions)
		{
		}

		public override void Refresh(string[] redisEndpoints)
		{
			_RedisEndpoints = redisEndpoints;
			PickRandomEndpoint(null);
			OnRefreshed();
		}

		public override IServer GetServer(string partitionKey)
		{
			return RedisClientBase<RedisClientOptions>.GetServerFromMultiplexer(_Multiplexer);
		}

		public override IReadOnlyCollection<IServer> GetAllServers()
		{
			return (IReadOnlyCollection<IServer>)(object)new IServer[1] { RedisClientBase<RedisClientOptions>.GetServerFromMultiplexer(_Multiplexer) };
		}

		public override IDatabase GetDatabase(string partitionKey)
		{
			return _Multiplexer.GetDatabase(-1, (object)null);
		}

		public override ISubscriber GetSubscriber(string partitionKey)
		{
			return _Multiplexer.GetSubscriber((object)null);
		}

		public override IDictionary<IDatabase, IReadOnlyCollection<string>> GetDatabases(IReadOnlyCollection<string> partitionKeys)
		{
			if (partitionKeys == null || partitionKeys.Any((string pk) => pk == null))
			{
				throw new ArgumentNullException("partitionKeys");
			}
			IDatabase database = _Multiplexer.GetDatabase(-1, (object)null);
			Dictionary<IDatabase, IReadOnlyCollection<string>> dictionary = new Dictionary<IDatabase, IReadOnlyCollection<string>>(1);
			IDatabase key = database;
			dictionary[key] = partitionKeys;
			return dictionary;
		}

		public override IReadOnlyCollection<IDatabase> GetAllDatabases()
		{
			return (IReadOnlyCollection<IDatabase>)(object)new IDatabase[1] { _Multiplexer.GetDatabase(-1, (object)null) };
		}

		public override IReadOnlyCollection<ISubscriber> GetAllSubscribers()
		{
			return (IReadOnlyCollection<ISubscriber>)(object)new ISubscriber[1] { _Multiplexer.GetSubscriber((object)null) };
		}

		public override void Close()
		{
			_Multiplexer.Close(false);
		}

		private void MultiplexerOnConnectionFailed(object sender, ConnectionFailedEventArgs args)
		{
			//IL_0001: Unknown result type (might be due to invalid IL or missing references)
			string excludedEndpoint = ((Collection<EndPoint>)(object)ConfigurationOptions.Parse(((ConnectionMultiplexer)sender).Configuration).EndPoints)[0].ToString();
			PickRandomEndpoint(excludedEndpoint);
		}

		private void PickRandomEndpoint(string excludedEndpoint)
		{
			_003C_003Ec__DisplayClass16_0 _003C_003Ec__DisplayClass16_ = default(_003C_003Ec__DisplayClass16_0);
			_003C_003Ec__DisplayClass16_._003C_003E4__this = this;
			_003C_003Ec__DisplayClass16_.excludedEndpoint = excludedEndpoint;
			IConnectionMultiplexer multiplexer = _Multiplexer;
			_Multiplexer = _003CPickRandomEndpoint_003Eg__CreateMultiplexer_007C16_0(ref _003C_003Ec__DisplayClass16_);
			DisposeMultiplexer(multiplexer, true);
		}

		private void DisposeMultiplexer(IConnectionMultiplexer multiplexer, bool delayedDisposal)
		{
			if (multiplexer == null)
			{
				return;
			}
			multiplexer.ConnectionFailed -= MultiplexerOnConnectionFailed;
			if (!delayedDisposal)
			{
				multiplexer.Dispose();
				return;
			}
			Task.Delay(5000).ContinueWith(delegate
			{
				try
				{
					multiplexer.Dispose();
				}
				catch
				{
				}
			});
		}

		[CompilerGenerated]
		private IConnectionMultiplexer _003CPickRandomEndpoint_003Eg__CreateMultiplexer_007C16_0(ref _003C_003Ec__DisplayClass16_0 P_0)
		{
			lock (_MultiplexerCreationSync)
			{
				HashSet<string> hashSet = new HashSet<string>(_RedisEndpoints);
				if (P_0.excludedEndpoint != null)
				{
					hashSet.Remove(P_0.excludedEndpoint);
				}
				while (hashSet.Count > 0)
				{
					string[] array = hashSet.ToArray();
					int num = _Random.Next(0, array.Length);
					string text = array[num];
					IConnectionMultiplexer val = ConnectMultiplexer(text);
					if (val.IsConnected)
					{
						val.ConnectionFailed += MultiplexerOnConnectionFailed;
						return val;
					}
					DisposeMultiplexer(val, false);
					hashSet.Remove(text);
				}
				int num2 = _Random.Next(0, _RedisEndpoints.Length);
				string redisEndpoint = _RedisEndpoints[num2];
				IConnectionMultiplexer obj = ConnectMultiplexer(redisEndpoint);
				obj.ConnectionFailed += MultiplexerOnConnectionFailed;
				return obj;
			}
		}
	}
}
