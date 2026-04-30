using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.IO;
using System.Linq;
using System.Net.Sockets;
using System.Runtime.CompilerServices;
using System.Text;
using System.Threading;
using Roblox.Instrumentation;
using Roblox.Sentinels;

namespace BeIT.MemCached
{
	internal class ServerPool : IServerPool, IDisposable
	{
		[CompilerGenerated]
		private sealed class _003C_003Ec__DisplayClass15_0
		{
			public Action<IPooledSocket> use;

			internal bool _003CExecute_003Eg__Function_007C0(IPooledSocket pooledSocket)
			{
				use(pooledSocket);
				return true;
			}
		}

		[CompilerGenerated]
		private sealed class _003C_003Ec__DisplayClass19_0<T>
		{
			public T value;

			public Func<IPooledSocket, T> use;

			public IPooledSocket socket;

			internal void _003CUseSocketWithCircuitBreaker_003Eg__Action_007C0()
			{
				value = use(socket);
			}
		}

		private static readonly TimeSpan _MonitorUpdateInterval = TimeSpan.FromSeconds(5.0);

		private readonly Timer _MonitorUpdateTimer;

		private readonly Dictionary<uint, ISocketPool> _HostDictionary;

		private readonly uint[] _HostKeys;

		private readonly MemcachedMonitor _Monitor;

		private readonly IMemCachedClientSettings _Settings;

		private readonly IMemcachedClientExceptionHandler _ExceptionHandler;

		private readonly RoundRobin<ISocketPool> _RoundRobin;

		[CompilerGenerated]
		private readonly ISocketPool[] _003CHostList_003Ek__BackingField;

		public ISocketPool[] HostList
		{
			[CompilerGenerated]
			get
			{
				return _003CHostList_003Ek__BackingField;
			}
		}

		internal ServerPool(string[] hosts, MemcachedMonitor memcachedMonitor, IMemCachedClientSettings settings, IMemcachedClientExceptionHandler exceptionHandler, IEndpointResolver endpointResolver)
		{
			if (hosts == null || hosts.Length == 0)
			{
				throw new ArgumentException("Cannot configure MemcachedClient with empty list of hosts.");
			}
			if (endpointResolver == null)
			{
				throw new ArgumentNullException("endpointResolver");
			}
			if (settings == null)
			{
				throw new ArgumentNullException("settings");
			}
			_Settings = settings;
			if (memcachedMonitor == null)
			{
				throw new ArgumentNullException("memcachedMonitor");
			}
			_Monitor = memcachedMonitor;
			if (exceptionHandler == null)
			{
				throw new ArgumentNullException("exceptionHandler");
			}
			_ExceptionHandler = exceptionHandler;
			_HostDictionary = new Dictionary<uint, ISocketPool>();
			List<ISocketPool> list = new List<ISocketPool>();
			List<uint> list2 = new List<uint>();
			foreach (string text in hosts)
			{
				ISocketPool socketPool = CreateSocketPool(this, text.Trim(), _Monitor, settings, _ExceptionHandler, endpointResolver);
				for (int j = 0; j < 250; j++)
				{
					byte[] bytes = Encoding.UTF8.GetBytes(text + "-" + j);
					uint num = BitConverter.ToUInt32(new ModifiedFNV1_32().ComputeHash(bytes), 0);
					if (!_HostDictionary.ContainsKey(num))
					{
						_HostDictionary[num] = socketPool;
						list2.Add(num);
					}
				}
				list.Add(socketPool);
			}
			ISocketPool[] array = list.ToArray();
			_RoundRobin = new RoundRobin<ISocketPool>(Array.AsReadOnly(array));
			_003CHostList_003Ek__BackingField = array;
			list2.Sort();
			_HostKeys = list2.ToArray();
			_MonitorUpdateTimer = new Timer(delegate
			{
				try
				{
					long num2 = HostList.Sum((ISocketPool s) => s.PoolSize);
					long value = ((HostList.Length == 0) ? 0 : ((long)Math.Round((double)num2 / (double)HostList.Length)));
					_Monitor.PoolSizeForAllHosts.Set(num2);
					_Monitor.AveragePoolSizePerHost.Set(value);
					double num3 = HostList.Average((ISocketPool d) => d.OwnedSocketCount);
					_Monitor.AverageNonDisposedCreatedSocketsPerHost.Set((long)num3);
					int num4 = HostList.Max((ISocketPool d) => d.OwnedSocketCount);
					_Monitor.MaximumNonDisposedCreatedSocketsPerHost.Set(num4);
				}
				catch
				{
				}
			}, null, _MonitorUpdateInterval, _MonitorUpdateInterval);
		}

