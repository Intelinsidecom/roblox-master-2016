using System;
using System.Collections.Generic;
using System.Data;
using System.Data.SqlClient;
using System.Linq;
using Roblox.Entities.Mssql;
using Roblox.MssqlDatabases;

namespace Roblox.Platform.Infrastructure
{
	public class DatacenterFactory : IDatacenterFactory
	{
		internal class DatacenterDefinition : IDatacenter
		{
			public int Id { get; internal set; }

			public string Name { get; internal set; }

			public int VendorId { get; internal set; }

			public double? Latitude { get; internal set; }

			public double? Longitude { get; internal set; }
		}

		private static readonly TimeSpan _IndividualDataCenterCacheDuration = TimeSpan.FromDays(1.0);

		public IDatacenter GetDatacenterById(int id)
		{
			return InfrastructureCache.FetchItem("GetDatacenterById:" + id, _IndividualDataCenterCacheDuration, () => RobloxDataAccessPatternExtensions.Get<DatacenterDefinition, int>((RobloxDatabase)94, "DataCenters_GetDataCenterByID", id, (Func<IDictionary<string, object>, DatacenterDefinition>)BuildDatacenterDefinition, (int?)null, false));
		}

		public IReadOnlyCollection<int> GetDatacenterIdsByDatacenterGroupIdNoCaching(int datacenterGroupId)
		{
			SqlParameter[] parameters = new SqlParameter[1]
			{
				new SqlParameter("@DataCenterGroupID", datacenterGroupId)
			};
			return (IReadOnlyCollection<int>)(object)(from r in ((RobloxDatabase)94).ExecuteReader("DataCenterGroupMembers_GetAllDataCentersIDsForGroupID", parameters, CommandType.StoredProcedure, (int?)null, (ApplicationIntent?)null)
				select (int)r["DatacenterID"]).ToArray();
		}

		public IReadOnlyCollection<IDatacenter> GetDatacentersByDatacenterGroupIdNoCaching(int datacenterGroupId)
		{
			return (IReadOnlyCollection<IDatacenter>)(object)GetDatacenterIdsByDatacenterGroupIdNoCaching(datacenterGroupId).Select(GetDatacenterById).ToArray();
		}

		public IReadOnlyCollection<IDatacenter> GetDatacentersByDatacenterGroupNoCaching(DatacenterGroup datacenterGroup)
		{
			return GetDatacentersByDatacenterGroupIdNoCaching((int)datacenterGroup);
		}

		public IReadOnlyCollection<int> GetDatacentersIdsByDatacenterGroupNoCaching(DatacenterGroup datacenterGroup)
		{
			return GetDatacenterIdsByDatacenterGroupIdNoCaching((int)datacenterGroup);
		}

		public int GetDatacenterIdByGameRelayIpAddress(string ip)
		{
			int dataCenterId;
			GamesRelayDataAccess.GameRelayIpAddressToDatacenterIdMap.TryGetValue(ip, out dataCenterId);
			return dataCenterId;
		}

		private static DatacenterDefinition BuildDatacenterDefinition(IDictionary<string, object> reader)
		{
			if (reader == null)
			{
				return null;
			}
			return new DatacenterDefinition
			{
				Id = (int)reader["ID"],
				Name = (string)reader["Name"],
				VendorId = (int)reader["VendorID"],
				Latitude = (reader["Latitude"] as double?),
				Longitude = (reader["Longitude"] as double?)
			};
		}
	}
}
