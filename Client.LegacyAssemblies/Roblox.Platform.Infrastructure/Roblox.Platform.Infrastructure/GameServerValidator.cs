using System;
using System.Collections.Generic;
using Roblox.Hashing;
using Roblox.Platform.Infrastructure.Properties;

namespace Roblox.Platform.Infrastructure
{
	public static class GameServerValidator
	{
		private static readonly TimeSpan _ValidDatacenterIdsCacheDuration = TimeSpan.FromHours(1.0);

		private static string GameServerJobSignatureSalt
		{
			get
			{
				return Settings.Default.GameServerJobSignatureSalt;
			}
		}

		private static string GameServerJobSignatureAlternateSalt
		{
			get
			{
				return Settings.Default.GameServerJobSignatureAlternateSalt;
			}
		}

		public static bool IsValidGamesRelayIp(string ipAddress)
		{
			return GamesRelayDataAccess.GameRelayIpAddressToDatacenterIdMap.ContainsKey(ipAddress);
		}

		public static int GetDatacenterIdByServerIp(string ipAddress)
		{
			int dataCenterId;
			GamesRelayDataAccess.GameRelayIpAddressToDatacenterIdMap.TryGetValue(ipAddress, out dataCenterId);
			return dataCenterId;
		}

		public static ISet<int> GetValidGameServerDatacenterIds()
		{
			return InfrastructureCache.FetchItem("GetValidGameServerDatacenterIds:", _ValidDatacenterIdsCacheDuration, () => new HashSet<int>(GamesRelayDataAccess.GameRelayIpAddressToDatacenterIdMap.Values));
		}

		public static string BuildJobSignature(long placeId, Guid gameId, string serverIp, bool useAlternateSalt)
		{
			string salt = (useAlternateSalt ? GameServerJobSignatureAlternateSalt : GameServerJobSignatureSalt);
			return SHA256Hasher.BuildSHA256HashString(string.Format("PlaceID:{0}_GameID:{1}_ServerIP:{2}_Salt:{3}", placeId, gameId, serverIp, salt));
		}
	}
}