		public ISocketPool GetSocketPool(uint hash, bool useRoundRobin)
		{
			if (HostList.Length == 1)
			{
				return HostList[0];
			}
			if (useRoundRobin)
			{
				return _RoundRobin.Next();
			}
			int num = Array.BinarySearch(_HostKeys, hash);
			if (num < 0)
			{
				num = ~num;
				if (num >= _HostKeys.Length)
				{
					num = 0;
				}
			}
			uint key = _HostKeys[num];
			return _HostDictionary[key];
		}

		public ISocketPool GetSocketPool(string host)
		{
			if (string.IsNullOrWhiteSpace(host))
			{
				throw new ArgumentNullException("host");
			}
			return Array.Find(HostList, (ISocketPool socketPool) => socketPool.Host == host);
		}

		public T Execute<T>(uint hash, ExecutionType executionType, Func<IPooledSocket, T> use)
		{
			if (use == null)
			{
				throw new ArgumentNullException("use");
			}
			ISocketPool socketPool = GetSocketPool(hash, _Settings.UseRoundRobinSocketPoolSelection);
			return ExecuteCommandAndHandleNodeSkipping(socketPool, default(T), executionType, use);
		}

		public void Execute(ISocketPool socketPool, ExecutionType executionType, Action<IPooledSocket> use)
		{
			_003C_003Ec__DisplayClass15_0 _003C_003Ec__DisplayClass15_ = new _003C_003Ec__DisplayClass15_0();
			_003C_003Ec__DisplayClass15_.use = use;
			if (socketPool == null)
			{
				throw new ArgumentNullException("socketPool");
			}
			if (_003C_003Ec__DisplayClass15_.use == null)
			{
				throw new ArgumentNullException("use");
			}
			ExecuteCommandAndHandleNodeSkipping(socketPool, true, executionType, _003C_003Ec__DisplayClass15_._003CExecute_003Eg__Function_007C0);
		}

		private T ExecuteCommandAgainstSocket<T>(ISocketPool socketPool, T defaultValue, ExecutionType executionType, bool useRoundRobin, Func<IPooledSocket, T> use, out bool isError)
		{
			IPooledSocket pooledSocket = null;
			isError = false;
			bool forceReset = false;
			try
			{
				pooledSocket = socketPool.Acquire();
				if (pooledSocket != null)
				{
					Stopwatch stopwatch = Stopwatch.StartNew();
					T result = (_Settings.IsExecutionCircuitBreakerEnabled ? UseSocketWithCircuitBreaker(use, defaultValue, socketPool, pooledSocket) : use(pooledSocket));
					stopwatch.Stop();
					_Monitor.AverageResponseTimeInMilliseconds.Sample(stopwatch.Elapsed.TotalMilliseconds);
					_Monitor.ExecutionSuccessesPerSecond.Increment();
					return result;
				}
				isError = true;
				_Monitor.ExecutionFailuresToAcquirePerSecond.Increment();
			}
			catch (IOException ex) when (_Settings.IsExecutionCircuitBreakerEnabled && IsTimeoutException(ex))
			{
				isError = true;
				_Monitor.ExecutionTimeoutsPerSecond.Increment();
				_ExceptionHandler.HandleVerboseException(new MemcachedClientException((pooledSocket != null) ? pooledSocket.RemoteEndPoint : null, ex.Message, ex));
			}
			catch (CircuitBreakerException ex2) when (_Settings.IsExecutionCircuitBreakerEnabled)
			{
				isError = true;
				_Monitor.ExecutionCircuitBreakerErrorsPerSecond.Increment();
				_ExceptionHandler.HandleVerboseException(new MemcachedClientException((pooledSocket != null) ? pooledSocket.RemoteEndPoint : null, ex2.Message, ex2));
			}
			catch (Exception ex3)
			{
				isError = true;
				MemcachedClientException ex4 = new MemcachedClientException((pooledSocket != null) ? pooledSocket.RemoteEndPoint : null, ex3.Message, ex3);
				bool flag = _ExceptionHandler.HandleVerboseException(ex4);
				if (ex3 is NotSupportedException)
				{
					if (!flag)
					{
						_ExceptionHandler.HandleException(ex4);
					}
					_Monitor.ExecutionNotSupportedErrorsPerSecond.Increment();
				}
				else if (ex3 is IOException)
				{
					if (IsTimeoutException(ex3 as IOException))
					{
						_Monitor.ExecutionTimeoutsPerSecond.Increment();
					}
					else
					{
						_Monitor.ExecutionIOErrorsPerSecond.Increment();
					}
				}
				else if (!flag)
				{
					_ExceptionHandler.HandleException(ex4);
				}
				Type type = ex3.GetType();
				if (_Settings.ExceptionTypeNamesToForceResetBytes.Contains(type.Name))
				{
					forceReset = true;
				}
			}
			finally
			{
				_Monitor.ExecutionAttemptsPerSecond.Increment();
				if (isError)
				{
					_Monitor.ExecutionErrorsPerSecond.Increment();
				}
				switch (executionType)
				{
				case ExecutionType.Read:
					_Monitor.ReadAttemptsPerSecond.Increment();
					if (isError)
					{
						_Monitor.ReadErrorsPerSecond.Increment();
					}
					break;
				case ExecutionType.Write:
					_Monitor.WriteAttemptsPerSecond.Increment();
					if (isError)
					{
						_Monitor.WriteErrorsPerSecond.Increment();
					}
					break;
				}
				if (pooledSocket != null)
				{
					socketPool.Return(pooledSocket, forceReset);
				}
			}
			return defaultValue;
		}

