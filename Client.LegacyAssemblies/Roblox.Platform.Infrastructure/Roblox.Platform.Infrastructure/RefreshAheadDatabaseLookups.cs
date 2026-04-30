using System;
using System.Collections.Generic;
using System.Data;
using System.Data.SqlClient;
using System.Linq;
using Newtonsoft.Json;
using Roblox.Caching;
using Roblox.Common;
using Roblox.Data;
using Roblox.MssqlDatabases;
using Roblox.Networking;
using Roblox.Platform.Infrastructure.Properties;

namespace Roblox.Platform.Infrastructure
{
	internal static class RefreshAheadDatabaseLookups
	{
		private static readonly TimeSpan _GetLiveIPAddressesWithServerAndVendorInfoExpiration = TimeSpan.FromMinutes(1.0);

		private static readonly LazyWithRetry<RefreshAhead<Dictionary<int, string>>> _VendorIDToNameMapRefreshAhead = new LazyWithRetry<RefreshAhead<Dictionary<int, string>>>((Func<RefreshAhead<Dictionary<int, string>>>)GetVendorIDToNameMapRefreshAhead, (Func<DateTime>)null);

		private static readonly LazyWithRetry<RefreshAhead<Dictionary<string, Server>>> _IPAddressToServerMapRefreshAhead = new LazyWithRetry<RefreshAhead<Dictionary<string, Server>>>((Func<RefreshAhead<Dictionary<string, Server>>>)GetIPAddressToServerMapRefreshAhead, (Func<DateTime>)null);

		private static readonly LazyWithRetry<RefreshAhead<HashSet<int>>> _ServerIDsInAllowedGroupsRefreshAhead = new LazyWithRetry<RefreshAhead<HashSet<int>>>((Func<RefreshAhead<HashSet<int>>>)GetServerIDsInAllowedGroupsRefreshAhead, (Func<DateTime>)null);

		private static readonly LazyWithRetry<RefreshAhead<HashSet<string>>> _DosArrestNetworksIpAddressesRefreshAhead = new LazyWithRetry<RefreshAhead<HashSet<string>>>((Func<RefreshAhead<HashSet<string>>>)GetDosArrestNetworksIpAddressesRefreshAhead, (Func<DateTime>)null);

		private static readonly LazyWithRetry<RefreshAhead<HashSet<string>>> _SnatIpAddressesRefreshAhead = new LazyWithRetry<RefreshAhead<HashSet<string>>>((Func<RefreshAhead<HashSet<string>>>)GetSnatIpAddressesRefreshAhead, (Func<DateTime>)null);

		public static Dictionary<int, string> VendorIDToNameMap
		{
			get
			{
				return _VendorIDToNameMapRefreshAhead.Value.Value;
			}
		}

		public static Dictionary<string, Server> IPAddressToServerMap
		{
			get
			{
				return _IPAddressToServerMapRefreshAhead.Value.Value;
			}
		}

		public static HashSet<int> ServerIDsInAllowedGroups
		{
			get
			{
				return _ServerIDsInAllowedGroupsRefreshAhead.Value.Value;
			}
		}

		public static HashSet<string> DosArrestNetworksIpAddresses
		{
			get
			{
				return _DosArrestNetworksIpAddressesRefreshAhead.Value.Value;
			}
		}

		public static HashSet<string> SnatIpAddresses
		{
			get
			{
				return _SnatIpAddressesRefreshAhead.Value.Value;
			}
		}

		private static RefreshAhead<Dictionary<int, string>> GetVendorIDToNameMapRefreshAhead()
		{
			return RefreshAhead<Dictionary<int, string>>.ConstructAndPopulate(Settings.Default.VendorIDToNameMapRefreshInterval, () => GetAllVendorIDsAndNames());
		}

		private static RefreshAhead<Dictionary<string, Server>> GetIPAddressToServerMapRefreshAhead()
		{
			return RefreshAhead<Dictionary<string, Server>>.ConstructAndPopulate(Settings.Default.PrimaryIPAddressToServerMapRefreshInterval, (Func<Dictionary<string, Server>>)delegate
			{
				Dictionary<string, Server> dictionary = new Dictionary<string, Server>();
				foreach (Server current in GetLiveServerIDsAndServerTypeAndServerStatusAndVendorIDAndPrimaryIP())
				{
					dictionary[current.IPAddress] = current;
				}
				return dictionary;
			});
		}

