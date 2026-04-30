using System;
using System.Collections.Generic;
using System.Data;
using System.Data.Common;
using System.Data.SqlClient;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using System.Threading;
using System.Threading.Tasks;

namespace Roblox.Mssql
{
	public class Database : IDatabase, IDisposable
	{
		[StructLayout(LayoutKind.Auto)]
		[CompilerGenerated]
		private struct _003CExecuteAsync_003Ed__35 : IAsyncStateMachine
		{
			public int _003C_003E1__state;

			public AsyncTaskMethodBuilder _003C_003Et__builder;

			public string commandText;

			public Database _003C_003E4__this;

			public CancellationToken cancellationToken;

			public CommandType commandType;

			public SqlParameter[] sqlParameters;

			public ApplicationIntent? applicationIntent;

			public int? commandTimeout;

			public Func<SqlCommand, CancellationToken, Task> action;

			private DatabaseExecutionEventArgs _003CeventArgs_003E5__2;

			private TaskAwaiter _003C_003Eu__1;

			private SqlConnection _003CsqlConnection_003E5__3;

			private SqlCommand _003CsqlCommand_003E5__4;

			private void MoveNext()
			{
				//IL_00e3: Unknown result type (might be due to invalid IL or missing references)
				//IL_00ed: Expected O, but got Unknown
				//IL_0101: Unknown result type (might be due to invalid IL or missing references)
				//IL_010b: Expected O, but got Unknown
				int num = _003C_003E1__state;
				Database database = _003C_003E4__this;
				try
				{
					TaskAwaiter awaiter;
					if (num != 0)
					{
						if ((uint)(num - 1) <= 1u)
						{
							goto IL_00d0;
						}
						if (string.IsNullOrWhiteSpace(commandText))
						{
							throw new ArgumentException("Invalid value for argument commandText", "commandText");
						}
						awaiter = database.OnExecutionStartingAsync(cancellationToken).GetAwaiter();
						if (!awaiter.IsCompleted)
						{
							num = (_003C_003E1__state = 0);
							_003C_003Eu__1 = awaiter;
							_003C_003Et__builder.AwaitUnsafeOnCompleted(ref awaiter, ref this);
							return;
						}
					}
					else
					{
						awaiter = _003C_003Eu__1;
						_003C_003Eu__1 = default(TaskAwaiter);
						num = (_003C_003E1__state = -1);
					}
					awaiter.GetResult();
					long requestCounter = Interlocked.Increment(ref database._RequestCounter);
					_003CeventArgs_003E5__2 = new DatabaseExecutionEventArgs(database, commandType, commandText, sqlParameters, requestCounter);
					database.OnExecutionStarted(_003CeventArgs_003E5__2);
					goto IL_00d0;
					IL_00d0:
					try
					{
						if ((uint)(num - 1) > 1u)
						{
							_003CsqlConnection_003E5__3 = new SqlConnection(database.GetUtilizedConnectionStringAsync(applicationIntent));
						}
						try
						{
							if ((uint)(num - 1) > 1u)
							{
								_003CsqlCommand_003E5__4 = new SqlCommand(commandText, _003CsqlConnection_003E5__3);
							}
							try
							{
								if (num != 1)
								{
									if (num == 2)
									{
										awaiter = _003C_003Eu__1;
										_003C_003Eu__1 = default(TaskAwaiter);
										num = (_003C_003E1__state = -1);
										goto IL_023f;
									}
									((DbCommand)(object)_003CsqlCommand_003E5__4).CommandType = commandType;
									((DbCommand)(object)_003CsqlCommand_003E5__4).CommandTimeout = commandTimeout ?? database._CommandTimeoutInSeconds;
									if (sqlParameters != null)
									{
										_003CsqlCommand_003E5__4.Parameters.AddRange(sqlParameters);
									}
									awaiter = ((DbConnection)(object)_003CsqlConnection_003E5__3).OpenAsync(cancellationToken).GetAwaiter();
									if (!awaiter.IsCompleted)
									{
										num = (_003C_003E1__state = 1);
										_003C_003Eu__1 = awaiter;
										_003C_003Et__builder.AwaitUnsafeOnCompleted(ref awaiter, ref this);
										return;
									}
								}
								else
								{
									awaiter = _003C_003Eu__1;
									_003C_003Eu__1 = default(TaskAwaiter);
									num = (_003C_003E1__state = -1);
								}
								awaiter.GetResult();
								awaiter = action(_003CsqlCommand_003E5__4, cancellationToken).GetAwaiter();
								if (!awaiter.IsCompleted)
								{
									num = (_003C_003E1__state = 2);
									_003C_003Eu__1 = awaiter;
									_003C_003Et__builder.AwaitUnsafeOnCompleted(ref awaiter, ref this);
									return;
								}
								goto IL_023f;
								IL_023f:
								awaiter.GetResult();
							}
							finally
							{
								if (num < 0 && _003CsqlCommand_003E5__4 != null)
								{
									((IDisposable)_003CsqlCommand_003E5__4).Dispose();
								}
							}
							_003CsqlCommand_003E5__4 = null;
						}
						finally
						{
							if (num < 0 && _003CsqlConnection_003E5__3 != null)
							{
								((IDisposable)_003CsqlConnection_003E5__3).Dispose();
							}
						}
						_003CsqlConnection_003E5__3 = null;
						database.OnExecutionSucceeded(_003CeventArgs_003E5__2);
					}
					catch (Exception exception)
					{
						_003CeventArgs_003E5__2.Exception = exception;
						database.OnExecutionFailed(_003CeventArgs_003E5__2);
						throw;
					}
					finally
					{
						if (num < 0)
						{
							database.OnExecutionFinished(_003CeventArgs_003E5__2);
						}
					}
				}
				catch (Exception exception2)
				{
					_003C_003E1__state = -2;
					_003C_003Et__builder.SetException(exception2);
					return;
				}
				_003C_003E1__state = -2;
				_003C_003Et__builder.SetResult();
			}

