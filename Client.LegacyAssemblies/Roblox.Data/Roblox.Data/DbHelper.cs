using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Data.Common;
using System.Data.SqlClient;
using Roblox.EventLog;

namespace Roblox.Data
{
	public class DbHelper : IDisposable
	{
		public string CommandText { get; set; }

		public CommandType CommandType { get; set; } = CommandType.Text;

		public string ConnectionString { get; set; }

		public string DatabaseName { get; set; }

		public DataSet Dataset { get; set; }

		public string Password { get; set; }

		public string ServerName { get; set; }

		public SqlConnection SQLConnection { get; private set; }

		public SqlCommand SQLCommand { get; private set; }

		public SqlDataAdapter SQLAdapter { get; private set; }

		public SqlParameterCollection SQLParameters
		{
			get
			{
				//IL_0009: Unknown result type (might be due to invalid IL or missing references)
				//IL_0013: Expected O, but got Unknown
				if (SQLCommand == null)
				{
					SQLCommand = new SqlCommand();
				}
				return SQLCommand.Parameters;
			}
		}

		public string UserName { get; set; }

		public bool UseTrustedConnection { get; set; }

		public DbHelper()
		{
		}

		public DbHelper(string connectionString)
		{
			ConnectionString = connectionString;
		}

		public DbHelper(string serverName, string databaseName, bool useTrustedConnection)
		{
			ServerName = serverName;
			DatabaseName = databaseName;
			UseTrustedConnection = useTrustedConnection;
			BuildConnectionString();
		}

		public DbHelper(string serverName, string databaseName, string username, string password)
		{
			ServerName = serverName;
			DatabaseName = databaseName;
			UserName = username;
			Password = password;
			BuildConnectionString();
		}

		private void BuildConnectionString()
		{
			string authentication = ";Trusted_Connection=yes";
			if (!UseTrustedConnection)
			{
				authentication = string.Format(";User ID={0};Password={1}", UserName, Password);
			}
			ConnectionString = string.Format("Data Source={0};Initial Catalog={1}{2}", ServerName, DatabaseName, authentication);
		}

		private void PrepareSQLCommand()
		{
			//IL_000f: Unknown result type (might be due to invalid IL or missing references)
			//IL_0019: Expected O, but got Unknown
			//IL_0022: Unknown result type (might be due to invalid IL or missing references)
			//IL_002c: Expected O, but got Unknown
			if (SQLConnection == null)
			{
				SQLConnection = new SqlConnection(ConnectionString);
			}
			if (SQLCommand == null)
			{
				SQLCommand = new SqlCommand();
			}
			((DbCommand)(object)SQLCommand).CommandText = CommandText;
			((DbCommand)(object)SQLCommand).CommandType = CommandType;
			SQLCommand.Connection = SQLConnection;
		}

		public void Connect()
		{
			//IL_0021: Unknown result type (might be due to invalid IL or missing references)
			//IL_002b: Expected O, but got Unknown
			if (string.IsNullOrWhiteSpace(ConnectionString))
			{
				throw new ApplicationException("ConnectionString must be specified before connecting.");
			}
			if (SQLConnection == null)
			{
				SQLConnection = new SqlConnection();
			}
			((DbConnection)(object)SQLConnection).ConnectionString = ConnectionString;
			((DbConnection)(object)SQLConnection).Open();
		}

		public void Disconnect()
		{
			if (((DbConnection)(object)SQLConnection).State != ConnectionState.Closed)
			{
				((DbConnection)(object)SQLConnection).Close();
			}
		}

		public virtual SqlDataReader ExecuteSQLReader(string commandText, CommandType commandType)
		{
			//IL_0060: Expected O, but got Unknown
			if (commandText != string.Empty)
			{
				CommandText = commandText;
			}
			CommandType = commandType;
			PrepareSQLCommand();
			try
			{
				if (((DbConnection)(object)SQLConnection).State == ConnectionState.Closed || ((DbConnection)(object)SQLConnection).State == ConnectionState.Broken)
				{
					Connect();
					return SQLCommand.ExecuteReader();
				}
				return SQLCommand.ExecuteReader();
			}
			catch (SqlException ex)
			{
				SqlException sqlException = ex;
				StaticLoggerRegistry.Instance.Error((Exception)(object)sqlException);
				throw sqlException;
			}
		}

