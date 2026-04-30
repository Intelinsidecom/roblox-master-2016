using System;
using System.Net;
using System.Web;
using Roblox.WebsiteSettings.Properties;

namespace Roblox.Common
{
	public class Web
	{
		public static string ApplicationURL
		{
			get
			{
				return Settings.Default.ApplicationURL;
			}
		}

		public static DecompressionMethods ParseContentEncoding(HttpWebResponse response)
		{
			return ParseContentEncoding(response.Headers["Content-Encoding"]);
		}

		public static DecompressionMethods ParseContentEncoding(HttpResponseBase response)
		{
			return ParseContentEncoding(response.Headers["Content-Encoding"]);
		}

		public static DecompressionMethods ParseContentEncoding(HttpRequest request)
		{
			return ParseContentEncoding(request.Headers["Content-Encoding"]);
		}

		public static DecompressionMethods ParseContentEncoding(HttpRequestBase request)
		{
			return ParseContentEncoding(request.Headers["Content-Encoding"]);
		}

		public static DecompressionMethods ParseContentEncoding(string contentEncodingString)
		{
			if (contentEncodingString != null)
			{
				string text = contentEncodingString.ToLower();
				if (text == "gzip")
				{
					return DecompressionMethods.GZip;
				}
				if (text == "deflate")
				{
					return DecompressionMethods.Deflate;
				}
			}
			return DecompressionMethods.None;
		}

		public static string ResolveWithDomain(HttpContext context, string url)
		{
			return ResolveWithDomain(context.Request, url);
		}

		public static string ResolveWithDomain(HttpRequest request, string url)
		{
			return ResolveWithDomain(request, url, request.IsOriginSecureConnection());
		}

		public static string ResolveWithDomain(HttpContext context, string url, bool ssl)
		{
			return ResolveWithDomain(context.Request, url, ssl);
		}

		public static string ResolveWithDomain(HttpRequest request, string url, bool ssl)
		{
			string[] parts = url.Split('?');
			string result = string.Format("{0}{1}", request.Url.GetLeftPart(UriPartial.Authority), VirtualPathUtility.ToAbsolute(parts[0]));
			if (parts.Length != 1)
			{
				result = string.Format("{0}?{1}", result, parts[1]);
			}
			if (ssl)
			{
				if (result.StartsWith("http:"))
				{
					result = string.Format("https{0}", result.Substring(4));
				}
			}
			else if (result.StartsWith("https:"))
			{
				result = string.Format("http{0}", result.Substring(5));
			}
			return result;
		}
	}
}
