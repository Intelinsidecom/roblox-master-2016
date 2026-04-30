using System;
using System.Threading;

namespace Roblox
{
	public class SelfDisposingTimer
	{
		private readonly Action _Action;

		private Timer _Timer;

		private TimeSpan _Period;

		public SelfDisposingTimer(Action action, TimeSpan startTime, TimeSpan period)
		{
			_Action = action;
			_Period = period;
			_Timer = new Timer(delegate(object weakThis)
			{
				OnTimer((WeakReference)weakThis);
			}, new WeakReference(this), startTime, period);
		}

		private static void OnTimer(WeakReference self)
		{
			SelfDisposingTimer obj = self.Target as SelfDisposingTimer;
			if (obj != null)
			{
				obj._Action();
			}
		}

		public bool Change(TimeSpan dueTime, TimeSpan period)
		{
			_Period = period;
			return _Timer.Change(dueTime, period);
		}

		public void Stop()
		{
			_Timer.Dispose();
			_Timer = null;
		}

		~SelfDisposingTimer()
		{
			Timer timer = _Timer;
			if (timer != null)
			{
				timer.Dispose();
			}
		}

		internal void Pause()
		{
			_Timer.Change(-1, -1);
		}

		internal void Unpause()
		{
			_Timer.Change(_Period, _Period);
		}
	}
}
