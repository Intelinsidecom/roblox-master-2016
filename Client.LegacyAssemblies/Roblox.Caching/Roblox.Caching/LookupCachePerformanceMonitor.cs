using System;
using System.Runtime.CompilerServices;
using Roblox.Instrumentation;

namespace Roblox.Caching
{
	internal class LookupCachePerformanceMonitor
	{
		private const string _Category = "Roblox.Caching.LookupCache";

		[CompilerGenerated]
		private readonly IRateOfCountsPerSecondCounter _003CGetCountPerSecond_003Ek__BackingField;

		[CompilerGenerated]
		private readonly IRateOfCountsPerSecondCounter _003CGetCountErrorPerSecond_003Ek__BackingField;

		[CompilerGenerated]
		private readonly IRateOfCountsPerSecondCounter _003CSetCountPerSecond_003Ek__BackingField;

		[CompilerGenerated]
		private readonly IRateOfCountsPerSecondCounter _003CSetCountErrorPerSecond_003Ek__BackingField;

		[CompilerGenerated]
		private readonly IFractionCounter _003CEntityCountHitRate_003Ek__BackingField;

		[CompilerGenerated]
		private readonly IRateOfCountsPerSecondCounter _003CGetLookupPerSecond_003Ek__BackingField;

		[CompilerGenerated]
		private readonly IRateOfCountsPerSecondCounter _003CGetLookupErrorPerSecond_003Ek__BackingField;

		[CompilerGenerated]
		private readonly IRateOfCountsPerSecondCounter _003CSetLookupPerSecond_003Ek__BackingField;

		[CompilerGenerated]
		private readonly IRateOfCountsPerSecondCounter _003CSetLookupErrorPerSecond_003Ek__BackingField;

		[CompilerGenerated]
		private readonly IFractionCounter _003CEntityLookupHitRate_003Ek__BackingField;

		public IRateOfCountsPerSecondCounter GetCountPerSecond
		{
			[CompilerGenerated]
			get
			{
				return _003CGetCountPerSecond_003Ek__BackingField;
			}
		}

		public IRateOfCountsPerSecondCounter GetCountErrorPerSecond
		{
			[CompilerGenerated]
			get
			{
				return _003CGetCountErrorPerSecond_003Ek__BackingField;
			}
		}

		public IRateOfCountsPerSecondCounter SetCountPerSecond
		{
			[CompilerGenerated]
			get
			{
				return _003CSetCountPerSecond_003Ek__BackingField;
			}
		}

		public IRateOfCountsPerSecondCounter SetCountErrorPerSecond
		{
			[CompilerGenerated]
			get
			{
				return _003CSetCountErrorPerSecond_003Ek__BackingField;
			}
		}

		public IFractionCounter EntityCountHitRate
		{
			[CompilerGenerated]
			get
			{
				return _003CEntityCountHitRate_003Ek__BackingField;
			}
		}

		public IRateOfCountsPerSecondCounter GetLookupPerSecond
		{
			[CompilerGenerated]
			get
			{
				return _003CGetLookupPerSecond_003Ek__BackingField;
			}
		}

		public IRateOfCountsPerSecondCounter GetLookupErrorPerSecond
		{
			[CompilerGenerated]
			get
			{
				return _003CGetLookupErrorPerSecond_003Ek__BackingField;
			}
		}

		public IRateOfCountsPerSecondCounter SetLookupPerSecond
		{
			[CompilerGenerated]
			get
			{
				return _003CSetLookupPerSecond_003Ek__BackingField;
			}
		}

		public IRateOfCountsPerSecondCounter SetLookupErrorPerSecond
		{
			[CompilerGenerated]
			get
			{
				return _003CSetLookupErrorPerSecond_003Ek__BackingField;
			}
		}

		public IFractionCounter EntityLookupHitRate
		{
			[CompilerGenerated]
			get
			{
				return _003CEntityLookupHitRate_003Ek__BackingField;
			}
		}

		public LookupCachePerformanceMonitor(ICounterRegistry counterRegistry, string instance)
		{
			if (counterRegistry == null)
			{
				throw new ArgumentNullException("counterRegistry");
			}
			if (string.IsNullOrWhiteSpace(instance))
			{
				throw new ArgumentNullException("instance");
			}
			_003CGetCountPerSecond_003Ek__BackingField = counterRegistry.GetRateOfCountsPerSecondCounter("Roblox.Caching.LookupCache", "GetCountPerSecond", instance);
			_003CGetCountErrorPerSecond_003Ek__BackingField = counterRegistry.GetRateOfCountsPerSecondCounter("Roblox.Caching.LookupCache", "GetCountErrorPerSecond", instance);
			_003CSetCountPerSecond_003Ek__BackingField = counterRegistry.GetRateOfCountsPerSecondCounter("Roblox.Caching.LookupCache", "SetCountPerSecond", instance);
			_003CSetCountErrorPerSecond_003Ek__BackingField = counterRegistry.GetRateOfCountsPerSecondCounter("Roblox.Caching.LookupCache", "SetCountErrorPerSecond", instance);
			_003CEntityCountHitRate_003Ek__BackingField = counterRegistry.GetFractionCounter("Roblox.Caching.LookupCache", "EntityCountHitRate", instance);
			_003CGetLookupPerSecond_003Ek__BackingField = counterRegistry.GetRateOfCountsPerSecondCounter("Roblox.Caching.LookupCache", "GetLookupPerSecond", instance);
			_003CGetLookupErrorPerSecond_003Ek__BackingField = counterRegistry.GetRateOfCountsPerSecondCounter("Roblox.Caching.LookupCache", "GetLookupErrorPerSecond", instance);
			_003CSetLookupPerSecond_003Ek__BackingField = counterRegistry.GetRateOfCountsPerSecondCounter("Roblox.Caching.LookupCache", "SetLookupPerSecond", instance);
			_003CSetLookupErrorPerSecond_003Ek__BackingField = counterRegistry.GetRateOfCountsPerSecondCounter("Roblox.Caching.LookupCache", "SetLookupErrorPerSecond", instance);
			_003CEntityLookupHitRate_003Ek__BackingField = counterRegistry.GetFractionCounter("Roblox.Caching.LookupCache", "EntityLookupHitRate", instance);
		}

		internal LookupCachePerformanceMonitor()
		{
		}
	}
}
