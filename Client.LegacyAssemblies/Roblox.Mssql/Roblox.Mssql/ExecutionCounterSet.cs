using System.Runtime.CompilerServices;
using Roblox.Instrumentation;

namespace Roblox.Mssql
{
	internal sealed class ExecutionCounterSet
	{
		[CompilerGenerated]
		private readonly IAverageValueCounter _003CAverageResponseTime_003Ek__BackingField;

		[CompilerGenerated]
		private readonly IRateOfCountsPerSecondCounter _003CFailuresPerSecond_003Ek__BackingField;

		[CompilerGenerated]
		private readonly IRawValueCounter _003CRequestsOutstanding_003Ek__BackingField;

		[CompilerGenerated]
		private readonly IRateOfCountsPerSecondCounter _003CRequestsPerSecond_003Ek__BackingField;

		public IAverageValueCounter AverageResponseTime
		{
			[CompilerGenerated]
			get
			{
				return _003CAverageResponseTime_003Ek__BackingField;
			}
		}

		public IRateOfCountsPerSecondCounter FailuresPerSecond
		{
			[CompilerGenerated]
			get
			{
				return _003CFailuresPerSecond_003Ek__BackingField;
			}
		}

		public IRawValueCounter RequestsOutstanding
		{
			[CompilerGenerated]
			get
			{
				return _003CRequestsOutstanding_003Ek__BackingField;
			}
		}

		public IRateOfCountsPerSecondCounter RequestsPerSecond
		{
			[CompilerGenerated]
			get
			{
				return _003CRequestsPerSecond_003Ek__BackingField;
			}
		}

		public ExecutionCounterSet(IRateOfCountsPerSecondCounter requestsPerSecond, IRateOfCountsPerSecondCounter failuresPerSecond, IRawValueCounter requestsOutstanding, IAverageValueCounter averageResponseTime)
		{
			_003CRequestsPerSecond_003Ek__BackingField = requestsPerSecond;
			_003CFailuresPerSecond_003Ek__BackingField = failuresPerSecond;
			_003CRequestsOutstanding_003Ek__BackingField = requestsOutstanding;
			_003CAverageResponseTime_003Ek__BackingField = averageResponseTime;
		}
	}
}
