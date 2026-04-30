using System;
using System.Collections.Generic;
using System.Net.Sockets;
using System.Runtime.CompilerServices;

namespace BeIT.MemCached
{
	internal class DefaultMemCachedClientSettings : IMemCachedClientSettings
	{
		[CompilerGenerated]
		private readonly HashSet<SocketError> _003CSocketErrorsThatTripExecutionCircuitBreaker_003Ek__BackingField = new HashSet<SocketError> { SocketError.TimedOut };

		[CompilerGenerated]
		private readonly TimeSpan _003CExecutionCircuitBreakerExceptionIntervalForTripping_003Ek__BackingField = TimeSpan.MaxValue;

		[CompilerGenerated]
		private readonly IReadOnlyDictionary<string, TimeSpan> _003CPerHostExpiryOverrides_003Ek__BackingField = new Dictionary<string, TimeSpan>();

		[CompilerGenerated]
		private readonly bool _003CPerHostExpiryOverridesEnabled_003Ek__BackingField;

		[CompilerGenerated]
		private readonly int _003CConnectionCircuitBreakerExceptionCountForTripping_003Ek__BackingField = 1;

		[CompilerGenerated]
		private readonly TimeSpan _003CConnectionCircuitBreakerExceptionIntervalForTripping_003Ek__BackingField = TimeSpan.FromMilliseconds(100.0);

		[CompilerGenerated]
		private readonly HashSet<string> _003CExceptionTypeNamesToForceResetBytes_003Ek__BackingField = new HashSet<string>();

		[CompilerGenerated]
		private readonly int _003CForceResetBytesMaxAttempts_003Ek__BackingField = 1;

		[CompilerGenerated]
		private readonly int _003CForceResetBytesMaxNumberOfBytes_003Ek__BackingField = 256;

		[CompilerGenerated]
		private readonly bool _003CLogVerboseExceptions_003Ek__BackingField;

		[CompilerGenerated]
		private readonly bool _003CIsRespectingMaxPoolSizeEnabled_003Ek__BackingField = true;

		[CompilerGenerated]
		private readonly bool _003CUseRoundRobinSocketPoolSelection_003Ek__BackingField;

		[CompilerGenerated]
		private readonly int _003CMaximumSelectionAttemptsForRoundRobin_003Ek__BackingField;

		[CompilerGenerated]
		private readonly uint _003CCompressionThreshold_003Ek__BackingField = 131072u;

		[CompilerGenerated]
		private readonly TimeSpan _003CSendReceiveTimeout_003Ek__BackingField = TimeSpan.FromMilliseconds(2000.0);

		[CompilerGenerated]
		private readonly uint _003CMinimumPoolSize_003Ek__BackingField = 5u;

		[CompilerGenerated]
		private readonly uint _003CMaximumPoolSize_003Ek__BackingField = 100u;

		[CompilerGenerated]
		private readonly TimeSpan _003CSocketRecycleAge_003Ek__BackingField = TimeSpan.FromMinutes(30.0);

		[CompilerGenerated]
		private readonly TimeSpan _003CEndpointCacheExpiry_003Ek__BackingField = TimeSpan.FromMinutes(2.0);

		[CompilerGenerated]
		private readonly bool _003CIsConnectionCreationRateLimitingEnabled_003Ek__BackingField;

		[CompilerGenerated]
		private readonly TimeSpan _003CConnectionCreationRateLimitPeriodLength_003Ek__BackingField = TimeSpan.FromSeconds(1.0);

		[CompilerGenerated]
		private readonly int _003CMaximumConnectionCreationsPerPeriod_003Ek__BackingField = 10;

		public int MaximumNumberOfSocketsPerPool
		{
			get
			{
				return int.MaxValue;
			}
		}

		public TimeSpan PooledSocketConstructionSocketConnectTimeout
		{
			get
			{
				return TimeSpan.FromSeconds(1.0);
			}
		}

		public TimeSpan ConnectionCircuitBreakerRetryInterval
		{
			get
			{
				return TimeSpan.MaxValue;
			}
		}

		public bool IsExecutionCircuitBreakerEnabled
		{
			get
			{
				return false;
			}
		}

		public TimeSpan ExecutionCircuitBreakerRetryInterval
		{
			get
			{
				return TimeSpan.MaxValue;
			}
		}

		public HashSet<SocketError> SocketErrorsThatTripExecutionCircuitBreaker
		{
			[CompilerGenerated]
			get
			{
				return _003CSocketErrorsThatTripExecutionCircuitBreaker_003Ek__BackingField;
			}
		}