			void IAsyncStateMachine.MoveNext()
			{
				//ILSpy generated this explicit interface implementation from .override directive in MoveNext
				this.MoveNext();
			}

			[DebuggerHidden]
			private void SetStateMachine(IAsyncStateMachine stateMachine)
			{
				_003C_003Et__builder.SetStateMachine(stateMachine);
			}

			void IAsyncStateMachine.SetStateMachine(IAsyncStateMachine stateMachine)
			{
				//ILSpy generated this explicit interface implementation from .override directive in SetStateMachine
				this.SetStateMachine(stateMachine);
			}
		}

		[CompilerGenerated]
		private sealed class _003C_003Ec__DisplayClass39_0
		{
			[StructLayout(LayoutKind.Auto)]
			private struct _003C_003CExecuteNonQueryAsync_003Eb__0_003Ed : IAsyncStateMachine
			{
				public int _003C_003E1__state;

				public AsyncTaskMethodBuilder _003C_003Et__builder;

				public SqlCommand sqlCommand;

				public CancellationToken innerCancellationToken;

				public _003C_003Ec__DisplayClass39_0 _003C_003E4__this;

				private ConfiguredTaskAwaitable<int>.ConfiguredTaskAwaiter _003C_003Eu__1;

				private void MoveNext()
				{
					int num = _003C_003E1__state;
					_003C_003Ec__DisplayClass39_0 _003C_003Ec__DisplayClass39_ = _003C_003E4__this;
					try
					{
						ConfiguredTaskAwaitable<int>.ConfiguredTaskAwaiter awaiter;
						if (num != 0)
						{
							awaiter = ((DbCommand)(object)sqlCommand).ExecuteNonQueryAsync(innerCancellationToken).ConfigureAwait(false).GetAwaiter();
							if (!awaiter.IsCompleted)
							{
								num = (_003C_003E1__state = 0);
								_003C_003Eu__1 = awaiter;
								_003C_003Et__builder.AwaitUnsafeOnCompleted(ref awaiter, ref this);
								return;
							}
						}
						else
						{
							awaiter = _003C_003Eu__1;
							_003C_003Eu__1 = default(ConfiguredTaskAwaitable<int>.ConfiguredTaskAwaiter);
							num = (_003C_003E1__state = -1);
						}
						int result = awaiter.GetResult();
						_003C_003Ec__DisplayClass39_.numberOfRecordsAffected = result;
					}
					catch (Exception exception)
					{
						_003C_003E1__state = -2;
						_003C_003Et__builder.SetException(exception);
						return;
					}
					_003C_003E1__state = -2;
					_003C_003Et__builder.SetResult();
				}

				void IAsyncStateMachine.MoveNext()
				{
					//ILSpy generated this explicit interface implementation from .override directive in MoveNext
					this.MoveNext();
				}

				[DebuggerHidden]
				private void SetStateMachine(IAsyncStateMachine stateMachine)
				{
					_003C_003Et__builder.SetStateMachine(stateMachine);
				}

				void IAsyncStateMachine.SetStateMachine(IAsyncStateMachine stateMachine)
				{
					//ILSpy generated this explicit interface implementation from .override directive in SetStateMachine
					this.SetStateMachine(stateMachine);
				}
			}

			public int numberOfRecordsAffected;

			[AsyncStateMachine(typeof(_003C_003CExecuteNonQueryAsync_003Eb__0_003Ed))]
			internal Task _003CExecuteNonQueryAsync_003Eb__0(SqlCommand sqlCommand, CancellationToken innerCancellationToken)
			{
				_003C_003CExecuteNonQueryAsync_003Eb__0_003Ed stateMachine = default(_003C_003CExecuteNonQueryAsync_003Eb__0_003Ed);
				stateMachine._003C_003E4__this = this;
				stateMachine.sqlCommand = sqlCommand;
				stateMachine.innerCancellationToken = innerCancellationToken;
				stateMachine._003C_003Et__builder = AsyncTaskMethodBuilder.Create();
				stateMachine._003C_003E1__state = -1;
				AsyncTaskMethodBuilder asyncTaskMethodBuilder = stateMachine._003C_003Et__builder;
				asyncTaskMethodBuilder.Start(ref stateMachine);
				return stateMachine._003C_003Et__builder.Task;
			}
		}

		[StructLayout(LayoutKind.Auto)]
		[CompilerGenerated]
		private struct _003CExecuteNonQueryAsync_003Ed__39 : IAsyncStateMachine
		{
			public int _003C_003E1__state;

			public AsyncTaskMethodBuilder<int> _003C_003Et__builder;

			public Database _003C_003E4__this;

			public CommandType commandType;

			public string commandText;

			public SqlParameter[] sqlParameters;

			public CancellationToken cancellationToken;

			public int? commandTimeout;

			public ApplicationIntent? applicationIntent;

			private _003C_003Ec__DisplayClass39_0 _003C_003E8__1;

			private ConfiguredTaskAwaitable.ConfiguredTaskAwaiter _003C_003Eu__1;

			private void MoveNext()
			{
				int num = _003C_003E1__state;
				Database database = _003C_003E4__this;
				int result;
				try
				{
					ConfiguredTaskAwaitable.ConfiguredTaskAwaiter awaiter;
					if (num != 0)
					{
						_003C_003E8__1 = new _003C_003Ec__DisplayClass39_0();
						_003C_003E8__1.numberOfRecordsAffected = 0;
						awaiter = database.ExecuteAsync(commandType, commandText, sqlParameters, _003C_003E8__1._003CExecuteNonQueryAsync_003Eb__0, cancellationToken, commandTimeout, applicationIntent).ConfigureAwait(false).GetAwaiter();
						if (!awaiter.IsCompleted)
						{
							num = (_003C_003E1__state = 0);
							_003C_003Eu__1 = awaiter;
							_003C_003Et__builder.AwaitUnsafeOnCompleted(ref awaiter, ref this);
							return;
						}
					}
					else
					{
						awaiter = _003C_003Eu__1;
						_003C_003Eu__1 = default(ConfiguredTaskAwaitable.ConfiguredTaskAwaiter);
						num = (_003C_003E1__state = -1);
					}
					awaiter.GetResult();
					result = _003C_003E8__1.numberOfRecordsAffected;
				}
				catch (Exception exception)
				{
					_003C_003E1__state = -2;
					_003C_003Et__builder.SetException(exception);
					return;
				}
				_003C_003E1__state = -2;
				_003C_003Et__builder.SetResult(result);
			}

