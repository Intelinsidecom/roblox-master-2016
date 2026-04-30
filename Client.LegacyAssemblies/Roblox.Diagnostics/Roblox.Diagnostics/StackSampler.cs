using System;
using System.Diagnostics;
using System.Threading;

namespace Roblox.Diagnostics
{
	public sealed class StackSampler : IDisposable
	{
		private readonly string _Name;

		private readonly Func<bool> _IsStackSamplingEnabledGetter;

		private int _SampleIt;

		private readonly Timer _Timer;

		public StackSampler(string name, TimeSpan interval, Func<bool> isStackSamplingEnabledGetter)
		{
			_Name = name;
			_IsStackSamplingEnabledGetter = isStackSamplingEnabledGetter;
			_Timer = new Timer(delegate
			{
				Trigger();
			}, null, interval, interval);
		}

		private void Trigger()
		{
			if (_IsStackSamplingEnabledGetter())
			{
				Interlocked.Exchange(ref _SampleIt, 1);
			}
		}

		public void Consider(Func<string> info)
		{
			if (Interlocked.Exchange(ref _SampleIt, 0) == 1)
			{
				string message = string.Format("StackSampler {0}\r\n{1}\r\n\r\n{2}", _Name, info(), new StackTrace(2));
				EventLog.WriteEntry("StackSampler", message, EventLogEntryType.Information, 1991);
			}
		}

		public void Dispose()
		{
			Timer timer = _Timer;
			if (timer != null)
			{
				timer.Dispose();
			}
		}
	}
}
