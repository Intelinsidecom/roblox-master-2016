using System;
using System.Collections.Concurrent;
using System.Data;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using System.Threading;
using System.Threading.Tasks;
using Roblox.Instrumentation;

namespace Roblox.Mssql
{
	public class DatabaseObserver : IDisposable, IDatabaseObserver
	{
		[StructLayout(LayoutKind.Auto)]
		[CompilerGenerated]
		private struct _003CRegisterAsync_003Ed__11 : IAsyncStateMachine
		{
			public int _003C_003E1__state;

			public AsyncTaskMethodBuilder _003C_003Et__builder;

			public DatabaseObserver _003C_003E4__this;

			public CancellationToken cancellationToken;

			private ConfiguredTaskAwaitable.ConfiguredTaskAwaiter _003C_003Eu__1;

			private void MoveNext()
			{
				int num = _003C_003E1__state;
				DatabaseObserver databaseObserver = _003C_003E4__this;
				try
				{
					if (num == 0)
					{
						goto IL_0038;
					}
					if (databaseObserver._IsDisposed)
					{
						throw new ObjectDisposedException(databaseObserver.GetType().ToString());
					}
					if (!databaseObserver._IsRegistered)
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
							awaiter = databaseObserver._Semaphore.WaitAsync(cancellationToken).ConfigureAwait(false).GetAwaiter();
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
						if (!databaseObserver._IsRegistered)
						{
							databaseObserver._IsRegistered = true;
							goto IL_00cb;
						}
					}
					finally
					{
						if (num < 0)
						{
							databaseObserver._Semaphore.Release();
						}
					}
					goto end_IL_000e;
					IL_00cb:
					databaseObserver.DoRegister();
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
		private struct _003CUnregisterAsync_003Ed__13 : IAsyncStateMachine
		{
			public int _003C_003E1__state;

			public AsyncTaskMethodBuilder _003C_003Et__builder;

			public DatabaseObserver _003C_003E4__this;

			public CancellationToken cancellationToken;

			private ConfiguredTaskAwaitable.ConfiguredTaskAwaiter _003C_003Eu__1;

			private void MoveNext()
			{
				int num = _003C_003E1__state;
				DatabaseObserver databaseObserver = _003C_003E4__this;
				try
				{
					if (num == 0 || databaseObserver._IsRegistered)
					{
						try
						{
							ConfiguredTaskAwaitable.ConfiguredTaskAwaiter awaiter;
							if (num != 0)
							{
								awaiter = databaseObserver._Semaphore.WaitAsync(cancellationToken).ConfigureAwait(false).GetAwaiter();
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
							if (databaseObserver._IsRegistered)
							{
								databaseObserver._IsRegistered = false;
								goto IL_00b2;
							}
						}
						finally
						{
							if (num < 0)
							{
								databaseObserver._Semaphore.Release();
							}
						}
					}
					goto end_IL_000e;
					IL_00b2:
					databaseObserver.DoUnregister();
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

		private readonly IDatabase _Database;

		private readonly ICounterRegistry _CounterRegistry;

		private DatabaseMonitor _DatabaseMonitor;

		private bool _IsDisposed;

		private bool _IsRegistered;

		private ConcurrentDictionary<long, Stopwatch> _RequestTimers;

		private SemaphoreSlim _Semaphore = new SemaphoreSlim(1, 1);

		public DatabaseObserver(IDatabase database, ICounterRegistry counterRegistry)
		{
			if (database == null)
			{
				throw new ArgumentNullException("database");
			}
			_Database = database;
			if (counterRegistry == null)
			{
				throw new ArgumentNullException("counterRegistry");
			}
			_CounterRegistry = counterRegistry;
		}

		~DatabaseObserver()
		{
			Dispose(false);
		}

		protected virtual void Dispose(bool disposing)
		{
			if (_IsDisposed)
			{
				return;
			}
			if (disposing)
			{
				Unregister();
				if (_Semaphore != null)
				{
					_Semaphore.Dispose();
					_Semaphore = null;
				}
			}
			_IsDisposed = true;
		}

		public void Register()
		{
			if (_IsDisposed)
			{
				throw new ObjectDisposedException(GetType().ToString());
			}
			if (_IsRegistered)
			{
				return;
			}
			try
			{
				_Semaphore.Wait();
				if (_IsRegistered)
				{
					return;
				}
				_IsRegistered = true;
			}
			finally
			{
				_Semaphore.Release();
			}
			DoRegister();
		}

		[AsyncStateMachine(typeof(_003CRegisterAsync_003Ed__11))]
		public Task RegisterAsync(CancellationToken cancellationToken = default(CancellationToken))
		{
			_003CRegisterAsync_003Ed__11 stateMachine = default(_003CRegisterAsync_003Ed__11);
			stateMachine._003C_003E4__this = this;
			stateMachine.cancellationToken = cancellationToken;
			stateMachine._003C_003Et__builder = AsyncTaskMethodBuilder.Create();
			stateMachine._003C_003E1__state = -1;
			AsyncTaskMethodBuilder asyncTaskMethodBuilder = stateMachine._003C_003Et__builder;
			asyncTaskMethodBuilder.Start(ref stateMachine);
			return stateMachine._003C_003Et__builder.Task;
		}

		public void Unregister()
		{
			if (!_IsRegistered)
			{
				return;
			}
			try
			{
				_Semaphore.Wait();
				if (!_IsRegistered)
				{
					return;
				}
				_IsRegistered = false;
			}
			finally
			{
				_Semaphore.Release();
			}
			DoUnregister();
		}

		[AsyncStateMachine(typeof(_003CUnregisterAsync_003Ed__13))]
		public Task UnregisterAsync(CancellationToken cancellationToken = default(CancellationToken))
		{
			_003CUnregisterAsync_003Ed__13 stateMachine = default(_003CUnregisterAsync_003Ed__13);
			stateMachine._003C_003E4__this = this;
			stateMachine.cancellationToken = cancellationToken;
			stateMachine._003C_003Et__builder = AsyncTaskMethodBuilder.Create();
			stateMachine._003C_003E1__state = -1;
			AsyncTaskMethodBuilder asyncTaskMethodBuilder = stateMachine._003C_003Et__builder;
			asyncTaskMethodBuilder.Start(ref stateMachine);
			return stateMachine._003C_003Et__builder.Task;
		}

		public void Dispose()
		{
			Dispose(true);
			GC.SuppressFinalize(this);
		}

		private void RequestStarted(object sender, DatabaseExecutionEventArgs e)
		{
			Stopwatch stopwatch = Stopwatch.StartNew();
			_RequestTimers.GetOrAdd(e.RequestId, stopwatch);
			_DatabaseMonitor.GetRequestsOutstanding().Increment();
			if (e.CommandType == CommandType.StoredProcedure)
			{
				_DatabaseMonitor.GetOrCreateAction(e.CommandText).RequestsOutstanding.Increment();
			}
		}

		private void RequestSucceeded(object sender, DatabaseExecutionEventArgs e)
		{
			_DatabaseMonitor.GetRequestsPerSecond().Increment();
			if (e.CommandType == CommandType.StoredProcedure)
			{
				_DatabaseMonitor.GetOrCreateAction(e.CommandText).RequestsPerSecond.Increment();
			}
		}

		private void DoRegister()
		{
			_RequestTimers = new ConcurrentDictionary<long, Stopwatch>();
			_DatabaseMonitor = new DatabaseMonitor(_Database.Name, _CounterRegistry);
			_Database.ExecutionStarted += RequestStarted;
			_Database.ExecutionSucceeded += RequestSucceeded;
			_Database.ExecutionFailed += RequestFailed;
			_Database.ExecutionFinished += RequestFinished;
		}

		private void DoUnregister()
		{
			_Database.ExecutionStarted -= RequestStarted;
			_Database.ExecutionSucceeded -= RequestSucceeded;
			_Database.ExecutionFailed -= RequestFailed;
			_Database.ExecutionFinished -= RequestFinished;
			_RequestTimers = null;
			_DatabaseMonitor = null;
		}

		private void RequestFailed(object sender, DatabaseExecutionEventArgs e)
		{
			_DatabaseMonitor.GetFailuresPerSecond().Increment();
			if (e.CommandType == CommandType.StoredProcedure)
			{
				_DatabaseMonitor.GetOrCreateAction(e.CommandText).FailuresPerSecond.Increment();
			}
		}

		private void RequestFinished(object sender, DatabaseExecutionEventArgs e)
		{
			Stopwatch stopwatch;
			if (_RequestTimers.TryRemove(e.RequestId, out stopwatch))
			{
				stopwatch.Stop();
				double elapsedMilliseconds = stopwatch.Elapsed.TotalMilliseconds;
				_DatabaseMonitor.GetAverageResponseTime().Sample(elapsedMilliseconds);
				_DatabaseMonitor.GetRequestsOutstanding().Decrement();
				if (e.CommandType == CommandType.StoredProcedure)
				{
					ExecutionCounterSet orCreateAction = _DatabaseMonitor.GetOrCreateAction(e.CommandText);
					orCreateAction.AverageResponseTime.Sample(elapsedMilliseconds);
					orCreateAction.RequestsOutstanding.Decrement();
				}
			}
		}
	}
}