			void IAsyncStateMachine.MoveNext()
			{
				//ILSpy generated this explicit interface implementation from .override directive in MoveNext
				this.MoveNext();
			}

			[DebuggerHidden]
			private void SetStateMachine(IAsyncStateMachine stateMachine)
			{
				_003C_003Et__builder.SetStateMachine(stateMachine);
			}

			void IAsyncStateMachine.SetStateMachine(IAsyncStateMachine stateMachine)
			{
				//ILSpy generated this explicit interface implementation from .override directive in SetStateMachine
				this.SetStateMachine(stateMachine);
			}
		}

		[CompilerGenerated]
		private sealed class _003C_003Ec__DisplayClass41_0
		{
			[StructLayout(LayoutKind.Auto)]
			private struct _003C_003CExecuteReaderAsync_003Eb__0_003Ed : IAsyncStateMachine
			{
				public int _003C_003E1__state;

				public AsyncTaskMethodBuilder _003C_003Et__builder;

				public SqlCommand sqlCommand;

				public CancellationToken innerCancellationToken;

				public _003C_003Ec__DisplayClass41_0 _003C_003E4__this;

				private ConfiguredTaskAwaitable<IEnumerable<IDictionary<string, object>>>.ConfiguredTaskAwaiter _003C_003Eu__1;

				private void MoveNext()
				{
					int num = _003C_003E1__state;
					_003C_003Ec__DisplayClass41_0 _003C_003Ec__DisplayClass41_ = _003C_003E4__this;
					try
					{
						ConfiguredTaskAwaitable<IEnumerable<IDictionary<string, object>>>.ConfiguredTaskAwaiter awaiter;
						if (num != 0)
						{
							awaiter = ReadAsync(sqlCommand, innerCancellationToken).ConfigureAwait(false).GetAwaiter();
							if (!awaiter.IsCompleted)
							{
								num = (_003C_003E1__state = 0);
								_003C_003Eu__1 = awaiter;
								_003C_003Et__builder.AwaitUnsafeOnCompleted(ref awaiter, ref this);
								return;
							}
						}
						else
						{
							awaiter = _003C_003Eu__1;
							_003C_003Eu__1 = default(ConfiguredTaskAwaitable<IEnumerable<IDictionary<string, object>>>.ConfiguredTaskAwaiter);
							num = (_003C_003E1__state = -1);
						}
						IEnumerable<IDictionary<string, object>> result = awaiter.GetResult();
						_003C_003Ec__DisplayClass41_.records = result;
					}
					catch (Exception exception)
					{
						_003C_003E1__state = -2;
						_003C_003Et__builder.SetException(exception);
						return;
					}
					_003C_003E1__state = -2;
					_003C_003Et__builder.SetResult();
				}

				void IAsyncStateMachine.MoveNext()
				{
					//ILSpy generated this explicit interface implementation from .override directive in MoveNext
					this.MoveNext();
				}

				[DebuggerHidden]
				private void SetStateMachine(IAsyncStateMachine stateMachine)
				{
					_003C_003Et__builder.SetStateMachine(stateMachine);
				}

				void IAsyncStateMachine.SetStateMachine(IAsyncStateMachine stateMachine)
				{
					//ILSpy generated this explicit interface implementation from .override directive in SetStateMachine
					this.SetStateMachine(stateMachine);
				}
			}

			public IEnumerable<IDictionary<string, object>> records;

			[AsyncStateMachine(typeof(_003C_003CExecuteReaderAsync_003Eb__0_003Ed))]
			internal Task _003CExecuteReaderAsync_003Eb__0(SqlCommand sqlCommand, CancellationToken innerCancellationToken)
			{
				_003C_003CExecuteReaderAsync_003Eb__0_003Ed stateMachine = default(_003C_003CExecuteReaderAsync_003Eb__0_003Ed);
				stateMachine._003C_003E4__this = this;
				stateMachine.sqlCommand = sqlCommand;
				stateMachine.innerCancellationToken = innerCancellationToken;
				stateMachine._003C_003Et__builder = AsyncTaskMethodBuilder.Create();
				stateMachine._003C_003E1__state = -1;
				AsyncTaskMethodBuilder asyncTaskMethodBuilder = stateMachine._003C_003Et__builder;
				asyncTaskMethodBuilder.Start(ref stateMachine);
				return stateMachine._003C_003Et__builder.Task;
			}
		}

		[StructLayout(LayoutKind.Auto)]
		[CompilerGenerated]
		private struct _003CExecuteReaderAsync_003Ed__41 : IAsyncStateMachine
		{
			public int _003C_003E1__state;

			public AsyncTaskMethodBuilder<IEnumerable<IDictionary<string, object>>> _003C_003Et__builder;

			public Database _003C_003E4__this;

			public CommandType commandType;

			public string commandText;

			public SqlParameter[] sqlParameters;

			public CancellationToken cancellationToken;

			public int? commandTimeout;

			public ApplicationIntent? applicationIntent;

			private _003C_003Ec__DisplayClass41_0 _003C_003E8__1;

			private ConfiguredTaskAwaitable.ConfiguredTaskAwaiter _003C_003Eu__1;

