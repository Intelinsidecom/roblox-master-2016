using System;
using System.Runtime.CompilerServices;
using Roblox.Instrumentation;

namespace BeIT.MemCached
{
	internal class MemcachedMonitor
	{
		private const string _Category = "Roblox.MemcachedV2";

		[CompilerGenerated]
		private readonly IRawValueCounter _003CPoolSizeForAllHosts_003Ek__BackingField;

		[CompilerGenerated]
		private readonly IRawValueCounter _003CAveragePoolSizePerHost_003Ek__BackingField;

		[CompilerGenerated]
		private readonly IRawValueCounter _003CAverageNonDisposedCreatedSocketsPerHost_003Ek__BackingField;

		[CompilerGenerated]
		private readonly IRawValueCounter _003CMaximumNonDisposedCreatedSocketsPerHost_003Ek__BackingField;

		[CompilerGenerated]
		private readonly IRateOfCountsPerSecondCounter _003CAcquireAttemptsPerSecond_003Ek__BackingField;

		[CompilerGenerated]
		private readonly IRateOfCountsPerSecondCounter _003CAcquireSocketCreationSuccessesPerSecond_003Ek__BackingField;

		[CompilerGenerated]
		private readonly IRateOfCountsPerSecondCounter _003CAcquireSocketCreationFailuresPerSecond_003Ek__BackingField;

		[CompilerGenerated]
		private readonly IRateOfCountsPerSecondCounter _003CAcquireSocketCreationAbortDueToMaximumCountReachedPerSecond_003Ek__BackingField;

		[CompilerGenerated]
		private readonly IRateOfCountsPerSecondCounter _003CAcquireSocketCreationAbortDueToRateLimitPerSecond_003Ek__BackingField;

		[CompilerGenerated]
		private readonly IRateOfCountsPerSecondCounter _003CAcquireSuccessesPerSecond_003Ek__BackingField;

		[CompilerGenerated]
		private readonly IRateOfCountsPerSecondCounter _003CAcquireFailuresPerSecond_003Ek__BackingField;

		[CompilerGenerated]
		private readonly IRateOfCountsPerSecondCounter _003CAcquireSocketCreationAbortedDueToBrokenCircuit_003Ek__BackingField;

		[CompilerGenerated]
		private readonly IAverageValueCounter _003CAcquireSocketCreationAverageTimeInMilliseconds_003Ek__BackingField;

		[CompilerGenerated]
		private readonly IRateOfCountsPerSecondCounter _003CAcquireSocketCreationTimeoutsPerSecond_003Ek__BackingField;

		[CompilerGenerated]
		private readonly IRateOfCountsPerSecondCounter _003CReturnAttemptsPerSecond_003Ek__BackingField;

		[CompilerGenerated]
		private readonly IRateOfCountsPerSecondCounter _003CReturnDirtySocketsPerSecond_003Ek__BackingField;

		[CompilerGenerated]
		private readonly IRateOfCountsPerSecondCounter _003CReturnSuccessesPerSecond_003Ek__BackingField;

		[CompilerGenerated]
		private readonly IRateOfCountsPerSecondCounter _003CReturnPoolIsFullPerSecond_003Ek__BackingField;

		[CompilerGenerated]
		private readonly IRateOfCountsPerSecondCounter _003CReturnSocketsDestroyedPerSecond_003Ek__BackingField;

		[CompilerGenerated]
		private readonly IRateOfCountsPerSecondCounter _003CExecutionAttemptsPerSecond_003Ek__BackingField;

		[CompilerGenerated]
		private readonly IRateOfCountsPerSecondCounter _003CExecutionSuccessesPerSecond_003Ek__BackingField;

		[CompilerGenerated]
		private readonly IRateOfCountsPerSecondCounter _003CExecutionErrorsPerSecond_003Ek__BackingField;

		[CompilerGenerated]
		private readonly IRateOfCountsPerSecondCounter _003CExecutionFailuresToAcquirePerSecond_003Ek__BackingField;

		[CompilerGenerated]
		private readonly IAverageValueCounter _003CAverageResponseTimeInMilliseconds_003Ek__BackingField;

