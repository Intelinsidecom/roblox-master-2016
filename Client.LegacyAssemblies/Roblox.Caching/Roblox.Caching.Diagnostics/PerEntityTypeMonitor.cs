using System;
using Roblox.Caching.Interfaces;
using Roblox.Instrumentation;

namespace Roblox.Caching.Diagnostics
{
	public class PerEntityTypeMonitor : IRobloxCacheListener
	{
		private const string _Category = "Roblox.Caching.EntityType";

		private readonly ICounterRegistry _CounterRegistry;

		public PerEntityTypeMonitor(ICounterRegistry counterRegistry)
		{
			if (counterRegistry == null)
			{
				throw new ArgumentNullException("counterRegistry");
			}
			_CounterRegistry = counterRegistry;
		}

		public void OnHit(string entityType)
		{
			OnHit(entityType, 1);
		}

		public void OnHit(string entityType, int count)
		{
			if (IsValid(entityType))
			{
				_CounterRegistry.GetRateOfCountsPerSecondCounter("Roblox.Caching.EntityType", "Hits/s", entityType).IncrementBy((long)count);
			}
		}

		public void OnMiss(string entityType)
		{
			OnMiss(entityType, 1);
		}

		public void OnMiss(string entityType, int count)
		{
			if (IsValid(entityType))
			{
				_CounterRegistry.GetRateOfCountsPerSecondCounter("Roblox.Caching.EntityType", "Misses/s", entityType).IncrementBy((long)count);
			}
		}

		public void OnQuery(string entityType)
		{
			OnQuery(entityType, 1);
		}

		public void OnQuery(string entityType, int count)
		{
			if (IsValid(entityType))
			{
				_CounterRegistry.GetRateOfCountsPerSecondCounter("Roblox.Caching.EntityType", "Queries/s", entityType).IncrementBy((long)count);
			}
		}

		private bool IsValid(string entityType)
		{
			return !string.IsNullOrWhiteSpace(entityType);
		}
	}
}