			private void MoveNext()
			{
				int num = _003C_003E1__state;
				Database database = _003C_003E4__this;
				IEnumerable<IDictionary<string, object>> result;
				try
				{
					ConfiguredTaskAwaitable.ConfiguredTaskAwaiter awaiter;
					if (num != 0)
					{
						_003C_003E8__1 = new _003C_003Ec__DisplayClass41_0();
						_003C_003E8__1.records = null;
						awaiter = database.ExecuteAsync(commandType, commandText, sqlParameters, _003C_003E8__1._003CExecuteReaderAsync_003Eb__0, cancellationToken, commandTimeout, applicationIntent).ConfigureAwait(false).GetAwaiter();
						if (!awaiter.IsCompleted)
						{
							num = (_003C_003E1__state = 0);
							_003C_003Eu__1 = awaiter;
							_003C_003Et__builder.AwaitUnsafeOnCompleted(ref awaiter, ref this);
							return;
						}
					}
					else
					{
						awaiter = _003C_003Eu__1;
						_003C_003Eu__1 = default(ConfiguredTaskAwaitable.ConfiguredTaskAwaiter);
						num = (_003C_003E1__state = -1);
					}
					awaiter.GetResult();
					result = _003C_003E8__1.records;
				}
				catch (Exception exception)
				{
					_003C_003E1__state = -2;
					_003C_003Et__builder.SetException(exception);
					return;
				}
				_003C_003E1__state = -2;
				_003C_003Et__builder.SetResult(result);
			}

			void IAsyncStateMachine.MoveNext()
			{
				//ILSpy generated this explicit interface implementation from .override directive in MoveNext
				this.MoveNext();
			}

			[DebuggerHidden]
			private void SetStateMachine(IAsyncStateMachine stateMachine)
			{
				_003C_003Et__builder.SetStateMachine(stateMachine);
			}

			void IAsyncStateMachine.SetStateMachine(IAsyncStateMachine stateMachine)
			{
				//ILSpy generated this explicit interface implementation from .override directive in SetStateMachine
				this.SetStateMachine(stateMachine);
			}
		}

		[CompilerGenerated]
		private sealed class _003C_003Ec__DisplayClass43_0
		{
			[StructLayout(LayoutKind.Auto)]
			private struct _003C_003CExecuteScalarAsync_003Eb__0_003Ed : IAsyncStateMachine
			{
				public int _003C_003E1__state;

				public AsyncTaskMethodBuilder _003C_003Et__builder;

				public SqlCommand sqlCommand;

				public CancellationToken innerCancellationToken;

				public _003C_003Ec__DisplayClass43_0 _003C_003E4__this;

				private ConfiguredTaskAwaitable<object>.ConfiguredTaskAwaiter _003C_003Eu__1;

				private void MoveNext()
				{
					int num = _003C_003E1__state;
					_003C_003Ec__DisplayClass43_0 _003C_003Ec__DisplayClass43_ = _003C_003E4__this;
					try
					{
						ConfiguredTaskAwaitable<object>.ConfiguredTaskAwaiter awaiter;
						if (num != 0)
						{
							awaiter = ((DbCommand)(object)sqlCommand).ExecuteScalarAsync(innerCancellationToken).ConfigureAwait(false).GetAwaiter();
							if (!awaiter.IsCompleted)
							{
								num = (_003C_003E1__state = 0);
								_003C_003Eu__1 = awaiter;
								_003C_003Et__builder.AwaitUnsafeOnCompleted(ref awaiter, ref this);
								return;
							}
						}
						else
						{
							awaiter = _003C_003Eu__1;
							_003C_003Eu__1 = default(ConfiguredTaskAwaitable<object>.ConfiguredTaskAwaiter);
							num = (_003C_003E1__state = -1);
						}
						object result = awaiter.GetResult();
						_003C_003Ec__DisplayClass43_.result = result;
					}
					catch (Exception exception)
					{
						_003C_003E1__state = -2;
						_003C_003Et__builder.SetException(exception);
						return;
					}
					_003C_003E1__state = -2;
					_003C_003Et__builder.SetResult();
				}

				void IAsyncStateMachine.MoveNext()
				{
					//ILSpy generated this explicit interface implementation from .override directive in MoveNext
					this.MoveNext();
				}

				[DebuggerHidden]
				private void SetStateMachine(IAsyncStateMachine stateMachine)
				{
					_003C_003Et__builder.SetStateMachine(stateMachine);
				}

				void IAsyncStateMachine.SetStateMachine(IAsyncStateMachine stateMachine)
				{
					//ILSpy generated this explicit interface implementation from .override directive in SetStateMachine
					this.SetStateMachine(stateMachine);
				}
			}

			public object result;

			[AsyncStateMachine(typeof(_003C_003CExecuteScalarAsync_003Eb__0_003Ed))]
			internal Task _003CExecuteScalarAsync_003Eb__0(SqlCommand sqlCommand, CancellationToken innerCancellationToken)
			{
				_003C_003CExecuteScalarAsync_003Eb__0_003Ed stateMachine = default(_003C_003CExecuteScalarAsync_003Eb__0_003Ed);
				stateMachine._003C_003E4__this = this;
				stateMachine.sqlCommand = sqlCommand;
				stateMachine.innerCancellationToken = innerCancellationToken;
				stateMachine._003C_003Et__builder = AsyncTaskMethodBuilder.Create();
				stateMachine._003C_003E1__state = -1;
				AsyncTaskMethodBuilder asyncTaskMethodBuilder = stateMachine._003C_003Et__builder;
				asyncTaskMethodBuilder.Start(ref stateMachine);
				return stateMachine._003C_003Et__builder.Task;
			}
		}

		[StructLayout(LayoutKind.Auto)]
		[CompilerGenerated]
		private struct _003CExecuteScalarAsync_003Ed__43 : IAsyncStateMachine
		{
			public int _003C_003E1__state;

			public AsyncTaskMethodBuilder<object> _003C_003Et__builder;

			public Database _003C_003E4__this;

			public CommandType commandType;

			public string commandText;

			public SqlParameter[] sqlParameters;

			public CancellationToken cancellationToken;

			public int? commandTimeout;

			public ApplicationIntent? applicationIntent;

