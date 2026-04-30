using System;
using System.ComponentModel;
using System.Diagnostics.CodeAnalysis;
using System.Net;
using Consul;
using Roblox.ServiceDiscovery.Properties;

namespace Roblox.ServiceDiscovery
{
	public class LocalConsulClientProvider : IConsulClientProvider, INotifyPropertyChanged, IDisposable
	{
		private readonly ISettings _Settings;

		public IConsulClient Client { get; private set; }

		public event PropertyChangedEventHandler PropertyChanged;

		[ExcludeFromCodeCoverage]
		public LocalConsulClientProvider()
			: this(Settings.Default)
		{
		}

		internal LocalConsulClientProvider(ISettings settings)
		{
			if (settings == null)
			{
				throw new ArgumentNullException("settings");
			}
			_Settings = settings;
			settings.PropertyChanged += Settings_PropertyChanged;
			GenerateClient();
		}

		public void Dispose()
		{
			_Settings.PropertyChanged -= Settings_PropertyChanged;
		}

		private void Settings_PropertyChanged(object sender, PropertyChangedEventArgs e)
		{
			if (e.PropertyName == "ConsulAddress")
			{
				GenerateClient();
			}
		}

		private void GenerateClient()
		{
			//IL_0017: Unknown result type (might be due to invalid IL or missing references)
			//IL_0021: Expected O, but got Unknown
			ServicePointManager.SecurityProtocol = SecurityProtocolType.Tls12;
			Client = (IConsulClient)new ConsulClient((Action<ConsulClientConfiguration>)delegate(ConsulClientConfiguration config)
			{
				config.Address = new Uri(_Settings.ConsulAddress);
			});
			PropertyChangedEventHandler propertyChangedEventHandler = this.PropertyChanged;
			if (propertyChangedEventHandler != null)
			{
				propertyChangedEventHandler(this, new PropertyChangedEventArgs("Client"));
			}
		}
	}
}
