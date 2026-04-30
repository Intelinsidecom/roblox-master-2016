using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using System.Threading;
using System.Threading.Tasks;
using StackExchange.Redis;

namespace Roblox.Redis
{
	internal class RedisConnectionMultiplexerPool
	{
		[StructLayout(LayoutKind.Auto)]
		[CompilerGenerated]
		private struct _003CConnectAsync_003Ed__20 : IAsyncStateMachine
		{
			public int _003C_003E1__state;

			public AsyncTaskMethodBuilder _003C_003Et__builder;

			public RedisConnectionMultiplexerPool _003C_003E4__this;

			private ConfiguredTaskAwaitable<IConnectionMultiplexer[]>.ConfiguredTaskAwaiter _003C_003Eu__1;

			private void MoveNext()
			{
				int num = _003C_003E1__state;
				RedisConnectionMultiplexerPool redisConnectionMultiplexerPool = _003C_003E4__this;
				try
				{
					ConfiguredTaskAwaitable<IConnectionMultiplexer[]>.ConfiguredTaskAwaiter awaiter;
					if (num != 0)
					{
						Task<IConnectionMultiplexer>[] array = new Task<IConnectionMultiplexer>[redisConnectionMultiplexerPool.ClientOptions.PoolSize];
						for (int i = 0; i < redisConnectionMultiplexerPool.ClientOptions.PoolSize; i++)
						{
							array[i] = redisConnectionMultiplexerPool._ConnectionBuilder.CreateConnectionMultiplexerAsync(redisConnectionMultiplexerPool.BaseConfiguration);
						}
						awaiter = Task.WhenAll(array).ConfigureAwait(false).GetAwaiter();
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
						_003C_003Eu__1 = default(ConfiguredTaskAwaitable<IConnectionMultiplexer[]>.ConfiguredTaskAwaiter);
						num = (_003C_003E1__state = -1);
					}
					IConnectionMultiplexer[] result = awaiter.GetResult();
					RedisConnectionMultiplexerWatcher[] array2 = new RedisConnectionMultiplexerWatcher[result.Length];
					for (int j = 0; j < result.Length; j++)
					{
						array2[j] = new RedisConnectionMultiplexerWatcher(result[j], redisConnectionMultiplexerPool._ConnectionBuilder, redisConnectionMultiplexerPool.BaseConfiguration, redisConnectionMultiplexerPool.ClientOptions);
					}
					redisConnectionMultiplexerPool._ConnectionWatchers = array2;
				}
				catch (Exception exception)
				{
					_003C_003E1__state = -2;
					_003C_003Et__builder.SetException(exception);
					return;
				}
				_003C_003E1__state = -2;
				_003C_003Et__builder.SetResult();
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

		private RedisConnectionMultiplexerWatcher[] _ConnectionWatchers;

		private int _RoundRobinIndex;

		private readonly IConnectionBuilder _ConnectionBuilder;

		private readonly ParallelOptions _ParallelOptions = new ParallelOptions
		{
			MaxDegreeOfParallelism = 10
		};

		[CompilerGenerated]
		private readonly ConfigurationOptions _003CBaseConfiguration_003Ek__BackingField;

		[CompilerGenerated]
		private readonly RedisPooledClientOptions _003CClientOptions_003Ek__BackingField;

		public ConfigurationOptions BaseConfiguration
		{
			[CompilerGenerated]
			get
			{
				return _003CBaseConfiguration_003Ek__BackingField;
			}
		}

		public RedisPooledClientOptions ClientOptions
		{
			[CompilerGenerated]
			get
			{
				return _003CClientOptions_003Ek__BackingField;
			}
		}

		public IConnectionMultiplexer PrimaryConnection
		{
			get
			{
				CheckIfReady();
				return _ConnectionWatchers[0].Connection;
			}
		}

		public int Size
		{
			get
			{
				CheckIfReady();
				return _ConnectionWatchers.Length;
			}
		}

		public ISubscriber Subscriber
		{
			get
			{
				return PrimaryConnection.GetSubscriber((object)null);
			}
		}

		public RedisConnectionMultiplexerPool(ConfigurationOptions baseConfiguration, RedisPooledClientOptions clientOptions)
		{
			if (baseConfiguration == null)
			{
				throw new ArgumentNullException("baseConfiguration");
			}
			_003CBaseConfiguration_003Ek__BackingField = baseConfiguration;
			if (clientOptions == null)
			{
				throw new ArgumentNullException("clientOptions");
			}
			_003CClientOptions_003Ek__BackingField = clientOptions;
			_ConnectionBuilder = clientOptions.ConnectionBuilder ?? new DefaultConnectionBuilder();
			if (clientOptions.ReconnectRetryPolicy != null)
			{
				BaseConfiguration.ReconnectRetryPolicy = clientOptions.ReconnectRetryPolicy;
			}
			_RoundRobinIndex = -1;
		}

		public IConnectionMultiplexer GetConnectionMultiplexer()
		{
			CheckIfReady();
			int num = Interlocked.Increment(ref _RoundRobinIndex);
			if (num < 0)
			{
				num -= int.MinValue;
			}
			num %= _ConnectionWatchers.Length;
			return _ConnectionWatchers[num].Connection;
		}

		public void Close()
		{
			CheckIfReady();
			Parallel.ForEach(_ConnectionWatchers, _ParallelOptions, delegate(RedisConnectionMultiplexerWatcher w)
			{
				w.Close();
			});
		}

		public void Dispose()
		{
			CheckIfReady();
			Parallel.ForEach(_ConnectionWatchers, _ParallelOptions, delegate(RedisConnectionMultiplexerWatcher w)
			{
				w.Dispose();
			});
		}

		[AsyncStateMachine(typeof(_003CConnectAsync_003Ed__20))]
		public Task ConnectAsync()
		{
			_003CConnectAsync_003Ed__20 stateMachine = default(_003CConnectAsync_003Ed__20);
			stateMachine._003C_003E4__this = this;
			stateMachine._003C_003Et__builder = AsyncTaskMethodBuilder.Create();
			stateMachine._003C_003E1__state = -1;
			AsyncTaskMethodBuilder asyncTaskMethodBuilder = stateMachine._003C_003Et__builder;
			asyncTaskMethodBuilder.Start(ref stateMachine);
			return stateMachine._003C_003Et__builder.Task;
		}

		private void CheckIfReady()
		{
			if (_ConnectionWatchers == null || _ConnectionWatchers.Length == 0)
			{
				throw new InvalidOperationException("The pool is not ready");
			}
		}
	}
}