			private _003C_003Ec__DisplayClass43_0 _003C_003E8__1;

			private ConfiguredTaskAwaitable.ConfiguredTaskAwaiter _003C_003Eu__1;

			private void MoveNext()
			{
				int num = _003C_003E1__state;
				Database database = _003C_003E4__this;
				object result;
				try
				{
					ConfiguredTaskAwaitable.ConfiguredTaskAwaiter awaiter;
					if (num != 0)
					{
						_003C_003E8__1 = new _003C_003Ec__DisplayClass43_0();
						_003C_003E8__1.result = null;
						awaiter = database.ExecuteAsync(commandType, commandText, sqlParameters, _003C_003E8__1._003CExecuteScalarAsync_003Eb__0, cancellationToken, commandTimeout, applicationIntent).ConfigureAwait(false).GetAwaiter();
						if (!awaiter.IsCompleted)
						{
							num = (_003C_003E1__state = 0);
							_003C_003Eu__1 = awaiter;
							_003C_003Et__builder.AwaitUnsafeOnCompleted(ref awaiter, ref this);
							return;
						}
					}
					else
					{
						awaiter = _003C_003Eu__1;
						_003C_003Eu__1 = default(ConfiguredTaskAwaitable.ConfiguredTaskAwaiter);
						num = (_003C_003E1__state = -1);
					}
					awaiter.GetResult();
					result = _003C_003E8__1.result;
				}
				catch (Exception exception)
				{
					_003C_003E1__state = -2;
					_003C_003Et__builder.SetException(exception);
					return;
				}
				_003C_003E1__state = -2;
				_003C_003Et__builder.SetResult(result);
			}

			void IAsyncStateMachine.MoveNext()
			{
				//ILSpy generated this explicit interface implementation from .override directive in MoveNext
				this.MoveNext();
			}

			[DebuggerHidden]
			private void SetStateMachine(IAsyncStateMachine stateMachine)
			{
				_003C_003Et__builder.SetStateMachine(stateMachine);
			}

			void IAsyncStateMachine.SetStateMachine(IAsyncStateMachine stateMachine)
			{
				//ILSpy generated this explicit interface implementation from .override directive in SetStateMachine
				this.SetStateMachine(stateMachine);
			}
		}

		[StructLayout(LayoutKind.Auto)]
		[CompilerGenerated]
		private struct _003CReadAsync_003Ed__46 : IAsyncStateMachine
		{
			public int _003C_003E1__state;

			public AsyncTaskMethodBuilder<IEnumerable<IDictionary<string, object>>> _003C_003Et__builder;

			public SqlCommand sqlCommand;

			public CancellationToken cancellationToken;

			private List<IDictionary<string, object>> _003Crecords_003E5__2;

			private SqlDataReader _003CsqlDataReader_003E5__3;

			private TaskAwaiter<SqlDataReader> _003C_003Eu__1;

			private int _003CfieldCount_003E5__4;

			private string[] _003CfieldNames_003E5__5;

			private Dictionary<string, object> _003CfieldsDictionary_003E5__6;

			private int _003Ci_003E5__7;

			private TaskAwaiter<object> _003C_003Eu__2;

			private TaskAwaiter<bool> _003C_003Eu__3;

			private void MoveNext()
			{
				int num = _003C_003E1__state;
				IEnumerable<IDictionary<string, object>> result2;
				try
				{
					TaskAwaiter<SqlDataReader> awaiter;
					if (num != 0)
					{
						if ((uint)(num - 1) <= 1u)
						{
							goto IL_008a;
						}
						_003Crecords_003E5__2 = new List<IDictionary<string, object>>();
						awaiter = sqlCommand.ExecuteReaderAsync(cancellationToken).GetAwaiter();
						if (!awaiter.IsCompleted)
						{
							num = (_003C_003E1__state = 0);
							_003C_003Eu__1 = awaiter;
							_003C_003Et__builder.AwaitUnsafeOnCompleted(ref awaiter, ref this);
							return;
						}
					}
					else
					{
						awaiter = _003C_003Eu__1;
						_003C_003Eu__1 = default(TaskAwaiter<SqlDataReader>);
						num = (_003C_003E1__state = -1);
					}
					SqlDataReader result = awaiter.GetResult();
					_003CsqlDataReader_003E5__3 = result;
					goto IL_008a;
					IL_008a:
					try
					{
						TaskAwaiter<bool> awaiter2;
						if (num != 1)
						{
							if (num != 2)
							{
								_003CfieldCount_003E5__4 = ((DbDataReader)(object)_003CsqlDataReader_003E5__3).FieldCount;
								_003CfieldNames_003E5__5 = new string[_003CfieldCount_003E5__4];
								for (int i = 0; i < _003CfieldCount_003E5__4; i++)
								{
									_003CfieldNames_003E5__5[i] = ((DbDataReader)(object)_003CsqlDataReader_003E5__3).GetName(i);
								}
								goto IL_01d9;
							}
							awaiter2 = _003C_003Eu__3;
							_003C_003Eu__3 = default(TaskAwaiter<bool>);
							num = (_003C_003E1__state = -1);
							goto IL_023b;
						}
						TaskAwaiter<object> awaiter3 = _003C_003Eu__2;
						_003C_003Eu__2 = default(TaskAwaiter<object>);
						num = (_003C_003E1__state = -1);
						goto IL_016f;
						IL_01b0:
						if (_003Ci_003E5__7 < _003CfieldCount_003E5__4)
						{
							awaiter3 = ((DbDataReader)(object)_003CsqlDataReader_003E5__3).GetFieldValueAsync<object>(_003Ci_003E5__7, cancellationToken).GetAwaiter();
							if (!awaiter3.IsCompleted)
							{
								num = (_003C_003E1__state = 1);
								_003C_003Eu__2 = awaiter3;
								_003C_003Et__builder.AwaitUnsafeOnCompleted(ref awaiter3, ref this);
								return;
							}
							goto IL_016f;
						}
						_003Crecords_003E5__2.Add(_003CfieldsDictionary_003E5__6);
						_003CfieldsDictionary_003E5__6 = null;
						goto IL_01d9;
						IL_016f:
						object fieldValue = awaiter3.GetResult();
						if (fieldValue == DBNull.Value)
						{
							fieldValue = null;
						}
						_003CfieldsDictionary_003E5__6[_003CfieldNames_003E5__5[_003Ci_003E5__7]] = fieldValue;
						_003Ci_003E5__7++;
						goto IL_01b0;
						IL_023b:
						if (awaiter2.GetResult())
						{
							_003CfieldsDictionary_003E5__6 = new Dictionary<string, object>(_003CfieldCount_003E5__4);
							_003Ci_003E5__7 = 0;
							goto IL_01b0;
						}
						_003CfieldNames_003E5__5 = null;
						goto end_IL_008a;
						IL_01d9:
						awaiter2 = ((DbDataReader)(object)_003CsqlDataReader_003E5__3).ReadAsync(cancellationToken).GetAwaiter();
						if (!awaiter2.IsCompleted)
						{
							num = (_003C_003E1__state = 2);
							_003C_003Eu__3 = awaiter2;
							_003C_003Et__builder.AwaitUnsafeOnCompleted(ref awaiter2, ref this);
							return;
						}
						goto IL_023b;
						end_IL_008a:;
					}
					finally
					{
						if (num < 0 && _003CsqlDataReader_003E5__3 != null)
						{
							((IDisposable)_003CsqlDataReader_003E5__3).Dispose();
						}
					}
					_003CsqlDataReader_003E5__3 = null;
					result2 = _003Crecords_003E5__2;
				}
				catch (Exception exception)
				{
					_003C_003E1__state = -2;
					_003C_003Et__builder.SetException(exception);
					return;
				}
				_003C_003E1__state = -2;
				_003C_003Et__builder.SetResult(result2);
			}

