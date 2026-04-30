using System;
using System.Collections.Concurrent;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using System.Threading;
using System.Threading.Tasks;
using Roblox.Diagnostics;

namespace Roblox
{
	[CounterCategory("Roblox.ParallelTaskWorker v2")]
	public sealed class ParallelTaskWorker : IDisposable
	{
		public class Configuration
		{
			[CompilerGenerated]
			private readonly TimeSpan _003CLeaseDuration_003Ek__BackingField;

			[CompilerGenerated]
			private readonly TimeSpan _003CMinSleepTime_003Ek__BackingField;

			[CompilerGenerated]
			private readonly TimeSpan _003CMaxSleepTime_003Ek__BackingField;

			[CompilerGenerated]
			private readonly TimeSpan _003CSleepTimeDecay_003Ek__BackingField;

			[CompilerGenerated]
			private readonly int _003CWorkerThreadCount_003Ek__BackingField;

			[CompilerGenerated]
			private readonly Guid _003CWorkerId_003Ek__BackingField;

			[CompilerGenerated]
			private readonly Action<Exception> _003CExceptionHandler_003Ek__BackingField;

			[CompilerGenerated]
			private readonly int? _003CMaxTaskQueueLength_003Ek__BackingField;

			[CompilerGenerated]
			private readonly bool _003CSleepBetweenProcessItems_003Ek__BackingField;

			public TimeSpan LeaseDuration
			{
				[CompilerGenerated]
				get
				{
					return _003CLeaseDuration_003Ek__BackingField;
				}
			}

			public TimeSpan MinSleepTime
			{
				[CompilerGenerated]
				get
				{
					return _003CMinSleepTime_003Ek__BackingField;
				}
			}

			public TimeSpan MaxSleepTime
			{
				[CompilerGenerated]
				get
				{
					return _003CMaxSleepTime_003Ek__BackingField;
				}
			}

			public TimeSpan SleepTimeDecay
			{
				[CompilerGenerated]
				get
				{
					return _003CSleepTimeDecay_003Ek__BackingField;
				}
			}

			public int WorkerThreadCount
			{
				[CompilerGenerated]
				get
				{
					return _003CWorkerThreadCount_003Ek__BackingField;
				}
			}

			public Guid WorkerId
			{
				[CompilerGenerated]
				get
				{
					return _003CWorkerId_003Ek__BackingField;
				}
			}

			public Action<Exception> ExceptionHandler
			{
				[CompilerGenerated]
				get
				{
					return _003CExceptionHandler_003Ek__BackingField;
				}
			}

			public int? MaxTaskQueueLength
			{
				[CompilerGenerated]
				get
				{
					return _003CMaxTaskQueueLength_003Ek__BackingField;
				}
			}

			public bool SleepBetweenProcessItems
			{
				[CompilerGenerated]
				get
				{
					return _003CSleepBetweenProcessItems_003Ek__BackingField;
				}
			}

			public Configuration(Guid workerId, TimeSpan leaseDuration, TimeSpan minSleepTime, TimeSpan maxSleepTime, long sleepTimeDecayInTicks, int workerThreadCount = 2, Action<Exception> exceptionHandler = null, int? maxTaskQueueLength = null, bool sleepBetweenProcessItems = false)
			{
				_003CLeaseDuration_003Ek__BackingField = leaseDuration;
				_003CMinSleepTime_003Ek__BackingField = minSleepTime;
				_003CMaxSleepTime_003Ek__BackingField = maxSleepTime;
				_003CSleepTimeDecay_003Ek__BackingField = TimeSpan.FromTicks(sleepTimeDecayInTicks);
				_003CWorkerId_003Ek__BackingField = workerId;
				_003CWorkerThreadCount_003Ek__BackingField = workerThreadCount;
				_003CExceptionHandler_003Ek__BackingField = exceptionHandler;
				_003CMaxTaskQueueLength_003Ek__BackingField = maxTaskQueueLength;
				_003CSleepBetweenProcessItems_003Ek__BackingField = sleepBetweenProcessItems;
			}
		}

