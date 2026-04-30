using System.Collections.Generic;
using System.Runtime.CompilerServices;

namespace Roblox.Instrumentation.Infrastructure
{
	internal class InfrastructureServiceCollectionConfiguration : ICollectionConfiguration
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

		private readonly IReadOnlyCollection<string> _InfluxEndpoints;

		private readonly bool _IsShardingEnabled;

		private readonly InfluxOutputSharder _InfluxOutputSharder;

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

		public InfrastructureServiceCollectionConfiguration(string hostIdentifier, string farmIdentifier, string superFarmIdentifier, string influxDatabaseName, IReadOnlyCollection<string> influxEndpoints, InfluxCredentials influxCredentials, bool isShardingEnabled)
		{
			_InfluxEndpoints = influxEndpoints;
			_IsShardingEnabled = isShardingEnabled;
			_003CHostIdentifier_003Ek__BackingField = hostIdentifier;
			_003CFarmIdentifier_003Ek__BackingField = farmIdentifier;
			_003CSuperFarmIdentifier_003Ek__BackingField = superFarmIdentifier;
			_003CInfluxDatabaseName_003Ek__BackingField = influxDatabaseName;
			_003CInfluxCredentials_003Ek__BackingField = influxCredentials;
			if (_IsShardingEnabled)
			{
				_InfluxOutputSharder = new InfluxOutputSharder(influxEndpoints);
			}
		}

		public IReadOnlyCollection<string> GetInfluxEndpointsForCategory(string category)
		{
			if (_IsShardingEnabled)
			{
				return (IReadOnlyCollection<string>)(object)new string[1] { _InfluxOutputSharder.GetInfluxUrl(category) };
			}
			return _InfluxEndpoints;
		}
	}
}
