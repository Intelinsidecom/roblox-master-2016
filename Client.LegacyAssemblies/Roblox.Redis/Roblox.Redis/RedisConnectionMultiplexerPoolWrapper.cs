using System;
using System.Runtime.CompilerServices;
using StackExchange.Redis;

namespace Roblox.Redis
{
	internal class RedisConnectionMultiplexerPoolWrapper : ConsistentHashConnectionWrapperBase
	{
		private readonly RedisConnectionMultiplexerPool _ConnectionPool;

		[CompilerGenerated]
		private readonly IServer _003CServer_003Ek__BackingField;

		public override IDatabase Database
		{
			get
			{
				return _ConnectionPool.GetConnectionMultiplexer().GetDatabase(-1, (object)null);
			}
		}

		public override ISubscriber Subscriber
		{
			get
			{
				return _ConnectionPool.Subscriber;
			}
		}

		public override IServer Server
		{
			[CompilerGenerated]
			get
			{
				return _003CServer_003Ek__BackingField;
			}
		}

		internal RedisConnectionMultiplexerPoolWrapper(RedisConnectionMultiplexerPool connectionPool, ConfigurationOptions configuration)
			: base(configuration)
		{
			if (connectionPool == null)
			{
				throw new ArgumentNullException("connectionPool");
			}
			_ConnectionPool = connectionPool;
			_003CServer_003Ek__BackingField = RedisClientBase<RedisPooledClientOptions>.GetServerFromMultiplexer(connectionPool.PrimaryConnection);
		}
	}
}
