using System.Text.RegularExpressions;
using Prometheus;

namespace Roblox.Instrumentation.PrometheusListener
{
	internal class GaugeWrapper
	{
		private readonly Gauge.Child _GaugeChild;

		public GaugeWrapper(string variableName, string instance, string category, string helpText)
		{
			//IL_004e: Unknown result type (might be due to invalid IL or missing references)
			//IL_0054: Expected O, but got Unknown
			string text = Regex.Replace(variableName, "[^a-zA-Z0-9_:]", "_");
			string text2 = ((instance == null) ? "null" : Regex.Replace(instance, "[^a-zA-Z0-9_:]", "_"));
			string text3 = ((category == null) ? "null" : Regex.Replace(category, "[^a-zA-Z0-9_:]", "_"));
			GaugeConfiguration val = new GaugeConfiguration();
			((MetricConfiguration)val).LabelNames = new string[6] { "instance", "category", "machineName", "host", "serverFarm", "superFarm" };
			Gauge val2 = Metrics.CreateGauge(text, helpText, val);
			_GaugeChild = val2.WithLabels(new string[6]
			{
				text2,
				text3,
				PrometheusServerWrapper.Instance.MachineName,
				PrometheusServerWrapper.Instance.HostIdentifier,
				PrometheusServerWrapper.Instance.ServerFarmIdentifier,
				PrometheusServerWrapper.Instance.SuperFarmIdentifier
			});
		}

		internal void Set(double val)
		{
			if (PrometheusServerWrapper.Instance.UpdatingCountersEnabled)
			{
				_GaugeChild.Set(val);
			}
		}

		internal void Inc(double val)
		{
			if (PrometheusServerWrapper.Instance.UpdatingCountersEnabled)
			{
				_GaugeChild.Inc(val);
			}
		}

		internal void Dec(double val)
		{
			if (PrometheusServerWrapper.Instance.UpdatingCountersEnabled)
			{
				_GaugeChild.Dec(val);
			}
		}
	}
}