		[CompilerGenerated]
		private readonly IRateOfCountsPerSecondCounter _003CExecutionTimeoutsPerSecond_003Ek__BackingField;

		[CompilerGenerated]
		private readonly IRateOfCountsPerSecondCounter _003CExecutionIOErrorsPerSecond_003Ek__BackingField;

		[CompilerGenerated]
		private readonly IRateOfCountsPerSecondCounter _003CExecutionCircuitBreakerErrorsPerSecond_003Ek__BackingField;

		[CompilerGenerated]
		private readonly IRateOfCountsPerSecondCounter _003CExecutionNotSupportedErrorsPerSecond_003Ek__BackingField;

		[CompilerGenerated]
		private readonly IRateOfCountsPerSecondCounter _003CReadAttemptsPerSecond_003Ek__BackingField;

		[CompilerGenerated]
		private readonly IRateOfCountsPerSecondCounter _003CReadErrorsPerSecond_003Ek__BackingField;

		[CompilerGenerated]
		private readonly IRateOfCountsPerSecondCounter _003CWriteAttemptsPerSecond_003Ek__BackingField;

		[CompilerGenerated]
		private readonly IRateOfCountsPerSecondCounter _003CWriteErrorsPerSecond_003Ek__BackingField;

		[CompilerGenerated]
		private readonly IRateOfCountsPerSecondCounter _003CRoundRobinExecutionFailuresPerSecond_003Ek__BackingField;

		[CompilerGenerated]
		private readonly IRateOfCountsPerSecondCounter _003CRoundRobinExecutionSuccessesPerSecond_003Ek__BackingField;

		[CompilerGenerated]
		private readonly IRateOfCountsPerSecondCounter _003CGetCommandReturnedValueMismatchedPerSecond_003Ek__BackingField;

		[CompilerGenerated]
		private readonly IRateOfCountsPerSecondCounter _003CPooledSocketDisposedPerSecond_003Ek__BackingField;

		[CompilerGenerated]
		private readonly IRateOfCountsPerSecondCounter _003CPooledSocketExplicitlyClosedPerSecond_003Ek__BackingField;

		[CompilerGenerated]
		private readonly IRateOfCountsPerSecondCounter _003CPooledSocketReadLeftoverBytesReadAttemptsPerSecond_003Ek__BackingField;

		[CompilerGenerated]
		private readonly IRateOfCountsPerSecondCounter _003CPooledSocketForceResetAnyBytesReturnedPerSecond_003Ek__BackingField;

		[CompilerGenerated]
		private readonly IRateOfCountsPerSecondCounter _003CPooledSocketForceResetNoBytesReturnedPerSecond_003Ek__BackingField;

		[CompilerGenerated]
		private readonly IRateOfCountsPerSecondCounter _003CPooledSocketForceResetExceptionsPerSecond_003Ek__BackingField;

		[CompilerGenerated]
		private readonly IFractionCounter _003CSetValuesCompressedFraction_003Ek__BackingField;

		[CompilerGenerated]
		private readonly IFractionCounter _003CReadValuesCompressedFraction_003Ek__BackingField;

		internal IRawValueCounter PoolSizeForAllHosts
		{
			[CompilerGenerated]
			get
			{
				return _003CPoolSizeForAllHosts_003Ek__BackingField;
			}
		}

		internal IRawValueCounter AveragePoolSizePerHost
		{
			[CompilerGenerated]
			get
			{
				return _003CAveragePoolSizePerHost_003Ek__BackingField;
			}
		}

		internal IRawValueCounter AverageNonDisposedCreatedSocketsPerHost
		{
			[CompilerGenerated]
			get
			{
				return _003CAverageNonDisposedCreatedSocketsPerHost_003Ek__BackingField;
			}
		}

		internal IRawValueCounter MaximumNonDisposedCreatedSocketsPerHost
		{
			[CompilerGenerated]
			get
			{
				return _003CMaximumNonDisposedCreatedSocketsPerHost_003Ek__BackingField;
			}
		}

