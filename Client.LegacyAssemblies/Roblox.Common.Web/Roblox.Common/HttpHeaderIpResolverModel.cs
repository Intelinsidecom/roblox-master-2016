namespace Roblox.Common
{
	public class HttpHeaderIpResolverModel
	{
		public string UserHostAddress { get; set; }

		public string ForwardedFor { get; set; }

		public string DosArrestRealIpHeaderName { get; set; }

		public string RobloxProxiedFor { get; set; }
	}
}
