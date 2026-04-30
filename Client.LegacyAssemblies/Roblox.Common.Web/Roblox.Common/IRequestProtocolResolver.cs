namespace Roblox.Common
{
	public interface IRequestProtocolResolver<in TRequestObject>
	{
		string ResolveProtocol(TRequestObject request);

		bool IsRequestSecure(TRequestObject request);
	}
}
