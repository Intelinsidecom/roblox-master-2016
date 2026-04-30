using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Net;
using System.Net.Sockets;
using System.Runtime.CompilerServices;
using System.Threading;
using Roblox.Sentinels;

namespace BeIT.MemCached
{
	[DebuggerDisplay("Host: {Host}")]
	internal class SocketPool : ISocketPool, IDisposable
	{
		[CompilerGenerated]
		private sealed class _003C_003Ec__DisplayClass21_0
		{
			public IPooledSocket pooledSocket;

			public SocketPool _003C_003E4__this;

			internal void _003CAcquire_003Eg__Action_007C0()
			{
				Stopwatch stopwatch = Stopwatch.StartNew();
				IPEndPoint endPoint = _003C_003E4__this._EndpointResolver.GetEndPoint(_003C_003E4__this.Host, 11211);
				pooledSocket = _003C_003E4__this.CreatePooledSocket(_003C_003E4__this._Monitor, endPoint, _003C_003E4__this._Settings, _003C_003E4__this._ExceptionHandler);
				stopwatch.Stop();
				pooledSocket.Disposed += _003C_003E4__this.PooledSocket_Disposed;
				_003C_003E4__this._Monitor.AcquireSocketCreationAverageTimeInMilliseconds.Sample(stopwatch.Elapsed.TotalMilliseconds);
				_003C_003E4__this._Monitor.AcquireSocketCreationSuccessesPerSecond.Increment();
			}
		}

		private int _SocketObjectsAlive;

		private readonly IServerPool _Owner;

		private readonly MemcachedMonitor _Monitor;

		private readonly IEndpointResolver _EndpointResolver;

		private readonly Queue<IPooledSocket> _Queue;

		private readonly IMemCachedClientSettings _Settings;

		private readonly IMemcachedClientExceptionHandler _ExceptionHandler;

		private readonly ThresholdExecutionCircuitBreaker _ConnectionCircuitBreaker;

		private readonly ThresholdExecutionCircuitBreaker _ExecutionCircuitBreaker;

		private readonly IRateLimiter _ConnectionCreationRateLimiter;

		private volatile bool _Disposed;

		[CompilerGenerated]
		private readonly string _003CHost_003Ek__BackingField;

		public long PoolSize
		{
			get
			{
				return _Queue.Count;
			}
		}

		public int OwnedSocketCount
		{
			get
			{
				return _SocketObjectsAlive;
			}
		}

		public string Host
		{
			[CompilerGenerated]
			get
			{
				return _003CHost_003Ek__BackingField;
			}
		}

		public ThresholdExecutionCircuitBreaker ExecutionCircuitBreaker
		{
			get
			{
				return _ExecutionCircuitBreaker;
			}
		}

		internal SocketPool(ServerPool owner, string host, MemcachedMonitor monitor, IMemCachedClientSettings settings, IMemcachedClientExceptionHandler exceptionHandler, IEndpointResolver endpointResolver)
		{
			//IL_00a7: Unknown result type (might be due to invalid IL or missing references)
			//IL_00b1: Expected O, but got Unknown
			//IL_00f1: Unknown result type (might be due to invalid IL or missing references)
			//IL_00fb: Expected O, but got Unknown
			_003CHost_003Ek__BackingField = host;
			_Owner = owner;
			_Monitor = monitor;
			if (settings == null)
			{
				throw new ArgumentNullException("settings");
			}
			_Settings = settings;
			if (exceptionHandler == null)
			{
				throw new ArgumentNullException("exceptionHandler");
			}
			_ExceptionHandler = exceptionHandler;
			_Queue = new Queue<IPooledSocket>();
			_ConnectionCircuitBreaker = new ThresholdExecutionCircuitBreaker(string.Format("{0}_Connections", "SocketPool"), (Func<Exception, bool>)((Exception _) => true), (Func<TimeSpan>)(() => _Settings.ConnectionCircuitBreakerRetryInterval), (Func<int>)(() => _Settings.ConnectionCircuitBreakerExceptionCountForTripping), (Func<TimeSpan>)(() => _Settings.ConnectionCircuitBreakerExceptionIntervalForTripping));
			_ExecutionCircuitBreaker = new ThresholdExecutionCircuitBreaker(string.Format("{0}_Executions", "SocketPool"), (Func<Exception, bool>)ShouldTripExecutionCircuitBreaker, (Func<TimeSpan>)(() => _Settings.ExecutionCircuitBreakerRetryInterval), (Func<int>)(() => _Settings.ExecutionCircuitBreakerExceptionCountForTripping), (Func<TimeSpan>)(() => _Settings.ExecutionCircuitBreakerExceptionIntervalForTripping));
			_ConnectionCreationRateLimiter = new RateLimiter(() => _Settings.IsConnectionCreationRateLimitingEnabled, () => _Settings.ConnectionCreationRateLimitPeriodLength, () => _Settings.MaximumConnectionCreationsPerPeriod);
			if (endpointResolver == null)
			{
				throw new ArgumentNullException("endpointResolver");
			}
			_EndpointResolver = endpointResolver;
		}