		private static RefreshAhead<HashSet<int>> GetServerIDsInAllowedGroupsRefreshAhead()
		{
			return RefreshAhead<HashSet<int>>.ConstructAndPopulate(Settings.Default.ServerIDsInAllowedGroupsRefreshInterval, (Func<HashSet<int>>)delegate
			{
				int[] array = Settings.Default.AllowedServerGroupIDs.Split(',').Select(int.Parse).ToArray();
				HashSet<int> allServerIds = new HashSet<int>();
				int[] array2 = array;
				for (int i = 0; i < array2.Length; i++)
				{
					GetAllServersIDsForGroupID(array2[i]).ForEach(delegate(int item)
					{
						allServerIds.Add(item);
					});
				}
				return allServerIds;
			});
		}

		private static RefreshAhead<HashSet<string>> GetDosArrestNetworksIpAddressesRefreshAhead()
		{
			return RefreshAhead<HashSet<string>>.ConstructAndPopulate(Settings.Default.DosArrestNetworksRefreshInterval, (Func<HashSet<string>>)delegate
			{
				HashSet<string> hashSet = new HashSet<string>();
				foreach (string dosArrestNetworkPrefix in GetDosArrestNetworkPrefixes())
				{
					foreach (string current in IpPrefixParser.ComputeIpAddressesFromPrefix(dosArrestNetworkPrefix))
					{
						hashSet.Add(current);
					}
				}
				return hashSet;
			});
		}

		private static RefreshAhead<HashSet<string>> GetSnatIpAddressesRefreshAhead()
		{
			return RefreshAhead<HashSet<string>>.ConstructAndPopulate(Settings.Default.SnatIpAddressesRefreshInterval, (Func<HashSet<string>>)delegate
			{
				HashSet<string> hashSet = new HashSet<string>();
				if (Settings.Default.ReadSnatIpAddressesFromDatabase)
				{
					foreach (string networkSnatPrefix in GetNetworkSnatPrefixes())
					{
						foreach (string current in IpPrefixParser.ComputeIpAddressesFromPrefix(networkSnatPrefix))
						{
							hashSet.Add(current);
						}
					}
				}
				return hashSet;
			});
		}

		private static Dictionary<int, string> GetAllVendorIDsAndNames()
		{
			//IL_0020: Unknown result type (might be due to invalid IL or missing references)
			//IL_0026: Expected O, but got Unknown
			DbInfo dbInfo = new DbInfo(((RobloxDatabase)94).GetConnectionString(), "Vendors_GetAllVendorIDsAndNames");
			Dictionary<int, string> map = new Dictionary<int, string>();
			DbHelper dbHelper = new DbHelper(dbInfo.ConnectionString);
			try
			{
				using (SqlDataReader dataReader = dbHelper.ExecuteSQLReader(dbInfo.StoredProcedure, CommandType.StoredProcedure))
				{
					while (dataReader.Read())
					{
						int id = (int)dataReader["ID"];
						string name = (string)dataReader["Name"];
						map[id] = name;
					}
					return map;
				}
			}
			finally
			{
				if (dbHelper != null)
				{
					((IDisposable)dbHelper).Dispose();
				}
			}
		}

		private static List<int> GetAllServersIDsForGroupID(int serverGroupID)
		{
			//IL_0020: Unknown result type (might be due to invalid IL or missing references)
			//IL_0026: Expected O, but got Unknown
			List<int> list = new List<int>();
			DbInfo dbInfo = new DbInfo(((RobloxDatabase)94).GetConnectionString(), "ServerGroupMembers_GetAllServersIDsForGroupID");
			DbHelper dbHelper = new DbHelper(dbInfo.ConnectionString);
			try
			{
				dbHelper.SQLParameters.Add(new SqlParameter("@ServerGroupID", serverGroupID));
				using (SqlDataReader reader = dbHelper.ExecuteSQLReader(dbInfo.StoredProcedure, CommandType.StoredProcedure))
				{
					while (reader.Read())
					{
						int id = (int)reader["ServerID"];
						list.Add(id);
					}
					return list;
				}
			}
			finally
			{
				if (dbHelper != null)
				{
					((IDisposable)dbHelper).Dispose();
				}
			}
		}

