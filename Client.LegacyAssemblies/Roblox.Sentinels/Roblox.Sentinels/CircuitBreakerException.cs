using System;

namespace Roblox.Sentinels
{
	public class CircuitBreakerException : Exception
	{
		private readonly string _CircuitBreakerName;

		private readonly DateTime? _CircuitBreakerTripped;

		public override string Message
		{
			get
			{
				DateTime utcNow = DateTime.UtcNow;
				DateTime value = _CircuitBreakerTripped ?? utcNow;
				TimeSpan timeSpan = utcNow.Subtract(value);
				return string.Format("CircuitBreaker Error: {0} has been tripped for {1} seconds.", _CircuitBreakerName, timeSpan.TotalSeconds);
			}
		}

		public CircuitBreakerException(CircuitBreakerBase circuitBreaker)
			: this(circuitBreaker.Name, circuitBreaker.Tripped)
		{
		}

		public CircuitBreakerException(string circuitBreakerName, DateTime? circuitBreakerTripped)
		{
			_CircuitBreakerName = circuitBreakerName;
			_CircuitBreakerTripped = circuitBreakerTripped;
		}
	}
}