			void IAsyncStateMachine.MoveNext()
			{
				//ILSpy generated this explicit interface implementation from .override directive in MoveNext
				this.MoveNext();
			}

			[DebuggerHidden]
			private void SetStateMachine(IAsyncStateMachine stateMachine)
			{
				_003C_003Et__builder.SetStateMachine(stateMachine);
			}

			void IAsyncStateMachine.SetStateMachine(IAsyncStateMachine stateMachine)
			{
				//ILSpy generated this explicit interface implementation from .override directive in SetStateMachine
				this.SetStateMachine(stateMachine);
			}
		}

		private readonly Func<string> _ConnectionStringGetter;

		private readonly Func<TimeSpan> _CommandTimeoutGetter;

		private long _RequestCounter;

		[CompilerGenerated]
		private readonly string _003CName_003Ek__BackingField;

		private int _CommandTimeoutInSeconds
		{
			get
			{
				return (int)Math.Ceiling(CommandTimeout.TotalSeconds);
			}
		}

		public string ConnectionString
		{
			get
			{
				return _ConnectionStringGetter();
			}
		}

		public string ConnectionStringAsync
		{
			get
			{
				return _ConnectionStringGetter() + ";Asynchronous Processing=True";
			}
		}

		public TimeSpan CommandTimeout
		{
			get
			{
				return _CommandTimeoutGetter();
			}
		}

		public string Name
		{
			[CompilerGenerated]
			get
			{
				return _003CName_003Ek__BackingField;
			}
		}

		public event ExecutionFailedEventHandler ExecutionFailed;

		public event ExecutionFinishedEventHandler ExecutionFinished;

		public event ExecutionStartedEventHandler ExecutionStarted;

		public event ExecutionSucceededEventHandler ExecutionSucceeded;

		public string GetUtilizedConnectionString(ApplicationIntent? applicationIntent)
		{
			return GetUtilizedConnectionString(ConnectionString, applicationIntent);
		}

		public string GetUtilizedConnectionStringAsync(ApplicationIntent? applicationIntent)
		{
			return GetUtilizedConnectionString(ConnectionStringAsync, applicationIntent);
		}

		public Database(string name, Func<string> connectionStringGetter, Func<TimeSpan> commandTimeoutGetter)
		{
			if (string.IsNullOrWhiteSpace(name))
			{
				throw new ArgumentException("Invalid value for argument name", "name");
			}
			_003CName_003Ek__BackingField = name;
			if (connectionStringGetter == null)
			{
				throw new ArgumentNullException("connectionStringGetter");
			}
			_ConnectionStringGetter = connectionStringGetter;
			if (commandTimeoutGetter == null)
			{
				throw new ArgumentNullException("commandTimeoutGetter");
			}
			_CommandTimeoutGetter = commandTimeoutGetter;
		}

		~Database()
		{
			Dispose(false);
		}

		private void OnExecutionFailed(DatabaseExecutionEventArgs e)
		{
			ExecutionFailedEventHandler executionFailedEventHandler = this.ExecutionFailed;
			if (executionFailedEventHandler != null)
			{
				executionFailedEventHandler(this, e);
			}
		}

		private void OnExecutionFinished(DatabaseExecutionEventArgs e)
		{
			ExecutionFinishedEventHandler executionFinishedEventHandler = this.ExecutionFinished;
			if (executionFinishedEventHandler != null)
			{
				executionFinishedEventHandler(this, e);
			}
		}

		private void OnExecutionStarted(DatabaseExecutionEventArgs e)
		{
			ExecutionStartedEventHandler executionStartedEventHandler = this.ExecutionStarted;
			if (executionStartedEventHandler != null)
			{
				executionStartedEventHandler(this, e);
			}
		}

		private void OnExecutionSucceeded(DatabaseExecutionEventArgs e)
		{
			ExecutionSucceededEventHandler executionSucceededEventHandler = this.ExecutionSucceeded;
			if (executionSucceededEventHandler != null)
			{
				executionSucceededEventHandler(this, e);
			}
		}