		internal IRateOfCountsPerSecondCounter AcquireAttemptsPerSecond
		{
			[CompilerGenerated]
			get
			{
				return _003CAcquireAttemptsPerSecond_003Ek__BackingField;
			}
		}

		internal IRateOfCountsPerSecondCounter AcquireSocketCreationSuccessesPerSecond
		{
			[CompilerGenerated]
			get
			{
				return _003CAcquireSocketCreationSuccessesPerSecond_003Ek__BackingField;
			}
		}

		internal IRateOfCountsPerSecondCounter AcquireSocketCreationFailuresPerSecond
		{
			[CompilerGenerated]
			get
			{
				return _003CAcquireSocketCreationFailuresPerSecond_003Ek__BackingField;
			}
		}

		internal IRateOfCountsPerSecondCounter AcquireSocketCreationAbortDueToMaximumCountReachedPerSecond
		{
			[CompilerGenerated]
			get
			{
				return _003CAcquireSocketCreationAbortDueToMaximumCountReachedPerSecond_003Ek__BackingField;
			}
		}

		internal IRateOfCountsPerSecondCounter AcquireSocketCreationAbortDueToRateLimitPerSecond
		{
			[CompilerGenerated]
			get
			{
				return _003CAcquireSocketCreationAbortDueToRateLimitPerSecond_003Ek__BackingField;
			}
		}

		internal IRateOfCountsPerSecondCounter AcquireSuccessesPerSecond
		{
			[CompilerGenerated]
			get
			{
				return _003CAcquireSuccessesPerSecond_003Ek__BackingField;
			}
		}

		internal IRateOfCountsPerSecondCounter AcquireFailuresPerSecond
		{
			[CompilerGenerated]
			get
			{
				return _003CAcquireFailuresPerSecond_003Ek__BackingField;
			}
		}

		internal IRateOfCountsPerSecondCounter AcquireSocketCreationAbortedDueToBrokenCircuit
		{
			[CompilerGenerated]
			get
			{
				return _003CAcquireSocketCreationAbortedDueToBrokenCircuit_003Ek__BackingField;
			}
		}

		internal IAverageValueCounter AcquireSocketCreationAverageTimeInMilliseconds
		{
			[CompilerGenerated]
			get
			{
				return _003CAcquireSocketCreationAverageTimeInMilliseconds_003Ek__BackingField;
			}
		}

		internal IRateOfCountsPerSecondCounter AcquireSocketCreationTimeoutsPerSecond
		{
			[CompilerGenerated]
			get
			{
				return _003CAcquireSocketCreationTimeoutsPerSecond_003Ek__BackingField;
			}
		}

		internal IRateOfCountsPerSecondCounter ReturnAttemptsPerSecond
		{
			[CompilerGenerated]
			get
			{
				return _003CReturnAttemptsPerSecond_003Ek__BackingField;
			}
		}

		internal IRateOfCountsPerSecondCounter ReturnDirtySocketsPerSecond
		{
			[CompilerGenerated]
			get
			{
				return _003CReturnDirtySocketsPerSecond_003Ek__BackingField;
			}
		}

		internal IRateOfCountsPerSecondCounter ReturnSuccessesPerSecond
		{
			[CompilerGenerated]
			get
			{
				return _003CReturnSuccessesPerSecond_003Ek__BackingField;
			}
		}

		internal IRateOfCountsPerSecondCounter ReturnPoolIsFullPerSecond
		{
			[CompilerGenerated]
			get
			{
				return _003CReturnPoolIsFullPerSecond_003Ek__BackingField;
			}
		}

		internal IRateOfCountsPerSecondCounter ReturnSocketsDestroyedPerSecond
		{
			[CompilerGenerated]
			get
			{
				return _003CReturnSocketsDestroyedPerSecond_003Ek__BackingField;
			}
		}

		internal IRateOfCountsPerSecondCounter ExecutionAttemptsPerSecond
		{
			[CompilerGenerated]
			get
			{
				return _003CExecutionAttemptsPerSecond_003Ek__BackingField;
			}
		}

