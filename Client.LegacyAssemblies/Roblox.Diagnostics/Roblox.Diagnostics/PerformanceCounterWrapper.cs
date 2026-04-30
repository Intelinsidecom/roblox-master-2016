using System;
using System.Diagnostics;

namespace Roblox.Diagnostics
{
	public sealed class PerformanceCounterWrapper : IPerformanceCounter, IDisposable
	{
		private bool _IsDisposed;

		private readonly PerformanceCounter _Counter;

		public long Value
		{
			get
			{
				return _Counter.RawValue;
			}
			set
			{
				_Counter.RawValue = value;
			}
		}

		public PerformanceCounterWrapper(PerformanceCounter performanceCounter)
		{
			if (performanceCounter == null)
			{
				throw new ArgumentNullException("performanceCounter");
			}
			_Counter = performanceCounter;
		}

		public void Increment()
		{
			_Counter.Increment();
		}

		public void IncrementBy(long value)
		{
			_Counter.IncrementBy(value);
		}

		public void Reset()
		{
			_Counter.RawValue = 0L;
		}

		public void Dispose()
		{
			if (!_IsDisposed)
			{
				PerformanceCounter counter = _Counter;
				if (counter != null)
				{
					counter.Dispose();
				}
				_IsDisposed = true;
			}
		}
	}
}