		private static IEnumerable<Server> GetLiveServerIDsAndServerTypeAndServerStatusAndVendorIDAndPrimaryIP()
		{
			//IL_0031: Unknown result type (might be due to invalid IL or missing references)
			//IL_0038: Expected O, but got Unknown
			string[] serversStrings = InfrastructureCache.GetStringArrayFromRedis("Servers:GetLiveIPAddressesWithServerAndVendorInfo");
			if (serversStrings == null)
			{
				List<Server> list = new List<Server>();
				DbInfo dbInfo = new DbInfo(((RobloxDatabase)94).GetConnectionString(), "Servers_GetLiveIPAddressesWithServerAndVendorInfo");
				DbHelper dbHelper = new DbHelper(dbInfo.ConnectionString);
				try
				{
					using (SqlDataReader reader = dbHelper.ExecuteSQLReader(dbInfo.StoredProcedure, CommandType.StoredProcedure))
					{
						while (reader.Read())
						{
							object obj;
							if ((obj = reader["ServerStatusID"]) is int)
							{
								int serverStatusId = (int)obj;
								if ((obj = reader["ServerTypeID"]) is int)
								{
									int serverTypeId = (int)obj;
									Server server = new Server
									{
										ID = (int)reader["ID"],
										ServerStatusID = serverStatusId,
										ServerTypeID = serverTypeId,
										VendorID = (int)reader["VendorID"],
										IPAddress = (string)reader["IPAddress"]
									};
									list.Add(server);
								}
							}
						}
					}
				}
				finally
				{
					if (dbHelper != null)
					{
						((IDisposable)dbHelper).Dispose();
					}
				}
				serversStrings = ((IEnumerable<Server>)list).Select((Func<Server, string>)JsonConvert.SerializeObject).ToArray();
				InfrastructureCache.WriteStringArrayToRedis("Servers:GetLiveIPAddressesWithServerAndVendorInfo", serversStrings, _GetLiveIPAddressesWithServerAndVendorInfoExpiration);
				return list;
			}
			return ((IEnumerable<string>)serversStrings).Select((Func<string, Server>)JsonConvert.DeserializeObject<Server>);
		}

		private static List<string> GetDosArrestNetworkPrefixes()
		{
			//IL_0020: Unknown result type (might be due to invalid IL or missing references)
			//IL_0027: Expected O, but got Unknown
			//IL_00ad: Unknown result type (might be due to invalid IL or missing references)
			//IL_00b4: Expected O, but got Unknown
			List<string> result = new List<string>();
			DbInfo dbInfo1 = new DbInfo(((RobloxDatabase)94).GetConnectionString(), "DataCenters_GetDataCenterByName");
			DbHelper dbHelper = new DbHelper(dbInfo1.ConnectionString);
			int dosArrestDataSenterId;
			try
			{
				dbHelper.SQLParameters.Add(new SqlParameter("@Name", "DosArrest-Global"));
				using (SqlDataReader reader = dbHelper.ExecuteSQLReader("DataCenters_GetDataCenterByName", CommandType.StoredProcedure))
				{
					if (!reader.Read())
					{
						return new List<string>();
					}
					dosArrestDataSenterId = (int)reader["ID"];
				}
			}
			finally
			{
				if (dbHelper != null)
				{
					((IDisposable)dbHelper).Dispose();
				}
			}
			DbInfo dbInfo2 = new DbInfo(((RobloxDatabase)94).GetConnectionString(), "Networks_GetEnabledByDataCenterID");
			DbHelper dbHelper2 = new DbHelper(dbInfo2.ConnectionString);
			try
			{
				dbHelper2.SQLParameters.Add(new SqlParameter("@DataCenterID", dosArrestDataSenterId));
				using (SqlDataReader reader2 = dbHelper2.ExecuteSQLReader(dbInfo2.StoredProcedure, CommandType.StoredProcedure))
				{
					while (reader2.Read())
					{
						result.Add((string)reader2["NetworkPrefix"]);
					}
					return result;
				}
			}
			finally
			{
				if (dbHelper2 != null)
				{
					((IDisposable)dbHelper2).Dispose();
				}
			}
		}

		private static List<string> GetNetworkSnatPrefixes()
		{
			//IL_0020: Unknown result type (might be due to invalid IL or missing references)
			//IL_0026: Expected O, but got Unknown
			List<string> list = new List<string>();
			DbInfo dbInfo = new DbInfo(((RobloxDatabase)94).GetConnectionString(), "Networks_GetSNATRanges");
			DbHelper dbHelper = new DbHelper(dbInfo.ConnectionString);
			try
			{
				using (SqlDataReader reader = dbHelper.ExecuteSQLReader(dbInfo.StoredProcedure, CommandType.StoredProcedure))
				{
					while (reader.Read())
					{
						list.Add((string)reader["NetworkPrefix"]);
					}
					return list;
				}
			}
			finally
			{
				if (dbHelper != null)
				{
					((IDisposable)dbHelper).Dispose();
				}
			}
		}
	}
}
