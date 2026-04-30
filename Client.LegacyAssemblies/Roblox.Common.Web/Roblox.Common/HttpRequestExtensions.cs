using System;
using System.Web;

namespace Roblox.Common
{
	public static class HttpRequestExtensions
	{
		internal static readonly HttpRequestProtocolResolver RequestProtocolResolver = new HttpRequestProtocolResolver();

		public static bool IsOriginSecureConnection(this HttpRequest request)
		{
			return RequestProtocolResolver.ResolveProtocol(request) == Uri.UriSchemeHttps;
		}

		public static bool IsOriginSecureConnection(this HttpRequestBase request)
		{
			return RequestProtocolResolver.ResolveProtocol(request) == Uri.UriSchemeHttps;
		}
	}
}
