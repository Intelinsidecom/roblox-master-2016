using System.Web;

namespace Roblox.Common
{
	public interface IHttpRequestProtocolResolver : IRequestProtocolResolver<HttpRequest>, IRequestProtocolResolver<HttpRequestBase>
	{
	}
}
