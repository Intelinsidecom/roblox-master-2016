using System;

namespace Roblox.Diagnostics
{
	[Obsolete("Use Roblox.Instrumentation instead of Windows Perfmon counters")]
	[AttributeUsage(AttributeTargets.Class)]
	public class CounterCategory : Attribute
	{
		public readonly string CategoryName;

		public bool IsAutoUpdateEnabled;

		public string CategoryHelp = string.Empty;

		public CounterCategory(string name)
		{
			CategoryName = name;
		}
	}
}
