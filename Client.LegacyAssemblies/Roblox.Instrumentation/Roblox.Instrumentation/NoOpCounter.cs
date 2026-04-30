using System.Runtime.CompilerServices;

namespace Roblox.Instrumentation
{
	public sealed class NoOpCounter : IRateOfCountsPerSecondCounter, IAverageValueCounter, IMaximumValueCounter, IRawValueCounter, IFractionCounter, IPercentileCounter
	{
		[CompilerGenerated]
		private readonly long _003CRawValue_003Ek__BackingField;

		public long RawValue
		{
			[CompilerGenerated]
			get
			{
				return _003CRawValue_003Ek__BackingField;
			}
		}

		public void Set(long value)
		{
		}

		public void IncrementBy(long eventCount)
		{
		}

		public void Increment()
		{
		}

		public void IncrementBase()
		{
		}

		public void Decrement()
		{
		}

		public void Sample(double value)
		{
		}
	}
}
