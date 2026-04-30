using System;

namespace Roblox.Common
{
	public class ExceptionHandlerUnregisteredLoggerException : Exception
	{
		public ExceptionHandlerUnregisteredLoggerException(string message, Exception innerException)
			: base(message, innerException)
		{
		}
	}
}
