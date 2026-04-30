using System;

namespace BeIT.MemCached
{
	public class MemcachedClientException : ApplicationException
	{
		public MemcachedClientException(string host, string message)
			: base(string.Format("{0} for server {1}", message, host))
		{
		}

		public MemcachedClientException(string host, string message, Exception innerException)
			: base(string.Format("{0} for server {1}", message, host), innerException)
		{
		}
	}
}
