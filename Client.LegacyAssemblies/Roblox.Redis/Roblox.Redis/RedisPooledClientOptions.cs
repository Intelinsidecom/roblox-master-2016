using System;
using System.Runtime.CompilerServices;
using StackExchange.Redis;

namespace Roblox.Redis
{
	public sealed class RedisPooledClientOptions : RedisClientOptionsBase
	{
		[CompilerGenerated]
		private readonly int _003CPoolSize_003Ek__BackingField;

		[CompilerGenerated]
		private readonly int _003CMaxReconnectTimeout_003Ek__BackingField;

		public int PoolSize
		{
			[CompilerGenerated]
			get
			{
				return _003CPoolSize_003Ek__BackingField;
			}
		}

		public int MaxReconnectTimeout
		{
			[CompilerGenerated]
			get
			{
				return _003CMaxReconnectTimeout_003Ek__BackingField;
			}
		}

		public RedisPooledClientOptions(int poolSize = 1, int maxReconnectTimeout = 0, IConnectionBuilder connectionBuilder = null, IReconnectRetryPolicy reconnectRetryPolicy = null, TimeSpan? syncTimeout = null, bool disableSubcriptions = false, Func<TimeSpan> connectTimeoutGetter = null, Func<TimeSpan> responseTimeoutGetter = null)
			: base(connectionBuilder, reconnectRetryPolicy, syncTimeout, disableSubcriptions, connectTimeoutGetter, responseTimeoutGetter)
		{
			if (poolSize < 1)
			{
				throw new ArgumentOutOfRangeException("poolSize");
			}
			_003CPoolSize_003Ek__BackingField = poolSize;
			_003CMaxReconnectTimeout_003Ek__BackingField = maxReconnectTimeout;
		}
	}
}
