using System;
using System.Runtime.CompilerServices;

namespace Roblox.Instrumentation
{
	public static class StaticCounterRegistry
	{
		[CompilerGenerated]
		private static readonly ICounterRegistry _003CInstance_003Ek__BackingField;

		public static ICounterRegistry Instance
		{
			[CompilerGenerated]
			get
			{
				return _003CInstance_003Ek__BackingField;
			}
		}

		public static Action<Exception> ExceptionHandler { get; set; }

		static StaticCounterRegistry()
		{
			_003CInstance_003Ek__BackingField = new CounterRegistry();
			new CounterReporter(Instance, HandleException).Start();
		}

		private static void HandleException(Exception ex)
		{
			try
			{
				Action<Exception> exceptionHandler = ExceptionHandler;
				if (exceptionHandler != null)
				{
					exceptionHandler(ex);
				}
			}
			catch
			{
			}
		}
	}
}
