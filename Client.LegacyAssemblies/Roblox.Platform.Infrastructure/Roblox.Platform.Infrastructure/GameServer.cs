using System.Runtime.CompilerServices;

namespace Roblox.Platform.Infrastructure
{
	internal class GameServer : IGameServer
	{
		[CompilerGenerated]
		private readonly string _003CIpAddress_003Ek__BackingField;

		public string IpAddress
		{
			[CompilerGenerated]
			get
			{
				return _003CIpAddress_003Ek__BackingField;
			}
		}

		public GameServer(string ipAddress)
		{
			_003CIpAddress_003Ek__BackingField = ipAddress;
		}
	}
}
