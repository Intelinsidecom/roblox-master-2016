using System.Net;

namespace Roblox.Common
{
	public interface IIpResolver<in TResolveFrom>
	{
		IPAddress Resolve(TResolveFrom data);
	}
}
