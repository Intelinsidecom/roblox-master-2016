using System.IO;
using System.Security.Cryptography;
using System.Text;

namespace Roblox.Common.NetStandard
{
	public static class HashFunctions
	{
		public static string HashToString(byte[] rawHash)
		{
			StringBuilder stringBuilder = new StringBuilder(rawHash.Length * 2);
			foreach (byte b in rawHash)
			{
				string value = b.ToString("x2");
				stringBuilder.Append(value);
			}
			return stringBuilder.ToString();
		}

		public static byte[] ComputeHash(Stream buffer)
		{
			long position = buffer.Position;
			buffer.Seek(0L, SeekOrigin.Begin);
			byte[] result;
			using (MD5CryptoServiceProvider mD5CryptoServiceProvider = new MD5CryptoServiceProvider())
			{
				result = mD5CryptoServiceProvider.ComputeHash(buffer);
			}
			buffer.Seek(position, SeekOrigin.Begin);
			return result;
		}

		public static byte[] ComputeHash(byte[] data)
		{
			using (MD5CryptoServiceProvider mD5CryptoServiceProvider = new MD5CryptoServiceProvider())
			{
				return mD5CryptoServiceProvider.ComputeHash(data);
			}
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
			MD5 mD = MD5.Create();
			byte[] bytes = Encoding.ASCII.GetBytes(input);
			byte[] array = mD.ComputeHash(bytes);
			StringBuilder stringBuilder = new StringBuilder();
			byte[] array2 = array;
			foreach (byte b in array2)
			{
				stringBuilder.Append(b.ToString("X2"));
			}
			return stringBuilder.ToString();
		}
	}
}
