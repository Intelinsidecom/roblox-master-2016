using System.Security.Cryptography;
using System.Text;

namespace Roblox.Hashing
{
	public static class HMACHasher
	{
		public static byte[] BuildHMACSHA256HashString(string stringToHash, string secretKey)
		{
			byte[] bytes = Encoding.UTF8.GetBytes(secretKey);
			byte[] bytes2 = Encoding.UTF8.GetBytes(stringToHash);
			using (HMACSHA256 hMACSHA = new HMACSHA256(bytes))
			{
				return hMACSHA.ComputeHash(bytes2);
			}
		}
	}
}
