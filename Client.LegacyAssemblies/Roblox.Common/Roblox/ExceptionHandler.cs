using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data.SqlClient;
using System.Runtime.CompilerServices;
using Roblox.Common;
using Roblox.EventLog;

namespace Roblox
{
	public class ExceptionHandler
	{
		public class PresentableException : ApplicationException
		{
			[CompilerGenerated]
			private readonly string _003CPresentationErrorCode_003Ek__BackingField;

			[CompilerGenerated]
			private readonly string _003CPresentationErrorMessage_003Ek__BackingField;

			[CompilerGenerated]
			private readonly string _003CPresentationErrorTitle_003Ek__BackingField;

			public string PresentationErrorCode
			{
				[CompilerGenerated]
				get
				{
					return _003CPresentationErrorCode_003Ek__BackingField;
				}
			}

			public string PresentationErrorMessage
			{
				[CompilerGenerated]
				get
				{
					return _003CPresentationErrorMessage_003Ek__BackingField;
				}
			}

			public string PresentationErrorTitle
			{
				[CompilerGenerated]
				get
				{
					return _003CPresentationErrorTitle_003Ek__BackingField;
				}
			}

			public PresentableException(string msg, string title = "Error with your request", string code = "", Exception ex = null)
				: base(msg, ex)
			{
				_003CPresentationErrorMessage_003Ek__BackingField = msg;
				_003CPresentationErrorCode_003Ek__BackingField = code;
				_003CPresentationErrorTitle_003Ek__BackingField = title;
			}
		}

		public class GoogleTrackingException : ApplicationException
		{
			[CompilerGenerated]
			private readonly string _003CErrorType_003Ek__BackingField;

			[CompilerGenerated]
			private readonly string _003CErrorMessage_003Ek__BackingField;

			[CompilerGenerated]
			private readonly string _003CUrl_003Ek__BackingField;

			public string ErrorType
			{
				[CompilerGenerated]
				get
				{
					return _003CErrorType_003Ek__BackingField;
				}
			}

			public string ErrorMessage
			{
				[CompilerGenerated]
				get
				{
					return _003CErrorMessage_003Ek__BackingField;
				}
			}

			public string Url
			{
				[CompilerGenerated]
				get
				{
					return _003CUrl_003Ek__BackingField;
				}
			}

			public GoogleTrackingException(string errorType, string msg, string errorPageUrl)
			{
				_003CErrorType_003Ek__BackingField = errorType;
				_003CErrorMessage_003Ek__BackingField = msg;
				_003CUrl_003Ek__BackingField = errorPageUrl;
			}
		}

		public enum PresentableSQLErrors
		{
			[Description("Search Query is malformed, please check the search terms and try your search again.")]
			SearchQueryMalformed = 7630
		}

		private static Dictionary<int, PresentableSQLErrors> PresentableSQLErrorList;

		private static List<IExceptionHandlerListener> listeners;

		static ExceptionHandler()
		{
			listeners = new List<IExceptionHandlerListener>();
			if (PresentableSQLErrorList != null)
			{
				return;
			}
			PresentableSQLErrorList = new Dictionary<int, PresentableSQLErrors>();
			foreach (PresentableSQLErrors err in Converters.EnumToList<PresentableSQLErrors>())
			{
				PresentableSQLErrorList.Add((int)err, err);
			}
		}

		public static void AddListener(IExceptionHandlerListener listener)
		{
			lock (listeners)
			{
				listeners.Add(listener);
			}
		}

		public static void RemoveListener(IExceptionHandlerListener listener)
		{
			lock (listeners)
			{
				listeners.Remove(listener);
			}
		}

		public static void LogException(string errorMessage)
		{
			LogException(new ApplicationException(errorMessage));
		}

		public static void LogException(Exception ex)
		{
			LogException(ex, (LogLevel)1);
		}

		public static void LogException(string errorMessage, LogLevel logLevel)
		{
			//IL_0006: Unknown result type (might be due to invalid IL or missing references)
			LogException(new ApplicationException(errorMessage), logLevel);
		}

		public static void LogException(Exception ex, LogLevel logLevel)
		{
			//IL_000b: Unknown result type (might be due to invalid IL or missing references)
			if (ex is NotLoggedException)
			{
				return;
			}
			try
			{
				WriteUsingLogger(ex, logLevel);
			}
			catch (UninitializedLoggerException)
			{
				throw new ExceptionHandlerUnregisteredLoggerException("ExceptionHandler failed to log because StaticLoggerRegistry was uninitialized. Exception that was being logged: ", ex);
			}
			foreach (IExceptionHandlerListener listener in listeners)
			{
				listener.ExceptionLogged();
			}
		}

		public static void HandleSQLException(SqlException eSQL)
		{
			PresentableSQLErrors result;
			if (PresentableSQLErrorList.TryGetValue(eSQL.Number, out result))
			{
				PresentableException ex = new PresentableException(result.ToString(), result.ToDescription(), eSQL.Message, eSQL);
				LogException(ex, (LogLevel)2);
				throw ex;
			}
			throw eSQL;
		}

		private static string GetInnerText(Exception ex)
		{
			if (ex.InnerException != null)
			{
				return GetInnerText(ex.InnerException);
			}
			return ex.ToString();
		}

		private static string GetText(Exception ex)
		{
			if (ex.InnerException != null)
			{
				return string.Format("{0}\n\nCaused by:\n{1}", ex, GetText(ex.InnerException));
			}
			return ex.ToString();
		}

		private static void WriteUsingLogger(Exception exception, LogLevel logLevel)
		{
			//IL_0013: Unknown result type (might be due to invalid IL or missing references)
			//IL_0015: Unknown result type (might be due to invalid IL or missing references)
			//IL_002b: Expected I4, but got Unknown
			ILogger logger = StaticLoggerRegistry.Instance;
			switch ((int)logLevel - 1)
			{
			case 0:
				logger.Error(exception);
				break;
			case 1:
				logger.Warning((Func<string>)(() => exception.ToString()));
				break;
			case 2:
				logger.Info((Func<string>)(() => exception.ToString()));
				break;
			default:
				logger.Verbose((Func<string>)(() => exception.ToString()));
				break;
			}
		}
	}
}
