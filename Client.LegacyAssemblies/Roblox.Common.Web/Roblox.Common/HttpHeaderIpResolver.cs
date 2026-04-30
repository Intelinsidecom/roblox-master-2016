using System;
using System.Net;
using Roblox.Common.Properties;
using Roblox.Platform.Infrastructure;

namespace Roblox.Common
{
	public class HttpHeaderIpResolver : IIpResolver<HttpHeaderIpResolverModel>, IHttpHeaderIpResolver
	{
		private readonly ISettings _Settings;

		private readonly IServerValidator _ServerValidator;

		public HttpHeaderIpResolver()
			: this(Settings.Default, ServerValidator.RobloxServerValidator)
		{
		}

		internal HttpHeaderIpResolver(ISettings settings, IServerValidator serverValidator)
		{
			if (settings == null)
			{
				throw new ArgumentNullException("settings");
			}
			_Settings = settings;
			if (serverValidator == null)
			{
				throw new ArgumentNullException("serverValidator");
			}
			_ServerValidator = serverValidator;
		}

		internal bool IsValidIP(string potentialIPString)
		{
			IPAddress potentialIP;
			return IPAddress.TryParse(potentialIPString, out potentialIP);
		}

		internal string TrimAndValidateXForwardedFor(string xForwardedForHeaderValue)
		{
			if (!string.IsNullOrEmpty(xForwardedForHeaderValue))
			{
				string potentialIPString = xForwardedForHeaderValue.Split(',')[0];
				if (IsValidIP(potentialIPString))
				{
					return potentialIPString;
				}
			}
			return null;
		}

		public IPAddress ResolveOriginIpFromRequestHeaders(string userHostAddress, string xForwardedForHeaderValue, string xRealIpHeaderValue, string robloxProxiedForHeaderValue)
		{
			string originIp = userHostAddress;
			if (_Settings.EnableXForwardedForOriginIp && _ServerValidator.IsAllowedProxyIp(originIp))
			{
				xForwardedForHeaderValue = TrimAndValidateXForwardedFor(xForwardedForHeaderValue);
				if (xForwardedForHeaderValue != null)
				{
					originIp = xForwardedForHeaderValue;
				}
			}
			if (_Settings.EnableDosArrestRealIpHeaderForOriginIP && _ServerValidator.IsDosArrestIp(originIp) && !string.IsNullOrEmpty(xRealIpHeaderValue) && IsValidIP(xRealIpHeaderValue))
			{
				originIp = xRealIpHeaderValue;
			}
			if (_Settings.EnableWhitelistProxiedIpHeadersForOriginIp && _ServerValidator.IsWhitelistedIp(originIp) && !string.IsNullOrEmpty(robloxProxiedForHeaderValue) && IsValidIP(robloxProxiedForHeaderValue))
			{
				originIp = robloxProxiedForHeaderValue;
			}
			IPAddress ip;
			IPAddress.TryParse(originIp, out ip);
			return ip;
		}

		public IPAddress Resolve(HttpHeaderIpResolverModel data)
		{
			return ResolveOriginIpFromRequestHeaders((data != null) ? data.UserHostAddress : null, (data != null) ? data.ForwardedFor : null, (data != null) ? data.DosArrestRealIpHeaderName : null, (data != null) ? data.RobloxProxiedFor : null);
		}
	}
}
