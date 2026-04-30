using System;
using System.Runtime.CompilerServices;
using StackExchange.Redis;

namespace Roblox.Redis
{
	public abstract class RedisClientOptionsBase
	{
		[CompilerGenerated]
		private readonly IReconnectRetryPolicy _003CReconnectRetryPolicy_003Ek__BackingField;

		[CompilerGenerated]
		private readonly TimeSpan? _003CSyncTimeout_003Ek__BackingField;

		[CompilerGenerated]
		private readonly IConnectionBuilder _003CConnectionBuilder_003Ek__BackingField;

		[CompilerGenerated]
		private readonly bool _003CDisableSubscriptions_003Ek__BackingField;

		[CompilerGenerated]
		private readonly Func<TimeSpan> _003CConnectTimeout_003Ek__BackingField;

		[CompilerGenerated]
		private readonly Func<TimeSpan> _003CResponseTimeout_003Ek__BackingField;

		public IReconnectRetryPolicy ReconnectRetryPolicy
		{
			[CompilerGenerated]
			get
			{
				return _003CReconnectRetryPolicy_003Ek__BackingField;
			}
		}

		public TimeSpan? SyncTimeout
		{
			[CompilerGenerated]
			get
			{
				return _003CSyncTimeout_003Ek__BackingField;
			}
		}

		public IConnectionBuilder ConnectionBuilder
		{
			[CompilerGenerated]
			get
			{
				return _003CConnectionBuilder_003Ek__BackingField;
			}
		}

		public bool DisableSubscriptions
		{
			[CompilerGenerated]
			get
			{
				return _003CDisableSubscriptions_003Ek__BackingField;
			}
		}

		public Func<TimeSpan> ConnectTimeout
		{
			[CompilerGenerated]
			get
			{
				return _003CConnectTimeout_003Ek__BackingField;
			}
		}

		public Func<TimeSpan> ResponseTimeout
		{
			[CompilerGenerated]
			get
			{
				return _003CResponseTimeout_003Ek__BackingField;
			}
		}

		protected RedisClientOptionsBase(IConnectionBuilder connectionBuilder = null, IReconnectRetryPolicy reconnectRetryPolicy = null, TimeSpan? syncTimeout = null, bool disableSubscriptions = false, Func<TimeSpan> connectTimeoutGetter = null, Func<TimeSpan> responseTimeoutGetter = null)
		{
			_003CConnectionBuilder_003Ek__BackingField = connectionBuilder;
			_003CReconnectRetryPolicy_003Ek__BackingField = reconnectRetryPolicy;
			_003CSyncTimeout_003Ek__BackingField = syncTimeout;
			_003CDisableSubscriptions_003Ek__BackingField = disableSubscriptions;
			_003CConnectTimeout_003Ek__BackingField = connectTimeoutGetter ?? ((Func<TimeSpan>)(() => new TimeSpan(0, 0, 0, 1, 0)));
			_003CResponseTimeout_003Ek__BackingField = responseTimeoutGetter ?? ((Func<TimeSpan>)(() => new TimeSpan(0, 0, 0, 1, 0)));
		}
	}
}
