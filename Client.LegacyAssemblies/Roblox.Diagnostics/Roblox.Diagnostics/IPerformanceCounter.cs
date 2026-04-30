using System;

namespace Roblox.Diagnostics
{
	public interface IPerformanceCounter : IDisposable
	{
		long Value { get; set; }

		void Increment();

		void IncrementBy(long value);

		void Reset();
	}
}
