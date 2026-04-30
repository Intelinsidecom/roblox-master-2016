using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using System.Threading;
using System.Threading.Tasks;
using StackExchange.Redis;

namespace Roblox.Redis
{
	internal class RedisConnectionMultiplexerWatcher
	{
		[CompilerGenerated]
		private sealed class _003C_003Ec__DisplayClass17_0
		{
			[StructLayout(LayoutKind.Auto)]
			private struct _003C_003COnConnectionFailed_003Eb__0_003Ed : IAsyncStateMachine
			{
				public int _003C_003E1__state;

				public AsyncTaskMethodBuilder _003C_003Et__builder;

				public _003C_003Ec__DisplayClass17_0 _003C_003E4__this;

				private ConfiguredTaskAwaitable.ConfiguredTaskAwaiter _003C_003Eu__1;

				private void MoveNext()
				{
					int num = _003C_003E1__state;
					_003C_003Ec__DisplayClass17_0 _003C_003Ec__DisplayClass17_ = _003C_003E4__this;
					try
					{
						int num2 = 1;
						try
						{
							ConfiguredTaskAwaitable.ConfiguredTaskAwaiter awaiter;
							if (num != 0)
							{
								if (num == 1)
								{
									awaiter = _003C_003Eu__1;
									_003C_003Eu__1 = default(ConfiguredTaskAwaitable.ConfiguredTaskAwaiter);
									num = (_003C_003E1__state = -1);
									goto IL_0105;
								}
								awaiter = Task.Delay(_003C_003Ec__DisplayClass17_._003C_003E4__this._ClientOptions.MaxReconnectTimeout, _003C_003Ec__DisplayClass17_.tokenSource.Token).ConfigureAwait(false).GetAwaiter();
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
							awaiter = _003C_003Ec__DisplayClass17_._003C_003E4__this.RefreshConnection(_003C_003Ec__DisplayClass17_._003C_003E4__this.Connection).ConfigureAwait(false).GetAwaiter();
							if (!awaiter.IsCompleted)
							{
								num = (_003C_003E1__state = 1);
								_003C_003Eu__1 = awaiter;
								_003C_003Et__builder.AwaitUnsafeOnCompleted(ref awaiter, ref this);
								return;
							}
							goto IL_0105;
							IL_0105:
							awaiter.GetResult();
						}
						catch (TaskCanceledException)
						{
						}
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

			public CancellationTokenSource tokenSource;

			public RedisConnectionMultiplexerWatcher _003C_003E4__this;

			[AsyncStateMachine(typeof(_003C_003COnConnectionFailed_003Eb__0_003Ed))]
			internal Task _003COnConnectionFailed_003Eb__0()
			{
				_003C_003COnConnectionFailed_003Eb__0_003Ed stateMachine = default(_003C_003COnConnectionFailed_003Eb__0_003Ed);
				stateMachine._003C_003E4__this = this;
				stateMachine._003C_003Et__builder = AsyncTaskMethodBuilder.Create();
				stateMachine._003C_003E1__state = -1;
				AsyncTaskMethodBuilder asyncTaskMethodBuilder = stateMachine._003C_003Et__builder;
				asyncTaskMethodBuilder.Start(ref stateMachine);
				return stateMachine._003C_003Et__builder.Task;
			}
		}

		[StructLayout(LayoutKind.Auto)]
		[CompilerGenerated]
		private struct _003CRefreshConnection_003Ed__18 : IAsyncStateMachine
		{
			public int _003C_003E1__state;

			public AsyncTaskMethodBuilder _003C_003Et__builder;

			public RedisConnectionMultiplexerWatcher _003C_003E4__this;

			public IConnectionMultiplexer oldConnection;

			private ConfiguredTaskAwaitable<IConnectionMultiplexer>.ConfiguredTaskAwaiter _003C_003Eu__1;

			private void MoveNext()
			{
				int num = _003C_003E1__state;
				RedisConnectionMultiplexerWatcher redisConnectionMultiplexerWatcher = _003C_003E4__this;
				try
				{
					ConfiguredTaskAwaitable<IConnectionMultiplexer>.ConfiguredTaskAwaiter awaiter;
					if (num == 0)
					{
						awaiter = _003C_003Eu__1;
						_003C_003Eu__1 = default(ConfiguredTaskAwaitable<IConnectionMultiplexer>.ConfiguredTaskAwaiter);
						num = (_003C_003E1__state = -1);
						goto IL_0147;
					}
					object tokenSync = redisConnectionMultiplexerWatcher._TokenSync;
					bool lockTaken = false;
					try
					{
						Monitor.Enter(tokenSync, ref lockTaken);
						if (redisConnectionMultiplexerWatcher.Connection == oldConnection)
						{
							redisConnectionMultiplexerWatcher._LastRefreshed = new WeakReference<IConnectionMultiplexer>(oldConnection);
							oldConnection.ConnectionFailed -= redisConnectionMultiplexerWatcher.OnConnectionFailed;
							oldConnection.ConnectionRestored -= redisConnectionMultiplexerWatcher.OnConnectionRestored;
							Dictionary<ConnectionType, CancellationTokenSource>.Enumerator enumerator = redisConnectionMultiplexerWatcher._TokenSources.GetEnumerator();
							try
							{
								while (enumerator.MoveNext())
								{
									CancellationTokenSource value = enumerator.Current.Value;
									value.Cancel();
									value.Dispose();
								}
							}
							finally
							{
								if (num < 0)
								{
									((IDisposable)enumerator/*cast due to .constrained prefix*/).Dispose();
								}
							}
							redisConnectionMultiplexerWatcher._TokenSources.Clear();
							goto IL_00db;
						}
					}
					finally
					{
						if (num < 0 && lockTaken)
						{
							Monitor.Exit(tokenSync);
						}
					}
					goto end_IL_000e;
					IL_0147:
					IConnectionMultiplexer result = awaiter.GetResult();
					result.ConnectionFailed += redisConnectionMultiplexerWatcher.OnConnectionFailed;
					result.ConnectionRestored += redisConnectionMultiplexerWatcher.OnConnectionRestored;
					redisConnectionMultiplexerWatcher.Connection = result;
					oldConnection.Dispose();
					goto end_IL_000e;
					IL_00db:
					awaiter = redisConnectionMultiplexerWatcher._ConnectionBuilder.CreateConnectionMultiplexerAsync(redisConnectionMultiplexerWatcher._ConnectionConfiguration).ConfigureAwait(false).GetAwaiter();
					if (!awaiter.IsCompleted)
					{
						num = (_003C_003E1__state = 0);
						_003C_003Eu__1 = awaiter;
						_003C_003Et__builder.AwaitUnsafeOnCompleted(ref awaiter, ref this);
						return;
					}
					goto IL_0147;
					end_IL_000e:;
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

		private Dictionary<ConnectionType, CancellationTokenSource> _TokenSources = new Dictionary<ConnectionType, CancellationTokenSource>();

		private readonly object _TokenSync = new object();

		private readonly IConnectionBuilder _ConnectionBuilder;

		private readonly ConfigurationOptions _ConnectionConfiguration;

		private readonly RedisPooledClientOptions _ClientOptions;

		private WeakReference<IConnectionMultiplexer> _LastRefreshed;

		public IConnectionMultiplexer Connection { get; private set; }

		public event EventHandler<ConnectionFailedEventArgs> ConnectionFailed;

		public RedisConnectionMultiplexerWatcher(IConnectionMultiplexer connection, IConnectionBuilder connectionBuilder, ConfigurationOptions connectionConfiguration, RedisPooledClientOptions clientOptions)
		{
			if (connection == null)
			{
				throw new ArgumentNullException("connection");
			}
			Connection = connection;
			if (connectionBuilder == null)
			{
				throw new ArgumentNullException("connectionBuilder");
			}
			_ConnectionBuilder = connectionBuilder;
			if (connectionConfiguration == null)
			{
				throw new ArgumentNullException("connectionConfiguration");
			}
			_ConnectionConfiguration = connectionConfiguration;
			if (clientOptions == null)
			{
				throw new ArgumentNullException("clientOptions");
			}
			_ClientOptions = clientOptions;
			connection.ConnectionFailed += OnConnectionFailed;
			connection.ConnectionRestored += OnConnectionRestored;
		}

		public void Dispose()
		{
			lock (_TokenSync)
			{
				Connection.Dispose();
				foreach (KeyValuePair<ConnectionType, CancellationTokenSource> tokenSource in _TokenSources)
				{
					CancellationTokenSource value = tokenSource.Value;
					value.Cancel();
					value.Dispose();
				}
				_TokenSources.Clear();
			}
		}

		public void Close()
		{
			lock (_TokenSync)
			{
				Connection.Close(false);
				foreach (KeyValuePair<ConnectionType, CancellationTokenSource> tokenSource in _TokenSources)
				{
					CancellationTokenSource value = tokenSource.Value;
					value.Cancel();
					value.Dispose();
				}
				_TokenSources.Clear();
			}
		}

		private void OnConnectionRestored(object sender, ConnectionFailedEventArgs args)
		{
			//IL_0043: Unknown result type (might be due to invalid IL or missing references)
			//IL_0058: Unknown result type (might be due to invalid IL or missing references)
			//IL_006a: Unknown result type (might be due to invalid IL or missing references)
			if (_ClientOptions.MaxReconnectTimeout <= 0)
			{
				return;
			}
			lock (_TokenSync)
			{
				IConnectionMultiplexer target;
				CancellationTokenSource value;
				if ((_LastRefreshed == null || !_LastRefreshed.TryGetTarget(out target) || sender != target) && _TokenSources.TryGetValue(args.ConnectionType, out value))
				{
					value = _TokenSources[args.ConnectionType];
					_TokenSources.Remove(args.ConnectionType);
					value.Cancel();
					value.Dispose();
				}
			}
		}

		private void OnConnectionFailed(object sender, ConnectionFailedEventArgs args)
		{
			//IL_0046: Unknown result type (might be due to invalid IL or missing references)
			//IL_0083: Unknown result type (might be due to invalid IL or missing references)
			if (_ClientOptions.MaxReconnectTimeout > 0)
			{
				lock (_TokenSync)
				{
					IConnectionMultiplexer target;
					if (_LastRefreshed != null && _LastRefreshed.TryGetTarget(out target) && sender == target)
					{
						return;
					}
					if (!_TokenSources.ContainsKey(args.ConnectionType))
					{
						_003C_003Ec__DisplayClass17_0 CS_0024_003C_003E8__locals4 = new _003C_003Ec__DisplayClass17_0();
						CS_0024_003C_003E8__locals4._003C_003E4__this = this;
						CS_0024_003C_003E8__locals4.tokenSource = new CancellationTokenSource();
						Task.Run(() => CS_0024_003C_003E8__locals4._003COnConnectionFailed_003Eb__0());
						_TokenSources.Add(args.ConnectionType, CS_0024_003C_003E8__locals4.tokenSource);
					}
				}
			}
			EventHandler<ConnectionFailedEventArgs> eventHandler = this.ConnectionFailed;
			if (eventHandler != null)
			{
				eventHandler(sender, args);
			}
		}

		[AsyncStateMachine(typeof(_003CRefreshConnection_003Ed__18))]
		private Task RefreshConnection(IConnectionMultiplexer oldConnection)
		{
			_003CRefreshConnection_003Ed__18 stateMachine = default(_003CRefreshConnection_003Ed__18);
			stateMachine._003C_003E4__this = this;
			stateMachine.oldConnection = oldConnection;
			stateMachine._003C_003Et__builder = AsyncTaskMethodBuilder.Create();
			stateMachine._003C_003E1__state = -1;
			AsyncTaskMethodBuilder asyncTaskMethodBuilder = stateMachine._003C_003Et__builder;
			asyncTaskMethodBuilder.Start(ref stateMachine);
			return stateMachine._003C_003Et__builder.Task;
		}
	}
}
