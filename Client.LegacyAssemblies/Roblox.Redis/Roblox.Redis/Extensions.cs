using System.Collections.ObjectModel;
using System.Net;
using StackExchange.Redis;

namespace Roblox.Redis
{
	public static class Extensions
	{
		public static string GetIpPortCombo(this ConnectionMultiplexer multiplexer)
		{
			return ParseIpPortCombo((multiplexer != null) ? multiplexer.Configuration : null);
		}

		private static string ParseIpPortCombo(string configuration)
		{
			if (string.IsNullOrEmpty(configuration))
			{
				return string.Empty;
			}
			ConfigurationOptions val = ConfigurationOptions.Parse(configuration);
			if (((Collection<EndPoint>)(object)val.EndPoints).Count > 0)
			{
				return ((Collection<EndPoint>)(object)val.EndPoints)[0].ToString();
			}
			return string.Empty;
		}
	}
}
