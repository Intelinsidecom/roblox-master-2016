using System;
using System.Linq;
using System.Net;
using DnsClient;

namespace BeIT.MemCached
{
	internal class EndpointResolver : IEndpointResolver
	{
		private volatile ILookupClient _LookupClient;

		private readonly IMemcachedClientDnsSettings _DnsSettings;

		public EndpointResolver(IMemcachedClientDnsSettings settings)
		{
			EndpointResolver endpointResolver = this;
			IMemcachedClientDnsSettings memcachedClientDnsSettings = settings;
			if (memcachedClientDnsSettings == null)
			{
				throw new ArgumentNullException("settings");
			}
			_DnsSettings = memcachedClientDnsSettings;
			settings.PropertyChanged += delegate
			{
				endpointResolver._LookupClient = endpointResolver.CreateLookupClient(settings);
			};
			_LookupClient = CreateLookupClient(settings);
		}

		public IPEndPoint GetEndPoint(string host, ushort defaultPort = 11211)
		{
			if (string.IsNullOrWhiteSpace(host))
			{
				throw new ArgumentNullException("host");
			}
			host = host.Trim();
			ushort result = defaultPort;
			if (host.Contains(":"))
			{
				string[] array = host.Split(new char[1] { ':' });
				if (!ushort.TryParse(array[1], out result))
				{
					throw new ArgumentException(string.Format("Unable to parse host: {0}", host), "host");
				}
				host = array[0];
			}
			IPAddress address;
			if (IPAddress.TryParse(host, out address))
			{
				return new IPEndPoint(address, result);
			}
			if (_DnsSettings.IsUpgradedDnsResolvingEnabled)
			{
				IPHostEntry iPHostEntry;
				try
				{
					iPHostEntry = LookupClientGetHostEntry(_LookupClient, host);
				}
				catch (Exception innerException)
				{
					throw new ArgumentException(string.Format("Unable to resolve host using ILookupClient: {0}", host), "host", innerException);
				}
				object obj;
				if (iPHostEntry == null)
				{
					obj = null;
				}
				else
				{
					IPAddress[] addressList = iPHostEntry.AddressList;
					obj = ((addressList != null) ? addressList.FirstOrDefault() : null);
				}
				if (obj == null)
				{
					throw new ArgumentException(string.Format("Host {0} did not resolve to any records", host), "host");
				}
				return new IPEndPoint((IPAddress)obj, result);
			}
			IPAddress iPAddress;
			try
			{
				iPAddress = DnsGetHostEntry(host).AddressList.FirstOrDefault();
			}
			catch (Exception innerException2)
			{
				throw new ArgumentException(string.Format("Unable to resolve host using Dns class: {0}", host), "host", innerException2);
			}
			if (iPAddress == null)
			{
				throw new ArgumentException(string.Format("Host {0} did not resolve to any records", host), "host");
			}
			return new IPEndPoint(iPAddress, result);
		}

		internal virtual ILookupClient CreateLookupClient(IMemcachedClientDnsSettings settings)
		{
			//IL_0020: Unknown result type (might be due to invalid IL or missing references)
			//IL_0013: Unknown result type (might be due to invalid IL or missing references)
			//IL_0025: Unknown result type (might be due to invalid IL or missing references)
			//IL_002d: Expected O, but got Unknown
			IPAddress[] nameservers = settings.Nameservers;
			LookupClient val = ((nameservers != null && nameservers.Length != 0) ? new LookupClient(settings.Nameservers) : new LookupClient());
			val.UseCache = false;
			return (ILookupClient)val;
		}

		internal virtual IPHostEntry LookupClientGetHostEntry(ILookupClient lookupClient, string host)
		{
			return lookupClient.GetHostEntryAsync(host).GetAwaiter().GetResult();
		}

		internal virtual IPHostEntry DnsGetHostEntry(string host)
		{
			return Dns.GetHostEntry(host);
		}
	}
}