		internal IRateOfCountsPerSecondCounter ExecutionSuccessesPerSecond
		{
			[CompilerGenerated]
			get
			{
				return _003CExecutionSuccessesPerSecond_003Ek__BackingField;
			}
		}

		internal IRateOfCountsPerSecondCounter ExecutionErrorsPerSecond
		{
			[CompilerGenerated]
			get
			{
				return _003CExecutionErrorsPerSecond_003Ek__BackingField;
			}
		}

		internal IRateOfCountsPerSecondCounter ExecutionFailuresToAcquirePerSecond
		{
			[CompilerGenerated]
			get
			{
				return _003CExecutionFailuresToAcquirePerSecond_003Ek__BackingField;
			}
		}

		internal IAverageValueCounter AverageResponseTimeInMilliseconds
		{
			[CompilerGenerated]
			get
			{
				return _003CAverageResponseTimeInMilliseconds_003Ek__BackingField;
			}
		}

		internal IRateOfCountsPerSecondCounter ExecutionTimeoutsPerSecond
		{
			[CompilerGenerated]
			get
			{
				return _003CExecutionTimeoutsPerSecond_003Ek__BackingField;
			}
		}

		internal IRateOfCountsPerSecondCounter ExecutionIOErrorsPerSecond
		{
			[CompilerGenerated]
			get
			{
				return _003CExecutionIOErrorsPerSecond_003Ek__BackingField;
			}
		}

		internal IRateOfCountsPerSecondCounter ExecutionCircuitBreakerErrorsPerSecond
		{
			[CompilerGenerated]
			get
			{
				return _003CExecutionCircuitBreakerErrorsPerSecond_003Ek__BackingField;
			}
		}

		internal IRateOfCountsPerSecondCounter ExecutionNotSupportedErrorsPerSecond
		{
			[CompilerGenerated]
			get
			{
				return _003CExecutionNotSupportedErrorsPerSecond_003Ek__BackingField;
			}
		}

		internal IRateOfCountsPerSecondCounter ReadAttemptsPerSecond
		{
			[CompilerGenerated]
			get
			{
				return _003CReadAttemptsPerSecond_003Ek__BackingField;
			}
		}

		internal IRateOfCountsPerSecondCounter ReadErrorsPerSecond
		{
			[CompilerGenerated]
			get
			{
				return _003CReadErrorsPerSecond_003Ek__BackingField;
			}
		}

		internal IRateOfCountsPerSecondCounter WriteAttemptsPerSecond
		{
			[CompilerGenerated]
			get
			{
				return _003CWriteAttemptsPerSecond_003Ek__BackingField;
			}
		}

		internal IRateOfCountsPerSecondCounter WriteErrorsPerSecond
		{
			[CompilerGenerated]
			get
			{
				return _003CWriteErrorsPerSecond_003Ek__BackingField;
			}
		}

		internal IRateOfCountsPerSecondCounter RoundRobinExecutionFailuresPerSecond
		{
			[CompilerGenerated]
			get
			{
				return _003CRoundRobinExecutionFailuresPerSecond_003Ek__BackingField;
			}
		}

		internal IRateOfCountsPerSecondCounter RoundRobinExecutionSuccessesPerSecond
		{
			[CompilerGenerated]
			get
			{
				return _003CRoundRobinExecutionSuccessesPerSecond_003Ek__BackingField;
			}
		}

		internal IRateOfCountsPerSecondCounter GetCommandReturnedValueMismatchedPerSecond
		{
			[CompilerGenerated]
			get
			{
				return _003CGetCommandReturnedValueMismatchedPerSecond_003Ek__BackingField;
			}
		}

		internal IRateOfCountsPerSecondCounter PooledSocketDisposedPerSecond
		{
			[CompilerGenerated]
			get
			{
				return _003CPooledSocketDisposedPerSecond_003Ek__BackingField;
			}
		}

		internal IRateOfCountsPerSecondCounter PooledSocketExplicitlyClosedPerSecond
		{
			[CompilerGenerated]
			get
			{
				return _003CPooledSocketExplicitlyClosedPerSecond_003Ek__BackingField;
			}
		}

