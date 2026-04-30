using System;
using System.IO;
using System.Linq;
using System.Net;
using System.Net.NetworkInformation;
using System.Text;
using System.Threading;
using Prometheus;

namespace Roblox.Instrumentation.PrometheusListener
{
	public sealed class PrometheusServerWrapper
	{
		private static readonly Lazy<PrometheusServerWrapper> _Instance = new Lazy<PrometheusServerWrapper>(() => new PrometheusServerWrapper());

		internal string MachineName = "null";

		internal string HostIdentifier = "null";

		internal string ServerFarmIdentifier = "null";

		internal string SuperFarmIdentifier = "null";

		private int _CurrentPort = -1;

		private MetricServer _MetricServer;

		public bool UpdatingCountersEnabled { get; set; }

		public static PrometheusServerWrapper Instance
		{
			get
			{
				return _Instance.Value;
			}
		}

		private PrometheusServerWrapper()
		{
		}

		public string OutputMetricsRegistry()
		{
			using (Stream stream = new MemoryStream())
			{
				Metrics.DefaultRegistry.CollectAndExportAsTextAsync(stream, default(CancellationToken));
				stream.Seek(0L, SeekOrigin.Begin);
				using (StreamReader streamReader = new StreamReader(stream, Encoding.UTF8))
				{
					return streamReader.ReadToEnd();
				}
			}
		}

		public void RestartPromMetricsEndpoint(int port, string url = "metrics/", string hostname = null)
		{
			//IL_0036: Unknown result type (might be due to invalid IL or missing references)
			//IL_0026: Unknown result type (might be due to invalid IL or missing references)
			//IL_0040: Expected O, but got Unknown
			MetricServer metricServer = _MetricServer;
			if (metricServer != null)
			{
				((MetricHandler)metricServer).Stop();
			}
			SetPort(port);
			_MetricServer = ((hostname == null) ? new MetricServer(_CurrentPort, url, (CollectorRegistry)null, false) : new MetricServer(hostname, _CurrentPort, url, (CollectorRegistry)null, false));
			((MetricHandler)_MetricServer).Start();
		}

		public void RestartPromMetricsEndpoint(int portLowerBound, int portUpperBound, string url = "metrics/", string hostname = null)
		{
			//IL_003a: Unknown result type (might be due to invalid IL or missing references)
			//IL_002a: Unknown result type (might be due to invalid IL or missing references)
			//IL_0044: Expected O, but got Unknown
			MetricServer metricServer = _MetricServer;
			if (metricServer != null)
			{
				((MetricHandler)metricServer).Stop();
			}
			DynamicallyPickPortInRangeOfPorts(portLowerBound, portUpperBound);
			_MetricServer = ((hostname == null) ? new MetricServer(_CurrentPort, url, (CollectorRegistry)null, false) : new MetricServer(hostname, _CurrentPort, url, (CollectorRegistry)null, false));
			((MetricHandler)_MetricServer).Start();
		}

		public void StopMetricsEndpoint()
		{
			((MetricHandler)_MetricServer).Stop();
		}

		public int GetPort()
		{
			return _CurrentPort;
		}

		public void SetPort(int port)
		{
			_CurrentPort = port;
		}

		private bool DynamicallyPickPortInRangeOfPorts(int startPortRange, int endPortRange)
		{
			MetricServer metricServer = _MetricServer;
			if (metricServer != null)
			{
				((MetricHandler)metricServer).Stop();
			}
			for (int i = startPortRange; i <= endPortRange; i++)
			{
				if (!PortInUse(i))
				{
					_CurrentPort = i;
					return true;
				}
			}
			return false;
		}

		private bool PortInUse(int port)
		{
			return IPGlobalProperties.GetIPGlobalProperties().GetActiveTcpListeners().Any((IPEndPoint endPoint) => endPoint.Port == port);
		}
	}
}
