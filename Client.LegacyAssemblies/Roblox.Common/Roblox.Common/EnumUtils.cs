using Roblox.Common.NetStandard;

namespace Roblox.Common
{
	public static class EnumUtils
	{
		public static TEnum? StrictTryParseEnum<TEnum>(string value) where TEnum : struct
		{
			return EnumUtils.StrictTryParseEnum<TEnum>(value);
		}
	}
}
