using System.Collections.Generic;
using System.Net;

namespace Roblox.Common
{
	public interface IHeaderIpResolver
	{
		IPAddress Resolve(string remoteIpAddress, IDictionary<string, string> headers);
	}
}
