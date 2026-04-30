using System.Security.Cryptography;
using System.Text;

namespace Roblox.Redis
{
	public static class LuaScriptHasher
	{
		public static byte[] GetScriptHash(string script)
		{
			using (SHA1Managed sHA1Managed = new SHA1Managed())
			{
				byte[] bytes = Encoding.UTF8.GetBytes(script);
				return sHA1Managed.ComputeHash(bytes);
			}
		}
	}
}
