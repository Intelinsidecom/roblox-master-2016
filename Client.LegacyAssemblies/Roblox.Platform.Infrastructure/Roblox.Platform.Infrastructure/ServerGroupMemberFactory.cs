using System;
using System.Collections.Generic;
using System.Data;
using System.Data.SqlClient;
using System.Linq;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using Roblox.MssqlDatabases;

namespace Roblox.Platform.Infrastructure
{
	public class ServerGroupMemberFactory : IServerGroupMemberFactory
	{
		private sealed class ServerGroupMember : IServerGroupMember, IEquatable<IServerGroupMember>
		{
			public int Id { get; internal set; }

			public int ServerId { get; internal set; }

			public ServerGroup ServerGroup { get; internal set; }

			public DateTime CreatedUtc { get; internal set; }

			public override int GetHashCode()
			{
				return Id;
			}

			public override bool Equals(object obj)
			{
				IServerGroupMember serverGroupMember;
				if ((serverGroupMember = obj as IServerGroupMember) != null)
				{
					return Equals(serverGroupMember);
				}
				return false;
			}

			public bool Equals(IServerGroupMember other)
			{
				return Id == ((other != null) ? new int?(other.Id) : ((int?)null));
			}
		}

		[StructLayout(LayoutKind.Auto)]
		[CompilerGenerated]
		private struct _003C_003Ec__DisplayClass9_0<T>
		{
			public int? serverGroupId;

			public int serverId;
		}

		private const string _GameServerMemberCacheKeyPrefix = "GameServerMembersBy";

		private static readonly TimeSpan _ServerGroupMemberCacheDuration = TimeSpan.FromMinutes(20.0);

		public IReadOnlyCollection<IServerGroupMember> GetServerGroupMembersByServerId(int serverId)
		{
			return GetServerGroupMembersWithCaching(() => GetServerGroupMembersByServerIdWithNoCaching(serverId), serverId);
		}

		public IReadOnlyCollection<IServerGroupMember> GetServerGroupMembersByServerIdWithNoCaching(int serverId)
		{
			SqlParameter[] parameters = new SqlParameter[1]
			{
				new SqlParameter("@ServerID", serverId)
			};
			return ((RobloxDatabase)94).ExecuteReader("ServerGroupMembers_GetByServerID", parameters, CommandType.StoredProcedure, (int?)null, (ApplicationIntent?)null).Select(BuildServerGroupMember).ToList();
		}

		public IServerGroupMember GetServerGroupMemberByServerIdAndServerGroup(int serverId, ServerGroup serverGroup)
		{
			return GetServerGroupMemberByServerIdAndServerGroupId(serverId, (int)serverGroup);
		}

		public IServerGroupMember GetServerGroupMemberByServerIdAndServerGroupWithNoCaching(int serverId, ServerGroup serverGroup)
		{
			return GetServerGroupMemberByServerIdAndServerGroupIdWithNoCaching(serverId, (int)serverGroup);
		}

		public IServerGroupMember GetServerGroupMemberByServerIdAndServerGroupId(int serverId, int serverGroupId)
		{
			return GetServerGroupMembersWithCaching(() => GetServerGroupMemberByServerIdAndServerGroupIdWithNoCaching(serverId, serverGroupId), serverId, serverGroupId);
		}

		public IServerGroupMember GetServerGroupMemberByServerIdAndServerGroupIdWithNoCaching(int serverId, int serverGroupId)
		{
			SqlParameter[] parameters = new SqlParameter[2]
			{
				new SqlParameter("@ServerID", serverId),
				new SqlParameter("@ServerGroupID", serverGroupId)
			};
			return ((RobloxDatabase)94).ExecuteReader("ServerGroupMembers_GetServerGroupMemberByServerAndServerGroup", parameters, CommandType.StoredProcedure, (int?)null, (ApplicationIntent?)null).Select(BuildServerGroupMember).FirstOrDefault();
		}

		private static T GetServerGroupMembersWithCaching<T>(Func<T> getter, int serverId, int? serverGroupId = null)
		{
			string cacheKey = serverGroupId.HasValue
				? $"{_GameServerMemberCacheKeyPrefix}ServerId:{serverId}_ServerGroupId:{serverGroupId}"
				: $"{_GameServerMemberCacheKeyPrefix}ServerId:{serverId}";
			return InfrastructureCache.FetchItem(cacheKey, _ServerGroupMemberCacheDuration, getter);
		}

		private static IServerGroupMember BuildServerGroupMember(IDictionary<string, object> row)
		{
			return new ServerGroupMember
			{
				Id = (int)row["ID"],
				ServerId = (int)row["ServerID"],
				ServerGroup = (ServerGroup)row["ServerGroupID"],
				CreatedUtc = DateTimeUtils.ConvertCentralDateTimeToUtc((DateTime)row["Created"])
			};
		}
	}
}
