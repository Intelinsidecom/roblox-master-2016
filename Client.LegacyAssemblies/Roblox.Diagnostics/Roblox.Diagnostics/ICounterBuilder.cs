using System;
using System.Diagnostics;
using System.Linq.Expressions;

namespace Roblox.Diagnostics
{
	public interface ICounterBuilder
	{
		object Container { get; set; }

		void AddPercentileCounter(Expression<Func<IPercentileValueCounter>> expression);

		void AddPercentileCounter(string counterName, Action<IPercentileValueCounter> onCreatedFunc);

		void AddAverageCounter(Expression<Func<IAverageValueCounter>> expression);

		void AddAverageCounter(string counterName, Action<IAverageValueCounter> onCreatedFunc);

		[Obsolete("Please use interface version instead.")]
		void AddRateOfCountsPerSecond32Counter(Expression<Func<PerformanceCounter>> expression);

		void AddRateOfCountsPerSecond32Counter(string counterName, Action<IPerformanceCounter> onCreatedFunc);

		void AddCounter(Expression<Func<PerformanceCounter>> expression, PerformanceCounterType counterType);

		void AddCounter(string counterName, Action<IPerformanceCounter> onCreatedFunc, PerformanceCounterType counterType);

		void Create();
	}
}