		internal IRateOfCountsPerSecondCounter PooledSocketReadLeftoverBytesReadAttemptsPerSecond
		{
			[CompilerGenerated]
			get
			{
				return _003CPooledSocketReadLeftoverBytesReadAttemptsPerSecond_003Ek__BackingField;
			}
		}

		internal IRateOfCountsPerSecondCounter PooledSocketForceResetAnyBytesReturnedPerSecond
		{
			[CompilerGenerated]
			get
			{
				return _003CPooledSocketForceResetAnyBytesReturnedPerSecond_003Ek__BackingField;
			}
		}

		internal IRateOfCountsPerSecondCounter PooledSocketForceResetNoBytesReturnedPerSecond
		{
			[CompilerGenerated]
			get
			{
				return _003CPooledSocketForceResetNoBytesReturnedPerSecond_003Ek__BackingField;
			}
		}

		internal IRateOfCountsPerSecondCounter PooledSocketForceResetExceptionsPerSecond
		{
			[CompilerGenerated]
			get
			{
				return _003CPooledSocketForceResetExceptionsPerSecond_003Ek__BackingField;
			}
		}

		internal IFractionCounter SetValuesCompressedFraction
		{
			[CompilerGenerated]
			get
			{
				return _003CSetValuesCompressedFraction_003Ek__BackingField;
			}
		}

		internal IFractionCounter ReadValuesCompressedFraction
		{
			[CompilerGenerated]
			get
			{
				return _003CReadValuesCompressedFraction_003Ek__BackingField;
			}
		}

