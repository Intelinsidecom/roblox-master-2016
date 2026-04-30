using System;
using System.Collections.Generic;
using System.Linq;
using System.Net;
using System.Text;
using System.Threading.Tasks;

namespace Roblox.Instrumentation
{
	public sealed class CounterHttpServer
	{
		private const int _MaxPortNumber = 49151;

		private const int _MinPortNumber = 0;

		private readonly ICounterRegistry _CounterRegistry;

		private readonly int _PortNumber;

		private readonly Action<Exception> _ExceptionHandler;

		private HttpListener _HttpListener;

		private bool _IsRunning;

		public CounterHttpServer(ICounterRegistry counterRegistry, int portNumber, Action<Exception> exceptionHandler)
		{
			if (portNumber < 0 || portNumber > 49151)
			{
				throw new ArgumentOutOfRangeException("portNumber", string.Format("Invalid value port portNumber: {0}.  Must be between {1} and {2} inclusive.", portNumber, 0, 49151));
			}
			_PortNumber = portNumber;
			if (counterRegistry == null)
			{
				throw new ArgumentNullException("counterRegistry");
			}
			_CounterRegistry = counterRegistry;
			if (exceptionHandler == null)
			{
				throw new ArgumentNullException("exceptionHandler");
			}
			_ExceptionHandler = exceptionHandler;
		}

		public void Start()
		{
			_IsRunning = true;
			Task.Run(delegate
			{
				_HttpListener = new HttpListener();
				_HttpListener.Prefixes.Add(string.Format("http://*:{0}/", _PortNumber));
				_HttpListener.Start();
				while (_IsRunning)
				{
					try
					{
						HttpListenerContext context = _HttpListener.GetContext();
						Task.Run(delegate
						{
							HandleRequest(context);
						});
					}
					catch (Exception obj)
					{
						_ExceptionHandler(obj);
					}
				}
			});
		}

		public void Stop()
		{
			_IsRunning = false;
			HttpListener httpListener = _HttpListener;
			if (httpListener != null)
			{
				httpListener.Close();
			}
			_HttpListener = null;
		}

		private void HandleRequest(HttpListenerContext context)
		{
			try
			{
				KeyValuePair<CounterKey, double>[] array = (from c in _CounterRegistry.GetCounterValues()
					orderby c.Key.Category, c.Key.Name, c.Key.Instance
					select c).ToArray();
				StringBuilder stringBuilder = new StringBuilder();
				stringBuilder.AppendLine("<table border=\"1\" cellpadding=\"3\" cellspacing=\"0\">");
				stringBuilder.AppendLine("<tr><th>Category</th><th>Name</th><th>Instance</th><th>Value</th></tr>");
				foreach (KeyValuePair<CounterKey, double> item in (IEnumerable<KeyValuePair<CounterKey, double>>)array)
				{
					CounterKey key = item.Key;
					double value = item.Value;
					string text = WebUtility.HtmlEncode(key.Category);
					string text2 = WebUtility.HtmlEncode(key.Name);
					string text3 = WebUtility.HtmlEncode(key.Instance);
					stringBuilder.AppendLine(string.Format("<tr><td>{0}</td><td>{1}</td><td>{2}</td><td>{3}</td></tr>", text, text2, text3, value));
				}
				stringBuilder.AppendLine("</table>");
				byte[] bytes = Encoding.UTF8.GetBytes(stringBuilder.ToString());
				context.Response.StatusCode = 200;
				context.Response.ContentType = "text/html";
				context.Response.OutputStream.Write(bytes, 0, bytes.Length);
				context.Response.OutputStream.Close();
			}
			catch (Exception obj)
			{
				_ExceptionHandler(obj);
			}
		}
	}
}
