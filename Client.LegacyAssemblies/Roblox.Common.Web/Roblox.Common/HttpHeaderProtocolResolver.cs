using System;
using Roblox.Common.Properties;
using Roblox.Platform.Infrastructure;

namespace Roblox.Common
{
	public class HttpHeaderProtocolResolver : IHttpHeaderProtocolResolver
	{
		private readonly ISettings _Settings;

		private readonly IServerValidator _ServerValidator;

		public HttpHeaderProtocolResolver()
			: this(Settings.Default, ServerValidator.RobloxServerValidator)
		{
		}

		internal HttpHeaderProtocolResolver(ISettings settings, IServerValidator serverValidator)
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

		internal string TrimAndValidateXForwardedProtoHeader(string header)
		{
			if (header != null)
			{
				header = header.Trim().ToLower();
				if (header == Uri.UriSchemeHttp || header == Uri.UriSchemeHttps)
				{
					return header;
				}
			}
			return null;
		}

		public string ResolveProtocolFromRequestProperties(string userHostAddress, string requestProtocol, string xForwardedProtoValue)
		{
			xForwardedProtoValue = TrimAndValidateXForwardedProtoHeader(xForwardedProtoValue);
			if (_Settings.EnableXForwardedProtoOriginProtocol && _ServerValidator.IsAllowedProxyIp(userHostAddress) && xForwardedProtoValue != null)
			{
				return xForwardedProtoValue;
			}
			return requestProtocol;
		}

		public bool GetIsRequestSecureFromRequestProperties(string userHostAddress, string requestProtocol, string xForwardedProtoValue)
		{
			return ResolveProtocolFromRequestProperties(userHostAddress, requestProtocol, xForwardedProtoValue) == Uri.UriSchemeHttps;
		}
	}
}
