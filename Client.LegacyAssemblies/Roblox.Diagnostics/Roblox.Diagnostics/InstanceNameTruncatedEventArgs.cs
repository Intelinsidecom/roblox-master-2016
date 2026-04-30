using System;
using System.Collections.Generic;
using System.Runtime.CompilerServices;

namespace Roblox.Diagnostics
{
	public class InstanceNameTruncatedEventArgs : EventArgs
	{
		[CompilerGenerated]
		private readonly string _003CCategory_003Ek__BackingField;

		[CompilerGenerated]
		private readonly string _003COldInstanceName_003Ek__BackingField;

		[CompilerGenerated]
		private readonly string _003CNewInstanceName_003Ek__BackingField;

		[CompilerGenerated]
		private readonly IReadOnlyCollection<string> _003CCounterNames_003Ek__BackingField;

		public string Category
		{
			[CompilerGenerated]
			get
			{
				return _003CCategory_003Ek__BackingField;
			}
		}

		public string OldInstanceName
		{
			[CompilerGenerated]
			get
			{
				return _003COldInstanceName_003Ek__BackingField;
			}
		}

		public string NewInstanceName
		{
			[CompilerGenerated]
			get
			{
				return _003CNewInstanceName_003Ek__BackingField;
			}
		}

		public IReadOnlyCollection<string> CounterNames
		{
			[CompilerGenerated]
			get
			{
				return _003CCounterNames_003Ek__BackingField;
			}
		}

		public InstanceNameTruncatedEventArgs(string category, string oldInstanceName, string newInstanceName, IReadOnlyCollection<string> counterNames)
		{
			_003CCategory_003Ek__BackingField = category;
			_003COldInstanceName_003Ek__BackingField = oldInstanceName;
			_003CNewInstanceName_003Ek__BackingField = newInstanceName;
			_003CCounterNames_003Ek__BackingField = counterNames;
		}
	}
}