		public struct LeaseResult
		{
			public bool AreMoreExpected;

			public IEnumerable<IParallelWorkTask> Tasks;

			public LeaseResult(bool moreResultsAreExpected, IEnumerable<IParallelWorkTask> tasks)
			{
				AreMoreExpected = moreResultsAreExpected;
				Tasks = tasks;
			}
		}

		private Configuration _Configuration;

		private readonly Func<LeaseResult> _LeasedTasksFetcher;

		private TimeSpan _SleepTime = TimeSpan.Zero;

		private readonly BlockingCollection<IParallelWorkTask> _TaskQueue = new BlockingCollection<IParallelWorkTask>();

		public static Guid ID = Guid.NewGuid();

		private CancellationTokenSource _ProcessTaskCancellationTokenSource;

		private CancellationTokenSource _RequestTaskCancellationTokenSource;

		[Counter("Requests", PerformanceCounterType.NumberOfItems64)]
		private readonly PerformanceCounter _RequestsTotal;

		[Counter("Requests/s", PerformanceCounterType.RateOfCountsPerSecond32)]
		private readonly PerformanceCounter _RequestsPerSecond;

		[Counter("Tasks Errors", PerformanceCounterType.NumberOfItems32)]
		private readonly PerformanceCounter _TaskErrorsTotal;

		[Counter("Tasks Errors/s", PerformanceCounterType.RateOfCountsPerSecond32)]
		private readonly PerformanceCounter _TaskErrorsPerSecond;

		[Counter("Tasks Processed", PerformanceCounterType.NumberOfItems32)]
		private readonly PerformanceCounter _TasksProcessedTotal;

		[Counter("Tasks Processed/s", PerformanceCounterType.RateOfCountsPerSecond32)]
		private readonly PerformanceCounter _TasksProcessedPerSecond;

		[Counter("Tasks Success", PerformanceCounterType.NumberOfItems32)]
		private readonly PerformanceCounter _TaskSuccessesTotal;

		[Counter("Tasks Success/s", PerformanceCounterType.RateOfCountsPerSecond32)]
		private readonly PerformanceCounter _TaskSuccessesPerSecond;

		[Counter("Queued Tasks", PerformanceCounterType.NumberOfItems32)]
		private readonly PerformanceCounter _TaskQueued;

		[Counter("Delay Interval", PerformanceCounterType.NumberOfItems32)]
		private readonly PerformanceCounter _CurrentDelay;

		public int QueuedTasks
		{
			get
			{
				return _TaskQueue.Count;
			}
		}

		public ParallelTaskWorker(string taskName, Configuration configuration, Func<LeaseResult> leasedTasksFetcher)
		{
			PerfCounters.Initialize((object)this, taskName);
			_Configuration = configuration;
			_LeasedTasksFetcher = leasedTasksFetcher;
		}

		private void DoActionForeverInNewThread(int workerThreadCount, CancellationToken cancellationToken, Action performAction, bool sleepBetweenLoop = false)
		{
			for (int i = 0; i < workerThreadCount; i++)
			{
				Task.Factory.StartNew(delegate
				{
					while (true)
					{
						try
						{
							performAction();
						}
						catch (Exception ex)
						{
							LogException(ex);
						}
						if (cancellationToken.IsCancellationRequested)
						{
							break;
						}
						if (sleepBetweenLoop)
						{
							_CurrentDelay.RawValue = (long)_SleepTime.TotalSeconds;
							Thread.Sleep(_SleepTime);
						}
					}
				}, cancellationToken, TaskCreationOptions.LongRunning, TaskScheduler.Default);
			}
		}

