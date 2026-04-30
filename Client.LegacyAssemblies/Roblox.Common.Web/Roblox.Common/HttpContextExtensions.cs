using System.Net;
using System.Web;

namespace Roblox.Common
{
	public static class HttpContextExtensions
	{
		private static readonly HttpHeaderIpResolver _HeaderResolver = new HttpHeaderIpResolver();

		private static readonly HttpSecureIpResolver _SecureResolver = new HttpSecureIpResolver();

		private static readonly HttpContextIpResolver _IPResolver = new HttpContextIpResolver(_HeaderResolver, _SecureResolver);

		public static string GetOriginIP(this HttpContextBase context)
		{
			IPAddress iPAddress = _IPResolver.Resolve(context);
			if (iPAddress == null)
			{
				return null;
			}
			return iPAddress.ToString();
		}

		public static string GetOriginIP(this HttpContext context)
		{
			IPAddress iPAddress = _IPResolver.Resolve(context);
			if (iPAddress == null)
			{
				return null;
			}
			return iPAddress.ToString();
		}
	}
}