		protected virtual void Execute(CommandType commandType, string commandText, SqlParameter[] sqlParameters, Action<SqlCommand> action, int? commandTimeout = null, ApplicationIntent? applicationIntent = null)
		{
			//IL_0044: Unknown result type (might be due to invalid IL or missing references)
			//IL_004a: Expected O, but got Unknown
			//IL_004c: Unknown result type (might be due to invalid IL or missing references)
			//IL_0052: Expected O, but got Unknown
			if (string.IsNullOrWhiteSpace(commandText))
			{
				throw new ArgumentException("Invalid value for argument commandText", "commandText");
			}
			OnExecutionStarting();
			long requestCounter = Interlocked.Increment(ref _RequestCounter);
			DatabaseExecutionEventArgs eventArgs = new DatabaseExecutionEventArgs(this, commandType, commandText, sqlParameters, requestCounter);
			OnExecutionStarted(eventArgs);
			try
			{
				SqlConnection sqlConnection = new SqlConnection(GetUtilizedConnectionString(applicationIntent));
				try
				{
					SqlCommand sqlCommand = new SqlCommand(commandText, sqlConnection);
					try
					{
						((DbCommand)(object)sqlCommand).CommandType = commandType;
						((DbCommand)(object)sqlCommand).CommandTimeout = commandTimeout ?? _CommandTimeoutInSeconds;
						if (sqlParameters != null)
						{
							sqlCommand.Parameters.AddRange(sqlParameters);
						}
						((DbConnection)(object)sqlConnection).Open();
						action(sqlCommand);
					}
					finally
					{
						if (sqlCommand != null)
						{
							((IDisposable)sqlCommand).Dispose();
						}
					}
				}
				finally
				{
					if (sqlConnection != null)
					{
						((IDisposable)sqlConnection).Dispose();
					}
				}
				OnExecutionSucceeded(eventArgs);
			}
			catch (Exception exception)
			{
				eventArgs.Exception = exception;
				OnExecutionFailed(eventArgs);
				throw;
			}
			finally
			{
				OnExecutionFinished(eventArgs);
			}
		}

		[AsyncStateMachine(typeof(_003CExecuteAsync_003Ed__35))]
		protected virtual Task ExecuteAsync(CommandType commandType, string commandText, SqlParameter[] sqlParameters, Func<SqlCommand, CancellationToken, Task> action, CancellationToken cancellationToken = default(CancellationToken), int? commandTimeout = null, ApplicationIntent? applicationIntent = null)
		{
			_003CExecuteAsync_003Ed__35 stateMachine = default(_003CExecuteAsync_003Ed__35);
			stateMachine._003C_003E4__this = this;
			stateMachine.commandType = commandType;
			stateMachine.commandText = commandText;
			stateMachine.sqlParameters = sqlParameters;
			stateMachine.action = action;
			stateMachine.cancellationToken = cancellationToken;
			stateMachine.commandTimeout = commandTimeout;
			stateMachine.applicationIntent = applicationIntent;
			stateMachine._003C_003Et__builder = AsyncTaskMethodBuilder.Create();
			stateMachine._003C_003E1__state = -1;
			AsyncTaskMethodBuilder asyncTaskMethodBuilder = stateMachine._003C_003Et__builder;
			asyncTaskMethodBuilder.Start(ref stateMachine);
			return stateMachine._003C_003Et__builder.Task;
		}

		protected virtual void OnExecutionStarting()
		{
		}

		protected virtual Task OnExecutionStartingAsync(CancellationToken cancellationToken = default(CancellationToken))
		{
			return Task.FromResult(true);
		}

		public int ExecuteNonQuery(string commandText, SqlParameter[] sqlParameters, CommandType commandType = CommandType.StoredProcedure, int? commandTimeout = null, ApplicationIntent? applicationIntent = null)
		{
			int numberOfRecordsAffected = 0;
			Execute(commandType, commandText, sqlParameters, delegate(SqlCommand sqlCommand)
			{
				numberOfRecordsAffected = ((DbCommand)(object)sqlCommand).ExecuteNonQuery();
			}, commandTimeout, applicationIntent);
			return numberOfRecordsAffected;
		}

		[AsyncStateMachine(typeof(_003CExecuteNonQueryAsync_003Ed__39))]
		public Task<int> ExecuteNonQueryAsync(string commandText, SqlParameter[] sqlParameters, CommandType commandType = CommandType.StoredProcedure, CancellationToken cancellationToken = default(CancellationToken), int? commandTimeout = null, ApplicationIntent? applicationIntent = null)
		{
			_003CExecuteNonQueryAsync_003Ed__39 stateMachine = default(_003CExecuteNonQueryAsync_003Ed__39);
			stateMachine._003C_003E4__this = this;
			stateMachine.commandText = commandText;
			stateMachine.sqlParameters = sqlParameters;
			stateMachine.commandType = commandType;
			stateMachine.cancellationToken = cancellationToken;
			stateMachine.commandTimeout = commandTimeout;
			stateMachine.applicationIntent = applicationIntent;
			stateMachine._003C_003Et__builder = AsyncTaskMethodBuilder<int>.Create();
			stateMachine._003C_003E1__state = -1;
			AsyncTaskMethodBuilder<int> asyncTaskMethodBuilder = stateMachine._003C_003Et__builder;
			asyncTaskMethodBuilder.Start(ref stateMachine);
			return stateMachine._003C_003Et__builder.Task;
		}

		public IEnumerable<IDictionary<string, object>> ExecuteReader(string commandText, SqlParameter[] sqlParameters, CommandType commandType = CommandType.StoredProcedure, int? commandTimeout = null, ApplicationIntent? applicationIntent = null)
		{
			IEnumerable<IDictionary<string, object>> records = null;
			Execute(commandType, commandText, sqlParameters, delegate(SqlCommand sqlCommand)
			{
				records = Read(sqlCommand);
			}, commandTimeout, applicationIntent);
			return records;
		}

