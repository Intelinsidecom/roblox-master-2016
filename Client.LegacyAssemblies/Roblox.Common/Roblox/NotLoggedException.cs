using System;

namespace Roblox
{
	public class NotLoggedException : Exception
	{
		public NotLoggedException(string reason)
			: base(reason)
		{
		}

		public NotLoggedException(string reason, Exception inner)
			: base(reason, inner)
		{
		}

		public NotLoggedException()
		{
		}
	}
}
