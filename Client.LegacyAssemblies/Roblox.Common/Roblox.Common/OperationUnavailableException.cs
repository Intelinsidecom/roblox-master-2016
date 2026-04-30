using System;

namespace Roblox.Common
{
	public class OperationUnavailableException : Exception
	{
		public OperationUnavailableException()
		{
		}

		public OperationUnavailableException(string message)
			: base(message)
		{
		}

		public OperationUnavailableException(string message, Exception innerException)
			: base(message, innerException)
		{
		}
	}
}
