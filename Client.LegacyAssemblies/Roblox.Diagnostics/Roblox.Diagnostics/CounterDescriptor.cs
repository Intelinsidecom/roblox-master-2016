using System;
using System.Diagnostics;
using System.Linq.Expressions;
using System.Runtime.CompilerServices;

namespace Roblox.Diagnostics
{
	public class CounterDescriptor : ICounterDescriptor
	{
		[CompilerGenerated]
		private readonly Action<PerformanceCounter> _003CSetter_003Ek__BackingField;

		[CompilerGenerated]
		private readonly CounterCreationData _003CCounterCreationData_003Ek__BackingField;

		public Action<PerformanceCounter> Setter
		{
			[CompilerGenerated]
			get
			{
				return _003CSetter_003Ek__BackingField;
			}
		}

		public CounterCreationData CounterCreationData
		{
			[CompilerGenerated]
			get
			{
				return _003CCounterCreationData_003Ek__BackingField;
			}
		}

		public CounterDescriptor(string counterName, Action<PerformanceCounter> setter, PerformanceCounterType counterType, string counterHelp = "")
		{
			_003CCounterCreationData_003Ek__BackingField = new CounterCreationData(counterName, counterHelp, counterType);
			_003CSetter_003Ek__BackingField = setter;
		}

		public CounterDescriptor(string counterName, object container, PerformanceCounterType counterType, Type containerType, string counterHelp = "")
			: this(counterName, CounterHelpers.GetSetter<PerformanceCounter>(counterName, container, containerType), counterType, counterHelp)
		{
		}

		public CounterDescriptor(Expression<Func<object>> nameExpression, Action<PerformanceCounter> setter, PerformanceCounterType counterType, string counterHelp = "")
			: this(CounterHelpers.GetPropertyName(nameExpression), setter, counterType, counterHelp)
		{
		}

		public CounterDescriptor(Expression<Func<object>> nameExpression, object container, PerformanceCounterType counterType, string counterHelp = "")
			: this(CounterHelpers.GetPropertyName(nameExpression), container, counterType, counterHelp)
		{
		}

		public CounterDescriptor(string counterName, object container, PerformanceCounterType counterType, string counterHelp = "")
			: this(counterName, container, counterType, container.GetType(), counterHelp)
		{
		}
	}
}
