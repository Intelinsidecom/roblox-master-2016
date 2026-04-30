using System;
using System.Data.SqlClient;
using Roblox.Sentinels;

namespace Roblox.Mssql
{
	public class MssqlCircuitBreaker : ExecutionCircuitBreakerBase
	{
		private readonly TimeSpan _RetryInterval;

		private readonly string _Name;

		protected override string Name
		{
			get
			{
				return _Name;
			}
		}

		protected override TimeSpan RetryInterval
		{
			get
			{
				return _RetryInterval;
			}
		}

		public MssqlCircuitBreaker(IDatabase database, TimeSpan retryInterval)
		{
			_RetryInterval = retryInterval;
			_Name = string.Format("MS SQL Database {0} Circuit Breaker", database.Name);
		}

		protected override bool ShouldTrip(Exception ex)
		{
			SqlException sqlException;
			if ((sqlException = (SqlException)(object)((ex is SqlException) ? ex : null)) == null)
			{
				return false;
			}
			int sqlExceptionNumber = sqlException.Number;
			if (sqlExceptionNumber != -2)
			{
				return sqlExceptionNumber == 11;
			}
			return true;
		}
	}
}
