using System.IO;
using Roblox.Common.NetStandard;

namespace Roblox
{
	public static class HashFunctions
	{
		public static string HashToString(byte[] rawHash)
		{
			return HashFunctions.HashToString(rawHash);
		}

		public static byte[] ComputeHash(Stream buffer)
		{
			return HashFunctions.ComputeHash(buffer);
		}

		public static byte[] ComputeHash(byte[] data)
		{
			return HashFunctions.ComputeHash(data);
		}

		public static string ComputeHashString(byte[] data)
		{
			return HashToString(ComputeHash(data));
		}

		public static string ComputeHashString(Stream buffer)
		{
			return HashToString(ComputeHash(buffer));
		}

		public static string ComputeMd5HashString(string input)
		{
			return HashFunctions.ComputeMd5HashString(input);
		}
	}
}
