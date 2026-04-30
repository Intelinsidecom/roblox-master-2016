using System.Text;
using Roblox.Hashing;

namespace Roblox.Common
{
	public static class Counters
	{
		private static readonly string _DefaultKey = "Roblox.Platform.Common.Counter";

		public static int GetStableRolloutPercentage(long userid, string key)
		{
			if (string.IsNullOrEmpty(key))
			{
				key = _DefaultKey;
			}
			string input = userid + key;
			return (int)(MurmurHash2.Hash(Encoding.ASCII.GetBytes(input)) % 100);
		}
	}
}
