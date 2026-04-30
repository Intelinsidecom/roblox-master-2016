using System;
using System.Diagnostics;
using System.IO;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using System.Threading.Tasks;
using StackExchange.Redis;

namespace Roblox.Redis
{
	public class DefaultConnectionBuilder : IConnectionBuilder
	{
		[StructLayout(LayoutKind.Auto)]
		[CompilerGenerated]
		private struct _003CCreateConnectionMultiplexerAsync_003Ed__0 : IAsyncStateMachine
		{
			public int _003C_003E1__state;

			public AsyncTaskMethodBuilder<IConnectionMultiplexer> _003C_003Et__builder;

			public ConfigurationOptions configurationOptions;

			private ConfiguredTaskAwaitable<ConnectionMultiplexer>.ConfiguredTaskAwaiter _003C_003Eu__1;

			private void MoveNext()
			{
				int num = _003C_003E1__state;
				IConnectionMultiplexer result;
				try
				{
					ConfiguredTaskAwaitable<ConnectionMultiplexer>.ConfiguredTaskAwaiter awaiter;
					if (num != 0)
					{
						awaiter = ConnectionMultiplexer.ConnectAsync(configurationOptions, (TextWriter)null).ConfigureAwait(false).GetAwaiter();
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
						_003C_003Eu__1 = default(ConfiguredTaskAwaitable<ConnectionMultiplexer>.ConfiguredTaskAwaiter);
						num = (_003C_003E1__state = -1);
					}
					result = (IConnectionMultiplexer)(object)awaiter.GetResult();
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

		[AsyncStateMachine(typeof(_003CCreateConnectionMultiplexerAsync_003Ed__0))]
		public Task<IConnectionMultiplexer> CreateConnectionMultiplexerAsync(ConfigurationOptions configurationOptions)
		{
			_003CCreateConnectionMultiplexerAsync_003Ed__0 stateMachine = default(_003CCreateConnectionMultiplexerAsync_003Ed__0);
			stateMachine.configurationOptions = configurationOptions;
			stateMachine._003C_003Et__builder = AsyncTaskMethodBuilder<IConnectionMultiplexer>.Create();
			stateMachine._003C_003E1__state = -1;
			AsyncTaskMethodBuilder<IConnectionMultiplexer> asyncTaskMethodBuilder = stateMachine._003C_003Et__builder;
			asyncTaskMethodBuilder.Start(ref stateMachine);
			return stateMachine._003C_003Et__builder.Task;
		}
	}
}
