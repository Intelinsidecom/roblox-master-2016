using System;
using System.Collections.Concurrent;
using System.Collections.Generic;
using System.Diagnostics.CodeAnalysis;
using System.Net;
using System.Runtime.CompilerServices;
using System.Threading;

namespace BeIT.MemCached
{
	internal class CachingEndpointResolver : IEndpointResolver
	{
		[IsReadOnly]
		private struct CacheKey
		{
			public readonly string Host;

			public readonly ushort DefaultPort;

			public CacheKey(string host, ushort defaultPort)
			{
				Host = host;
				DefaultPort = defaultPort;
			}
		}

		[IsReadOnly]
		private struct CacheEntry
		{
			public readonly IPEndPoint EndPoint;

			public readonly CancellationToken CancellationToken;

			public CacheEntry(IPEndPoint endPoint, CancellationToken cancellationToken)
			{
				EndPoint = endPoint;
				CancellationToken = cancellationToken;
			}
		}

		private readonly ConcurrentDictionary<CacheKey, CacheEntry> _Cache;

		private readonly IEndpointResolver _AuthoritativeEndpointResolver;

		private readonly Func<TimeSpan> _ExpiryTimeGetter;

		private readonly Action<Exception> _ExceptionHandler;

		public CachingEndpointResolver(IEndpointResolver authoritativeEndpointResolver, Func<TimeSpan> expiryTimeGetter, Action<Exception> exceptionHandler)
		{
			_Cache = new ConcurrentDictionary<CacheKey, CacheEntry>();
			if (authoritativeEndpointResolver == null)
			{
				throw new ArgumentNullException("authoritativeEndpointResolver");
			}
			_AuthoritativeEndpointResolver = authoritativeEndpointResolver;
			if (expiryTimeGetter == null)
			{
				throw new ArgumentNullException("expiryTimeGetter");
			}
			_ExpiryTimeGetter = expiryTimeGetter;
			if (exceptionHandler == null)
			{
				throw new ArgumentNullException("exceptionHandler");
			}
			_ExceptionHandler = exceptionHandler;
		}

		public IPEndPoint GetEndPoint(string host, ushort defaultPort = 11211)
		{
			if (string.IsNullOrWhiteSpace(host))
			{
				throw new ArgumentNullException("host");
			}
			CacheKey cacheKey = new CacheKey(host, defaultPort);
			CacheEntry orAdd = _Cache.GetOrAdd(cacheKey, (CacheKey t) => new CacheEntry(GetEndPoint(t), CreateExpiringCancellationToken()));
			if (orAdd.CancellationToken.IsCancellationRequested)
			{
				try
				{
					IPEndPoint endPoint = GetEndPoint(cacheKey);
					_Cache[cacheKey] = new CacheEntry(endPoint, CreateExpiringCancellationToken());
					return endPoint;
				}
				catch (Exception obj)
				{
					_ExceptionHandler(obj);
					_Cache[cacheKey] = new CacheEntry(orAdd.EndPoint, CreateExpiringCancellationToken());
					return orAdd.EndPoint;
				}
			}
			return orAdd.EndPoint;
		}

		private IPEndPoint GetEndPoint(CacheKey cacheKey)
		{
			return _AuthoritativeEndpointResolver.GetEndPoint(cacheKey.Host, cacheKey.DefaultPort);
		}

		private CancellationToken CreateExpiringCancellationToken()
		{
			return new CancellationTokenSource(_ExpiryTimeGetter()).Token;
		}

		[ExcludeFromCodeCoverage]
		internal void ExpireEntireCache()
		{
			CancellationTokenSource cancellationTokenSource = new CancellationTokenSource();
			cancellationTokenSource.Cancel();
			foreach (KeyValuePair<CacheKey, CacheEntry> item in _Cache)
			{
				CacheEntry value = new CacheEntry(item.Value.EndPoint, cancellationTokenSource.Token);
				_Cache[item.Key] = value;
			}
		}
	}
}