		public object ExecuteSQLScalar(string commandText, CommandType commandType)
		{
			//IL_0068: Expected O, but got Unknown
			if (commandText != string.Empty)
			{
				CommandText = commandText;
			}
			CommandType = commandType;
			PrepareSQLCommand();
			try
			{
				if (((DbConnection)(object)SQLConnection).State == ConnectionState.Closed || ((DbConnection)(object)SQLConnection).State == ConnectionState.Broken)
				{
					try
					{
						Connect();
						return ((DbCommand)(object)SQLCommand).ExecuteScalar();
					}
					finally
					{
						Disconnect();
					}
				}
				return ((DbCommand)(object)SQLCommand).ExecuteScalar();
			}
			catch (SqlException ex)
			{
				SqlException eSQL = ex;
				StaticLoggerRegistry.Instance.Error((Exception)(object)eSQL);
				throw eSQL;
			}
		}

		public int ExecuteSQLNonQuery(string commandText, CommandType commandType)
		{
			//IL_0068: Expected O, but got Unknown
			if (commandText != string.Empty)
			{
				CommandText = commandText;
			}
			CommandType = commandType;
			PrepareSQLCommand();
			try
			{
				if (((DbConnection)(object)SQLConnection).State == ConnectionState.Closed || ((DbConnection)(object)SQLConnection).State == ConnectionState.Broken)
				{
					try
					{
						Connect();
						return ((DbCommand)(object)SQLCommand).ExecuteNonQuery();
					}
					finally
					{
						Disconnect();
					}
				}
				return ((DbCommand)(object)SQLCommand).ExecuteNonQuery();
			}
			catch (SqlException ex)
			{
				SqlException eSQL = ex;
				StaticLoggerRegistry.Instance.Error((Exception)(object)eSQL);
				throw eSQL;
			}
		}

		public DataSet ExecuteSQLDataset(string commandText, CommandType commandType, string tableName)
		{
			//IL_0074: Expected O, but got Unknown
			//IL_0028: Unknown result type (might be due to invalid IL or missing references)
			//IL_0032: Expected O, but got Unknown
			if (commandText != string.Empty)
			{
				CommandText = commandText;
			}
			CommandType = commandType;
			PrepareSQLCommand();
			SQLAdapter = new SqlDataAdapter(SQLCommand);
			Dataset = new DataSet();
			try
			{
				if (tableName != "")
				{
					((DbDataAdapter)(object)SQLAdapter).Fill(Dataset, tableName);
				}
				else
				{
					((DataAdapter)(object)SQLAdapter).Fill(Dataset);
				}
			}
			catch (SqlException ex)
			{
				SqlException sqlException = ex;
				StaticLoggerRegistry.Instance.Error((Exception)(object)sqlException);
				throw sqlException;
			}
			return Dataset;
		}

		public static ICollection<T> BuildIDCollection<T>(SqlDataReader reader)
		{
			ICollection<T> result = new List<T>();
			while (((DbDataReader)(object)reader).Read())
			{
				result.Add((T)Convert.ChangeType(((DbDataReader)(object)reader)["ID"], typeof(T)));
			}
			return result;
		}

		public void Dispose()
		{
			DataSet dataset = Dataset;
			if (dataset != null)
			{
				dataset.Dispose();
			}
			SqlDataAdapter sQLAdapter = SQLAdapter;
			if (sQLAdapter != null)
			{
				((Component)(object)sQLAdapter).Dispose();
			}
			SqlCommand sQLCommand = SQLCommand;
			if (sQLCommand != null)
			{
				((Component)(object)sQLCommand).Dispose();
			}
			SqlConnection sQLConnection = SQLConnection;
			if (sQLConnection != null)
			{
				((Component)(object)sQLConnection).Dispose();
			}
		}
	}
}
