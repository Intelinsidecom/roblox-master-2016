using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Linq;
using System.Linq.Expressions;
using Roblox.Diagnostics.Properties;

namespace Roblox.Diagnostics
{
	[Obsolete("Use Roblox.Instrumentation instead of Windows Perfmon counters")]
	public class CounterBuilder : ICounterBuilder
	{
		private static readonly HashSet<int> _DefaultPercentiles = new HashSet<int> { 1, 5, 10, 25, 50, 75, 90, 95, 99 };

		private readonly string _PerformanceCategory;

		private readonly string _InstanceName;

		private readonly TimeSpan _UpdateInterval;

		private object _Container;

		private static HashSet<int> _Percentiles;

		private readonly List<CustomCounterDescriptor<PercentileValueCounter>> _PercentileCounterDescriptors = new List<CustomCounterDescriptor<PercentileValueCounter>>();

		private readonly List<CounterDescriptor> _CounterDescriptors = new List<CounterDescriptor>();

		private readonly Dictionary<string, Dictionary<int, PerformanceCounter>> _InternalPercentileCounters = new Dictionary<string, Dictionary<int, PerformanceCounter>>();

		private readonly HashSet<string> _ExistingPercentileGroupNames = new HashSet<string>();

		private readonly PerformanceCounterCategoryType _InstanceType;

		private bool _CountersCreated;

		public object Container
		{
			get
			{
				return _Container;
			}
			set
			{
				if (_CounterDescriptors.Any())
				{
					throw new CannotUpdateContainerException();
				}
				_Container = value;
			}
		}

		private Type ContainerType
		{
			get
			{
				object container = Container;
				if (container == null)
				{
					return null;
				}
				return container.GetType();
			}
		}

		[Obsolete("Please use other constructor.")]
		public CounterBuilder(string performanceCategory, string instanceName, TimeSpan updateInterval, object container, HashSet<int> percentiles = null)
			: this(performanceCategory, container, () => updateInterval, instanceName, percentiles)
		{
		}

		[Obsolete("Please use other constructor.")]
		public CounterBuilder(string performanceCategory, TimeSpan updateInterval, object container, HashSet<int> percentiles = null)
			: this(performanceCategory, container, () => updateInterval, null, percentiles)
		{
		}

		public CounterBuilder(string performanceCounterCategory, object container = null, Func<TimeSpan> updateInterval = null, string instanceName = null, HashSet<int> percentiles = null)
		{
			if (string.IsNullOrWhiteSpace(performanceCounterCategory))
			{
				throw new ArgumentException("Performance counter category must not be null or whitespace.", "performanceCounterCategory");
			}
			_PerformanceCategory = performanceCounterCategory;
			Container = container;
			_UpdateInterval = ((updateInterval != null) ? updateInterval() : Settings.Default.DefaultUpdateInterval);
			if (instanceName != null)
			{
				_InstanceName = instanceName;
				_InstanceType = PerformanceCounterCategoryType.MultiInstance;
			}
			else
			{
				_InstanceType = PerformanceCounterCategoryType.SingleInstance;
			}
			_Percentiles = percentiles ?? _DefaultPercentiles;
		}

		public void AddPercentileCounter(Expression<Func<IPercentileValueCounter>> expression)
		{
			if (ContainerType == null)
			{
				throw new ContainerNotSetException();
			}
			string percentileGroupName = ((MemberExpression)expression.Body).Member.Name;
			CheckName(string.Format("{0}.Percentile", percentileGroupName));
			CustomCounterDescriptor<PercentileValueCounter> percentileValueDescriptor = new CustomCounterDescriptor<PercentileValueCounter>(percentileGroupName, Container, ContainerType);
			_PercentileCounterDescriptors.Add(percentileValueDescriptor);
			_InternalPercentileCounters[percentileValueDescriptor.GroupName] = new Dictionary<int, PerformanceCounter>();
			List<CounterDescriptor> counterDescriptors = new List<CounterDescriptor>();
			foreach (int percentile in _Percentiles.OrderBy((int el) => el))
			{
				CounterDescriptor cd = new CounterDescriptor(string.Format("{0}.Percentile.{1:D2}", percentileValueDescriptor.GroupName, percentile), delegate(PerformanceCounter pc)
				{
					_InternalPercentileCounters[percentileValueDescriptor.GroupName][percentile] = pc;
				}, PerformanceCounterType.NumberOfItems32);
				counterDescriptors.Add(cd);
			}
			_CounterDescriptors.AddRange(counterDescriptors);
		}

