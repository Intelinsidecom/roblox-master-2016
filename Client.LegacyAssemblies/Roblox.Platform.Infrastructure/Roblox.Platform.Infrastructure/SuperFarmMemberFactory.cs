using System;
using System.Collections.Generic;
using System.Data;
using System.Data.SqlClient;
using System.Linq;
using Roblox.MssqlDatabases;

namespace Roblox.Platform.Infrastructure
{
	public class SuperFarmMemberFactory
	{
		private class SuperFarmMemberDefinition : ISuperFarmMember
		{
			public int Id { get; internal set; }

			public int ServerId { get; internal set; }

			public int SuperFarmId { get; internal set; }
		}

		private static readonly TimeSpan _SuperFarmMemberByServerIdCacheDuration = TimeSpan.FromMinutes(60.0);

		private static readonly TimeSpan _SuperFarmMembersBySuperFarmIdCacheDuration = TimeSpan.FromMinutes(60.0);

		public ISuperFarmMember GetSuperFarmMemberByServerId(int serverId)
		{
			return InfrastructureCache.FetchItem(string.Format("GetSuperFarmMemberByServerId:{0}", serverId), _SuperFarmMemberByServerIdCacheDuration, delegate
			{
				SqlParameter[] array = new SqlParameter[1]
				{
					new SqlParameter("@ServerID", serverId)
				};
				IDictionary<string, object> dictionary = ((RobloxDatabase)94).ExecuteReader("SuperFarmMembers_GetByServerID", array, CommandType.StoredProcedure, (int?)null, (ApplicationIntent?)null).FirstOrDefault();
				return (dictionary != null) ? BuildSuperFarmMemberDefinition(dictionary) : null;
			});
		}

		public IEnumerable<ISuperFarmMember> GetSuperFarmMembersBySuperFarmId(int superFarmId)
		{
			return InfrastructureCache.FetchItem(string.Format("GetSuperFarmMembersBySuperFarmId:{0}", superFarmId), _SuperFarmMembersBySuperFarmIdCacheDuration, delegate
			{
				SqlParameter[] array = new SqlParameter[1]
				{
					new SqlParameter("@SuperFarmID", superFarmId)
				};
				return ((RobloxDatabase)94).ExecuteReader("SuperFarmMembers_GetBySuperFarmID", array, CommandType.StoredProcedure, (int?)null, (ApplicationIntent?)null).Select(BuildSuperFarmMemberDefinition);
			});
		}

		private static ISuperFarmMember BuildSuperFarmMemberDefinition(IDictionary<string, object> row)
		{
			return new SuperFarmMemberDefinition
			{
				Id = (int)row["ID"],
				ServerId = (int)row["ServerID"],
				SuperFarmId = (int)row["SuperFarmID"]
			};
		}
	}
}