		private void ProcessItems()
		{
			_ProcessTaskCancellationTokenSource = new CancellationTokenSource();
			DoActionForeverInNewThread(_Configuration.WorkerThreadCount, _ProcessTaskCancellationTokenSource.Token, delegate
			{
				IParallelWorkTask workItem = _TaskQueue.Take();
				ProcessWorkItem(workItem);
			}, _Configuration.SleepBetweenProcessItems);
		}

		private void RequestWork()
		{
			_RequestTaskCancellationTokenSource = new CancellationTokenSource();
			DoActionForeverInNewThread(1, _RequestTaskCancellationTokenSource.Token, delegate
			{
				if (_Configuration.MaxTaskQueueLength.HasValue && _TaskQueue.Count > _Configuration.MaxTaskQueueLength.Value)
				{
					DecaySleepTime(false);
				}
				else
				{
					_RequestsTotal.Increment();
					_RequestsPerSecond.Increment();
					LeaseResult leaseResult = _LeasedTasksFetcher();
					foreach (IParallelWorkTask current in leaseResult.Tasks)
					{
						EnqueueWorkItem(current);
					}
					DecaySleepTime(leaseResult.AreMoreExpected);
				}
			}, true);
		}

		private void DecaySleepTime(bool reset)
		{
			if (reset)
			{
				_SleepTime = _Configuration.MinSleepTime;
				return;
			}
			_SleepTime += _Configuration.SleepTimeDecay;
			if (_SleepTime > _Configuration.MaxSleepTime)
			{
				_SleepTime = _Configuration.MaxSleepTime;
			}
		}

		private void EnqueueWorkItem(IParallelWorkTask workItem)
		{
			if (workItem != null)
			{
				_TaskQueue.Add(workItem);
				_TaskQueued.RawValue = _TaskQueue.Count;
			}
		}

		private void ProcessWorkItem(IParallelWorkTask workItem)
		{
			try
			{
				if (workItem != null)
				{
					_TasksProcessedTotal.Increment();
					_TasksProcessedPerSecond.Increment();
					workItem.ProcessTaskAndMarkComplete();
					_TaskSuccessesTotal.Increment();
					_TaskSuccessesPerSecond.Increment();
				}
			}
			catch (Exception ex)
			{
				_TaskErrorsTotal.Increment();
				_TaskErrorsPerSecond.Increment();
				LogException(ex);
			}
			finally
			{
				_TaskQueued.RawValue = _TaskQueue.Count;
			}
		}

		public static ParallelTaskWorker Start(string taskName, Configuration configuration, Func<LeaseResult> leasedTasksFetcher)
		{
			ParallelTaskWorker parallelTaskWorker = new ParallelTaskWorker(taskName, configuration, leasedTasksFetcher);
			parallelTaskWorker.Start();
			return parallelTaskWorker;
		}

		public void Reconfigure(Configuration configuration)
		{
			if (configuration != null)
			{
				_Configuration = configuration;
			}
		}

		public void Restart(Configuration configuration = null)
		{
			if (configuration != null)
			{
				_Configuration = configuration;
			}
			Stop();
			Start();
		}

		public void Start()
		{
			ProcessItems();
			RequestWork();
		}

		public void Stop()
		{
			CancellationTokenSource processTaskCancellationTokenSource = _ProcessTaskCancellationTokenSource;
			if (processTaskCancellationTokenSource != null)
			{
				processTaskCancellationTokenSource.Cancel();
			}
			CancellationTokenSource requestTaskCancellationTokenSource = _RequestTaskCancellationTokenSource;
			if (requestTaskCancellationTokenSource != null)
			{
				requestTaskCancellationTokenSource.Cancel();
			}
		}

		public void Dispose()
		{
			PerfCounters.Dispose((object)this);
		}

		private void LogException(Exception ex)
		{
			Configuration configuration = _Configuration;
			if (((configuration != null) ? configuration.ExceptionHandler : null) != null)
			{
				_Configuration.ExceptionHandler(ex);
			}
			else
			{
				ExceptionHandler.LogException(ex);
			}
		}
	}
}
