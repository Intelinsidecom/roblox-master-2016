using System.Collections.Generic;
using System.Data;
using System.Data.Common;
using System.Data.SqlClient;
using System.Runtime.CompilerServices;

namespace Roblox.Data
{
	public struct DbInfo
	{
		[CompilerGenerated]
		private readonly string _003CConnectionString_003Ek__BackingField;

		[CompilerGenerated]
		private readonly string _003CStoredProcedure_003Ek__BackingField;

		[CompilerGenerated]
		private readonly SqlParameter _003COutputParameter_003Ek__BackingField;

		[CompilerGenerated]
		private readonly ICollection<SqlParameter> _003CQueryParameters_003Ek__BackingField;

		public string ConnectionString
		{
			[CompilerGenerated]
			get
			{
				return _003CConnectionString_003Ek__BackingField;
			}
		}

		public string StoredProcedure
		{
			[CompilerGenerated]
			get
			{
				return _003CStoredProcedure_003Ek__BackingField;
			}
		}

		public SqlParameter OutputParameter
		{
			[CompilerGenerated]
			get
			{
				return _003COutputParameter_003Ek__BackingField;
			}
		}

		public ICollection<SqlParameter> QueryParameters
		{
			[CompilerGenerated]
			get
			{
				return _003CQueryParameters_003Ek__BackingField;
			}
		}

		public DbInfo(string connectionString, string storedProcedure)
			: this(connectionString, storedProcedure, null, new List<SqlParameter>())
		{
		}

		public DbInfo(string connectionString, string storedProcedure, ICollection<SqlParameter> queryParameters)
			: this(connectionString, storedProcedure, null, queryParameters)
		{
		}

		public DbInfo(string connectionString, string storedProcedure, SqlParameter outputParameter, ICollection<SqlParameter> queryParameters)
		{
			_003CConnectionString_003Ek__BackingField = connectionString;
			_003CStoredProcedure_003Ek__BackingField = storedProcedure;
			_003COutputParameter_003Ek__BackingField = outputParameter;
			_003CQueryParameters_003Ek__BackingField = queryParameters;
			if (OutputParameter != null)
			{
				((DbParameter)(object)OutputParameter).Direction = ParameterDirection.Output;
			}
		}
	}
}
