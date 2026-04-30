using System;
using System.Collections.Generic;
using System.Linq;
using Roblox.Caching.Properties;
using Roblox.Configuration;
using Roblox.Instrumentation;
using Roblox.Redis;
using StackExchange.Redis;

namespace Roblox.Caching
{
	internal class RedisInvalidationSettingsProvider : IRedisInvalidationSettingsProvider
	{
		private volatile IReadOnlyCollection<ISubscriber> _PubSubHandles;

		private readonly object _Lock = new object();

		private readonly ICounterRegistry _CounterRegistry;

		private HashSet<string> _RedisEndpoints;

		private static readonly IRedisInvalidationSettingsProvider _Instance = new RedisInvalidationSettingsProvider(StaticCounterRegistry.Instance);

		public event Action<IReadOnlyCollection<ISubscriber>> OnPubSubHandlesAdded;

		public event Action<IReadOnlyCollection<ISubscriber>> OnPubSubHandlesRemoved;

		public event Action<int> OnNumberOfAttemptsForTopicSubscriptionChanged;

		public event Action<int> OnRetryIntervalForTopicSubscriptionsChanged;

		public event Action<Exception> OnException;

		private RedisInvalidationSettingsProvider(ICounterRegistry counterRegistry)
		{
			if (counterRegistry == null)
			{
				throw new ArgumentNullException("counterRegistry");
			}
			_CounterRegistry = counterRegistry;
			InvalidationSettings.Default.MonitorChanges((InvalidationSettings s) => s.RedisEndpointsForInvalidation, HandleEndpointsRefresh);
			InvalidationSettings.Default.MonitorChanges((InvalidationSettings s) => s.NumberOfAttemptsForTopicSubscription, delegate(int newValue)
			{
				try
				{
					Action<int> action = this.OnNumberOfAttemptsForTopicSubscriptionChanged;
					if (action != null)
					{
						action(newValue);
					}
				}
				catch (Exception obj)
				{
					Action<Exception> action2 = this.OnException;
					if (action2 != null)
					{
						action2(obj);
					}
				}
			});
			InvalidationSettings.Default.MonitorChanges((InvalidationSettings s) => s.RetryIntervalForTopicSubscriptionsInMilliSeconds, delegate(int newValue)
			{
				try
				{
					Action<int> action = this.OnRetryIntervalForTopicSubscriptionsChanged;
					if (action != null)
					{
						action(newValue);
					}
				}
				catch (Exception obj)
				{
					Action<Exception> action2 = this.OnException;
					if (action2 != null)
					{
						action2(obj);
					}
				}
			});
		}

		public static IRedisInvalidationSettingsProvider GetInstance()
		{
			return _Instance;
		}

		public int GetNumberOfAttemptsForInvalidationMessageDelivery()
		{
			return InvalidationSettings.Default.NumberOfAttemptsForInvalidationMessageDelivery;
		}

		public TimeSpan GetDelayToStopSubscribingAfterNodeRemoval()
		{
			return InvalidationSettings.Default.DelayToStopSubscribingAfterNodeRemoval;
		}

		public TimeSpan GetDelayToStartPublishingAfterNodeAddition()
		{
			return InvalidationSettings.Default.DelayToStartPublishingAfterNodeAddition;
		}

		public int GetNumberOfAttemptsForTopicSubscription()
		{
			return InvalidationSettings.Default.NumberOfAttemptsForTopicSubscription;
		}

		public int GetRetryIntervalForTopicSubscriptionsInMilliseconds()
		{
			return InvalidationSettings.Default.RetryIntervalForTopicSubscriptionsInMilliSeconds;
		}

		public int GetInvalidationPublisherQueueSize()
		{
			return InvalidationSettings.Default.RedisInvalidationQueueSize;
		}

		public bool IsThrowOnInitializationErrorEnabled()
		{
			return InvalidationSettings.Default.ThrowOnInitializationErrorEnabled;
		}

		public IReadOnlyCollection<ISubscriber> GetPubSubHandles()
		{
			if (_PubSubHandles != null)
			{
				return _PubSubHandles;
			}
			lock (_Lock)
			{
				if (_PubSubHandles != null)
				{
					return _PubSubHandles;
				}
				try
				{
					_RedisEndpoints = MultiValueSettingParser.ParseCommaDelimitedListString(InvalidationSettings.Default.RedisEndpointsForInvalidation);
					if (_RedisEndpoints.Any())
					{
						_PubSubHandles = GetPubSubHandlesFromEndpoints(_RedisEndpoints.ToArray());
					}
				}
				catch (Exception obj)
				{
					Action<Exception> action = this.OnException;
					if (action != null)
					{
						action(obj);
					}
				}
			}
			return _PubSubHandles;
		}

		private void HandleEndpointsRefresh(string newSettingsValue)
		{
			try
			{
				if (_PubSubHandles == null)
				{
					return;
				}
				IReadOnlyCollection<ISubscriber> pubSubHandles = _PubSubHandles;
				HashSet<string> hashSet = MultiValueSettingParser.ParseCommaDelimitedListString(newSettingsValue);
				List<string> list = _RedisEndpoints.Except(hashSet).ToList();
				List<string> list2 = hashSet.Except(_RedisEndpoints).ToList();
				if (list.Count != 0 || list2.Count != 0)
				{
					_RedisEndpoints = hashSet;
					HashSet<string> removedEndpointsHashSet = new HashSet<string>(list);
					IReadOnlyCollection<ISubscriber> pubSubHandlesFromEndpoints = GetPubSubHandlesFromEndpoints(list2);
					List<ISubscriber> obj = pubSubHandles.Where((ISubscriber handle) => removedEndpointsHashSet.Contains(Extensions.GetIpPortCombo(((IRedisAsync)handle).Multiplexer))).ToList();
					_PubSubHandles = (from handle in _PubSubHandles.Union(pubSubHandlesFromEndpoints)
						where !removedEndpointsHashSet.Contains(Extensions.GetIpPortCombo(((IRedisAsync)handle).Multiplexer))
						select handle).ToList();
					Action<IReadOnlyCollection<ISubscriber>> action = this.OnPubSubHandlesAdded;
					if (action != null)
					{
						action(pubSubHandlesFromEndpoints);
					}
					Action<IReadOnlyCollection<ISubscriber>> action2 = this.OnPubSubHandlesRemoved;
					if (action2 != null)
					{
						action2(obj);
					}
				}
			}
			catch (Exception obj2)
			{
				Action<Exception> action3 = this.OnException;
				if (action3 != null)
				{
					action3(obj2);
				}
			}
		}

		private IReadOnlyCollection<ISubscriber> GetPubSubHandlesFromEndpoints(IEnumerable<string> endpoints)
		{
			//IL_0018: Unknown result type (might be due to invalid IL or missing references)
			//IL_0022: Expected O, but got Unknown
			return ((RedisClientBase<RedisClientOptions>)new RedisClient(_CounterRegistry, (IEnumerable<string>)endpoints.ToArray(), "Roblox.Caching.Invalidator", this.OnException, (RedisClientOptions)null)).GetAllSubscribers();
		}
	}
}
