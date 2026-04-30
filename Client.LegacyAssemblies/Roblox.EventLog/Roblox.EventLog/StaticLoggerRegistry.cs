using System;

namespace Roblox.EventLog
{
	public static class StaticLoggerRegistry
	{
		private static ILogger _Instance;

		public static ILogger Instance
		{
			get
			{
				ILogger instance = _Instance;
				if (instance == null)
				{
					throw new UninitializedLoggerException();
				}
				return instance;
			}
			private set
			{
				_Instance = value;
			}
		}

		public static void SetLogger(ILogger logger)
		{
			if (logger == null)
			{
				throw new ArgumentNullException("logger");
			}
			Instance = logger;
		}
	}
}
