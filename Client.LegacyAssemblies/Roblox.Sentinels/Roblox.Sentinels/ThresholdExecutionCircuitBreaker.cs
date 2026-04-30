using System;
using System.Runtime.CompilerServices;
using System.Threading;

namespace Roblox.Sentinels
{
	public class ThresholdExecutionCircuitBreaker : ExecutionCircuitBreakerBase
	{
		private readonly Func<Exception, bool> _FailureDetector;

		private readonly Func<TimeSpan> _RetryIntervalCalculator;

		private readonly Func<int> _ExceptionCountForTripping;

		private readonly Func<TimeSpan> _ExceptionIntervalForTripping;

		private readonly Func<DateTime> _UtcNowGetter;

		private DateTime _ExceptionCountIntervalEnd = DateTime.MinValue;

		private int _ExceptionCount;

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

		protected override DateTime Now
		{
			get
			{
				return _UtcNowGetter();
			}
		}

		public ThresholdExecutionCircuitBreaker(string name, Func<Exception, bool> failureDetector, Func<TimeSpan> retryIntervalCalculator, Func<int> exceptionCountForTripping, Func<TimeSpan> exceptionIntervalForTripping)
			: this(name, failureDetector, retryIntervalCalculator, exceptionCountForTripping, exceptionIntervalForTripping, () => DateTime.UtcNow)
		{
		}

		internal ThresholdExecutionCircuitBreaker(string name, Func<Exception, bool> failureDetector, Func<TimeSpan> retryIntervalCalculator, Func<int> exceptionCountForTripping, Func<TimeSpan> exceptionIntervalForTripping, Func<DateTime> utcNowGetter)
		{
			if (string.IsNullOrWhiteSpace(name))
			{
				throw new ArgumentException("Cannot be null, empty or whitespace", "name");
			}
			_003CName_003Ek__BackingField = name;
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
			if (exceptionCountForTripping == null)
			{
				throw new ArgumentNullException("exceptionCountForTripping");
			}
			_ExceptionCountForTripping = exceptionCountForTripping;
			if (exceptionIntervalForTripping == null)
			{
				throw new ArgumentNullException("exceptionIntervalForTripping");
			}
			_ExceptionIntervalForTripping = exceptionIntervalForTripping;
			if (utcNowGetter == null)
			{
				throw new ArgumentNullException("utcNowGetter");
			}
			_UtcNowGetter = utcNowGetter;
		}

		private void ResetExceptionCount()
		{
			Interlocked.Exchange(ref _ExceptionCount, 0);
			_ExceptionCountIntervalEnd = Now.Add(_ExceptionIntervalForTripping());
		}

		protected override bool ShouldTrip(Exception ex)
		{
			if (ex == null)
			{
				throw new ArgumentNullException("ex");
			}
			if (_FailureDetector(ex))
			{
				if (_ExceptionCountIntervalEnd < Now)
				{
					ResetExceptionCount();
				}
				Interlocked.Increment(ref _ExceptionCount);
				if (_ExceptionCount > _ExceptionCountForTripping())
				{
					return true;
				}
			}
			return false;
		}
	}
}
