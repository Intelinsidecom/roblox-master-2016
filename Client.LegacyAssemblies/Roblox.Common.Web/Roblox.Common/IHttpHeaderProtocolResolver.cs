namespace Roblox.Common
{
	public interface IHttpHeaderProtocolResolver
	{
		string ResolveProtocolFromRequestProperties(string userHostAddress, string requestProtocol, string xForwardedProtoValue);

		bool GetIsRequestSecureFromRequestProperties(string userHostAddress, string requestProtocol, string xForwardedProtoValue);
	}
}
