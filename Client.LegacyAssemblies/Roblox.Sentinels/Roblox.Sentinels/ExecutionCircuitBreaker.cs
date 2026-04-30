using System;
using System.Runtime.CompilerServices;

namespace Roblox.Sentinels
{
	public class ExecutionCircuitBreaker : ExecutionCircuitBreakerBase
	{
		private readonly Func<Exception, bool> _FailureDetector;

		private readonly Func<TimeSpan> _RetryIntervalCalculator;

		[CompilerGenerated]
		private readonly string _003CName_003Ek__BackingField;

		protected internal override string Name
		{
			[CompilerGenerated]
			get
			{
				return _003CName_003Ek__BackingField;
			}
		}

		protected override TimeSpan RetryInterval
		{
			get
			{
				return _RetryIntervalCalculator();
			}
		}

		public ExecutionCircuitBreaker(string name, Func<Exception, bool> failureDetector, Func<TimeSpan> retryIntervalCalculator)
		{
			if (string.IsNullOrWhiteSpace(name))
			{
				throw new ArgumentException("Cannot be null, empty or whitespace", "name");
			}
			if (failureDetector == null)
			{
				throw new ArgumentNullException("failureDetector");
			}
			_FailureDetector = failureDetector;
			if (retryIntervalCalculator == null)
			{
				throw new ArgumentNullException("retryIntervalCalculator");
			}
			_RetryIntervalCalculator = retryIntervalCalculator;
			_003CName_003Ek__BackingField = name;
		}

		protected override bool ShouldTrip(Exception ex)
		{
			return _FailureDetector(ex);
		}
	}
}
