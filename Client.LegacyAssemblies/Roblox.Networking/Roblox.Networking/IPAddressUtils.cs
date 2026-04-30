using System;
using System.Collections.Generic;
using System.Linq;
using System.Net;

namespace Roblox.Networking
{
	public static class IPAddressUtils
	{
		public static IPAddress ResolveClientIpAddressFromRequestHeader(string headerValue)
		{
			if (!string.IsNullOrEmpty(headerValue))
			{
				IPAddress xForwardedForIPAddress = ParseIPAddress(headerValue.Split(new char[1] { ',' })[0]);
				if (xForwardedForIPAddress != null)
				{
					return xForwardedForIPAddress;
				}
				throw new ArgumentException(string.Format("Unable to parse ip address '{0}'", headerValue), "headerValue");
			}
			return null;
		}

		public static bool IsIpAddressAllowed(IPAddress ipAddress, IReadOnlyCollection<IpAddressRange> ipAddressRanges)
		{
			return ipAddressRanges.Aggregate(false, (bool result, IpAddressRange ipRange) => result || ipRange.IsInRange(ipAddress));
		}

		public static IPAddress ParseIPAddress(string ipAddressString)
		{
			IPAddress ipAddress;
			if (!IPAddress.TryParse(ipAddressString, out ipAddress))
			{
				return null;
			}
			return ipAddress;
		}
	}
}