		internal MemcachedMonitor(ICounterRegistry counterRegistry, string instanceName)
		{
			if (counterRegistry == null)
			{
				throw new ArgumentNullException("counterRegistry");
			}
			if (string.IsNullOrWhiteSpace(instanceName))
			{
				throw new ArgumentException("instanceName");
			}
			_003CPoolSizeForAllHosts_003Ek__BackingField = counterRegistry.GetRawValueCounter("Roblox.MemcachedV2", "PoolSizeForAllHosts", instanceName);
			_003CAveragePoolSizePerHost_003Ek__BackingField = counterRegistry.GetRawValueCounter("Roblox.MemcachedV2", "AveragePoolSizePerHost", instanceName);
			_003CAverageNonDisposedCreatedSocketsPerHost_003Ek__BackingField = counterRegistry.GetRawValueCounter("Roblox.MemcachedV2", "AverageNonDisposedCreatedSocketsPerHost", instanceName);
			_003CMaximumNonDisposedCreatedSocketsPerHost_003Ek__BackingField = counterRegistry.GetRawValueCounter("Roblox.MemcachedV2", "MaximumNonDisposedCreatedSocketsPerHost", instanceName);
			_003CAcquireAttemptsPerSecond_003Ek__BackingField = counterRegistry.GetRateOfCountsPerSecondCounter("Roblox.MemcachedV2", "AcquireAttemptsPerSecond", instanceName);
			_003CAcquireSocketCreationSuccessesPerSecond_003Ek__BackingField = counterRegistry.GetRateOfCountsPerSecondCounter("Roblox.MemcachedV2", "AcquireSocketCreationSuccessesPerSecond", instanceName);
			_003CAcquireSocketCreationFailuresPerSecond_003Ek__BackingField = counterRegistry.GetRateOfCountsPerSecondCounter("Roblox.MemcachedV2", "AcquireSocketCreationFailuresPerSecond", instanceName);
			_003CAcquireSuccessesPerSecond_003Ek__BackingField = counterRegistry.GetRateOfCountsPerSecondCounter("Roblox.MemcachedV2", "AcquireSuccessesPerSecond", instanceName);
			_003CAcquireFailuresPerSecond_003Ek__BackingField = counterRegistry.GetRateOfCountsPerSecondCounter("Roblox.MemcachedV2", "AcquireFailuresPerSecond", instanceName);
			_003CAcquireSocketCreationAbortDueToMaximumCountReachedPerSecond_003Ek__BackingField = counterRegistry.GetRateOfCountsPerSecondCounter("Roblox.MemcachedV2", "AcquireSocketCreationAbortDueToMaximumCountReachedPerSecond", instanceName);
			_003CAcquireSocketCreationAbortDueToRateLimitPerSecond_003Ek__BackingField = counterRegistry.GetRateOfCountsPerSecondCounter("Roblox.MemcachedV2", "AcquireSocketCreationAbortDueToRateLimitPerSecond", instanceName);
			_003CAcquireSocketCreationAbortedDueToBrokenCircuit_003Ek__BackingField = counterRegistry.GetRateOfCountsPerSecondCounter("Roblox.MemcachedV2", "AcquireSocketCreationAbortedDueToBrokenCircuit", instanceName);
			_003CAcquireSocketCreationAverageTimeInMilliseconds_003Ek__BackingField = counterRegistry.GetAverageValueCounter("Roblox.MemcachedV2", "AcquireSocketCreationAverageTimeInMilliseconds", instanceName);
			_003CAcquireSocketCreationTimeoutsPerSecond_003Ek__BackingField = counterRegistry.GetRateOfCountsPerSecondCounter("Roblox.MemcachedV2", "AcquireSocketCreationTimeoutsPerSecond", instanceName);
			_003CReturnAttemptsPerSecond_003Ek__BackingField = counterRegistry.GetRateOfCountsPerSecondCounter("Roblox.MemcachedV2", "ReturnAttemptsPerSecond", instanceName);
			_003CReturnDirtySocketsPerSecond_003Ek__BackingField = counterRegistry.GetRateOfCountsPerSecondCounter("Roblox.MemcachedV2", "ReturnDirtySocketsPerSecond", instanceName);
			_003CReturnSuccessesPerSecond_003Ek__BackingField = counterRegistry.GetRateOfCountsPerSecondCounter("Roblox.MemcachedV2", "ReturnSuccessesPerSecond", instanceName);
			_003CReturnPoolIsFullPerSecond_003Ek__BackingField = counterRegistry.GetRateOfCountsPerSecondCounter("Roblox.MemcachedV2", "ReturnPoolIsFullPerSecond", instanceName);
			_003CReturnSocketsDestroyedPerSecond_003Ek__BackingField = counterRegistry.GetRateOfCountsPerSecondCounter("Roblox.MemcachedV2", "ReturnSocketsDestroyedPerSecond", instanceName);
			_003CExecutionAttemptsPerSecond_003Ek__BackingField = counterRegistry.GetRateOfCountsPerSecondCounter("Roblox.MemcachedV2", "ExecutionAttemptsPerSecond", instanceName);
			_003CExecutionSuccessesPerSecond_003Ek__BackingField = counterRegistry.GetRateOfCountsPerSecondCounter("Roblox.MemcachedV2", "ExecutionSuccessesPerSecond", instanceName);
			_003CExecutionErrorsPerSecond_003Ek__BackingField = counterRegistry.GetRateOfCountsPerSecondCounter("Roblox.MemcachedV2", "ExecutionErrorsPerSecond", instanceName);
			_003CExecutionFailuresToAcquirePerSecond_003Ek__BackingField = counterRegistry.GetRateOfCountsPerSecondCounter("Roblox.MemcachedV2", "ExecutionFailuresToAcquirePerSecond", instanceName);
			_003CAverageResponseTimeInMilliseconds_003Ek__BackingField = counterRegistry.GetAverageValueCounter("Roblox.MemcachedV2", "AverageResponseTimeInMilliseconds", instanceName);
			_003CExecutionTimeoutsPerSecond_003Ek__BackingField = counterRegistry.GetRateOfCountsPerSecondCounter("Roblox.MemcachedV2", "ExecutionTimeoutsPerSecond", instanceName);
			_003CExecutionIOErrorsPerSecond_003Ek__BackingField = counterRegistry.GetRateOfCountsPerSecondCounter("Roblox.MemcachedV2", "ExecutionIOErrorsPerSecond", instanceName);
			_003CExecutionCircuitBreakerErrorsPerSecond_003Ek__BackingField = counterRegistry.GetRateOfCountsPerSecondCounter("Roblox.MemcachedV2", "ExecutionCircuitBreakerErrorsPerSecond", instanceName);
			_003CExecutionNotSupportedErrorsPerSecond_003Ek__BackingField = counterRegistry.GetRateOfCountsPerSecondCounter("Roblox.MemcachedV2", "ExecutionNotSupportedErrorsPerSecond", instanceName);
			_003CReadAttemptsPerSecond_003Ek__BackingField = counterRegistry.GetRateOfCountsPerSecondCounter("Roblox.MemcachedV2", "ReadAttemptsPerSecond", instanceName);
			_003CReadErrorsPerSecond_003Ek__BackingField = counterRegistry.GetRateOfCountsPerSecondCounter("Roblox.MemcachedV2", "ReadErrorsPerSecond", instanceName);
			_003CWriteAttemptsPerSecond_003Ek__BackingField = counterRegistry.GetRateOfCountsPerSecondCounter("Roblox.MemcachedV2", "WriteAttemptsPerSecond", instanceName);
			_003CWriteErrorsPerSecond_003Ek__BackingField = counterRegistry.GetRateOfCountsPerSecondCounter("Roblox.MemcachedV2", "WriteErrorsPerSecond", instanceName);
			_003CGetCommandReturnedValueMismatchedPerSecond_003Ek__BackingField = counterRegistry.GetRateOfCountsPerSecondCounter("Roblox.MemcachedV2", "GetCommandReturnedValueMismatchedPerSecond", instanceName);
			_003CPooledSocketDisposedPerSecond_003Ek__BackingField = counterRegistry.GetRateOfCountsPerSecondCounter("Roblox.MemcachedV2", "PooledSocketDisposedPerSecond", instanceName);
			_003CPooledSocketExplicitlyClosedPerSecond_003Ek__BackingField = counterRegistry.GetRateOfCountsPerSecondCounter("Roblox.MemcachedV2", "PooledSocketExplicitlyClosedPerSecond", instanceName);
			_003CPooledSocketReadLeftoverBytesReadAttemptsPerSecond_003Ek__BackingField = counterRegistry.GetRateOfCountsPerSecondCounter("Roblox.MemcachedV2", "PooledSocketReadLeftoverBytesReadAttemptsPerSecond", instanceName);
			_003CPooledSocketForceResetAnyBytesReturnedPerSecond_003Ek__BackingField = counterRegistry.GetRateOfCountsPerSecondCounter("Roblox.MemcachedV2", "PooledSocketForceResetAnyBytesReturnedPerSecond", instanceName);
			_003CPooledSocketForceResetNoBytesReturnedPerSecond_003Ek__BackingField = counterRegistry.GetRateOfCountsPerSecondCounter("Roblox.MemcachedV2", "PooledSocketForceResetNoBytesReturnedPerSecond", instanceName);
			_003CPooledSocketForceResetExceptionsPerSecond_003Ek__BackingField = counterRegistry.GetRateOfCountsPerSecondCounter("Roblox.MemcachedV2", "PooledSocketForceResetExceptionsPerSecond", instanceName);
			_003CRoundRobinExecutionFailuresPerSecond_003Ek__BackingField = counterRegistry.GetRateOfCountsPerSecondCounter("Roblox.MemcachedV2", "RoundRobinExecutionFailuresPerSecond", instanceName);
			_003CRoundRobinExecutionSuccessesPerSecond_003Ek__BackingField = counterRegistry.GetRateOfCountsPerSecondCounter("Roblox.MemcachedV2", "RoundRobinExecutionSuccessesPerSecond", instanceName);
			_003CSetValuesCompressedFraction_003Ek__BackingField = counterRegistry.GetFractionCounter("Roblox.MemcachedV2", "SetValuesCompressedFraction", instanceName);
			_003CReadValuesCompressedFraction_003Ek__BackingField = counterRegistry.GetFractionCounter("Roblox.MemcachedV2", "ReadValuesCompressedFraction", instanceName);
		}
	}
}