		public int ExecutionCircuitBreakerExceptionCountForTripping
		{
			get
			{
				return 1;
			}
		}

		public TimeSpan ExecutionCircuitBreakerExceptionIntervalForTripping
		{
			[CompilerGenerated]
			get
			{
				return _003CExecutionCircuitBreakerExceptionIntervalForTripping_003Ek__BackingField;
			}
		}

		public IReadOnlyDictionary<string, TimeSpan> PerHostExpiryOverrides
		{
			[CompilerGenerated]
			get
			{
				return _003CPerHostExpiryOverrides_003Ek__BackingField;
			}
		}

		public bool PerHostExpiryOverridesEnabled
		{
			[CompilerGenerated]
			get
			{
				return _003CPerHostExpiryOverridesEnabled_003Ek__BackingField;
			}
		}

		public int ConnectionCircuitBreakerExceptionCountForTripping
		{
			[CompilerGenerated]
			get
			{
				return _003CConnectionCircuitBreakerExceptionCountForTripping_003Ek__BackingField;
			}
		}

		public TimeSpan ConnectionCircuitBreakerExceptionIntervalForTripping
		{
			[CompilerGenerated]
			get
			{
				return _003CConnectionCircuitBreakerExceptionIntervalForTripping_003Ek__BackingField;
			}
		}

		public HashSet<string> ExceptionTypeNamesToForceResetBytes
		{
			[CompilerGenerated]
			get
			{
				return _003CExceptionTypeNamesToForceResetBytes_003Ek__BackingField;
			}
		}

		public int ForceResetBytesMaxAttempts
		{
			[CompilerGenerated]
			get
			{
				return _003CForceResetBytesMaxAttempts_003Ek__BackingField;
			}
		}

		public int ForceResetBytesMaxNumberOfBytes
		{
			[CompilerGenerated]
			get
			{
				return _003CForceResetBytesMaxNumberOfBytes_003Ek__BackingField;
			}
		}

		public bool LogVerboseExceptions
		{
			[CompilerGenerated]
			get
			{
				return _003CLogVerboseExceptions_003Ek__BackingField;
			}
		}

		public bool IsRespectingMaxPoolSizeEnabled
		{
			[CompilerGenerated]
			get
			{
				return _003CIsRespectingMaxPoolSizeEnabled_003Ek__BackingField;
			}
		}

		public bool UseRoundRobinSocketPoolSelection
		{
			[CompilerGenerated]
			get
			{
				return _003CUseRoundRobinSocketPoolSelection_003Ek__BackingField;
			}
		}

		public int MaximumSelectionAttemptsForRoundRobin
		{
			[CompilerGenerated]
			get
			{
				return _003CMaximumSelectionAttemptsForRoundRobin_003Ek__BackingField;
			}
		}

		public uint CompressionThreshold
		{
			[CompilerGenerated]
			get
			{
				return _003CCompressionThreshold_003Ek__BackingField;
			}
		}

		public TimeSpan SendReceiveTimeout
		{
			[CompilerGenerated]
			get
			{
				return _003CSendReceiveTimeout_003Ek__BackingField;
			}
		}

		public uint MinimumPoolSize
		{
			[CompilerGenerated]
			get
			{
				return _003CMinimumPoolSize_003Ek__BackingField;
			}
		}

		public uint MaximumPoolSize
		{
			[CompilerGenerated]
			get
			{
				return _003CMaximumPoolSize_003Ek__BackingField;
			}
		}

		public TimeSpan SocketRecycleAge
		{
			[CompilerGenerated]
			get
			{
				return _003CSocketRecycleAge_003Ek__BackingField;
			}
		}

		public IMemcachedClientDnsSettings DnsSettings
		{
			get
			{
				return new FakeDnsSettings();
			}
		}

		public TimeSpan EndpointCacheExpiry
		{
			[CompilerGenerated]
			get
			{
				return _003CEndpointCacheExpiry_003Ek__BackingField;
			}
		}

		public bool IsConnectionCreationRateLimitingEnabled
		{
			[CompilerGenerated]
			get
			{
				return _003CIsConnectionCreationRateLimitingEnabled_003Ek__BackingField;
			}
		}

		public TimeSpan ConnectionCreationRateLimitPeriodLength
		{
			[CompilerGenerated]
			get
			{
				return _003CConnectionCreationRateLimitPeriodLength_003Ek__BackingField;
			}
		}

		public int MaximumConnectionCreationsPerPeriod
		{
			[CompilerGenerated]
			get
			{
				return _003CMaximumConnectionCreationsPerPeriod_003Ek__BackingField;
			}
		}
	}
}
