using System.Runtime.CompilerServices;
using StackExchange.Redis;

namespace Roblox.Redis
{
	internal class RedisConnectionWrapper : ConsistentHashConnectionWrapperBase
	{
		private readonly IConnectionMultiplexer _ConnectionMultiplexer;

		[CompilerGenerated]
		private readonly IServer _003CServer_003Ek__BackingField;

		public override IDatabase Database
		{
			get
			{
				return _ConnectionMultiplexer.GetDatabase(-1, (object)null);
			}
		}

		public override ISubscriber Subscriber
		{
			get
			{
				return _ConnectionMultiplexer.GetSubscriber((object)null);
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

		internal RedisConnectionWrapper(IConnectionMultiplexer connectionMultiplexer, ConfigurationOptions configuration)
			: base(configuration)
		{
			_ConnectionMultiplexer = connectionMultiplexer;
			_003CServer_003Ek__BackingField = RedisClientBase<RedisClientOptions>.GetServerFromMultiplexer(connectionMultiplexer);
		}
	}
}
