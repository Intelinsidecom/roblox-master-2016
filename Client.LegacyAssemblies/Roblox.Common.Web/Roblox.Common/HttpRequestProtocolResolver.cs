using System;
using System.Web;

namespace Roblox.Common
{
	public class HttpRequestProtocolResolver : IHttpRequestProtocolResolver, IRequestProtocolResolver<HttpRequest>, IRequestProtocolResolver<HttpRequestBase>
	{
		private readonly IHttpHeaderProtocolResolver _HeaderResolver;

		public HttpRequestProtocolResolver(IHttpHeaderProtocolResolver resolver = null)
		{
			_HeaderResolver = resolver ?? new HttpHeaderProtocolResolver();
		}

		public string ResolveProtocol(HttpRequest request)
		{
			return ResolveProtocol(new HttpRequestWrapper(request));
		}

		public bool IsRequestSecure(HttpRequest request)
		{
			return ResolveProtocol(request) == Uri.UriSchemeHttps;
		}

		public string ResolveProtocol(HttpRequestBase request)
		{
			string requestProtocol = (request.IsSecureConnection ? Uri.UriSchemeHttps : Uri.UriSchemeHttp);
			return _HeaderResolver.ResolveProtocolFromRequestProperties(request.UserHostAddress, requestProtocol, request.Headers["X-Forwarded-Proto"]);
		}

		public bool IsRequestSecure(HttpRequestBase request)
		{
			return ResolveProtocol(request) == Uri.UriSchemeHttps;
		}
	}
}
