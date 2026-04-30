using System.Runtime.CompilerServices;

namespace Roblox.Instrumentation
{
	public abstract class CounterBase
	{
		[CompilerGenerated]
		private readonly CounterKey _003CKey_003Ek__BackingField;

		internal double LastFlushValue;

		public CounterKey Key
		{
			[CompilerGenerated]
			get
			{
				return _003CKey_003Ek__BackingField;
			}
		}

		protected CounterBase(string category, string name, string instance)
		{
			_003CKey_003Ek__BackingField = new CounterKey(category, name, instance);
		}

		public double GetLastFlushValue()
		{
			return LastFlushValue;
		}

		internal abstract double Flush();

		internal abstract double Get();
	}
}
