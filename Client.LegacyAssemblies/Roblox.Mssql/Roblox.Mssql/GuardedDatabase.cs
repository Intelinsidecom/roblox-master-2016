using System;
using System.Data;
using System.Data.SqlClient;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using System.Threading;
using System.Threading.Tasks;

namespace Roblox.Mssql
{
	public class GuardedDatabase : Database
	{
		private readonly MssqlCircuitBreaker _CircuitBreaker;

		public GuardedDatabase(string name, Func<string> connectionStringGetter, Func<TimeSpan> commandTimeoutGetter, TimeSpan retryInterval)
			: base(name, connectionStringGetter, commandTimeoutGetter)
		{
			_CircuitBreaker = new MssqlCircuitBreaker(this, retryInterval);
		}

		protected override void Execute(CommandType commandType, string commandText, SqlParameter[] sqlParameters, Action<SqlCommand> action, int? commandTimeout = null, ApplicationIntent? applicationIntent = null)
		{
			_CircuitBreaker.Execute(delegate
			{
				_003C_003En__0(commandType, commandText, sqlParameters, action, commandTimeout, applicationIntent);
			});
		}

		protected override Task ExecuteAsync(CommandType commandType, string commandText, SqlParameter[] sqlParameters, Func<SqlCommand, CancellationToken, Task> action, CancellationToken cancellationToken = default(CancellationToken), int? commandTimeout = null, ApplicationIntent? applicationIntent = null)
		{
			return _CircuitBreaker.ExecuteAsync((CancellationToken ct) => _003C_003En__1(commandType, commandText, sqlParameters, action, cancellationToken, commandTimeout, applicationIntent), cancellationToken);
		}

		[CompilerGenerated]
		[DebuggerHidden]
		private void _003C_003En__0(CommandType commandType, string commandText, SqlParameter[] sqlParameters, Action<SqlCommand> action, int? commandTimeout, ApplicationIntent? applicationIntent)
		{
			base.Execute(commandType, commandText, sqlParameters, action, commandTimeout, applicationIntent);
		}

		[CompilerGenerated]
		[DebuggerHidden]
		private Task _003C_003En__1(CommandType commandType, string commandText, SqlParameter[] sqlParameters, Func<SqlCommand, CancellationToken, Task> action, CancellationToken cancellationToken, int? commandTimeout, ApplicationIntent? applicationIntent)
		{
			return base.ExecuteAsync(commandType, commandText, sqlParameters, action, cancellationToken, commandTimeout, applicationIntent);
		}
	}
}