		[AsyncStateMachine(typeof(_003CExecuteReaderAsync_003Ed__41))]
		public Task<IEnumerable<IDictionary<string, object>>> ExecuteReaderAsync(string commandText, SqlParameter[] sqlParameters, CommandType commandType = CommandType.StoredProcedure, CancellationToken cancellationToken = default(CancellationToken), int? commandTimeout = null, ApplicationIntent? applicationIntent = null)
		{
			_003CExecuteReaderAsync_003Ed__41 stateMachine = default(_003CExecuteReaderAsync_003Ed__41);
			stateMachine._003C_003E4__this = this;
			stateMachine.commandText = commandText;
			stateMachine.sqlParameters = sqlParameters;
			stateMachine.commandType = commandType;
			stateMachine.cancellationToken = cancellationToken;
			stateMachine.commandTimeout = commandTimeout;
			stateMachine.applicationIntent = applicationIntent;
			stateMachine._003C_003Et__builder = AsyncTaskMethodBuilder<IEnumerable<IDictionary<string, object>>>.Create();
			stateMachine._003C_003E1__state = -1;
			AsyncTaskMethodBuilder<IEnumerable<IDictionary<string, object>>> asyncTaskMethodBuilder = stateMachine._003C_003Et__builder;
			asyncTaskMethodBuilder.Start(ref stateMachine);
			return stateMachine._003C_003Et__builder.Task;
		}

		public object ExecuteScalar(string commandText, SqlParameter[] sqlParameters, CommandType commandType = CommandType.StoredProcedure, int? commandTimeout = null, ApplicationIntent? applicationIntent = null)
		{
			object result = null;
			Execute(commandType, commandText, sqlParameters, delegate(SqlCommand sqlCommand)
			{
				result = ((DbCommand)(object)sqlCommand).ExecuteScalar();
			}, commandTimeout, applicationIntent);
			return result;
		}

		[AsyncStateMachine(typeof(_003CExecuteScalarAsync_003Ed__43))]
		public Task<object> ExecuteScalarAsync(string commandText, SqlParameter[] sqlParameters, CommandType commandType = CommandType.StoredProcedure, CancellationToken cancellationToken = default(CancellationToken), int? commandTimeout = null, ApplicationIntent? applicationIntent = null)
		{
			_003CExecuteScalarAsync_003Ed__43 stateMachine = default(_003CExecuteScalarAsync_003Ed__43);
			stateMachine._003C_003E4__this = this;
			stateMachine.commandText = commandText;
			stateMachine.sqlParameters = sqlParameters;
			stateMachine.commandType = commandType;
			stateMachine.cancellationToken = cancellationToken;
			stateMachine.commandTimeout = commandTimeout;
			stateMachine.applicationIntent = applicationIntent;
			stateMachine._003C_003Et__builder = AsyncTaskMethodBuilder<object>.Create();
			stateMachine._003C_003E1__state = -1;
			AsyncTaskMethodBuilder<object> asyncTaskMethodBuilder = stateMachine._003C_003Et__builder;
			asyncTaskMethodBuilder.Start(ref stateMachine);
			return stateMachine._003C_003Et__builder.Task;
		}

		private static string GetUtilizedConnectionString(string baseConnectionString, ApplicationIntent? applicationIntent)
		{
			//IL_002c: Unknown result type (might be due to invalid IL or missing references)
			if (!applicationIntent.HasValue)
			{
				return baseConnectionString;
			}
			return string.Format("{0}{1}applicationintent={2}", baseConnectionString, baseConnectionString.EndsWith(";") ? string.Empty : ";", applicationIntent.Value);
		}

		private static IEnumerable<IDictionary<string, object>> Read(SqlCommand sqlCommand)
		{
			List<IDictionary<string, object>> records = new List<IDictionary<string, object>>();
			SqlDataReader sqlDataReader = sqlCommand.ExecuteReader();
			try
			{
				int fieldCount = ((DbDataReader)(object)sqlDataReader).FieldCount;
				string[] fieldNames = new string[fieldCount];
				for (int i = 0; i < fieldCount; i++)
				{
					fieldNames[i] = ((DbDataReader)(object)sqlDataReader).GetName(i);
				}
				while (((DbDataReader)(object)sqlDataReader).Read())
				{
					Dictionary<string, object> fieldsDictionary = new Dictionary<string, object>(fieldCount);
					for (int j = 0; j < fieldCount; j++)
					{
						object fieldValue = ((DbDataReader)(object)sqlDataReader)[j];
						if (fieldValue == DBNull.Value)
						{
							fieldValue = null;
						}
						fieldsDictionary[fieldNames[j]] = fieldValue;
					}
					records.Add(fieldsDictionary);
				}
				return records;
			}
			finally
			{
				if (sqlDataReader != null)
				{
					((IDisposable)sqlDataReader).Dispose();
				}
			}
		}

		[AsyncStateMachine(typeof(_003CReadAsync_003Ed__46))]
		private static Task<IEnumerable<IDictionary<string, object>>> ReadAsync(SqlCommand sqlCommand, CancellationToken cancellationToken = default(CancellationToken))
		{
			_003CReadAsync_003Ed__46 stateMachine = default(_003CReadAsync_003Ed__46);
			stateMachine.sqlCommand = sqlCommand;
			stateMachine.cancellationToken = cancellationToken;
			stateMachine._003C_003Et__builder = AsyncTaskMethodBuilder<IEnumerable<IDictionary<string, object>>>.Create();
			stateMachine._003C_003E1__state = -1;
			AsyncTaskMethodBuilder<IEnumerable<IDictionary<string, object>>> asyncTaskMethodBuilder = stateMachine._003C_003Et__builder;
			asyncTaskMethodBuilder.Start(ref stateMachine);
			return stateMachine._003C_003Et__builder.Task;
		}

		public void Dispose()
		{
			Dispose(true);
			GC.SuppressFinalize(this);
		}

		protected virtual void Dispose(bool disposing)
		{
		}
	}
}
