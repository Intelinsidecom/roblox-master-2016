using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Linq;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using System.Threading;
using System.Threading.Tasks;
using Roblox.Hashing;
using Roblox.Instrumentation;
using Roblox.Redis.Properties;
using StackExchange.Redis;

namespace Roblox.Redis
{
	public class RedisPooledClient : RedisClientBase<RedisPooledClientOptions>
	{
		[StructLayout(LayoutKind.Auto)]
		[CompilerGenerated]
		private struct _003CCreatePoolAsync_003Ed__17 : IAsyncStateMachine
		{
			public int _003C_003E1__state;

			public AsyncTaskMethodBuilder<RedisConnectionMultiplexerPool> _003C_003Et__builder;

			public RedisPooledClient _003C_003E4__this;

			public string redisEndpoint;

			public RedisPooledClientOptions clientOptions;

			private RedisConnectionMultiplexerPool _003Cpool_003E5__2;

			private ConfiguredTaskAwaitable.ConfiguredTaskAwaiter _003C_003Eu__1;

			private void MoveNext()
			{
				int num = _003C_003E1__state;
				RedisPooledClient redisPooledClient = _003C_003E4__this;
				RedisConnectionMultiplexerPool result;
				try
				{
					ConfiguredTaskAwaitable.ConfiguredTaskAwaiter awaiter;
					if (num != 0)
					{
						ConfigurationOptions configurationOptions = redisPooledClient.GetConfigurationOptions(redisEndpoint);
						_003Cpool_003E5__2 = new RedisConnectionMultiplexerPool(configurationOptions, clientOptions);
						awaiter = _003Cpool_003E5__2.ConnectAsync().ConfigureAwait(false).GetAwaiter();
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
						_003C_003Eu__1 = default(ConfiguredTaskAwaitable.ConfiguredTaskAwaiter);
						num = (_003C_003E1__state = -1);
					}
					awaiter.GetResult();
					result = _003Cpool_003E5__2;
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

		private RedisConnectionMultiplexerPool[] _Pools;

		private ConsistentHash<ConsistentHashConnectionWrapperBase> _NodeProvider;

		private readonly ParallelOptions _ParallelOptions = new ParallelOptions
		{
			MaxDegreeOfParallelism = 10
		};

		private readonly ISelfHealingConnectionMultiplexerSettings _BadStateSelfHealingConnectionMultiplexerSettings;

		private readonly Func<DateTime> _GetCurrentTimeFunc;

		public RedisPooledClient(ICounterRegistry counterRegistry, IEnumerable<string> redisEndpoints, string performanceMonitorCategory, Action<Exception> exceptionHandler = null, RedisPooledClientOptions clientOptions = null, ISelfHealingConnectionMultiplexerSettings badStateSelfHealingConnectionMultiplexerSettings = null, Func<DateTime> getCurrentTimeFunc = null)
			: base(counterRegistry, performanceMonitorCategory, clientOptions ?? new RedisPooledClientOptions(), exceptionHandler)
		{
			_BadStateSelfHealingConnectionMultiplexerSettings = badStateSelfHealingConnectionMultiplexerSettings ?? SelfHealingConnectionMultiplexerSettings.Default;
			_GetCurrentTimeFunc = getCurrentTimeFunc ?? ((Func<DateTime>)(() => DateTime.UtcNow));
			ChangePools(redisEndpoints.ToArray());
		}

		public RedisPooledClient(ICounterRegistry counterRegistry, RedisEndpoints redisEndpoints, string performanceMonitorCategory, Action<Exception> exceptionHandler = null, RedisPooledClientOptions clientOptions = null, ISelfHealingConnectionMultiplexerSettings badStateSelfHealingConnectionMultiplexerSettings = null, Func<DateTime> getCurrentTimeFunc = null)
			: this(counterRegistry, (redisEndpoints != null) ? redisEndpoints.Endpoints : null, performanceMonitorCategory, exceptionHandler, clientOptions, badStateSelfHealingConnectionMultiplexerSettings, getCurrentTimeFunc)
		{
		}

		public override IDatabase GetDatabase(string partitionKey)
		{
			if (_Pools.Length == 1)
			{
				return _Pools[0].GetConnectionMultiplexer().GetDatabase(-1, (object)null);
			}
			return _NodeProvider.GetNode(partitionKey).Database;
		}

		public override IServer GetServer(string partitionKey)
		{
			if (_Pools.Length == 1)
			{
				return RedisClientBase<RedisPooledClientOptions>.GetServerFromMultiplexer(_Pools[0].GetConnectionMultiplexer());
			}
			return _NodeProvider.GetNode(partitionKey).Server;
		}

		public override ISubscriber GetSubscriber(string partitionKey)
		{
			if (_Pools.Length == 1)
			{
				return _Pools[0].Subscriber;
			}
			return _NodeProvider.GetNode(partitionKey).Subscriber;
		}

		public override IDictionary<IDatabase, IReadOnlyCollection<string>> GetDatabases(IReadOnlyCollection<string> partitionKeys)
		{
			if (partitionKeys == null || partitionKeys.Any((string pk) => pk == null))
			{
				throw new ArgumentNullException("partitionKeys");
			}
			return ConsistentHashConnectionWrapperBase.GetDatabasesByConsistentHashingAlgorithm(partitionKeys, _NodeProvider);
		}

		public override IReadOnlyCollection<IDatabase> GetAllDatabases()
		{
			return _Pools.Select((RedisConnectionMultiplexerPool p) => p.GetConnectionMultiplexer().GetDatabase(-1, (object)null)).ToList();
		}

		public override IReadOnlyCollection<ISubscriber> GetAllSubscribers()
		{
			return _Pools.Select((RedisConnectionMultiplexerPool p) => p.Subscriber).ToList();
		}

		public override IReadOnlyCollection<IServer> GetAllServers()
		{
			return _Pools.Select((RedisConnectionMultiplexerPool p) => RedisClientBase<RedisPooledClientOptions>.GetServerFromMultiplexer(p.GetConnectionMultiplexer())).ToList();
		}

		public override void Refresh(string[] redisEndpoints)
		{
			ChangePools(redisEndpoints);
			OnRefreshed();
		}

		public override void Close()
		{
			Parallel.ForEach(_Pools, _ParallelOptions, delegate(RedisConnectionMultiplexerPool p)
			{
				p.Close();
			});
		}

		private void ChangePools(string[] redisEndpoints)
		{
			RedisConnectionMultiplexerPool[] array = _Pools ?? Array.Empty<RedisConnectionMultiplexerPool>();
			RedisConnectionMultiplexerPool[] keepingOldPools = array.Where((RedisConnectionMultiplexerPool op) => redisEndpoints.Contains(_003CChangePools_003Eg__GetMultiplexerDescriptor_007C16_0(op.PrimaryConnection))).ToArray();
			IEnumerable<RedisConnectionMultiplexerPool> enumerable = array.Except(keepingOldPools);
			Task<RedisConnectionMultiplexerPool>[] array2 = (from endpoint in redisEndpoints
				where keepingOldPools.All((RedisConnectionMultiplexerPool kop) => kop.PrimaryConnection.GetEndPoints(false)[0].ToString() != endpoint)
				select CreatePoolAsync(endpoint, base.RedisClientOptions)).ToArray();
			Task[] tasks = array2;
			Task.WaitAll(tasks);
			_Pools = keepingOldPools.Concat(array2.Select((Task<RedisConnectionMultiplexerPool> t) => t.Result)).ToArray();
			List<RedisConnectionMultiplexerPoolWrapper> nodes = _Pools.Select((RedisConnectionMultiplexerPool p) => new RedisConnectionMultiplexerPoolWrapper(p, p.BaseConfiguration)).ToList();
			ConsistentHash<ConsistentHashConnectionWrapperBase> consistentHash = new ConsistentHash<ConsistentHashConnectionWrapperBase>();
			consistentHash.Init(nodes);
			Interlocked.Exchange(ref _NodeProvider, consistentHash);
			foreach (RedisConnectionMultiplexerPool item in enumerable)
			{
				item.Dispose();
			}
		}

		[AsyncStateMachine(typeof(_003CCreatePoolAsync_003Ed__17))]
		private Task<RedisConnectionMultiplexerPool> CreatePoolAsync(string redisEndpoint, RedisPooledClientOptions clientOptions)
		{
			_003CCreatePoolAsync_003Ed__17 stateMachine = default(_003CCreatePoolAsync_003Ed__17);
			stateMachine._003C_003E4__this = this;
			stateMachine.redisEndpoint = redisEndpoint;
			stateMachine.clientOptions = clientOptions;
			stateMachine._003C_003Et__builder = AsyncTaskMethodBuilder<RedisConnectionMultiplexerPool>.Create();
			stateMachine._003C_003E1__state = -1;
			AsyncTaskMethodBuilder<RedisConnectionMultiplexerPool> asyncTaskMethodBuilder = stateMachine._003C_003Et__builder;
			asyncTaskMethodBuilder.Start(ref stateMachine);
			return stateMachine._003C_003Et__builder.Task;
		}

		[CompilerGenerated]
		internal static string _003CChangePools_003Eg__GetMultiplexerDescriptor_007C16_0(IConnectionMultiplexer cm)
		{
			return cm.GetEndPoints(false)[0].ToString();
		}
	}
}
