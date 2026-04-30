using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;

namespace Roblox.Instrumentation
{
	[DebuggerDisplay("Category={Category}, Name={Name}, Instance={Instance}")]
	public struct CounterKey : IEquatable<CounterKey>
	{
		private readonly string _Key;

		[CompilerGenerated]
		private readonly string _003CCategory_003Ek__BackingField;

		[CompilerGenerated]
		private readonly string _003CName_003Ek__BackingField;

		[CompilerGenerated]
		private readonly string _003CInstance_003Ek__BackingField;

		public string Category
		{
			[CompilerGenerated]
			get
			{
				return _003CCategory_003Ek__BackingField;
			}
		}

		public string Name
		{
			[CompilerGenerated]
			get
			{
				return _003CName_003Ek__BackingField;
			}
		}

		public string Instance
		{
			[CompilerGenerated]
			get
			{
				return _003CInstance_003Ek__BackingField;
			}
		}

		public CounterKey(string category, string name, string instance)
		{
			if (string.IsNullOrWhiteSpace(category))
			{
				throw new ArgumentException("category");
			}
			if (string.IsNullOrWhiteSpace(name))
			{
				throw new ArgumentException("name");
			}
			_003CCategory_003Ek__BackingField = category;
			_003CName_003Ek__BackingField = name;
			_003CInstance_003Ek__BackingField = instance;
			_Key = string.Join("\t", category, name, instance);
		}

		public bool Equals(CounterKey other)
		{
			return string.Equals(_Key, other._Key);
		}

		public override bool Equals(object obj)
		{
			object obj2;
			if ((obj2 = obj) is CounterKey)
			{
				CounterKey other = (CounterKey)obj2;
				return Equals(other);
			}
			return false;
		}

		public override int GetHashCode()
		{
			return _Key.GetHashCode();
		}
	}
}
