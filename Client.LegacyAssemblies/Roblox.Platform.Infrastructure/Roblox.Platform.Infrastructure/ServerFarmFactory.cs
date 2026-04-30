using System;
using System.Collections.Generic;
using System.Data;
using System.Data.SqlClient;
using Roblox.Data;
using Roblox.MssqlDatabases;

namespace Roblox.Platform.Infrastructure
{
	public class ServerFarmFactory
	{
		private class ServerFarmDefinition : IServerFarm
		{
			public short Id { get; internal set; }

			public string Name { get; internal set; }

			public int ServerTypeId { get; internal set; }

			public string Abbreviation { get; internal set; }
		}

		private static readonly TimeSpan _AllServerFarmsListCacheDuration = TimeSpan.FromMinutes(10.0);

		private static readonly TimeSpan _IndividualFarmCacheDuration = TimeSpan.FromDays(1.0);

		public IEnumerable<IServerFarm> GetAllServerFarms()
		{
			return InfrastructureCache.FetchItem("GetAllServerFarms:", _AllServerFarmsListCacheDuration, delegate
			{
				//IL_0020: Unknown result type (might be due to invalid IL or missing references)
				//IL_0026: Expected O, but got Unknown
				List<ServerFarmDefinition> list = new List<ServerFarmDefinition>();
				DbInfo val = new DbInfo(((RobloxDatabase)94).GetConnectionString(), "[ServerFarms_GetAllServerFarms]");
				DbHelper val2 = new DbHelper(val.ConnectionString);
				try
				{
					using (SqlDataReader sqlDataReader = val2.ExecuteSQLReader(val.StoredProcedure, CommandType.StoredProcedure))
					{
						while (sqlDataReader.Read())
						{
							ServerFarmDefinition item = BuildServerDefinition(sqlDataReader);
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
			});
		}

		public IServerFarm GetServerFarmById(short serverFarmId)
		{
			return InfrastructureCache.FetchItem("ServerFarmID:" + serverFarmId, _IndividualFarmCacheDuration, delegate
			{
				//IL_001a: Unknown result type (might be due to invalid IL or missing references)
				//IL_0020: Expected O, but got Unknown
				DbInfo val = new DbInfo(((RobloxDatabase)94).GetConnectionString(), "[ServerFarms_GetByID]");
				DbHelper val2 = new DbHelper(val.ConnectionString);
				try
				{
					val2.SQLParameters.Add(new SqlParameter("@ID", serverFarmId));
					using (SqlDataReader sqlDataReader = val2.ExecuteSQLReader(val.StoredProcedure, CommandType.StoredProcedure))
					{
						if (sqlDataReader.Read())
						{
							return BuildServerDefinition(sqlDataReader);
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
				return (ServerFarmDefinition)null;
			});
		}

		private static ServerFarmDefinition BuildServerDefinition(IDataRecord reader)
		{
			return new ServerFarmDefinition
			{
				Id = (short)reader["ID"],
				Name = (string)reader["Name"],
				Abbreviation = (reader["Abbreviation"] as string),
				ServerTypeId = (int)reader["ServerTypeID"]
			};
		}
	}
}
