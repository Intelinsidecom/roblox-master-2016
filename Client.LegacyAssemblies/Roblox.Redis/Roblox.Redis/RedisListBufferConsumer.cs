using System;
using System.ComponentModel;
using System.Diagnostics;
using System.IO;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using System.Threading.Tasks;
using Roblox.EventLog;
using StackExchange.Redis;

namespace Roblox.Redis
{
	public class RedisListBufferConsumer
	{
		[StructLayout(LayoutKind.Auto)]
		[CompilerGenerated]
		private struct _003CSendAsync_003Ed__7 : IAsyncStateMachine
		{
			public int _003C_003E1__state;

			public AsyncTaskMethodBuilder _003C_003Et__builder;

			public RedisListBufferConsumer _003C_003E4__this;

			public string buffer;

			private ConfiguredTaskAwaitable<long>.ConfiguredTaskAwaiter _003C_003Eu__1;

			private void MoveNext()
			{
				//IL_0079: Unknown result type (might be due to invalid IL or missing references)
				//IL_0084: Unknown result type (might be due to invalid IL or missing references)
				int num = _003C_003E1__state;
				RedisListBufferConsumer redisListBufferConsumer = _003C_003E4__this;
				try
				{
					if (num == 0)
					{
						goto IL_005e;
					}
					if (redisListBufferConsumer._IsSenderEnabledGetter())
					{
						if (redisListBufferConsumer.Redis != null && redisListBufferConsumer.Redis.IsConnected)
						{
							goto IL_005e;
						}
						redisListBufferConsumer._BackupLogger.Error(string.Format("Redis Buffer Sender is disconnected, the following message was not sent: {0}", buffer));
					}
					goto end_IL_000e;
					IL_005e:
					try
					{
						ConfiguredTaskAwaitable<long>.ConfiguredTaskAwaiter awaiter;
						if (num != 0)
						{
							awaiter = ((IDatabaseAsync)redisListBufferConsumer.Redis.GetDatabase(-1, (object)null)).ListLeftPushAsync(redisListBufferConsumer._RedisConfigurationBuffer.RedisListKey, buffer, (When)0, (CommandFlags)0).ConfigureAwait(false).GetAwaiter();
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
							_003C_003Eu__1 = default(ConfiguredTaskAwaitable<long>.ConfiguredTaskAwaiter);
							num = (_003C_003E1__state = -1);
						}
						awaiter.GetResult();
					}
					catch (Exception arg)
					{
						redisListBufferConsumer._BackupLogger.Error(string.Format("Redis Buffer Sender failed to send message: {0}  -- Exception: {1}", buffer, arg));
					}
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

		private readonly IRedisListConfigurationBuffer _RedisConfigurationBuffer;

		private readonly Func<bool> _IsSenderEnabledGetter;

		private readonly ILogger _BackupLogger;

		private ConfigurationOptions _ConfigurationOptions;

		internal IConnectionMultiplexer Redis;

		public RedisListBufferConsumer(Func<bool> isSenderEnabledGetter, ILogger backupLogger, INotifyPropertyChanged settings, IRedisListConfigurationBuffer redisConfigurationBuffer)
		{
			_RedisConfigurationBuffer = redisConfigurationBuffer;
			_IsSenderEnabledGetter = isSenderEnabledGetter;
			_BackupLogger = backupLogger;
			settings.PropertyChanged += SettingsOnPropertyChanged;
			_ConfigurationOptions = _RedisConfigurationBuffer.GetConfigurationOptions();
			Redis = (IConnectionMultiplexer)(object)ConnectionMultiplexer.Connect(_ConfigurationOptions, (TextWriter)null);
		}

		private void SettingsOnPropertyChanged(object sender, PropertyChangedEventArgs propertyChangedEventArgs)
		{
			if (!_RedisConfigurationBuffer.NeedsReCreation(propertyChangedEventArgs.PropertyName))
			{
				return;
			}
			if (_IsSenderEnabledGetter())
			{
				_BackupLogger.Error("Changes to RedisListBufferSender while Sender is enabled are not possible. First disable Sender.");
				return;
			}
			try
			{
				IConnectionMultiplexer redis = Redis;
				if (redis != null)
				{
					redis.Dispose();
				}
				_ConfigurationOptions = _RedisConfigurationBuffer.GetConfigurationOptions();
				Redis = (IConnectionMultiplexer)(object)ConnectionMultiplexer.Connect(_ConfigurationOptions, (TextWriter)null);
				if (!Redis.IsConnected)
				{
					_BackupLogger.Error(string.Format("Redis was not able to connect after \"detecting\" a change to property: {0}", propertyChangedEventArgs.PropertyName));
				}
			}
			catch (Exception arg)
			{
				_BackupLogger.Error(string.Format("There was an exception while trying to change Redis Configuration at runtime: {0}", arg));
			}
		}

		[AsyncStateMachine(typeof(_003CSendAsync_003Ed__7))]
		public Task SendAsync(string buffer)
		{
			_003CSendAsync_003Ed__7 stateMachine = default(_003CSendAsync_003Ed__7);
			stateMachine._003C_003E4__this = this;
			stateMachine.buffer = buffer;
			stateMachine._003C_003Et__builder = AsyncTaskMethodBuilder.Create();
			stateMachine._003C_003E1__state = -1;
			AsyncTaskMethodBuilder asyncTaskMethodBuilder = stateMachine._003C_003Et__builder;
			asyncTaskMethodBuilder.Start(ref stateMachine);
			return stateMachine._003C_003Et__builder.Task;
		}
	}
}
