using System;
using System.Collections.Generic;
using System.Data;
using System.Data.SqlClient;
using System.Linq;
using Roblox.Data;
using Roblox.MssqlDatabases;

namespace Roblox.Platform.Infrastructure
{
	public class ServerGroupFactory
	{
		private class ServerGroupDefinition : IServerGroup
		{
			public int Id { get; internal set; }

			public int GroupTypeId { get; internal set; }

			public string Name { get; internal set; }

			public string Description { get; internal set; }
		}

		private static readonly TimeSpan _GroupListCacheDuration = TimeSpan.FromHours(1.0);

		public IEnumerable<IServerGroup> GetAllServerGroups()
		{
			return InfrastructureCache.FetchItem("AllServerGroups", _GroupListCacheDuration, delegate
			{
				List<IServerGroup> list = new List<IServerGroup>();
				DbInfo val = new DbInfo(((RobloxDatabase)94).GetConnectionString(), "ServerGroups_GetAllServerGroups");
				DbHelper val2 = new DbHelper(val.ConnectionString);
				try
				{
					using (SqlDataReader sqlDataReader = val2.ExecuteSQLReader(val.StoredProcedure, CommandType.StoredProcedure))
					{
						while (sqlDataReader.Read())
						{
							ServerGroupDefinition item = BuildServerGroup(sqlDataReader);
							list.Add(item);
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
				list.Sort((IServerGroup a, IServerGroup b) => string.Compare(a.Name, b.Name, StringComparison.Ordinal));
				return list;
			});
		}

		public IReadOnlyCollection<int> GetServerGroupIdsByServerId(int serverId)
		{
			return InfrastructureCache.FetchItem("GetServerGroupIdsByServerId:" + serverId, _GroupListCacheDuration, delegate
			{
				SqlParameter[] array = new SqlParameter[1]
				{
					new SqlParameter("@ServerID", serverId)
				};
				DbInfo dbInfo = new DbInfo(((RobloxDatabase)94).GetConnectionString(), "ServerGroupMembers_GetServerGroupIDsByServerID", array);
				DbHelper dbHelper = new DbHelper(dbInfo.ConnectionString);
				using (SqlDataReader reader = dbHelper.ExecuteSQLReader(dbInfo.StoredProcedure, CommandType.StoredProcedure))
				{
					List<int> result = new List<int>();
					while (reader.Read())
					{
						result.Add((int)reader["ServerGroupID"]);
					}
					return result;
				}
			});
		}

		private static ServerGroupDefinition BuildServerGroup(IDataRecord reader)
		{
			return new ServerGroupDefinition
			{
				Id = (int)reader["ID"],
				GroupTypeId = (int)reader["GroupTypeID"],
				Description = (reader["Description"] as string),
				Name = (string)reader["Name"]
			};
		}
	}
}
