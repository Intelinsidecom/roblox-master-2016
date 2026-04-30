using System;
using System.Runtime.CompilerServices;

namespace Roblox.Diagnostics
{
	internal class CustomCounterDescriptor<T>
	{
		[CompilerGenerated]
		private readonly string _003CGroupName_003Ek__BackingField;

		[CompilerGenerated]
		private readonly Action<T> _003CSetter_003Ek__BackingField;

		internal string GroupName
		{
			[CompilerGenerated]
			get
			{
				return _003CGroupName_003Ek__BackingField;
			}
		}

		internal Action<T> Setter
		{
			[CompilerGenerated]
			get
			{
				return _003CSetter_003Ek__BackingField;
			}
		}

		public CustomCounterDescriptor(string groupName, object container, Type containerType)
			: this(groupName, CounterHelpers.GetSetter<T>(groupName, container, containerType))
		{
		}

		public CustomCounterDescriptor(string groupName, Action<T> setter)
		{
			_003CGroupName_003Ek__BackingField = groupName;
			_003CSetter_003Ek__BackingField = setter;
		}
	}
}
