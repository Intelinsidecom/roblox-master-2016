using System;
using System.Data;
using System.Data.SqlClient;
using System.Runtime.CompilerServices;

namespace Roblox.Mssql
{
	public class DatabaseExecutionEventArgs : EventArgs
	{
		[CompilerGenerated]
		private readonly string _003CCommandText_003Ek__BackingField;

		[CompilerGenerated]
		private readonly CommandType _003CCommandType_003Ek__BackingField;

		[CompilerGenerated]
		private readonly Database _003CDatabase_003Ek__BackingField;

		[CompilerGenerated]
		private readonly long _003CRequestId_003Ek__BackingField;

		[CompilerGenerated]
		private readonly SqlParameter[] _003CSqlParameters_003Ek__BackingField;

		public string CommandText
		{
			[CompilerGenerated]
			get
			{
				return _003CCommandText_003Ek__BackingField;
			}
		}

		public CommandType CommandType
		{
			[CompilerGenerated]
			get
			{
				return _003CCommandType_003Ek__BackingField;
			}
		}

		public Database Database
		{
			[CompilerGenerated]
			get
			{
				return _003CDatabase_003Ek__BackingField;
			}
		}

		public Exception Exception { get; set; }

		public long RequestId
		{
			[CompilerGenerated]
			get
			{
				return _003CRequestId_003Ek__BackingField;
			}
		}

		public SqlParameter[] SqlParameters
		{
			[CompilerGenerated]
			get
			{
				return _003CSqlParameters_003Ek__BackingField;
			}
		}

		public DatabaseExecutionEventArgs(Database database, CommandType commandType, string commandText, SqlParameter[] sqlParameters, long requestId)
		{
			_003CDatabase_003Ek__BackingField = database;
			_003CCommandType_003Ek__BackingField = commandType;
			_003CCommandText_003Ek__BackingField = commandText;
			_003CSqlParameters_003Ek__BackingField = sqlParameters;
			_003CRequestId_003Ek__BackingField = requestId;
		}
	}
}
