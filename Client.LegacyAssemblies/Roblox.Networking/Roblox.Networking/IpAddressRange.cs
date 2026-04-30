using System;
using System.Collections.Generic;
using System.Linq;
using System.Net;
using System.Net.Sockets;

namespace Roblox.Networking
{
	public class IpAddressRange
	{
		private readonly AddressFamily _AddressFamily;

		private readonly byte[] _LowerBytes;

		private readonly byte[] _UpperBytes;

		public IpAddressRange(IPAddress lower, IPAddress upper)
		{
			_AddressFamily = lower.AddressFamily;
			_LowerBytes = lower.GetAddressBytes();
			_UpperBytes = upper.GetAddressBytes();
		}

		public bool IsInRange(IPAddress address)
		{
			if (address.AddressFamily != _AddressFamily)
			{
				return false;
			}
			byte[] addressBytes = address.GetAddressBytes();
			bool lowerBoundary = true;
			bool upperBoundary = true;
			for (int i = 0; i < _LowerBytes.Length; i++)
			{
				if (!(lowerBoundary || upperBoundary))
				{
					break;
				}
				if ((lowerBoundary && addressBytes[i] < _LowerBytes[i]) || (upperBoundary && addressBytes[i] > _UpperBytes[i]))
				{
					return false;
				}
				lowerBoundary &= addressBytes[i] == _LowerBytes[i];
				upperBoundary &= addressBytes[i] == _UpperBytes[i];
			}
			return true;
		}

		public static IReadOnlyCollection<IpAddressRange> ParseStringList(string ranges)
		{
			if (string.IsNullOrWhiteSpace(ranges))
			{
				return new List<IpAddressRange>().AsReadOnly();
			}
			return (from range in ranges.Split(new char[1] { ',' }, StringSplitOptions.RemoveEmptyEntries)
				select range.Split(new char[1] { '-' }, StringSplitOptions.RemoveEmptyEntries).Select(TryGetIpAddress).ToList() into ips
				where ips.First() != null && ips.Last() != null
				select new IpAddressRange(ips.First(), ips.Last())).ToList().AsReadOnly();
		}

		private static IPAddress TryGetIpAddress(string ipString)
		{
			IPAddress ipAddress;
			IPAddress.TryParse(ipString.Trim(), out ipAddress);
			return ipAddress;
		}
	}
}
