using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using System.Threading;
using System.Threading.Tasks;

namespace Roblox.Mssql
{
	public class MonitoredDatabase : Database
	{
		[StructLayout(LayoutKind.Auto)]
		[CompilerGenerated]
		private struct _003CStartMonitoringAsync_003Ed__10 : IAsyncStateMachine
		{
			public int _003C_003E1__state;

			public AsyncTaskMethodBuilder _003C_003Et__builder;

			public MonitoredDatabase _003C_003E4__this;

			public CancellationToken cancellationToken;

			private ConfiguredTaskAwaitable.ConfiguredTaskAwaiter _003C_003Eu__1;

			private void MoveNext()
			{
				int num = _003C_003E1__state;
				MonitoredDatabase monitoredDatabase = _003C_003E4__this;
				try
				{
					if (num == 0)
					{
						goto IL_0038;
					}
					if (monitoredDatabase._IsDisposed)
					{
						throw new ObjectDisposedException(monitoredDatabase.GetType().ToString());
					}
					if (!monitoredDatabase._IsMonitoring)
					{
						goto IL_0038;
					}
					goto end_IL_000e;
					IL_0038:
					try
					{
						ConfiguredTaskAwaitable.ConfiguredTaskAwaiter awaiter;
						if (num != 0)
						{
							awaiter = monitoredDatabase._Semaphore.WaitAsync(cancellationToken).ConfigureAwait(false).GetAwaiter();
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
						if (!monitoredDatabase._IsMonitoring)
						{
							monitoredDatabase._IsMonitoring = true;
							goto IL_00ce;
						}
					}
					finally
					{
						if (num < 0)
						{
							monitoredDatabase._Semaphore.Release();
						}
					}
					goto end_IL_000e;
					IL_00ce:
					monitoredDatabase._DatabaseObserver = monitoredDatabase._DatabaseObserverBuilder(monitoredDatabase);
					monitoredDatabase._DatabaseObserver.Register();
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

		[StructLayout(LayoutKind.Auto)]
		[CompilerGenerated]
		private struct _003CStopMonitoringAsync_003Ed__12 : IAsyncStateMachine
		{
			public int _003C_003E1__state;

			public AsyncTaskMethodBuilder _003C_003Et__builder;

			public MonitoredDatabase _003C_003E4__this;

			public CancellationToken cancellationToken;

			private ConfiguredTaskAwaitable.ConfiguredTaskAwaiter _003C_003Eu__1;

			private void MoveNext()
			{
				int num = _003C_003E1__state;
				MonitoredDatabase monitoredDatabase = _003C_003E4__this;
				try
				{
					if (num == 0 || monitoredDatabase._IsMonitoring)
					{
						try
						{
							ConfiguredTaskAwaitable.ConfiguredTaskAwaiter awaiter;
							if (num != 0)
							{
								awaiter = monitoredDatabase._Semaphore.WaitAsync(cancellationToken).ConfigureAwait(false).GetAwaiter();
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
							if (monitoredDatabase._IsMonitoring)
							{
								monitoredDatabase._IsMonitoring = false;
								goto IL_00b5;
							}
						}
						finally
						{
							if (num < 0)
							{
								monitoredDatabase._Semaphore.Release();
							}
						}
					}
					goto end_IL_000e;
					IL_00b5:
					monitoredDatabase._DatabaseObserver.Dispose();
					monitoredDatabase._DatabaseObserver = null;
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

		private readonly Func<IDatabase, IDatabaseObserver> _DatabaseObserverBuilder;

		private bool _IsDisposed;

		private bool _IsMonitoring;

		private IDatabaseObserver _DatabaseObserver;

		private SemaphoreSlim _Semaphore = new SemaphoreSlim(1, 1);

		public MonitoredDatabase(string name, Func<string> connectionStringGetter, Func<TimeSpan> commandTimeoutGetter, Func<IDatabase, IDatabaseObserver> databaseObserverBuilder)
			: base(name, connectionStringGetter, commandTimeoutGetter)
		{
			if (databaseObserverBuilder == null)
			{
				throw new ArgumentNullException("databaseObserverBuilder");
			}
			_DatabaseObserverBuilder = databaseObserverBuilder;
		}

		protected override void Dispose(bool disposing)
		{
			if (_IsDisposed)
			{
				return;
			}
			if (disposing)
			{
				StopMonitoring();
				if (_Semaphore != null)
				{
					_Semaphore.Dispose();
					_Semaphore = null;
				}
			}
			_IsDisposed = true;
		}

		protected override void OnExecutionStarting()
		{
			StartMonitoring();
		}

		protected override Task OnExecutionStartingAsync(CancellationToken cancellationToken = default(CancellationToken))
		{
			return StartMonitoringAsync(cancellationToken);
		}

		public void StartMonitoring()
		{
			if (_IsDisposed)
			{
				throw new ObjectDisposedException(GetType().ToString());
			}
			if (_IsMonitoring)
			{
				return;
			}
			try
			{
				_Semaphore.Wait();
				if (_IsMonitoring)
				{
					return;
				}
				_IsMonitoring = true;
			}
			finally
			{
				_Semaphore.Release();
			}
			_DatabaseObserver = _DatabaseObserverBuilder(this);
			_DatabaseObserver.Register();
		}

		[AsyncStateMachine(typeof(_003CStartMonitoringAsync_003Ed__10))]
		public Task StartMonitoringAsync(CancellationToken cancellationToken = default(CancellationToken))
		{
			_003CStartMonitoringAsync_003Ed__10 stateMachine = default(_003CStartMonitoringAsync_003Ed__10);
			stateMachine._003C_003E4__this = this;
			stateMachine.cancellationToken = cancellationToken;
			stateMachine._003C_003Et__builder = AsyncTaskMethodBuilder.Create();
			stateMachine._003C_003E1__state = -1;
			AsyncTaskMethodBuilder asyncTaskMethodBuilder = stateMachine._003C_003Et__builder;
			asyncTaskMethodBuilder.Start(ref stateMachine);
			return stateMachine._003C_003Et__builder.Task;
		}

		public void StopMonitoring()
		{
			if (!_IsMonitoring)
			{
				return;
			}
			try
			{
				_Semaphore.Wait();
				if (!_IsMonitoring)
				{
					return;
				}
				_IsMonitoring = false;
			}
			finally
			{
				_Semaphore.Release();
			}
			_DatabaseObserver.Dispose();
			_DatabaseObserver = null;
		}

		[AsyncStateMachine(typeof(_003CStopMonitoringAsync_003Ed__12))]
		public Task StopMonitoringAsync(CancellationToken cancellationToken = default(CancellationToken))
		{
			_003CStopMonitoringAsync_003Ed__12 stateMachine = default(_003CStopMonitoringAsync_003Ed__12);
			stateMachine._003C_003E4__this = this;
			stateMachine.cancellationToken = cancellationToken;
			stateMachine._003C_003Et__builder = AsyncTaskMethodBuilder.Create();
			stateMachine._003C_003E1__state = -1;
			AsyncTaskMethodBuilder asyncTaskMethodBuilder = stateMachine._003C_003Et__builder;
			asyncTaskMethodBuilder.Start(ref stateMachine);
			return stateMachine._003C_003Et__builder.Task;
		}
	}
}
