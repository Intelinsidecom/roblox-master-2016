using System;
using System.Diagnostics;
using System.IO;
using System.Net;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using System.Threading;
using System.Threading.Tasks;
using StackExchange.Redis;

namespace Roblox.Redis
{
	public class SwitchingConnectionBuilder : IConnectionBuilder
	{
		private class SwitchingConnectionMultiplexer : IConnectionMultiplexer
		{
			[StructLayout(LayoutKind.Auto)]
			[CompilerGenerated]
			private struct _003CSetSwitch_003Ed__46 : IAsyncStateMachine
			{
				public int _003C_003E1__state;

				public AsyncVoidMethodBuilder _003C_003Et__builder;

				public SwitchingConnectionMultiplexer _003C_003E4__this;

				public bool useSecond;

				private IConnectionMultiplexer _003ColdConnectionMultiplexer_003E5__2;

				private ConfiguredTaskAwaitable<IConnectionMultiplexer>.ConfiguredTaskAwaiter _003C_003Eu__1;

				private ConfiguredTaskAwaitable.ConfiguredTaskAwaiter _003C_003Eu__2;

				private void MoveNext()
				{
					int num = _003C_003E1__state;
					SwitchingConnectionMultiplexer switchingConnectionMultiplexer = _003C_003E4__this;
					try
					{
						ConfiguredTaskAwaitable<IConnectionMultiplexer>.ConfiguredTaskAwaiter awaiter;
						if (num == 0)
						{
							awaiter = _003C_003Eu__1;
							_003C_003Eu__1 = default(ConfiguredTaskAwaitable<IConnectionMultiplexer>.ConfiguredTaskAwaiter);
							num = (_003C_003E1__state = -1);
							goto IL_00a9;
						}
						ConfiguredTaskAwaitable.ConfiguredTaskAwaiter awaiter2;
						if (num == 1)
						{
							awaiter2 = _003C_003Eu__2;
							_003C_003Eu__2 = default(ConfiguredTaskAwaitable.ConfiguredTaskAwaiter);
							num = (_003C_003E1__state = -1);
							goto IL_012e;
						}
						if (switchingConnectionMultiplexer._UseSecond != useSecond)
						{
							switchingConnectionMultiplexer._UseSecond = true;
							awaiter = (switchingConnectionMultiplexer._UseSecond ? switchingConnectionMultiplexer._SecondConnectionBuilder : switchingConnectionMultiplexer._FirstConnectionBuilder).CreateConnectionMultiplexerAsync(switchingConnectionMultiplexer._Configuration).ConfigureAwait(false).GetAwaiter();
							if (!awaiter.IsCompleted)
							{
								num = (_003C_003E1__state = 0);
								_003C_003Eu__1 = awaiter;
								_003C_003Et__builder.AwaitUnsafeOnCompleted(ref awaiter, ref this);
								return;
							}
							goto IL_00a9;
						}
						goto end_IL_000e;
						IL_00a9:
						IConnectionMultiplexer result = awaiter.GetResult();
						switchingConnectionMultiplexer.SubscribeToEvents(result);
						_003ColdConnectionMultiplexer_003E5__2 = Interlocked.Exchange(ref switchingConnectionMultiplexer._CurrentConnectionMultiplexer, result);
						awaiter2 = _003ColdConnectionMultiplexer_003E5__2.CloseAsync(true).ConfigureAwait(false).GetAwaiter();
						if (!awaiter2.IsCompleted)
						{
							num = (_003C_003E1__state = 1);
							_003C_003Eu__2 = awaiter2;
							_003C_003Et__builder.AwaitUnsafeOnCompleted(ref awaiter2, ref this);
							return;
						}
						goto IL_012e;
						IL_012e:
						awaiter2.GetResult();
						switchingConnectionMultiplexer.UnsubscribeFromEvents(_003ColdConnectionMultiplexer_003E5__2);
						_003ColdConnectionMultiplexer_003E5__2 = null;
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

			private bool _UseSecond;

			private IConnectionMultiplexer _CurrentConnectionMultiplexer;

			private readonly IConnectionBuilder _FirstConnectionBuilder;

			private readonly IConnectionBuilder _SecondConnectionBuilder;

			private readonly ConfigurationOptions _Configuration;

			public string ClientName
			{
				get
				{
					return _CurrentConnectionMultiplexer.ClientName;
				}
			}

			public string Configuration
			{
				get
				{
					return _CurrentConnectionMultiplexer.Configuration;
				}
			}

			public int TimeoutMilliseconds
			{
				get
				{
					return _CurrentConnectionMultiplexer.TimeoutMilliseconds;
				}
			}

			public long OperationCount
			{
				get
				{
					return _CurrentConnectionMultiplexer.OperationCount;
				}
			}

			public bool PreserveAsyncOrder
			{
				get
				{
					return _CurrentConnectionMultiplexer.PreserveAsyncOrder;
				}
				set
				{
					_CurrentConnectionMultiplexer.PreserveAsyncOrder = value;
				}
			}

			public bool IsConnected
			{
				get
				{
					return _CurrentConnectionMultiplexer.IsConnected;
				}
			}

			public bool IncludeDetailInExceptions
			{
				get
				{
					return _CurrentConnectionMultiplexer.IncludeDetailInExceptions;
				}
				set
				{
					_CurrentConnectionMultiplexer.IncludeDetailInExceptions = value;
				}
			}

			public int StormLogThreshold
			{
				get
				{
					return _CurrentConnectionMultiplexer.StormLogThreshold;
				}
				set
				{
					_CurrentConnectionMultiplexer.StormLogThreshold = value;
				}
			}

			public event EventHandler<RedisErrorEventArgs> ErrorMessage;

			public event EventHandler<ConnectionFailedEventArgs> ConnectionFailed;

			public event EventHandler<InternalErrorEventArgs> InternalError;

			public event EventHandler<ConnectionFailedEventArgs> ConnectionRestored;

			public event EventHandler<EndPointEventArgs> ConfigurationChanged;

			public event EventHandler<EndPointEventArgs> ConfigurationChangedBroadcast;

			public event EventHandler<HashSlotMovedEventArgs> HashSlotMoved;

			public SwitchingConnectionMultiplexer(IConnectionMultiplexer initialConnectionMultiplexer, IConnectionBuilder firstConnectionMultiplexer, IConnectionBuilder secondConnectionBuilder, bool initialUseSecond, ConfigurationOptions configuration)
			{
				_CurrentConnectionMultiplexer = initialConnectionMultiplexer;
				_FirstConnectionBuilder = firstConnectionMultiplexer;
				_SecondConnectionBuilder = secondConnectionBuilder;
				_UseSecond = initialUseSecond;
				_Configuration = configuration;
				SubscribeToEvents(_CurrentConnectionMultiplexer);
			}

			[AsyncStateMachine(typeof(_003CSetSwitch_003Ed__46))]
			public void SetSwitch(bool useSecond)
			{
				_003CSetSwitch_003Ed__46 stateMachine = default(_003CSetSwitch_003Ed__46);
				stateMachine._003C_003E4__this = this;
				stateMachine.useSecond = useSecond;
				stateMachine._003C_003Et__builder = AsyncVoidMethodBuilder.Create();
				stateMachine._003C_003E1__state = -1;
				AsyncVoidMethodBuilder asyncVoidMethodBuilder = stateMachine._003C_003Et__builder;
				asyncVoidMethodBuilder.Start(ref stateMachine);
			}

			public void RegisterProfiler(IProfiler profiler)
			{
				_CurrentConnectionMultiplexer.RegisterProfiler(profiler);
			}

			public void BeginProfiling(object forContext)
			{
				_CurrentConnectionMultiplexer.BeginProfiling(forContext);
			}

			public ProfiledCommandEnumerable FinishProfiling(object forContext, bool allowCleanupSweep = true)
			{
				//IL_0008: Unknown result type (might be due to invalid IL or missing references)
				return _CurrentConnectionMultiplexer.FinishProfiling(forContext, allowCleanupSweep);
			}

			public ServerCounters GetCounters()
			{
				return _CurrentConnectionMultiplexer.GetCounters();
			}

			public EndPoint[] GetEndPoints(bool configuredOnly = false)
			{
				return _CurrentConnectionMultiplexer.GetEndPoints(configuredOnly);
			}

			public void Wait(Task task)
			{
				_CurrentConnectionMultiplexer.Wait(task);
			}

			public T Wait<T>(Task<T> task)
			{
				return _CurrentConnectionMultiplexer.Wait<T>(task);
			}

			public void WaitAll(params Task[] tasks)
			{
				_CurrentConnectionMultiplexer.WaitAll(tasks);
			}

			public int HashSlot(RedisKey key)
			{
				//IL_0006: Unknown result type (might be due to invalid IL or missing references)
				return _CurrentConnectionMultiplexer.HashSlot(key);
			}

			public ISubscriber GetSubscriber(object asyncState = null)
			{
				return _CurrentConnectionMultiplexer.GetSubscriber(asyncState);
			}

			public IDatabase GetDatabase(int db = -1, object asyncState = null)
			{
				return _CurrentConnectionMultiplexer.GetDatabase(db, asyncState);
			}

			public IServer GetServer(string host, int port, object asyncState = null)
			{
				return _CurrentConnectionMultiplexer.GetServer(host, port, asyncState);
			}

			public IServer GetServer(string hostAndPort, object asyncState = null)
			{
				return _CurrentConnectionMultiplexer.GetServer(hostAndPort, asyncState);
			}

			public IServer GetServer(IPAddress host, int port)
			{
				return _CurrentConnectionMultiplexer.GetServer(host, port);
			}

			public IServer GetServer(EndPoint endpoint, object asyncState = null)
			{
				return _CurrentConnectionMultiplexer.GetServer(endpoint, asyncState);
			}

			public Task<bool> ConfigureAsync(TextWriter log = null)
			{
				return _CurrentConnectionMultiplexer.ConfigureAsync(log);
			}

			public bool Configure(TextWriter log = null)
			{
				return _CurrentConnectionMultiplexer.Configure(log);
			}

			public string GetStatus()
			{
				return _CurrentConnectionMultiplexer.GetStatus();
			}

			public void GetStatus(TextWriter log)
			{
				_CurrentConnectionMultiplexer.GetStatus(log);
			}

			public void Close(bool allowCommandsToComplete = true)
			{
				_CurrentConnectionMultiplexer.Close(allowCommandsToComplete);
			}

			public Task CloseAsync(bool allowCommandsToComplete = true)
			{
				return _CurrentConnectionMultiplexer.CloseAsync(allowCommandsToComplete);
			}

			public void Dispose()
			{
				_CurrentConnectionMultiplexer.Dispose();
			}

			public string GetStormLog()
			{
				return _CurrentConnectionMultiplexer.GetStormLog();
			}

			public void ResetStormLog()
			{
				_CurrentConnectionMultiplexer.ResetStormLog();
			}

			public long PublishReconfigure(CommandFlags flags = (CommandFlags)0)
			{
				//IL_0006: Unknown result type (might be due to invalid IL or missing references)
				return _CurrentConnectionMultiplexer.PublishReconfigure(flags);
			}

			public Task<long> PublishReconfigureAsync(CommandFlags flags = (CommandFlags)0)
			{
				//IL_0006: Unknown result type (might be due to invalid IL or missing references)
				return _CurrentConnectionMultiplexer.PublishReconfigureAsync(flags);
			}

			private void SubscribeToEvents(IConnectionMultiplexer cm)
			{
				cm.ErrorMessage += OnErrorMessage;
				cm.ConfigurationChanged += OnConfigurationChanged;
				cm.ConfigurationChangedBroadcast += OnConfigurationChangedBroadcast;
				cm.ConnectionFailed += OnConnectionFailed;
				cm.ConnectionRestored += OnConnectionRestored;
				cm.HashSlotMoved += OnHashSlotMoved;
				cm.InternalError += OnInternalError;
			}

			private void UnsubscribeFromEvents(IConnectionMultiplexer cm)
			{
				cm.ErrorMessage -= OnErrorMessage;
				cm.ConfigurationChanged -= OnConfigurationChanged;
				cm.ConfigurationChangedBroadcast -= OnConfigurationChangedBroadcast;
				cm.ConnectionFailed -= OnConnectionFailed;
				cm.ConnectionRestored -= OnConnectionRestored;
				cm.HashSlotMoved -= OnHashSlotMoved;
				cm.InternalError -= OnInternalError;
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
		}

		[StructLayout(LayoutKind.Auto)]
		[CompilerGenerated]
		private struct _003CCreateConnectionMultiplexerAsync_003Ed__8 : IAsyncStateMachine
		{
			public int _003C_003E1__state;

			public AsyncTaskMethodBuilder<IConnectionMultiplexer> _003C_003Et__builder;

			public SwitchingConnectionBuilder _003C_003E4__this;

			public ConfigurationOptions configuration;

			private bool _003CuseSecond_003E5__2;

			private ConfiguredTaskAwaitable<IConnectionMultiplexer>.ConfiguredTaskAwaiter _003C_003Eu__1;

			private void MoveNext()
			{
				int num = _003C_003E1__state;
				SwitchingConnectionBuilder switchingConnectionBuilder = _003C_003E4__this;
				IConnectionMultiplexer result2;
				try
				{
					ConfiguredTaskAwaitable<IConnectionMultiplexer>.ConfiguredTaskAwaiter awaiter;
					IConnectionMultiplexer result;
					if (num != 0)
					{
						if (num != 1)
						{
							_003CuseSecond_003E5__2 = switchingConnectionBuilder._UseSecond;
							if (_003CuseSecond_003E5__2)
							{
								awaiter = switchingConnectionBuilder._SecondConnectionBuilder.CreateConnectionMultiplexerAsync(configuration).ConfigureAwait(false).GetAwaiter();
								if (!awaiter.IsCompleted)
								{
									num = (_003C_003E1__state = 0);
									_003C_003Eu__1 = awaiter;
									_003C_003Et__builder.AwaitUnsafeOnCompleted(ref awaiter, ref this);
									return;
								}
								goto IL_0098;
							}
							awaiter = switchingConnectionBuilder._FirstConnectionBuilder.CreateConnectionMultiplexerAsync(configuration).ConfigureAwait(false).GetAwaiter();
							if (!awaiter.IsCompleted)
							{
								num = (_003C_003E1__state = 1);
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
						result = awaiter.GetResult();
						goto IL_0118;
					}
					awaiter = _003C_003Eu__1;
					_003C_003Eu__1 = default(ConfiguredTaskAwaitable<IConnectionMultiplexer>.ConfiguredTaskAwaiter);
					num = (_003C_003E1__state = -1);
					goto IL_0098;
					IL_0098:
					result = awaiter.GetResult();
					goto IL_0118;
					IL_0118:
					SwitchingConnectionMultiplexer switchingConnectionMultiplexer = new SwitchingConnectionMultiplexer(result, switchingConnectionBuilder._FirstConnectionBuilder, switchingConnectionBuilder._SecondConnectionBuilder, _003CuseSecond_003E5__2, configuration);
					switchingConnectionBuilder.SwitchSet += switchingConnectionMultiplexer.SetSwitch;
					result2 = (IConnectionMultiplexer)(object)switchingConnectionMultiplexer;
				}
				catch (Exception exception)
				{
					_003C_003E1__state = -2;
					_003C_003Et__builder.SetException(exception);
					return;
				}
				_003C_003E1__state = -2;
				_003C_003Et__builder.SetResult(result2);
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

		private bool _UseSecond;

		private readonly IConnectionBuilder _FirstConnectionBuilder;

		private readonly IConnectionBuilder _SecondConnectionBuilder;

		private event Action<bool> SwitchSet;

		public SwitchingConnectionBuilder(IConnectionBuilder firstConnectionBuilder, IConnectionBuilder secondConnectionBuilder)
		{
			if (firstConnectionBuilder == null)
			{
				throw new ArgumentNullException("firstConnectionBuilder");
			}
			_FirstConnectionBuilder = firstConnectionBuilder;
			if (secondConnectionBuilder == null)
			{
				throw new ArgumentNullException("secondConnectionBuilder");
			}
			_SecondConnectionBuilder = secondConnectionBuilder;
		}

		public void SetSwitch(bool useSecond)
		{
			if (_UseSecond != useSecond)
			{
				_UseSecond = useSecond;
				Action<bool> action = this.SwitchSet;
				if (action != null)
				{
					action(_UseSecond);
				}
			}
		}

		[AsyncStateMachine(typeof(_003CCreateConnectionMultiplexerAsync_003Ed__8))]
		public Task<IConnectionMultiplexer> CreateConnectionMultiplexerAsync(ConfigurationOptions configuration)
		{
			_003CCreateConnectionMultiplexerAsync_003Ed__8 stateMachine = default(_003CCreateConnectionMultiplexerAsync_003Ed__8);
			stateMachine._003C_003E4__this = this;
			stateMachine.configuration = configuration;
			stateMachine._003C_003Et__builder = AsyncTaskMethodBuilder<IConnectionMultiplexer>.Create();
			stateMachine._003C_003E1__state = -1;
			AsyncTaskMethodBuilder<IConnectionMultiplexer> asyncTaskMethodBuilder = stateMachine._003C_003Et__builder;
			asyncTaskMethodBuilder.Start(ref stateMachine);
			return stateMachine._003C_003Et__builder.Task;
		}
	}
}
