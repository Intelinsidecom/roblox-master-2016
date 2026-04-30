using System;
using System.Collections.Generic;
using System.IO;
using System.Net;
using System.Text;

namespace Roblox.Instrumentation
{
	internal class InfluxWriter
	{
		private readonly Action<Exception> _ExceptionHandler;

		internal InfluxWriter(Action<Exception> exceptionHandler)
		{
			if (exceptionHandler == null)
			{
				throw new ArgumentException("exceptionHandler");
			}
			_ExceptionHandler = exceptionHandler;
		}

		public void Persist(ICollectionConfiguration configuration, IReadOnlyCollection<KeyValuePair<CounterKey, double>> datapoints)
		{
			if (datapoints.Count == 0)
			{
				return;
			}
			Dictionary<string, List<KeyValuePair<CounterKey, double>>> dictionary = GroupByEndpoint(configuration, datapoints);
			try
			{
				foreach (KeyValuePair<string, List<KeyValuePair<CounterKey, double>>> item in dictionary)
				{
					string key = item.Key;
					List<KeyValuePair<CounterKey, double>> value = item.Value;
					StringBuilder stringBuilder = new StringBuilder();
					foreach (KeyValuePair<CounterKey, double> item2 in value)
					{
						CounterKey key2 = item2.Key;
						stringBuilder.Append("perfmon,machine=");
						stringBuilder.Append(EscapeTagName(configuration.HostIdentifier));
						stringBuilder.Append(",category=");
						stringBuilder.Append(EscapeTagName(key2.Category));
						stringBuilder.Append(",counter=");
						stringBuilder.Append(EscapeTagName(key2.Name));
						if (!string.IsNullOrWhiteSpace(key2.Instance))
						{
							stringBuilder.Append(",instance=");
							stringBuilder.Append(EscapeTagName(key2.Instance));
						}
						if (!string.IsNullOrWhiteSpace(configuration.FarmIdentifier))
						{
							stringBuilder.Append(",farm=");
							stringBuilder.Append(EscapeTagName(configuration.FarmIdentifier));
						}
						if (!string.IsNullOrWhiteSpace(configuration.SuperFarmIdentifier))
						{
							stringBuilder.Append(",superFarm=");
							stringBuilder.Append(EscapeTagName(configuration.SuperFarmIdentifier));
						}
						stringBuilder.Append(" value=");
						stringBuilder.Append(item2.Value);
						stringBuilder.Append('\n');
					}
					string data = stringBuilder.ToString();
					try
					{
						string address = key + "/write?db=" + configuration.InfluxDatabaseName + "&precision=s";
						using (ExtendedWebClient extendedWebClient = new ExtendedWebClient())
						{
							InfluxCredentials influxCredentials = configuration.InfluxCredentials;
							string username = ((influxCredentials != null) ? influxCredentials.Username : null);
							InfluxCredentials influxCredentials2 = configuration.InfluxCredentials;
							extendedWebClient.UploadStringGzipped(address, data, username, (influxCredentials2 != null) ? influxCredentials2.Password : null);
						}
					}
					catch (WebException webException)
					{
						Exception obj = CreateDetailedException(webException, key);
						_ExceptionHandler(obj);
					}
					catch (Exception obj2)
					{
						_ExceptionHandler(obj2);
					}
				}
			}
			catch (Exception obj3)
			{
				try
				{
					_ExceptionHandler(obj3);
				}
				catch
				{
				}
			}
		}

		internal Dictionary<string, List<KeyValuePair<CounterKey, double>>> GroupByEndpoint(ICollectionConfiguration configuration, IEnumerable<KeyValuePair<CounterKey, double>> datapoints)
		{
			Dictionary<string, List<KeyValuePair<CounterKey, double>>> dictionary = new Dictionary<string, List<KeyValuePair<CounterKey, double>>>();
			foreach (KeyValuePair<CounterKey, double> datapoint in datapoints)
			{
				foreach (string item in configuration.GetInfluxEndpointsForCategory(datapoint.Key.Category))
				{
					List<KeyValuePair<CounterKey, double>> value;
					if (!dictionary.TryGetValue(item, out value))
					{
						value = (dictionary[item] = new List<KeyValuePair<CounterKey, double>>());
					}
					value.Add(datapoint);
				}
			}
			return dictionary;
		}

		private static Exception CreateDetailedException(WebException webException, string baseUrl)
		{
			try
			{
				string arg = null;
				WebResponse response = webException.Response;
				Stream stream = ((response != null) ? response.GetResponseStream() : null);
				if (stream != null)
				{
					using (StreamReader streamReader = new StreamReader(stream))
					{
						arg = streamReader.ReadToEnd();
					}
				}
				return new Exception(string.Format("Failed to write to InfluxDB server {0}. Response body = {1}. Status = {2}", baseUrl, arg, webException.Status), webException);
			}
			catch
			{
				return webException;
			}
		}

		private static string EscapeTagName(string stringToEscape)
		{
			stringToEscape = stringToEscape.Replace(" ", "\\ ");
			stringToEscape = stringToEscape.Replace(",", "\\,");
			stringToEscape = stringToEscape.Replace("=", "\\=");
			return stringToEscape;
		}
	}
}
