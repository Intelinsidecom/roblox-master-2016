using System;
using System.Collections.Concurrent;
using System.Collections.Generic;
using System.Linq;
using System.Threading.Tasks;
using StackExchange.Redis;

namespace Roblox.Caching
{
	internal class RedisSubscriber
	{
		private class SubscriptionRetriableItem : IRetriableItem
		{
			public int CurrentAttempt { get; set; }

			public string EntityType { get; set; }

			public ISubscriber Subscriber { get; set; }

			public override string ToString()
			{
				object arg = CurrentAttempt;
				string entityType = EntityType;
				ISubscriber subscriber = Subscriber;
				object arg2;
				if (subscriber == null)
				{
					arg2 = null;
				}
				else
				{
					ConnectionMultiplexer multiplexer = ((IRedisAsync)subscriber).Multiplexer;
					arg2 = ((multiplexer != null) ? multiplexer.Configuration : null);
				}
				return string.Format("CurrentAttempt:{0}_EntityType:{1}_Subscriber:{2}", arg, entityType, arg2);
			}
		}

		private static RetryQueue<SubscriptionRetriableItem> _RetryQueue;

		private bool _IsRunning;

		private readonly ConcurrentDictionary<string, ISubscriber> _SubscribersByEndpoint = new ConcurrentDictionary<string, ISubscriber>();

		public event Action<string> MessageReceived;

		public event Action<Exception> ExceptionOccured;

		public RedisSubscriber(IReadOnlyCollection<ISubscriber> pubSubHandles, IRedisInvalidationSettingsProvider redisInvalidationSettingsProvider)
		{
			foreach (ISubscriber pubSubHandle in pubSubHandles)
			{
				string pubSubLookupKey = GetPubSubLookupKey(pubSubHandle);
				_SubscribersByEndpoint.TryAdd(pubSubLookupKey, pubSubHandle);
			}
			_RetryQueue = new RetryQueue<SubscriptionRetriableItem>(RetrySubscribingToTopic, redisInvalidationSettingsProvider.GetNumberOfAttemptsForTopicSubscription(), redisInvalidationSettingsProvider.GetRetryIntervalForTopicSubscriptionsInMilliseconds());
			_RetryQueue.OnFatalFailure += this.ExceptionOccured;
			redisInvalidationSettingsProvider.OnNumberOfAttemptsForTopicSubscriptionChanged += delegate(int newValue)
			{
				_RetryQueue.MaxAttempts = newValue;
			};
			redisInvalidationSettingsProvider.OnRetryIntervalForTopicSubscriptionsChanged += delegate(int newValue)
			{
				_RetryQueue.RetryIntervalInMilliseconds = newValue;
			};
		}

		public void Stop()
		{
			if (_IsRunning)
			{
				_IsRunning = false;
			}
		}

		public void Start()
		{
			if (!_IsRunning)
			{
				_IsRunning = true;
			}
		}

		public bool RegisterEntity(string entityType)
		{
			//IL_0043: Unknown result type (might be due to invalid IL or missing references)
			try
			{
				List<Task> list = new List<Task>(_SubscribersByEndpoint.Values.Count);
				List<ISubscriber> list2 = _SubscribersByEndpoint.Values.ToList();
				foreach (ISubscriber value in _SubscribersByEndpoint.Values)
				{
					Task item = value.SubscribeAsync(entityType, (Action<RedisChannel, RedisValue>)MessageHandler, (CommandFlags)0);
					list.Add(item);
				}
				Task.WaitAll(list.ToArray());
				for (int i = 0; i < list.Count; i++)
				{
					if (list[i].Exception != null)
					{
						_RetryQueue.AddItem(new SubscriptionRetriableItem
						{
							EntityType = entityType,
							Subscriber = list2[i]
						});
					}
				}
			}
			catch (Exception obj)
			{
				Action<Exception> action = this.ExceptionOccured;
				if (action != null)
				{
					action(obj);
				}
				return false;
			}
			return true;
		}

		private void RetrySubscribingToTopic(SubscriptionRetriableItem item)
		{
			//IL_000e: Unknown result type (might be due to invalid IL or missing references)
			string entityType = item.EntityType;
			item.Subscriber.Subscribe(entityType, (Action<RedisChannel, RedisValue>)MessageHandler, (CommandFlags)0);
		}

		private unsafe void MessageHandler(RedisChannel topic, RedisValue redisValue)
		{
			if (!_IsRunning || this.MessageReceived == null)
			{
				return;
			}
			string obj = redisValue.ToString();
			try
			{
				this.MessageReceived(obj);
			}
			catch (Exception obj2)
			{
				Action<Exception> action = this.ExceptionOccured;
				if (action != null)
				{
					action(obj2);
				}
			}
		}

		public void OnPubSubHandlesAdded(IReadOnlyCollection<ISubscriber> pubSubHandles, HashSet<string> registeredEntities)
		{
			//IL_0025: Unknown result type (might be due to invalid IL or missing references)
			foreach (ISubscriber pubSubHandle in pubSubHandles)
			{
				foreach (string registeredEntity in registeredEntities)
				{
					pubSubHandle.Subscribe(registeredEntity, (Action<RedisChannel, RedisValue>)MessageHandler, (CommandFlags)0);
				}
				string pubSubLookupKey = GetPubSubLookupKey(pubSubHandle);
				_SubscribersByEndpoint.TryAdd(pubSubLookupKey, pubSubHandle);
			}
		}

		public void OnPubSubHandlesRemoved(IReadOnlyCollection<ISubscriber> pubSubHandles)
		{
			foreach (ISubscriber pubSubHandle in pubSubHandles)
			{
				string pubSubLookupKey = GetPubSubLookupKey(pubSubHandle);
				ISubscriber value;
				if (_SubscribersByEndpoint.TryRemove(pubSubLookupKey, out value))
				{
					value.UnsubscribeAll((CommandFlags)2);
				}
			}
		}

		public void OnEntityDeregistered(string entityType)
		{
			//IL_0033: Unknown result type (might be due to invalid IL or missing references)
			foreach (ISubscriber value2 in _SubscribersByEndpoint.Values)
			{
				string pubSubLookupKey = GetPubSubLookupKey(value2);
				ISubscriber value;
				if (_SubscribersByEndpoint.TryGetValue(pubSubLookupKey, out value))
				{
					value.Unsubscribe(entityType, (Action<RedisChannel, RedisValue>)null, (CommandFlags)2);
				}
			}
		}

		private static string GetPubSubLookupKey(ISubscriber pubSubHandle)
		{
			return ((IRedisAsync)pubSubHandle).Multiplexer.Configuration;
		}
	}
}
