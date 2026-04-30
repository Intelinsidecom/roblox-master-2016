using System;
using System.Collections.Generic;
using System.Data;
using System.Data.SqlClient;
using Roblox.Data;
using Roblox.MssqlDatabases;

namespace Roblox.Platform.Infrastructure
{
	public class SuperFarmFactory
	{
		private class SuperFarmDefinition : ISuperFarm
		{
			public int Id { get; internal set; }

			public string Name { get; internal set; }
		}

		private static readonly TimeSpan _AllSuperFarmsListCacheDuration = TimeSpan.FromMinutes(15.0);

		private static readonly TimeSpan _IndividualSuperFarmCacheDuration = TimeSpan.FromDays(1.0);

		public IEnumerable<ISuperFarm> GetAllServerFarms()
		{
			return InfrastructureCache.FetchItem("GetAllSuperFarms:", _AllSuperFarmsListCacheDuration, () =>
			{
				List<SuperFarmDefinition> list = new List<SuperFarmDefinition>();
				DbInfo val = new DbInfo(((RobloxDatabase)94).GetConnectionString(), "[SuperFarms_GetAll]");
				DbHelper val2 = new DbHelper(val.ConnectionString);
				try
				{
					using (SqlDataReader sqlDataReader = val2.ExecuteSQLReader(val.StoredProcedure, CommandType.StoredProcedure))
					{
						while (sqlDataReader.Read())
						{
							SuperFarmDefinition item = BuildSuperFarmDefinition(sqlDataReader);
							list.Add(item);
						}
						return list;
					}
				}
				finally
				{
					if (val2 != null)
					{
						((IDisposable)val2).Dispose();
					}
				}
				return list;
			});
		}

		public ISuperFarm GetServerFarmById(int superFarmId)
		{
			return InfrastructureCache.FetchItem("SuperFarmID:" + superFarmId, _IndividualSuperFarmCacheDuration, () =>
			{
				DbInfo val = new DbInfo(((RobloxDatabase)94).GetConnectionString(), "[SuperFarms_GetByID]");
				DbHelper val2 = new DbHelper(val.ConnectionString);
				try
				{
					val2.SQLParameters.Add(new SqlParameter("@ID", superFarmId));
					using (SqlDataReader sqlDataReader = val2.ExecuteSQLReader(val.StoredProcedure, CommandType.StoredProcedure))
					{
						if (sqlDataReader.Read())
						{
							return BuildSuperFarmDefinition(sqlDataReader);
						}
					}
				}
				finally
				{
					if (val2 != null)
					{
						((IDisposable)val2).Dispose();
					}
				}
				return null;
			});
		}

		private static SuperFarmDefinition BuildSuperFarmDefinition(IDataRecord reader)
		{
			return new SuperFarmDefinition
			{
				Id = (int)reader["ID"],
				Name = (string)reader["Name"]
			};
		}
	}
}
