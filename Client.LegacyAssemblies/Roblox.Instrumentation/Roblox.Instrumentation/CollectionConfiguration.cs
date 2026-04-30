using System.Collections.Generic;
using System.Runtime.CompilerServices;

namespace Roblox.Instrumentation
{
	internal class CollectionConfiguration : ICollectionConfiguration
	{
		[CompilerGenerated]
		private readonly string _003CHostIdentifier_003Ek__BackingField;

		[CompilerGenerated]
		private readonly string _003CFarmIdentifier_003Ek__BackingField;

		[CompilerGenerated]
		private readonly string _003CSuperFarmIdentifier_003Ek__BackingField;

		[CompilerGenerated]
		private readonly string _003CInfluxDatabaseName_003Ek__BackingField;

		[CompilerGenerated]
		private readonly InfluxCredentials _003CInfluxCredentials_003Ek__BackingField;

		private readonly IReadOnlyList<string> _InfluxEndpoints;

		public string HostIdentifier
		{
			[CompilerGenerated]
			get
			{
				return _003CHostIdentifier_003Ek__BackingField;
			}
		}

		public string FarmIdentifier
		{
			[CompilerGenerated]
			get
			{
				return _003CFarmIdentifier_003Ek__BackingField;
			}
		}

		public string SuperFarmIdentifier
		{
			[CompilerGenerated]
			get
			{
				return _003CSuperFarmIdentifier_003Ek__BackingField;
			}
		}

		public string InfluxDatabaseName
		{
			[CompilerGenerated]
			get
			{
				return _003CInfluxDatabaseName_003Ek__BackingField;
			}
		}

		public InfluxCredentials InfluxCredentials
		{
			[CompilerGenerated]
			get
			{
				return _003CInfluxCredentials_003Ek__BackingField;
			}
		}

		public CollectionConfiguration(string hostIdentifier, string farmIdentifier, string superFarmIdentifier, string influxDatabaseName, IReadOnlyList<string> influxEndpoints, InfluxCredentials influxCredentials)
		{
			_003CHostIdentifier_003Ek__BackingField = hostIdentifier;
			_003CFarmIdentifier_003Ek__BackingField = farmIdentifier;
			_003CSuperFarmIdentifier_003Ek__BackingField = superFarmIdentifier;
			_003CInfluxDatabaseName_003Ek__BackingField = influxDatabaseName;
			_InfluxEndpoints = influxEndpoints;
			_003CInfluxCredentials_003Ek__BackingField = influxCredentials;
		}

		public IReadOnlyCollection<string> GetInfluxEndpointsForCategory(string category)
		{
			return _InfluxEndpoints;
		}
	}
}
