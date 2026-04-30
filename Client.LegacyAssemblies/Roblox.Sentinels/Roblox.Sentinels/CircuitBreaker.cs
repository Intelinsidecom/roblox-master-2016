using System.Runtime.CompilerServices;

namespace Roblox.Sentinels
{
	public class CircuitBreaker : CircuitBreakerBase
	{
		[CompilerGenerated]
		private readonly string _003CName_003Ek__BackingField;

		protected internal override string Name
		{
			[CompilerGenerated]
			get
			{
				return _003CName_003Ek__BackingField;
			}
		}

		public CircuitBreaker(string name)
		{
			_003CName_003Ek__BackingField = name;
		}
	}
}
