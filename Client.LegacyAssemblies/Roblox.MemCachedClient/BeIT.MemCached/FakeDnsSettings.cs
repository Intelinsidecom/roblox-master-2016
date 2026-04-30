using System.ComponentModel;
using System.Net;

namespace BeIT.MemCached
{
	internal class FakeDnsSettings : IMemcachedClientDnsSettings, INotifyPropertyChanged
	{
		public bool IsUpgradedDnsResolvingEnabled
		{
			get
			{
				return false;
			}
		}

		public IPAddress[] Nameservers
		{
			get
			{
				return null;
			}
		}

		public event PropertyChangedEventHandler PropertyChanged;
	}
}
