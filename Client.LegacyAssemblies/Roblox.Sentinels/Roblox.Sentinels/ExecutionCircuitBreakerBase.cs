using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using System.Threading;
using System.Threading.Tasks;

namespace Roblox.Sentinels
{
	public abstract class ExecutionCircuitBreakerBase : CircuitBreakerBase
	{
		[StructLayout(LayoutKind.Auto)]
		[CompilerGenerated]
		private struct _003CExecuteAsync_003Ed__10 : IAsyncStateMachine
		{
			public int _003C_003E1__state;

			public AsyncTaskMethodBuilder _003C_003Et__builder;

			public ExecutionCircuitBreakerBase _003C_003E4__this;

			public Func<CancellationToken, Task> action;

			public CancellationToken cancellationToken;

			private ConfiguredTaskAwaitable.ConfiguredTaskAwaiter _003C_003Eu__1;

			private void MoveNext()
			{
				int num = _003C_003E1__state;
				ExecutionCircuitBreakerBase executionCircuitBreakerBase = _003C_003E4__this;
				try
				{
					if (num != 0)
					{
						executionCircuitBreakerBase.AttemptToProceed();
					}
					try
					{
						ConfiguredTaskAwaitable.ConfiguredTaskAwaiter awaiter;
						if (num != 0)
						{
							awaiter = action(cancellationToken).ConfigureAwait(false).GetAwaiter();
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
					}
					catch (Exception ex)
					{
						if (executionCircuitBreakerBase.ShouldTrip(ex))
						{
							executionCircuitBreakerBase._NextRetry = executionCircuitBreakerBase.Now.Add(executionCircuitBreakerBase.RetryInterval);
							executionCircuitBreakerBase.Trip();
						}
						throw;
					}
					finally
					{
						if (num < 0)
						{
							Interlocked.Exchange(ref executionCircuitBreakerBase._ShouldRetrySignal, 0);
						}
					}
					executionCircuitBreakerBase.Reset();
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

		private DateTime _NextRetry = DateTime.MinValue;

		private int _ShouldRetrySignal;

		private bool IsTimeForRetry
		{
			get
			{
				return Now >= _NextRetry;
			}
		}

		protected abstract TimeSpan RetryInterval { get; }

		private bool ShouldRetry()
		{
			return Interlocked.CompareExchange(ref _ShouldRetrySignal, 1, 0) == 0;
		}

		private void AttemptToProceed()
		{
			try
			{
				Test();
			}
			catch (CircuitBreakerException)
			{
				if (IsTimeForRetry && ShouldRetry())
				{
					return;
				}
				throw;
			}
		}

		protected abstract bool ShouldTrip(Exception ex);

		public void Execute(Action action)
		{
			AttemptToProceed();
			try
			{
				action();
			}
			catch (Exception ex)
			{
				if (ShouldTrip(ex))
				{
					_NextRetry = Now.Add(RetryInterval);
					Trip();
				}
				throw;
			}
			finally
			{
				Interlocked.Exchange(ref _ShouldRetrySignal, 0);
			}
			Reset();
		}

		[AsyncStateMachine(typeof(_003CExecuteAsync_003Ed__10))]
		public Task ExecuteAsync(Func<CancellationToken, Task> action, CancellationToken cancellationToken = default(CancellationToken))
		{
			_003CExecuteAsync_003Ed__10 stateMachine = default(_003CExecuteAsync_003Ed__10);
			stateMachine._003C_003E4__this = this;
			stateMachine.action = action;
			stateMachine.cancellationToken = cancellationToken;
			stateMachine._003C_003Et__builder = AsyncTaskMethodBuilder.Create();
			stateMachine._003C_003E1__state = -1;
			AsyncTaskMethodBuilder asyncTaskMethodBuilder = stateMachine._003C_003Et__builder;
			asyncTaskMethodBuilder.Start(ref stateMachine);
			return stateMachine._003C_003Et__builder.Task;
		}

		public override bool Reset()
		{
			bool result = base.Reset();
			_NextRetry = DateTime.MinValue;
			return result;
		}
	}
}