		private T ExecuteCommandAndHandleNodeSkipping<T>(ISocketPool socketPool, T defaultValue, ExecutionType executionType, Func<IPooledSocket, T> use)
		{
			bool useRoundRobinSocketPoolSelection = _Settings.UseRoundRobinSocketPoolSelection;
			bool isError;
			T result = ExecuteCommandAgainstSocket(socketPool, defaultValue, executionType, useRoundRobinSocketPoolSelection, use, out isError);
			if (isError && useRoundRobinSocketPoolSelection)
			{
				for (int i = 0; i < _Settings.MaximumSelectionAttemptsForRoundRobin; i++)
				{
					ISocketPool socketPool2 = _RoundRobin.Next();
					if (socketPool2 == socketPool)
					{
						continue;
					}
					bool isError2;
					result = ExecuteCommandAgainstSocket(socketPool2, defaultValue, executionType, useRoundRobinSocketPoolSelection, use, out isError2);
					if (isError2)
					{
						IRateOfCountsPerSecondCounter roundRobinExecutionFailuresPerSecond = _Monitor.RoundRobinExecutionFailuresPerSecond;
						if (roundRobinExecutionFailuresPerSecond != null)
						{
							roundRobinExecutionFailuresPerSecond.Increment();
						}
					}
					else
					{
						IRateOfCountsPerSecondCounter roundRobinExecutionSuccessesPerSecond = _Monitor.RoundRobinExecutionSuccessesPerSecond;
						if (roundRobinExecutionSuccessesPerSecond != null)
						{
							roundRobinExecutionSuccessesPerSecond.Increment();
						}
					}
					return result;
				}
			}
			return result;
		}

		public void Dispose()
		{
			ISocketPool[] hostList = HostList;
			for (int i = 0; i < hostList.Length; i++)
			{
				hostList[i].Dispose();
			}
			Timer monitorUpdateTimer = _MonitorUpdateTimer;
			if (monitorUpdateTimer != null)
			{
				monitorUpdateTimer.Dispose();
			}
		}

		private T UseSocketWithCircuitBreaker<T>(Func<IPooledSocket, T> use, T defaultValue, ISocketPool socketPool, IPooledSocket socket)
		{
			_003C_003Ec__DisplayClass19_0<T> _003C_003Ec__DisplayClass19_ = new _003C_003Ec__DisplayClass19_0<T>();
			_003C_003Ec__DisplayClass19_.use = use;
			_003C_003Ec__DisplayClass19_.socket = socket;
			_003C_003Ec__DisplayClass19_.value = defaultValue;
			((ExecutionCircuitBreakerBase)socketPool.ExecutionCircuitBreaker).Execute((Action)_003C_003Ec__DisplayClass19_._003CUseSocketWithCircuitBreaker_003Eg__Action_007C0);
			return _003C_003Ec__DisplayClass19_.value;
		}

		private bool IsTimeoutException(IOException ex)
		{
			SocketException ex2 = ex.InnerException as SocketException;
			if (ex2 != null)
			{
				return ex2.SocketErrorCode == SocketError.TimedOut;
			}
			return false;
		}

		internal virtual ISocketPool CreateSocketPool(IServerPool owner, string host, MemcachedMonitor monitor, IMemCachedClientSettings settings, IMemcachedClientExceptionHandler exceptionHandler, IEndpointResolver endpointResolver)
		{
			return new SocketPool(this, host.Trim(), _Monitor, settings, _ExceptionHandler, endpointResolver);
		}
	}
}
