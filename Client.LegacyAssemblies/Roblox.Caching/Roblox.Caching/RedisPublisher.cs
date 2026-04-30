using System;
using System.Collections.Concurrent;
using System.Collections.Generic;
using System.Diagnostics;
using System.Linq;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using System.Threading;
using System.Threading.Tasks;
using Roblox.Redis;
using StackExchange.Redis;

namespace Roblox.Caching
{
	internal class RedisPublisher
	{
		private class WorkItem : IRetriableItem
		{
			public string EntityType { get; set; }

			public string Message { get; set; }

			public int CurrentAttempt { get; set; }

			public override string ToString()
			{
				return string.Format("Message:{0}_EntityType:{1}_CurrentAttempt:{2}", Message, EntityType, CurrentAttempt);
			}
		}


		private readonly BlockingCollection<WorkItem> _OutgoingMessages;

		private int _RoundRobinSlot;

		private IReadOnlyCollection<ISubscriber> _Publishers;

		private readonly IRedisInvalidationSettingsProvider _RedisInvalidationSettingsProvider;

		private bool _IsRunning;

		public event Action<string> PublishCompleted;

		public event Action<Exception> ExceptionOccured;

		public event Action<string> QueueOverflowed;

		public RedisPublisher(IReadOnlyCollection<ISubscriber> publishers, IRedisInvalidationSettingsProvider settingsProvider)
		{
			_Publishers = publishers;
			_RedisInvalidationSettingsProvider = settingsProvider;
			_OutgoingMessages = new BlockingCollection<WorkItem>(_RedisInvalidationSettingsProvider.GetInvalidationPublisherQueueSize());
		}

		public void Start()
		{
			if (!_IsRunning)
			{
				_IsRunning = true;
				Initialize();
			}
		}

		public void Stop()
		{
			_IsRunning = false;
		}

		public void PublishMessage(string message, string entityType)
		{
			if (_IsRunning)
			{
				WorkItem workItem = new WorkItem
				{
					Message = message,
					CurrentAttempt = 0,
					EntityType = entityType
				};
				AddToQueue(workItem);
			}
		}

		public void OnPubSubHandlesAdded(IReadOnlyCollection<ISubscriber> addedPublishers)
		{
			List<ISubscriber> list = new List<ISubscriber>(_Publishers);
			list.AddRange(addedPublishers);
			_Publishers = list;
		}

		public void OnPubSubHandlesRemoved(IReadOnlyCollection<ISubscriber> removedPublishers)
		{
			Dictionary<string, ISubscriber> publishersDictionary = removedPublishers.ToDictionary((ISubscriber pub) => Extensions.GetIpPortCombo(((IRedisAsync)pub).Multiplexer));
			List<ISubscriber> publishers = _Publishers.Where((ISubscriber publisher) => !publishersDictionary.ContainsKey(Extensions.GetIpPortCombo(((IRedisAsync)publisher).Multiplexer))).ToList();
			_Publishers = publishers;
		}

		private void Initialize()
		{
			Task.Factory.StartNew(delegate
			{
				while (_IsRunning)
				{
					try
					{
						WorkItem workItem = _OutgoingMessages.Take();
						ProcessWorkItem(workItem);
					}
					catch (ThreadAbortException)
					{
					}
					catch (Exception obj)
					{
						Action<Exception> action = this.ExceptionOccured;
						if (action != null)
						{
							action(obj);
						}
					}
				}
			}, TaskCreationOptions.LongRunning);
		}

		private async void ProcessWorkItem(WorkItem workItem)
		{
			try
			{
				ISubscriber publisher = GetPublisherByRoundRobin();
				if (publisher == null)
				{
					AddToQueue(workItem);
					return;
				}
				try
				{
					await publisher.PublishAsync(workItem.EntityType, workItem.Message, (CommandFlags)0).ConfigureAwait(false);
				}
				catch (Exception ex)
				{
					if (workItem.CurrentAttempt < _RedisInvalidationSettingsProvider.GetNumberOfAttemptsForInvalidationMessageDelivery())
					{
						workItem.CurrentAttempt++;
						AddToQueue(workItem);
					}
					else
					{
						Action<Exception> action = ExceptionOccured;
						if (action != null)
						{
							action(ex);
						}
					}
					return;
				}
				Action<string> action2 = PublishCompleted;
				if (action2 != null)
				{
					action2(workItem.Message);
				}
			}
			catch (Exception ex)
			{
				Action<Exception> action3 = ExceptionOccured;
				if (action3 != null)
				{
					action3(ex);
				}
			}
		}

		private ISubscriber GetPublisherByRoundRobin()
		{
			try
			{
				IReadOnlyCollection<ISubscriber> publishers = _Publishers;
				int count = publishers.Count;
				if (count == 0)
				{
					Action<Exception> action = this.ExceptionOccured;
					if (action != null)
					{
						action(new Exception("Fatal exception: No publishers to publish Redis invalidations with"));
					}
					return null;
				}
				int index = Math.Abs(Interlocked.Increment(ref _RoundRobinSlot) % count);
				return publishers.ElementAt(index);
			}
			catch (Exception obj)
			{
				Action<Exception> action2 = this.ExceptionOccured;
				if (action2 != null)
				{
					action2(obj);
				}
			}
			return null;
		}

		private void AddToQueue(WorkItem workItem)
		{
			if (!_OutgoingMessages.TryAdd(workItem))
			{
				Action<string> action = this.QueueOverflowed;
				if (action != null)
				{
					action(workItem.Message);
				}
			}
		}
	}
}
