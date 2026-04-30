namespace Roblox.Platform.Infrastructure
{
	public static class VendorData
	{
		public static string GetVendorNameByPrimaryIpAddress(string primaryIpAddress)
		{
			Server server = GetServerByPrimaryIpAddress(primaryIpAddress);
			if (server == null)
			{
				return null;
			}
			return GetVendorNameByVendorId(server.VendorID);
		}

		public static int GetVendorIdByPrimaryIpAddress(string primaryIpAddress)
		{
			Server server = GetServerByPrimaryIpAddress(primaryIpAddress);
			if (server != null)
			{
				return server.VendorID;
			}
			return 0;
		}

		public static string GetVendorNameByVendorId(int vendorId)
		{
			string vendorName;
			RefreshAheadDatabaseLookups.VendorIDToNameMap.TryGetValue(vendorId, out vendorName);
			return vendorName;
		}

		public static int GetServerIdByPrimaryIpAddress(string primaryIPAddress)
		{
			Server server = GetServerByPrimaryIpAddress(primaryIPAddress);
			if (server != null)
			{
				return server.ID;
			}
			return 0;
		}

		private static Server GetServerByPrimaryIpAddress(string primaryIPAddress)
		{
			Server server;
			RefreshAheadDatabaseLookups.IPAddressToServerMap.TryGetValue(primaryIPAddress, out server);
			return server;
		}
	}
}