		public IPooledSocket Acquire()
		{
			_Monitor.AcquireAttemptsPerSecond.Increment();
			lock (_Queue)
			{
				if (_Disposed)
				{
					return null;
				}
				while (_Queue.Count > 0)
				{
					IPooledSocket pooledSocket = _Queue.Dequeue();
					if (pooledSocket != null)
					{
						if (pooledSocket.IsAlive)
						{
							_Monitor.AcquireSuccessesPerSecond.Increment();
							return pooledSocket;
						}
						pooledSocket.Dispose();
					}
				}
			}
			_Monitor.AcquireFailuresPerSecond.Increment();
			if (!_ConnectionCreationRateLimiter.TryOperation())
			{
				_Monitor.AcquireSocketCreationAbortDueToRateLimitPerSecond.Increment();
				return null;
			}
			if (Interlocked.Increment(ref _SocketObjectsAlive) > _Settings.MaximumNumberOfSocketsPerPool)
			{
				Interlocked.Decrement(ref _SocketObjectsAlive);
				_Monitor.AcquireSocketCreationAbortDueToMaximumCountReachedPerSecond.Increment();
				return null;
			}
			try
			{
				_003C_003Ec__DisplayClass21_0 _003C_003Ec__DisplayClass21_ = new _003C_003Ec__DisplayClass21_0();
				_003C_003Ec__DisplayClass21_._003C_003E4__this = this;
				_003C_003Ec__DisplayClass21_.pooledSocket = null;
				((ExecutionCircuitBreakerBase)_ConnectionCircuitBreaker).Execute((Action)_003C_003Ec__DisplayClass21_._003CAcquire_003Eg__Action_007C0);
				return _003C_003Ec__DisplayClass21_.pooledSocket;
			}
			catch (Exception ex)
			{
				if (ex is CircuitBreakerException)
				{
					_Monitor.AcquireSocketCreationAbortedDueToBrokenCircuit.Increment();
					_ExceptionHandler.HandleVerboseException(ex);
				}
				else if (ex is TimeoutException)
				{
					_Monitor.AcquireSocketCreationTimeoutsPerSecond.Increment();
					_ExceptionHandler.HandleVerboseException(ex);
				}
				else
				{
					_Monitor.AcquireSocketCreationFailuresPerSecond.Increment();
					_ExceptionHandler.HandleException(ex);
				}
				Interlocked.Decrement(ref _SocketObjectsAlive);
				return null;
			}
		}

		public void Return(IPooledSocket pooledSocket, bool forceReset)
		{
			_Monitor.ReturnAttemptsPerSecond.Increment();
			if (!pooledSocket.IsAlive)
			{
				pooledSocket.Dispose();
				return;
			}
			if (pooledSocket.Reset(forceReset))
			{
				_Monitor.ReturnDirtySocketsPerSecond.Increment();
			}
			if (_Settings.IsRespectingMaxPoolSizeEnabled && _Queue.Count >= _Settings.MaximumPoolSize)
			{
				pooledSocket.Dispose();
				_Monitor.ReturnPoolIsFullPerSecond.Increment();
				return;
			}
			if (_Queue.Count > _Settings.MinimumPoolSize && DateTime.UtcNow - pooledSocket.Created > _Settings.SocketRecycleAge)
			{
				pooledSocket.Dispose();
				_Monitor.ReturnSocketsDestroyedPerSecond.Increment();
				return;
			}
			lock (_Queue)
			{
				if (_Disposed)
				{
					pooledSocket.Dispose();
					return;
				}
				_Queue.Enqueue(pooledSocket);
				_Monitor.ReturnSuccessesPerSecond.Increment();
			}
		}

		public void Dispose()
		{
			_Disposed = true;
			lock (_Queue)
			{
				while (_Queue.Count > 0)
				{
					_Queue.Dequeue().Dispose();
				}
			}
		}

		private void PooledSocket_Disposed(object sender, EventArgs e)
		{
			if (sender != null)
			{
				PooledSocket pooledSocket = sender as PooledSocket;
				if (pooledSocket != null)
				{
					Interlocked.Decrement(ref _SocketObjectsAlive);
					pooledSocket.Disposed -= PooledSocket_Disposed;
				}
			}
		}

		private bool ShouldTripExecutionCircuitBreaker(Exception ex)
		{
			SocketException ex2 = ex.InnerException as SocketException;
			if (ex2 == null)
			{
				return false;
			}
			return _Settings.SocketErrorsThatTripExecutionCircuitBreaker.Contains(ex2.SocketErrorCode);
		}

		internal virtual IPooledSocket CreatePooledSocket(MemcachedMonitor monitor, IPEndPoint endPoint, IMemCachedClientSettings clientSettings, IMemcachedClientExceptionHandler exceptionHandler)
		{
			return new PooledSocket(monitor, endPoint, clientSettings, exceptionHandler);
		}
	}
}