		public void AddPercentileCounter(string counterPrefix, Action<IPercentileValueCounter> onCreatedFunc)
		{
			if (ContainerType == null)
			{
				throw new ContainerNotSetException();
			}
			CheckName(string.Format("{0}.Percentile", counterPrefix));
			CustomCounterDescriptor<PercentileValueCounter> percentileValueDescriptor = new CustomCounterDescriptor<PercentileValueCounter>(counterPrefix, onCreatedFunc);
			_PercentileCounterDescriptors.Add(percentileValueDescriptor);
			_InternalPercentileCounters[percentileValueDescriptor.GroupName] = new Dictionary<int, PerformanceCounter>();
			List<CounterDescriptor> counterDescriptors = new List<CounterDescriptor>();
			foreach (int percentile in _Percentiles.OrderBy((int el) => el))
			{
				CounterDescriptor cd = new CounterDescriptor(string.Format("{0}.Percentile.{1:D2}", percentileValueDescriptor.GroupName, percentile), delegate(PerformanceCounter pc)
				{
					_InternalPercentileCounters[percentileValueDescriptor.GroupName][percentile] = pc;
				}, PerformanceCounterType.NumberOfItems32);
				counterDescriptors.Add(cd);
			}
			_CounterDescriptors.AddRange(counterDescriptors);
		}

		public void AddAverageCounter(Expression<Func<IAverageValueCounter>> expression)
		{
			if (ContainerType == null)
			{
				throw new ContainerNotSetException();
			}
			string counterName = ((MemberExpression)expression.Body).Member.Name;
			string averageName = string.Format("{0}.Average", counterName);
			CheckName(averageName);
			CustomCounterDescriptor<AverageValueCounter> averageDescriptor = new CustomCounterDescriptor<AverageValueCounter>(counterName, Container, ContainerType);
			Action<PerformanceCounter> newSetter = delegate(PerformanceCounter cd)
			{
				averageDescriptor.Setter(new AverageValueCounter(cd, _UpdateInterval));
			};
			CounterDescriptor averageInternal = new CounterDescriptor(averageName, newSetter, PerformanceCounterType.NumberOfItems64);
			_CounterDescriptors.Add(averageInternal);
		}

		public void AddAverageCounter(string counterName, Action<IAverageValueCounter> onCreatedFunc)
		{
			if (ContainerType == null)
			{
				throw new ContainerNotSetException();
			}
			CheckName(counterName);
			Action<PerformanceCounter> newSetter = delegate(PerformanceCounter cd)
			{
				onCreatedFunc(new AverageValueCounter(cd, _UpdateInterval));
			};
			CounterDescriptor averageInternal = new CounterDescriptor(counterName, newSetter, PerformanceCounterType.NumberOfItems64);
			_CounterDescriptors.Add(averageInternal);
		}

		public void AddRateOfCountsPerSecond32Counter(Expression<Func<PerformanceCounter>> expression)
		{
			AddCounter(expression, PerformanceCounterType.RateOfCountsPerSecond32);
		}

		public void AddRateOfCountsPerSecond32Counter(string counterName, Action<IPerformanceCounter> onCreatedFunc)
		{
			AddCounter(counterName, onCreatedFunc, PerformanceCounterType.RateOfCountsPerSecond32);
		}

		public void AddCounter(Expression<Func<PerformanceCounter>> expression, PerformanceCounterType counterType)
		{
			if (Container == null)
			{
				throw new ContainerNotSetException();
			}
			string counterName = ((MemberExpression)expression.Body).Member.Name;
			CheckName(counterName);
			CounterDescriptor cd = new CounterDescriptor(counterName, Container, counterType);
			_CounterDescriptors.Add(cd);
		}

		public void AddCounter(string counterName, Action<IPerformanceCounter> onCreatedFunc, PerformanceCounterType counterType)
		{
			if (Container == null)
			{
				throw new ContainerNotSetException();
			}
			CheckName(counterName);
			CounterDescriptor cd = new CounterDescriptor(counterName, delegate(PerformanceCounter pc)
			{
				onCreatedFunc(new PerformanceCounterWrapper(pc));
			}, counterType);
			_CounterDescriptors.Add(cd);
		}

		public void Create()
		{
			if (_CountersCreated)
			{
				throw new CountersAlreadyCreatedException("Attempt to call 'Create' on a CounterBuilder whose counters have already been created.");
			}
			_CountersCreated = true;
			if (_InstanceType == PerformanceCounterCategoryType.MultiInstance)
			{
				CounterCreator.InitializeMultiInstance(_PerformanceCategory, _InstanceName, _CounterDescriptors.ToArray());
			}
			else if (_InstanceType == PerformanceCounterCategoryType.SingleInstance)
			{
				CounterCreator.InitializeSingleInstance(_PerformanceCategory, _CounterDescriptors.ToArray());
			}
			foreach (CustomCounterDescriptor<PercentileValueCounter> descriptor in _PercentileCounterDescriptors)
			{
				PercentileValueCounter pvc = new PercentileValueCounter(_InternalPercentileCounters[descriptor.GroupName], _UpdateInterval);
				descriptor.Setter(pvc);
			}
		}

		private void CheckName(string counterName)
		{
			if (string.IsNullOrWhiteSpace(counterName))
			{
				throw new ArgumentNullException(string.Format("Invalid {0}: '{1}'", "counterName", counterName));
			}
			if (_ExistingPercentileGroupNames.Contains(counterName))
			{
				throw new ArgumentException(string.Format("Cannot create more than one percentile collector with the same name.  Duplicate name = {0}", counterName));
			}
			_ExistingPercentileGroupNames.Add(counterName);
		}
	}
}
