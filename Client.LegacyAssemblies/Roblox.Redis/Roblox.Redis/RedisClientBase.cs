using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Linq;
using System.Net;
using System.Runtime.CompilerServices;
using System.Runtime.ExceptionServices;
using System.Runtime.InteropServices;
using System.Threading;
using System.Threading.Tasks;
using Roblox.Hashing;
using Roblox.Instrumentation;
using StackExchange.Redis;

namespace Roblox.Redis
{
	public abstract class RedisClientBase<TOptions> : IRedisClient where TOptions : RedisClientOptionsBase
	{
		[StructLayout(LayoutKind.Auto)]
		[CompilerGenerated]
		private struct _003CExecuteAsync_003Ed__21 : IAsyncStateMachine
		{
			public int _003C_003E1__state;

			public AsyncTaskMethodBuilder _003C_003Et__builder;

			public string partitionKey;

			public DatabaseActionAsync databaseAction;

			public RedisClientBase<TOptions> _003C_003E4__this;

			public CancellationToken cancellationToken;

			private IDatabase _003Cdatabase_003E5__2;

			private Stopwatch _003Cstopwatch_003E5__3;

			private ConfiguredTaskAwaitable.ConfiguredTaskAwaiter _003C_003Eu__1;

			private void MoveNext()
			{
				int num = _003C_003E1__state;
				RedisClientBase<TOptions> redisClientBase = _003C_003E4__this;
				try
				{
					if (num != 0)
					{
						if (partitionKey == null)
						{
							throw new ArgumentNullException("partitionKey");
						}
						if (databaseAction == null)
						{
							throw new ArgumentNullException("databaseAction");
						}
						_003Cdatabase_003E5__2 = redisClientBase.GetDatabase(partitionKey);
						_003Cstopwatch_003E5__3 = Stopwatch.StartNew();
						redisClientBase.PreDatabaseExecute();
					}
					try
					{
						ConfiguredTaskAwaitable.ConfiguredTaskAwaiter awaiter;
						if (num != 0)
						{
							awaiter = databaseAction(_003Cdatabase_003E5__2, cancellationToken).ConfigureAwait(false).GetAwaiter();
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
					}
					catch (Exception)
					{
						redisClientBase.OnDatabaseError(_003Cdatabase_003E5__2);
						throw;
					}
					finally
					{
						if (num < 0)
						{
							redisClientBase.PostDatabaseExecute(_003Cstopwatch_003E5__3);
						}
					}
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

		[StructLayout(LayoutKind.Auto)]
		[CompilerGenerated]
		private struct _003CExecuteAsync_003Ed__22<TResult> : IAsyncStateMachine
		{
			public int _003C_003E1__state;

			public AsyncTaskMethodBuilder<TResult> _003C_003Et__builder;

			public string partitionKey;

			public DatabaseActionAsync<TResult> databaseAction;

			public RedisClientBase<TOptions> _003C_003E4__this;

			public CancellationToken cancellationToken;

			private IDatabase _003Cdatabase_003E5__2;

			private Stopwatch _003Cstopwatch_003E5__3;

			private ConfiguredTaskAwaitable<TResult>.ConfiguredTaskAwaiter _003C_003Eu__1;

			private void MoveNext()
			{
				int num = _003C_003E1__state;
				RedisClientBase<TOptions> redisClientBase = _003C_003E4__this;
				TResult result2;
				try
				{
					if (num != 0)
					{
						if (partitionKey == null)
						{
							throw new ArgumentNullException("partitionKey");
						}
						if (databaseAction == null)
						{
							throw new ArgumentNullException("databaseAction");
						}
						_003Cdatabase_003E5__2 = redisClientBase.GetDatabase(partitionKey);
						_003Cstopwatch_003E5__3 = Stopwatch.StartNew();
						redisClientBase.PreDatabaseExecute();
					}
					TResult result;
					try
					{
						ConfiguredTaskAwaitable<TResult>.ConfiguredTaskAwaiter awaiter;
						if (num != 0)
						{
							awaiter = databaseAction(_003Cdatabase_003E5__2, cancellationToken).ConfigureAwait(false).GetAwaiter();
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
							_003C_003Eu__1 = default(ConfiguredTaskAwaitable<TResult>.ConfiguredTaskAwaiter);
							num = (_003C_003E1__state = -1);
						}
						result = awaiter.GetResult();
					}
					catch (Exception)
					{
						redisClientBase.OnDatabaseError(_003Cdatabase_003E5__2);
						throw;
					}
					finally
					{
						if (num < 0)
						{
							redisClientBase.PostDatabaseExecute(_003Cstopwatch_003E5__3);
						}
					}
					result2 = result;
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

		[StructLayout(LayoutKind.Auto)]
		[CompilerGenerated]
		private struct _003CExecuteMultiAsync_003Ed__25<TResult> : IAsyncStateMachine
		{
			public int _003C_003E1__state;

			public AsyncTaskMethodBuilder<IEnumerable<KeyValuePair<string, TResult>>> _003C_003Et__builder;

			public IReadOnlyCollection<string> partitionKeys;

			public DatabaseMultiActionAsync<TResult> databaseAction;

			public CancellationToken cancellationToken;

			public RedisClientBase<TOptions> _003C_003E4__this;

			private List<KeyValuePair<string, TResult>> _003CallResults_003E5__2;

			private IEnumerator<KeyValuePair<IDatabase, IReadOnlyCollection<string>>> _003C_003E7__wrap2;

			private KeyValuePair<IDatabase, IReadOnlyCollection<string>> _003CdatabaseBucketMapping_003E5__4;

			private Stopwatch _003Cstopwatch_003E5__5;

			private ConfiguredTaskAwaitable<IEnumerable<TResult>>.ConfiguredTaskAwaiter _003C_003Eu__1;

			private void MoveNext()
			{
				int num = _003C_003E1__state;
				RedisClientBase<TOptions> redisClientBase = _003C_003E4__this;
				IEnumerable<KeyValuePair<string, TResult>> result2;
				try
				{
					if (num != 0)
					{
						if (partitionKeys == null || partitionKeys.Any((string k) => k == null))
						{
							throw new ArgumentNullException("partitionKeys");
						}
						if (databaseAction == null)
						{
							throw new ArgumentNullException("databaseAction");
						}
						cancellationToken.ThrowIfCancellationRequested();
						IDictionary<IDatabase, IReadOnlyCollection<string>> databases = redisClientBase.GetDatabases(partitionKeys);
						_003CallResults_003E5__2 = new List<KeyValuePair<string, TResult>>(partitionKeys.Count);
						_003C_003E7__wrap2 = databases.GetEnumerator();
					}
					try
					{
						if (num == 0)
						{
							goto IL_00cc;
						}
						goto IL_020b;
						IL_020b:
						if (_003C_003E7__wrap2.MoveNext())
						{
							_003CdatabaseBucketMapping_003E5__4 = _003C_003E7__wrap2.Current;
							_003Cstopwatch_003E5__5 = Stopwatch.StartNew();
							redisClientBase.PreDatabaseExecute();
							goto IL_00cc;
						}
						goto end_IL_00a1;
						IL_00cc:
						IEnumerable<TResult> result;
						try
						{
							ConfiguredTaskAwaitable<IEnumerable<TResult>>.ConfiguredTaskAwaiter awaiter;
							if (num != 0)
							{
								awaiter = databaseAction(_003CdatabaseBucketMapping_003E5__4.Key, _003CdatabaseBucketMapping_003E5__4.Value, CancellationToken.None).ConfigureAwait(false).GetAwaiter();
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
								_003C_003Eu__1 = default(ConfiguredTaskAwaitable<IEnumerable<TResult>>.ConfiguredTaskAwaiter);
								num = (_003C_003E1__state = -1);
							}
							result = awaiter.GetResult();
						}
						catch (Exception)
						{
							redisClientBase.OnDatabaseError(_003CdatabaseBucketMapping_003E5__4.Key);
							throw;
						}
						finally
						{
							if (num < 0)
							{
								redisClientBase.PostDatabaseExecute(_003Cstopwatch_003E5__5);
							}
						}
						IEnumerator<string> enumerator = _003CdatabaseBucketMapping_003E5__4.Value.AsEnumerable().GetEnumerator();
						try
						{
							IEnumerator<TResult> enumerator2 = result.GetEnumerator();
							try
							{
								while (enumerator.MoveNext() && enumerator2.MoveNext())
								{
									_003CallResults_003E5__2.Add(new KeyValuePair<string, TResult>(enumerator.Current, enumerator2.Current));
								}
							}
							finally
							{
								if (num < 0 && enumerator2 != null)
								{
									enumerator2.Dispose();
								}
							}
						}
						finally
						{
							if (num < 0 && enumerator != null)
							{
								enumerator.Dispose();
							}
						}
						_003Cstopwatch_003E5__5 = null;
						_003CdatabaseBucketMapping_003E5__4 = default(KeyValuePair<IDatabase, IReadOnlyCollection<string>>);
						goto IL_020b;
						end_IL_00a1:;
					}
					finally
					{
						if (num < 0 && _003C_003E7__wrap2 != null)
						{
							_003C_003E7__wrap2.Dispose();
						}
					}
					_003C_003E7__wrap2 = null;
					result2 = _003CallResults_003E5__2;
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

		[StructLayout(LayoutKind.Auto)]
		[CompilerGenerated]
		private struct _003CExecuteMultiAsync_003Ed__27 : IAsyncStateMachine
		{
			public int _003C_003E1__state;

			public AsyncTaskMethodBuilder _003C_003Et__builder;

			public IReadOnlyCollection<string> partitionKeys;

			public DatabaseMultiActionAsync databaseAction;

			public CancellationToken cancellationToken;

			public RedisClientBase<TOptions> _003C_003E4__this;

			private IEnumerator<KeyValuePair<IDatabase, IReadOnlyCollection<string>>> _003C_003E7__wrap1;

			private KeyValuePair<IDatabase, IReadOnlyCollection<string>> _003CdatabaseBucketMapping_003E5__3;

			private Stopwatch _003Cstopwatch_003E5__4;

			private ConfiguredTaskAwaitable.ConfiguredTaskAwaiter _003C_003Eu__1;

			private void MoveNext()
			{
				int num = _003C_003E1__state;
				RedisClientBase<TOptions> redisClientBase = _003C_003E4__this;
				try
				{
					if (num != 0)
					{
						if (partitionKeys == null || partitionKeys.Any((string k) => k == null))
						{
							throw new ArgumentNullException("partitionKeys");
						}
						if (databaseAction == null)
						{
							throw new ArgumentNullException("databaseAction");
						}
						cancellationToken.ThrowIfCancellationRequested();
						IDictionary<IDatabase, IReadOnlyCollection<string>> databases = redisClientBase.GetDatabases(partitionKeys);
						_003C_003E7__wrap1 = databases.GetEnumerator();
					}
					try
					{
						if (num == 0)
						{
							goto IL_00b3;
						}
						goto IL_0177;
						IL_0177:
						if (_003C_003E7__wrap1.MoveNext())
						{
							_003CdatabaseBucketMapping_003E5__3 = _003C_003E7__wrap1.Current;
							_003Cstopwatch_003E5__4 = Stopwatch.StartNew();
							redisClientBase.PreDatabaseExecute();
							goto IL_00b3;
						}
						goto end_IL_0088;
						IL_00b3:
						try
						{
							ConfiguredTaskAwaitable.ConfiguredTaskAwaiter awaiter;
							if (num != 0)
							{
								awaiter = databaseAction(_003CdatabaseBucketMapping_003E5__3.Key, _003CdatabaseBucketMapping_003E5__3.Value, CancellationToken.None).ConfigureAwait(false).GetAwaiter();
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
						}
						catch (Exception)
						{
							redisClientBase.OnDatabaseError(_003CdatabaseBucketMapping_003E5__3.Key);
							throw;
						}
						finally
						{
							if (num < 0)
							{
								redisClientBase.PostDatabaseExecute(_003Cstopwatch_003E5__4);
							}
						}
						_003Cstopwatch_003E5__4 = null;
						_003CdatabaseBucketMapping_003E5__3 = default(KeyValuePair<IDatabase, IReadOnlyCollection<string>>);
						goto IL_0177;
						end_IL_0088:;
					}
					finally
					{
						if (num < 0 && _003C_003E7__wrap1 != null)
						{
							_003C_003E7__wrap1.Dispose();
						}
					}
					_003C_003E7__wrap1 = null;
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

		[CompilerGenerated]
		private sealed class _003C_003Ec__DisplayClass29_0
		{
			[StructLayout(LayoutKind.Auto)]
			private struct _003C_003CExecuteOnNodesAsync_003Eg__DatabaseActionWrapperAsync_007C0_003Ed : IAsyncStateMachine
			{
				public int _003C_003E1__state;

				public AsyncTaskMethodBuilder _003C_003Et__builder;

				public _003C_003Ec__DisplayClass29_0 _003C_003E4__this;

				public IDatabase db;

				private Stopwatch _003Cstopwatch_003E5__2;

				private ConfiguredTaskAwaitable.ConfiguredTaskAwaiter _003C_003Eu__1;

				private void MoveNext()
				{
					int num = _003C_003E1__state;
					_003C_003Ec__DisplayClass29_0 _003C_003Ec__DisplayClass29_ = _003C_003E4__this;
					try
					{
						if (num != 0)
						{
							_003Cstopwatch_003E5__2 = Stopwatch.StartNew();
							_003C_003Ec__DisplayClass29_._003C_003E4__this.PreDatabaseExecute();
						}
						try
						{
							ConfiguredTaskAwaitable.ConfiguredTaskAwaiter awaiter;
							if (num != 0)
							{
								awaiter = _003C_003Ec__DisplayClass29_.databaseAction(db, CancellationToken.None).ConfigureAwait(false).GetAwaiter();
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
						}
						catch (Exception)
						{
							_003C_003Ec__DisplayClass29_._003C_003E4__this.OnDatabaseError(db);
							throw;
						}
						finally
						{
							if (num < 0)
							{
								_003C_003Ec__DisplayClass29_._003C_003E4__this.PostDatabaseExecute(_003Cstopwatch_003E5__2);
							}
						}
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

			public RedisClientBase<TOptions> _003C_003E4__this;

			public DatabaseActionAsync databaseAction;

			[AsyncStateMachine(typeof(RedisClientBase<>._003C_003Ec__DisplayClass29_0._003C_003CExecuteOnNodesAsync_003Eg__DatabaseActionWrapperAsync_007C0_003Ed))]
			internal Task _003CExecuteOnNodesAsync_003Eg__DatabaseActionWrapperAsync_007C0(IDatabase db)
			{
				_003C_003CExecuteOnNodesAsync_003Eg__DatabaseActionWrapperAsync_007C0_003Ed stateMachine = default(_003C_003CExecuteOnNodesAsync_003Eg__DatabaseActionWrapperAsync_007C0_003Ed);
				stateMachine._003C_003E4__this = this;
				stateMachine.db = db;
				stateMachine._003C_003Et__builder = AsyncTaskMethodBuilder.Create();
				stateMachine._003C_003E1__state = -1;
				AsyncTaskMethodBuilder asyncTaskMethodBuilder = stateMachine._003C_003Et__builder;
				asyncTaskMethodBuilder.Start(ref stateMachine);
				return stateMachine._003C_003Et__builder.Task;
			}
		}

		[StructLayout(LayoutKind.Auto)]
		[CompilerGenerated]
		private struct _003CExecuteOnNodesAsync_003Ed__29 : IAsyncStateMachine
		{
			public int _003C_003E1__state;

			public AsyncTaskMethodBuilder _003C_003Et__builder;

			public RedisClientBase<TOptions> _003C_003E4__this;

			public DatabaseActionAsync databaseAction;

			public CancellationToken cancellationToken;

			public Func<IDatabase, bool> shouldExecuteOnNode;

			private ConfiguredTaskAwaitable.ConfiguredTaskAwaiter _003C_003Eu__1;

			private void MoveNext()
			{
				int num = _003C_003E1__state;
				RedisClientBase<TOptions> redisClientBase = _003C_003E4__this;
				try
				{
					ConfiguredTaskAwaitable.ConfiguredTaskAwaiter awaiter;
					if (num != 0)
					{
						_003C_003Ec__DisplayClass29_0 _003C_003Ec__DisplayClass29_ = new _003C_003Ec__DisplayClass29_0
						{
							_003C_003E4__this = _003C_003E4__this,
							databaseAction = databaseAction
						};
						if (_003C_003Ec__DisplayClass29_.databaseAction == null)
						{
							throw new ArgumentNullException("databaseAction");
						}
						cancellationToken.ThrowIfCancellationRequested();
						IReadOnlyCollection<IDatabase> allDatabases = redisClientBase.GetAllDatabases();
						List<Task> list = new List<Task>(allDatabases.Count);
						IEnumerator<IDatabase> enumerator = allDatabases.GetEnumerator();
						try
						{
							while (enumerator.MoveNext())
							{
								IDatabase current = enumerator.Current;
								if (shouldExecuteOnNode == null || shouldExecuteOnNode(current))
								{
									list.Add(_003C_003Ec__DisplayClass29_._003CExecuteOnNodesAsync_003Eg__DatabaseActionWrapperAsync_007C0(current));
								}
							}
						}
						finally
						{
							if (num < 0 && enumerator != null)
							{
								enumerator.Dispose();
							}
						}
						awaiter = Task.WhenAll(list).ConfigureAwait(false).GetAwaiter();
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

		[CompilerGenerated]
		private sealed class _003C_003Ec__DisplayClass31_0<TResult>
		{
			[StructLayout(LayoutKind.Auto)]
			private struct _003C_003CExecuteOnNodesAsync_003Eg__DatabaseActionWrapperAsync_007C0_003Ed : IAsyncStateMachine
			{
				public int _003C_003E1__state;

				public AsyncTaskMethodBuilder<TResult> _003C_003Et__builder;

				public _003C_003Ec__DisplayClass31_0<TResult> _003C_003E4__this;

				public IDatabase db;

				private Stopwatch _003Cstopwatch_003E5__2;

				private ConfiguredTaskAwaitable<TResult>.ConfiguredTaskAwaiter _003C_003Eu__1;

				private void MoveNext()
				{
					int num = _003C_003E1__state;
					_003C_003Ec__DisplayClass31_0<TResult> _003C_003Ec__DisplayClass31_ = _003C_003E4__this;
					TResult result;
					try
					{
						if (num != 0)
						{
							_003Cstopwatch_003E5__2 = Stopwatch.StartNew();
							_003C_003Ec__DisplayClass31_._003C_003E4__this.PreDatabaseExecute();
						}
						try
						{
							ConfiguredTaskAwaitable<TResult>.ConfiguredTaskAwaiter awaiter;
							if (num != 0)
							{
								awaiter = _003C_003Ec__DisplayClass31_.databaseAction(db, CancellationToken.None).ConfigureAwait(false).GetAwaiter();
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
								_003C_003Eu__1 = default(ConfiguredTaskAwaitable<TResult>.ConfiguredTaskAwaiter);
								num = (_003C_003E1__state = -1);
							}
							result = awaiter.GetResult();
						}
						catch (Exception)
						{
							_003C_003Ec__DisplayClass31_._003C_003E4__this.OnDatabaseError(db);
							throw;
						}
						finally
						{
							if (num < 0)
							{
								_003C_003Ec__DisplayClass31_._003C_003E4__this.PostDatabaseExecute(_003Cstopwatch_003E5__2);
							}
						}
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

			public RedisClientBase<TOptions> _003C_003E4__this;

			public DatabaseActionAsync<TResult> databaseAction;

			[AsyncStateMachine(typeof(_003C_003Ec__DisplayClass31_0<>._003C_003CExecuteOnNodesAsync_003Eg__DatabaseActionWrapperAsync_007C0_003Ed))]
			internal Task<TResult> _003CExecuteOnNodesAsync_003Eg__DatabaseActionWrapperAsync_007C0(IDatabase db)
			{
				_003C_003CExecuteOnNodesAsync_003Eg__DatabaseActionWrapperAsync_007C0_003Ed stateMachine = default(_003C_003CExecuteOnNodesAsync_003Eg__DatabaseActionWrapperAsync_007C0_003Ed);
				stateMachine._003C_003E4__this = this;
				stateMachine.db = db;
				stateMachine._003C_003Et__builder = AsyncTaskMethodBuilder<TResult>.Create();
				stateMachine._003C_003E1__state = -1;
				AsyncTaskMethodBuilder<TResult> asyncTaskMethodBuilder = stateMachine._003C_003Et__builder;
				asyncTaskMethodBuilder.Start(ref stateMachine);
				return stateMachine._003C_003Et__builder.Task;
			}
		}

		[StructLayout(LayoutKind.Auto)]
		[CompilerGenerated]
		private struct _003CExecuteOnNodesAsync_003Ed__31<TResult> : IAsyncStateMachine
		{
			public int _003C_003E1__state;

			public AsyncTaskMethodBuilder<TResult[]> _003C_003Et__builder;

			public RedisClientBase<TOptions> _003C_003E4__this;

			public DatabaseActionAsync<TResult> databaseAction;

			public CancellationToken cancellationToken;

			public Func<IDatabase, bool> shouldExecuteOnNode;

			private ConfiguredTaskAwaitable<TResult[]>.ConfiguredTaskAwaiter _003C_003Eu__1;

			private void MoveNext()
			{
				int num = _003C_003E1__state;
				RedisClientBase<TOptions> redisClientBase = _003C_003E4__this;
				TResult[] result;
				try
				{
					ConfiguredTaskAwaitable<TResult[]>.ConfiguredTaskAwaiter awaiter;
					if (num != 0)
					{
						_003C_003Ec__DisplayClass31_0<TResult> _003C_003Ec__DisplayClass31_ = new _003C_003Ec__DisplayClass31_0<TResult>
						{
							_003C_003E4__this = _003C_003E4__this,
							databaseAction = databaseAction
						};
						if (_003C_003Ec__DisplayClass31_.databaseAction == null)
						{
							throw new ArgumentNullException("databaseAction");
						}
						cancellationToken.ThrowIfCancellationRequested();
						IReadOnlyCollection<IDatabase> allDatabases = redisClientBase.GetAllDatabases();
						List<Task<TResult>> list = new List<Task<TResult>>(allDatabases.Count);
						IEnumerator<IDatabase> enumerator = allDatabases.GetEnumerator();
						try
						{
							while (enumerator.MoveNext())
							{
								IDatabase current = enumerator.Current;
								if (shouldExecuteOnNode == null || shouldExecuteOnNode(current))
								{
									list.Add(_003C_003Ec__DisplayClass31_._003CExecuteOnNodesAsync_003Eg__DatabaseActionWrapperAsync_007C0(current));
								}
							}
						}
						finally
						{
							if (num < 0 && enumerator != null)
							{
								enumerator.Dispose();
							}
						}
						awaiter = Task.WhenAll(list).ConfigureAwait(false).GetAwaiter();
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
						_003C_003Eu__1 = default(ConfiguredTaskAwaitable<TResult[]>.ConfiguredTaskAwaiter);
						num = (_003C_003E1__state = -1);
					}
					result = awaiter.GetResult();
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
		private struct _003CExecuteScriptAsync_003Ed__35<TResult> : IAsyncStateMachine
		{
			public int _003C_003E1__state;

			public AsyncTaskMethodBuilder<TResult> _003C_003Et__builder;

			public CancellationToken cancellationToken;

			public IDatabase database;

			public string script;

			public RedisKey[] keys;

			public RedisValue[] values;

			public CommandFlags flags;

			public ConvertRedisResult<TResult> convertRedisResult;

			private ConfiguredTaskAwaitable<RedisResult>.ConfiguredTaskAwaiter _003C_003Eu__1;

			private void MoveNext()
			{
				//IL_002e: Unknown result type (might be due to invalid IL or missing references)
				int num = _003C_003E1__state;
				TResult result2;
				try
				{
					ConfiguredTaskAwaitable<RedisResult>.ConfiguredTaskAwaiter awaiter;
					if (num != 0)
					{
						cancellationToken.ThrowIfCancellationRequested();
						awaiter = ((IDatabaseAsync)database).ScriptEvaluateAsync(script, keys, values, flags).ConfigureAwait(false).GetAwaiter();
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
						_003C_003Eu__1 = default(ConfiguredTaskAwaitable<RedisResult>.ConfiguredTaskAwaiter);
						num = (_003C_003E1__state = -1);
					}
					RedisResult result = awaiter.GetResult();
					result2 = convertRedisResult(result);
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

		[StructLayout(LayoutKind.Auto)]
		[CompilerGenerated]
		private struct _003CExecuteLoadedScriptAsync_003Ed__39<TResult> : IAsyncStateMachine
		{
			public int _003C_003E1__state;

			public AsyncTaskMethodBuilder<TResult> _003C_003Et__builder;

			public CancellationToken cancellationToken;

			public IDatabase database;

			public byte[] scriptHash;

			public RedisKey[] keys;

			public RedisValue[] values;

			public CommandFlags flags;

			public ConvertRedisResult<TResult> convertRedisResult;

			public RedisClientBase<TOptions> _003C_003E4__this;

			public string script;

			private ConfiguredTaskAwaitable<RedisResult>.ConfiguredTaskAwaiter _003C_003Eu__1;

			private void MoveNext()
			{
				//IL_00c4: Expected O, but got Unknown
				//IL_00d3: Unknown result type (might be due to invalid IL or missing references)
				//IL_00dd: Expected O, but got Unknown
				//IL_0128: Unknown result type (might be due to invalid IL or missing references)
				//IL_0043: Unknown result type (might be due to invalid IL or missing references)
				int num = _003C_003E1__state;
				RedisClientBase<TOptions> redisClientBase = _003C_003E4__this;
				TResult result2 = default(TResult);
				try
				{
					ConfiguredTaskAwaitable<RedisResult>.ConfiguredTaskAwaiter awaiter;
					int num2;
					if (num != 0)
					{
						if (num == 1)
						{
							awaiter = _003C_003Eu__1;
							_003C_003Eu__1 = default(ConfiguredTaskAwaitable<RedisResult>.ConfiguredTaskAwaiter);
							num = (_003C_003E1__state = -1);
							goto IL_018a;
						}
						cancellationToken.ThrowIfCancellationRequested();
						num2 = 0;
					}
					Exception obj;
					RedisResult result;
					try
					{
						if (num != 0)
						{
							awaiter = ((IDatabaseAsync)database).ScriptEvaluateAsync(scriptHash, keys, values, flags).ConfigureAwait(false).GetAwaiter();
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
							_003C_003Eu__1 = default(ConfiguredTaskAwaitable<RedisResult>.ConfiguredTaskAwaiter);
							num = (_003C_003E1__state = -1);
						}
						result = awaiter.GetResult();
						result2 = convertRedisResult(result);
					}
					catch (RedisServerException ex)
					{
						obj = ex;
						num2 = 1;
						goto IL_00c9;
					}
					goto end_IL_000e;
					IL_00c9:
					if (num2 == 1)
					{
						if (((RedisServerException)obj).Message.Contains("NOSCRIPT"))
						{
							cancellationToken.ThrowIfCancellationRequested();
							redisClientBase.LoadScript(database, scriptHash, script);
							awaiter = ((IDatabaseAsync)database).ScriptEvaluateAsync(scriptHash, keys, values, flags).ConfigureAwait(false).GetAwaiter();
							if (!awaiter.IsCompleted)
							{
								num = (_003C_003E1__state = 1);
								_003C_003Eu__1 = awaiter;
								_003C_003Et__builder.AwaitUnsafeOnCompleted(ref awaiter, ref this);
								return;
							}
							goto IL_018a;
						}
						throw obj;
					}
					goto end_IL_000e;
					IL_018a:
					result = awaiter.GetResult();
					result2 = convertRedisResult(result);
					end_IL_000e:;
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

		private const string _RedisExceptionNoScriptMessageKeyword = "NOSCRIPT";

		private static readonly HashSet<string> _SubscriptionCommands = new HashSet<string> { "SUBSCRIBE", "UNSUBSCRIBE", "PSUBSCRIBE", "PUNSUBSCRIBE" };

		[CompilerGenerated]
		private readonly TOptions _003CRedisClientOptions_003Ek__BackingField;

		private readonly PerformanceMonitor _PerformanceMonitor;

		protected TOptions RedisClientOptions
		{
			[CompilerGenerated]
			get
			{
				return _003CRedisClientOptions_003Ek__BackingField;
			}
		}

		public event EventHandler Refreshed;

		public abstract void Close();

		public abstract ISubscriber GetSubscriber(string partitionKey);

		public abstract void Refresh(string[] redisEndpoints);

		public abstract IDatabase GetDatabase(string partitionKey);

		public abstract IServer GetServer(string partitionKey);

		public abstract IDictionary<IDatabase, IReadOnlyCollection<string>> GetDatabases(IReadOnlyCollection<string> partitionKeys);

		public abstract IReadOnlyCollection<IDatabase> GetAllDatabases();

		public abstract IReadOnlyCollection<IServer> GetAllServers();

		protected RedisClientBase(ICounterRegistry counterRegistry, string performanceMonitorCategory, TOptions redisClientOptions, Action<Exception> exceptionHandler = null)
		{
			if (redisClientOptions == null)
			{
				throw new ArgumentNullException("redisClientOptions");
			}
			_003CRedisClientOptions_003Ek__BackingField = redisClientOptions;
			try
			{
				_PerformanceMonitor = new PerformanceMonitor(counterRegistry, performanceMonitorCategory);
			}
			catch (Exception innerException)
			{
				if (exceptionHandler != null)
				{
					exceptionHandler(new Exception("Unable to initialize redis performance monitor.", innerException));
				}
			}
		}

		public void Execute(string partitionKey, DatabaseAction databaseAction)
		{
			if (string.IsNullOrEmpty(partitionKey))
			{
				throw new ArgumentException("Partition key cannot be null or empty in call to RedisClient.Execute");
			}
			IDatabase database = GetDatabase(partitionKey);
			Stopwatch stopWatch = Stopwatch.StartNew();
			PreDatabaseExecute();
			try
			{
				databaseAction(database);
			}
			catch (Exception)
			{
				OnDatabaseError(database);
				throw;
			}
			finally
			{
				PostDatabaseExecute(stopWatch);
			}
		}

		public TResult Execute<TResult>(string keyToBePartitioned, IPartitionedKeyGenerator partitionedKeyGenerator, DatabaseAction<TResult> databaseAction)
		{
			string partitionKey = partitionedKeyGenerator.GetPartitionKey(keyToBePartitioned);
			return Execute(partitionKey, databaseAction);
		}

		public TResult Execute<TResult>(string partitionKey, DatabaseAction<TResult> databaseAction)
		{
			if (string.IsNullOrEmpty(partitionKey))
			{
				throw new ArgumentException("Partition key cannot be null or empty in call to RedisClient.Execute");
			}
			IDatabase database = GetDatabase(partitionKey);
			Stopwatch stopWatch = Stopwatch.StartNew();
			PreDatabaseExecute();
			try
			{
				return databaseAction(database);
			}
			catch (Exception)
			{
				OnDatabaseError(database);
				throw;
			}
			finally
			{
				PostDatabaseExecute(stopWatch);
			}
		}

		[AsyncStateMachine(typeof(RedisClientBase<>._003CExecuteAsync_003Ed__21))]
		public Task ExecuteAsync(string partitionKey, DatabaseActionAsync databaseAction, CancellationToken cancellationToken)
		{
			_003CExecuteAsync_003Ed__21 stateMachine = default(_003CExecuteAsync_003Ed__21);
			stateMachine._003C_003E4__this = this;
			stateMachine.partitionKey = partitionKey;
			stateMachine.databaseAction = databaseAction;
			stateMachine.cancellationToken = cancellationToken;
			stateMachine._003C_003Et__builder = AsyncTaskMethodBuilder.Create();
			stateMachine._003C_003E1__state = -1;
			AsyncTaskMethodBuilder asyncTaskMethodBuilder = stateMachine._003C_003Et__builder;
			asyncTaskMethodBuilder.Start(ref stateMachine);
			return stateMachine._003C_003Et__builder.Task;
		}

		[AsyncStateMachine(typeof(_003CExecuteAsync_003Ed__22<>))]
		public Task<TResult> ExecuteAsync<TResult>(string partitionKey, DatabaseActionAsync<TResult> databaseAction, CancellationToken cancellationToken)
		{
			_003CExecuteAsync_003Ed__22<TResult> stateMachine = default(_003CExecuteAsync_003Ed__22<TResult>);
			stateMachine._003C_003E4__this = this;
			stateMachine.partitionKey = partitionKey;
			stateMachine.databaseAction = databaseAction;
			stateMachine.cancellationToken = cancellationToken;
			stateMachine._003C_003Et__builder = AsyncTaskMethodBuilder<TResult>.Create();
			stateMachine._003C_003E1__state = -1;
			AsyncTaskMethodBuilder<TResult> asyncTaskMethodBuilder = stateMachine._003C_003Et__builder;
			asyncTaskMethodBuilder.Start(ref stateMachine);
			return stateMachine._003C_003Et__builder.Task;
		}

		public IEnumerable<KeyValuePair<string, TResult>> ExecuteMulti<TResult>(IReadOnlyCollection<string> partitionKeys, DatabaseMultiAction<TResult> databaseAction)
		{
			if (partitionKeys == null || partitionKeys.Any((string k) => k == null))
			{
				throw new ArgumentNullException("partitionKeys");
			}
			if (databaseAction == null)
			{
				throw new ArgumentNullException("databaseAction");
			}
			IDictionary<IDatabase, IReadOnlyCollection<string>> databases = GetDatabases(partitionKeys);
			List<KeyValuePair<string, TResult>> list = new List<KeyValuePair<string, TResult>>(partitionKeys.Count);
			foreach (KeyValuePair<IDatabase, IReadOnlyCollection<string>> item in databases)
			{
				Stopwatch stopWatch = Stopwatch.StartNew();
				PreDatabaseExecute();
				IEnumerable<TResult> enumerable;
				try
				{
					enumerable = databaseAction(item.Key, item.Value);
				}
				catch (Exception)
				{
					OnDatabaseError(item.Key);
					throw;
				}
				finally
				{
					PostDatabaseExecute(stopWatch);
				}
				using (IEnumerator<string> enumerator2 = item.Value.AsEnumerable().GetEnumerator())
				{
					using (IEnumerator<TResult> enumerator3 = enumerable.GetEnumerator())
					{
						while (enumerator2.MoveNext() && enumerator3.MoveNext())
						{
							list.Add(new KeyValuePair<string, TResult>(enumerator2.Current, enumerator3.Current));
						}
					}
				}
			}
			return list;
		}

		public IEnumerable<KeyValuePair<string, TResult>> ExecuteMulti<TResult>(IReadOnlyCollection<string> partitionKeys, DatabaseMultiActionWithKeys<TResult> databaseAction)
		{
			if (partitionKeys == null || partitionKeys.Any((string k) => k == null))
			{
				throw new ArgumentNullException("partitionKeys");
			}
			if (databaseAction == null)
			{
				throw new ArgumentNullException("databaseAction");
			}
			IDictionary<IDatabase, IReadOnlyCollection<string>> databases = GetDatabases(partitionKeys);
			List<KeyValuePair<string, TResult>> list = new List<KeyValuePair<string, TResult>>(partitionKeys.Count);
			foreach (KeyValuePair<IDatabase, IReadOnlyCollection<string>> item3 in databases)
			{
				Stopwatch stopWatch = Stopwatch.StartNew();
				PreDatabaseExecute();
				IEnumerable<string> item;
				IEnumerable<TResult> item2;
				try
				{
					ValueTuple<IEnumerable<string>, IEnumerable<TResult>> valueTuple = databaseAction(item3.Key, item3.Value);
					item = valueTuple.Item1;
					item2 = valueTuple.Item2;
				}
				catch (Exception)
				{
					OnDatabaseError(item3.Key);
					throw;
				}
				finally
				{
					PostDatabaseExecute(stopWatch);
				}
				using (IEnumerator<string> enumerator2 = item.GetEnumerator())
				{
					using (IEnumerator<TResult> enumerator3 = item2.GetEnumerator())
					{
						while (enumerator2.MoveNext() && enumerator3.MoveNext())
						{
							list.Add(new KeyValuePair<string, TResult>(enumerator2.Current, enumerator3.Current));
						}
					}
				}
			}
			return list;
		}

		[AsyncStateMachine(typeof(_003CExecuteMultiAsync_003Ed__25<>))]
		public Task<IEnumerable<KeyValuePair<string, TResult>>> ExecuteMultiAsync<TResult>(IReadOnlyCollection<string> partitionKeys, DatabaseMultiActionAsync<TResult> databaseAction, CancellationToken cancellationToken)
		{
			_003CExecuteMultiAsync_003Ed__25<TResult> stateMachine = default(_003CExecuteMultiAsync_003Ed__25<TResult>);
			stateMachine._003C_003E4__this = this;
			stateMachine.partitionKeys = partitionKeys;
			stateMachine.databaseAction = databaseAction;
			stateMachine.cancellationToken = cancellationToken;
			stateMachine._003C_003Et__builder = AsyncTaskMethodBuilder<IEnumerable<KeyValuePair<string, TResult>>>.Create();
			stateMachine._003C_003E1__state = -1;
			AsyncTaskMethodBuilder<IEnumerable<KeyValuePair<string, TResult>>> asyncTaskMethodBuilder = stateMachine._003C_003Et__builder;
			asyncTaskMethodBuilder.Start(ref stateMachine);
			return stateMachine._003C_003Et__builder.Task;
		}

		public void ExecuteMulti(IReadOnlyCollection<string> partitionKeys, DatabaseMultiAction databaseAction)
		{
			if (partitionKeys == null || partitionKeys.Any((string k) => k == null))
			{
				throw new ArgumentNullException("partitionKeys");
			}
			if (databaseAction == null)
			{
				throw new ArgumentNullException("databaseAction");
			}
			foreach (KeyValuePair<IDatabase, IReadOnlyCollection<string>> database in GetDatabases(partitionKeys))
			{
				Stopwatch stopWatch = Stopwatch.StartNew();
				PreDatabaseExecute();
				try
				{
					databaseAction(database.Key, database.Value);
				}
				catch (Exception)
				{
					OnDatabaseError(database.Key);
					throw;
				}
				finally
				{
					PostDatabaseExecute(stopWatch);
				}
			}
		}

		[AsyncStateMachine(typeof(RedisClientBase<>._003CExecuteMultiAsync_003Ed__27))]
		public Task ExecuteMultiAsync(IReadOnlyCollection<string> partitionKeys, DatabaseMultiActionAsync databaseAction, CancellationToken cancellationToken)
		{
			_003CExecuteMultiAsync_003Ed__27 stateMachine = default(_003CExecuteMultiAsync_003Ed__27);
			stateMachine._003C_003E4__this = this;
			stateMachine.partitionKeys = partitionKeys;
			stateMachine.databaseAction = databaseAction;
			stateMachine.cancellationToken = cancellationToken;
			stateMachine._003C_003Et__builder = AsyncTaskMethodBuilder.Create();
			stateMachine._003C_003E1__state = -1;
			AsyncTaskMethodBuilder asyncTaskMethodBuilder = stateMachine._003C_003Et__builder;
			asyncTaskMethodBuilder.Start(ref stateMachine);
			return stateMachine._003C_003Et__builder.Task;
		}

		public void ExecuteOnNodes(DatabaseAction databaseAction, Func<IDatabase, bool> shouldExecuteOnNode = null)
		{
			if (databaseAction == null)
			{
				throw new ArgumentNullException("databaseAction");
			}
			foreach (IDatabase allDatabase in GetAllDatabases())
			{
				if (shouldExecuteOnNode != null && !shouldExecuteOnNode(allDatabase))
				{
					continue;
				}
				Stopwatch stopWatch = Stopwatch.StartNew();
				PreDatabaseExecute();
				try
				{
					databaseAction(allDatabase);
				}
				catch (Exception)
				{
					OnDatabaseError(allDatabase);
					throw;
				}
				finally
				{
					PostDatabaseExecute(stopWatch);
				}
			}
		}

		[AsyncStateMachine(typeof(RedisClientBase<>._003CExecuteOnNodesAsync_003Ed__29))]
		public Task ExecuteOnNodesAsync(DatabaseActionAsync databaseAction, Func<IDatabase, bool> shouldExecuteOnNode = null, CancellationToken cancellationToken = default(CancellationToken))
		{
			_003CExecuteOnNodesAsync_003Ed__29 stateMachine = default(_003CExecuteOnNodesAsync_003Ed__29);
			stateMachine._003C_003E4__this = this;
			stateMachine.databaseAction = databaseAction;
			stateMachine.shouldExecuteOnNode = shouldExecuteOnNode;
			stateMachine.cancellationToken = cancellationToken;
			stateMachine._003C_003Et__builder = AsyncTaskMethodBuilder.Create();
			stateMachine._003C_003E1__state = -1;
			AsyncTaskMethodBuilder asyncTaskMethodBuilder = stateMachine._003C_003Et__builder;
			asyncTaskMethodBuilder.Start(ref stateMachine);
			return stateMachine._003C_003Et__builder.Task;
		}

		public IEnumerable<TResult> ExecuteOnNodes<TResult>(DatabaseAction<TResult> databaseAction, Func<IDatabase, bool> shouldExecuteOnNode = null)
		{
			if (databaseAction == null)
			{
				throw new ArgumentNullException("databaseAction");
			}
			IReadOnlyCollection<IDatabase> allDatabases = GetAllDatabases();
			List<TResult> list = new List<TResult>();
			foreach (IDatabase item2 in allDatabases)
			{
				if (shouldExecuteOnNode != null && !shouldExecuteOnNode(item2))
				{
					continue;
				}
				Stopwatch stopWatch = Stopwatch.StartNew();
				PreDatabaseExecute();
				try
				{
					TResult item = databaseAction(item2);
					list.Add(item);
				}
				catch (Exception)
				{
					OnDatabaseError(item2);
					throw;
				}
				finally
				{
					PostDatabaseExecute(stopWatch);
				}
			}
			return list;
		}

		[AsyncStateMachine(typeof(_003CExecuteOnNodesAsync_003Ed__31<>))]
		public Task<TResult[]> ExecuteOnNodesAsync<TResult>(DatabaseActionAsync<TResult> databaseAction, Func<IDatabase, bool> shouldExecuteOnNode = null, CancellationToken cancellationToken = default(CancellationToken))
		{
			_003CExecuteOnNodesAsync_003Ed__31<TResult> stateMachine = default(_003CExecuteOnNodesAsync_003Ed__31<TResult>);
			stateMachine._003C_003E4__this = this;
			stateMachine.databaseAction = databaseAction;
			stateMachine.shouldExecuteOnNode = shouldExecuteOnNode;
			stateMachine.cancellationToken = cancellationToken;
			stateMachine._003C_003Et__builder = AsyncTaskMethodBuilder<TResult[]>.Create();
			stateMachine._003C_003E1__state = -1;
			AsyncTaskMethodBuilder<TResult[]> asyncTaskMethodBuilder = stateMachine._003C_003Et__builder;
			asyncTaskMethodBuilder.Start(ref stateMachine);
			return stateMachine._003C_003Et__builder.Task;
		}

		public void ExecuteScript(IDatabase database, string script, RedisKey[] keys = null, RedisValue[] values = null, CommandFlags flags = (CommandFlags)0)
		{
			//IL_0005: Unknown result type (might be due to invalid IL or missing references)
			database.ScriptEvaluate(script, keys, values, flags);
		}

		public Task ExecuteScriptAsync(IDatabase database, string script, RedisKey[] keys = null, RedisValue[] values = null, CommandFlags flags = (CommandFlags)0, CancellationToken cancellationToken = default(CancellationToken))
		{
			//IL_000c: Unknown result type (might be due to invalid IL or missing references)
			cancellationToken.ThrowIfCancellationRequested();
			return ((IDatabaseAsync)database).ScriptEvaluateAsync(script, keys, values, flags);
		}

		public TResult ExecuteScript<TResult>(IDatabase database, ConvertRedisResult<TResult> convertRedisResult, string script, RedisKey[] keys = null, RedisValue[] values = null, CommandFlags flags = (CommandFlags)0)
		{
			//IL_0006: Unknown result type (might be due to invalid IL or missing references)
			RedisResult redisResult = database.ScriptEvaluate(script, keys, values, flags);
			return convertRedisResult(redisResult);
		}

		[AsyncStateMachine(typeof(_003CExecuteScriptAsync_003Ed__35<>))]
		public Task<TResult> ExecuteScriptAsync<TResult>(IDatabase database, ConvertRedisResult<TResult> convertRedisResult, string script, RedisKey[] keys = null, RedisValue[] values = null, CommandFlags flags = (CommandFlags)0, CancellationToken cancellationToken = default(CancellationToken))
		{
			//IL_002c: Unknown result type (might be due to invalid IL or missing references)
			//IL_002e: Unknown result type (might be due to invalid IL or missing references)
			_003CExecuteScriptAsync_003Ed__35<TResult> stateMachine = default(_003CExecuteScriptAsync_003Ed__35<TResult>);
			stateMachine.database = database;
			stateMachine.convertRedisResult = convertRedisResult;
			stateMachine.script = script;
			stateMachine.keys = keys;
			stateMachine.values = values;
			stateMachine.flags = flags;
			stateMachine.cancellationToken = cancellationToken;
			stateMachine._003C_003Et__builder = AsyncTaskMethodBuilder<TResult>.Create();
			stateMachine._003C_003E1__state = -1;
			AsyncTaskMethodBuilder<TResult> asyncTaskMethodBuilder = stateMachine._003C_003Et__builder;
			asyncTaskMethodBuilder.Start(ref stateMachine);
			return stateMachine._003C_003Et__builder.Task;
		}

		public void ExecuteLoadedScript(IDatabase database, string script, byte[] scriptHash, RedisKey[] keys = null, RedisValue[] values = null, CommandFlags flags = (CommandFlags)0)
		{
			//IL_0027: Unknown result type (might be due to invalid IL or missing references)
			ExecuteLoadedScript(database, (RedisResult s) => s, script, scriptHash, keys, values, flags);
		}

		public Task ExecuteLoadedScriptAsync(IDatabase database, string script, byte[] scriptHash, RedisKey[] keys = null, RedisValue[] values = null, CommandFlags flags = (CommandFlags)0, CancellationToken cancellationToken = default(CancellationToken))
		{
			//IL_002e: Unknown result type (might be due to invalid IL or missing references)
			cancellationToken.ThrowIfCancellationRequested();
			return ExecuteLoadedScriptAsync(database, (RedisResult s) => s, script, scriptHash, keys, values, flags, cancellationToken);
		}

		public TResult ExecuteLoadedScript<TResult>(IDatabase database, ConvertRedisResult<TResult> convertRedisResult, string script, byte[] scriptHash, RedisKey[] keys = null, RedisValue[] values = null, CommandFlags flags = (CommandFlags)0)
		{
			//IL_0007: Unknown result type (might be due to invalid IL or missing references)
			//IL_001e: Expected O, but got Unknown
			//IL_003b: Unknown result type (might be due to invalid IL or missing references)
			try
			{
				RedisResult redisResult = database.ScriptEvaluate(scriptHash, keys, values, flags);
				return convertRedisResult(redisResult);
			}
			catch (RedisServerException ex)
			{
				if (((Exception)ex).Message.Contains("NOSCRIPT"))
				{
					LoadScript(database, scriptHash, script);
					RedisResult redisResult = database.ScriptEvaluate(scriptHash, keys, values, flags);
					return convertRedisResult(redisResult);
				}
				throw;
			}
		}

		[AsyncStateMachine(typeof(_003CExecuteLoadedScriptAsync_003Ed__39<>))]
		public Task<TResult> ExecuteLoadedScriptAsync<TResult>(IDatabase database, ConvertRedisResult<TResult> convertRedisResult, string script, byte[] scriptHash, RedisKey[] keys = null, RedisValue[] values = null, CommandFlags flags = (CommandFlags)0, CancellationToken cancellationToken = default(CancellationToken))
		{
			//IL_003d: Unknown result type (might be due to invalid IL or missing references)
			//IL_003f: Unknown result type (might be due to invalid IL or missing references)
			_003CExecuteLoadedScriptAsync_003Ed__39<TResult> stateMachine = default(_003CExecuteLoadedScriptAsync_003Ed__39<TResult>);
			stateMachine._003C_003E4__this = this;
			stateMachine.database = database;
			stateMachine.convertRedisResult = convertRedisResult;
			stateMachine.script = script;
			stateMachine.scriptHash = scriptHash;
			stateMachine.keys = keys;
			stateMachine.values = values;
			stateMachine.flags = flags;
			stateMachine.cancellationToken = cancellationToken;
			stateMachine._003C_003Et__builder = AsyncTaskMethodBuilder<TResult>.Create();
			stateMachine._003C_003E1__state = -1;
			AsyncTaskMethodBuilder<TResult> asyncTaskMethodBuilder = stateMachine._003C_003Et__builder;
			asyncTaskMethodBuilder.Start(ref stateMachine);
			return stateMachine._003C_003Et__builder.Task;
		}

		public byte[] GetScriptHash(string script)
		{
			return LuaScriptHasher.GetScriptHash(script);
		}

		public void Refresh(RedisEndpoints redisEndpoints)
		{
			Refresh(redisEndpoints.Endpoints.ToArray());
		}

		public void PingAllDatabases()
		{
			Parallel.ForEach(GetAllDatabases(), delegate(IDatabase database)
			{
				((IRedis)database).Ping((CommandFlags)0);
			});
		}

		public abstract IReadOnlyCollection<ISubscriber> GetAllSubscribers();

		protected Task<IConnectionMultiplexer> ConnectMultiplexerAsync(string redisEndpoint)
		{
			ConfigurationOptions configurationOptions = GetConfigurationOptions(redisEndpoint);
			return (RedisClientOptions.ConnectionBuilder ?? new DefaultConnectionBuilder()).CreateConnectionMultiplexerAsync(configurationOptions);
		}

		protected ConfigurationOptions GetConfigurationOptions(string redisEndpoint)
		{
			ConfigurationOptions val = ConfigurationOptions.Parse(redisEndpoint);
			val.ConnectTimeout = (int)RedisClientOptions.ConnectTimeout().TotalMilliseconds;
			val.ResponseTimeout = (int)RedisClientOptions.ResponseTimeout().TotalMilliseconds;
			val.AbortOnConnectFail = false;
			val.ReconnectRetryPolicy = RedisClientOptions.ReconnectRetryPolicy;
			if (RedisClientOptions.SyncTimeout.HasValue)
			{
				val.SyncTimeout = (int)RedisClientOptions.SyncTimeout.Value.TotalMilliseconds;
			}
			if (RedisClientOptions.DisableSubscriptions)
			{
				val.CommandMap = CommandMap.Create(_SubscriptionCommands, false);
			}
			return val;
		}

		protected IConnectionMultiplexer ConnectMultiplexer(string redisEndpoint)
		{
			return Task.Run(() => ConnectMultiplexerAsync(redisEndpoint)).GetAwaiter().GetResult();
		}

		protected void OnRefreshed()
		{
			EventHandler eventHandler = this.Refreshed;
			if (eventHandler != null)
			{
				eventHandler(this, EventArgs.Empty);
			}
		}

		private void PreDatabaseExecute()
		{
			PerformanceMonitor performanceMonitor = _PerformanceMonitor;
			if (performanceMonitor != null)
			{
				performanceMonitor.OutstandingRequestCount.Increment();
			}
		}

		private void OnDatabaseError(IDatabase database)
		{
			PerformanceMonitor performanceMonitor = _PerformanceMonitor;
			if (performanceMonitor != null)
			{
				performanceMonitor.ErrorsPerSecond.Increment();
			}
			string ipPortCombo = ((IRedisAsync)database).Multiplexer.GetIpPortCombo();
			PerformanceMonitor performanceMonitor2 = _PerformanceMonitor;
			if (performanceMonitor2 != null)
			{
				performanceMonitor2.GetPerEndpointErrorCounter(ipPortCombo).Increment();
			}
		}

		private void PostDatabaseExecute(Stopwatch stopWatch)
		{
			stopWatch.Stop();
			if (_PerformanceMonitor != null)
			{
				_PerformanceMonitor.AverageResponseTime.Sample(stopWatch.Elapsed.TotalMilliseconds);
				_PerformanceMonitor.RequestsPerSecond.Increment();
				_PerformanceMonitor.OutstandingRequestCount.Decrement();
			}
		}

		private void LoadScript(IDatabase database, byte[] scriptHash, string script)
		{
			if (!GetServerFromMultiplexer((IConnectionMultiplexer)(object)((IRedisAsync)database).Multiplexer).ScriptLoad(script, (CommandFlags)0).SequenceEqual(scriptHash))
			{
				throw new ArgumentException("scriptHash is not correct for the script.");
			}
		}

		public static IServer GetServerFromMultiplexer(IConnectionMultiplexer connectionMultiplexer)
		{
			if (connectionMultiplexer == null)
			{
				throw new ArgumentNullException("connectionMultiplexer");
			}
			EndPoint endPoint = connectionMultiplexer.GetEndPoints(false)[0];
			return connectionMultiplexer.GetServer(endPoint, (object)null);
		}
	}
}
