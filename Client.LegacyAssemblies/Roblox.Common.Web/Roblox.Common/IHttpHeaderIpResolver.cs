using System.Net;

namespace Roblox.Common
{
	public interface IHttpHeaderIpResolver
	{
		IPAddress ResolveOriginIpFromRequestHeaders(string userHostAddress, string xForwardedForHeaderValue, string xRealIpHeaderValue, string robloxProxiedForHeaderValue);
	}
}
