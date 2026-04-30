using System;
using System.Collections.Generic;
using System.Threading;

namespace Roblox
{
	public class BackgroundThreadHelper
	{
		public class Handle : IDisposable
		{
			private EventWaitHandle eventWaitHandle;

			internal Handle(EventWaitHandle eventWaitHandle)
			{
				this.eventWaitHandle = eventWaitHandle;
				lock (waitHandles)
				{
					waitHandles.Add(eventWaitHandle);
				}
			}

			public void Dispose()
			{
				lock (waitHandles)
				{
					waitHandles.Remove(eventWaitHandle);
				}
			}

			public void Set()
			{
				eventWaitHandle.Set();
			}
		}

		public delegate void F();

		private static bool done;

		private static readonly EventWaitHandle doneHandle;

		private static readonly List<EventWaitHandle> waitHandles;

		public static bool IsDone
		{
			get
			{
				return done;
			}
		}

		static BackgroundThreadHelper()
		{
			done = false;
			doneHandle = new EventWaitHandle(false, EventResetMode.ManualReset);
			waitHandles = new List<EventWaitHandle>();
			AppDomain.CurrentDomain.DomainUnload += CurrentDomain_DomainUnload;
		}

		private static void CurrentDomain_DomainUnload(object sender, EventArgs e)
		{
			EventWaitHandle[] temp;
			lock (waitHandles)
			{
				temp = new EventWaitHandle[waitHandles.Count];
				waitHandles.CopyTo(temp);
			}
			done = true;
			doneHandle.Set();
			EventWaitHandle[] array = temp;
			for (int i = 0; i < array.Length; i++)
			{
				array[i].Set();
			}
		}

		public static bool Wait(TimeSpan span)
		{
			return doneHandle.WaitOne(span, false);
		}

		public static bool Wait(TimeSpan span, bool exitContext)
		{
			return doneHandle.WaitOne(span, exitContext);
		}

		public static Thread RunInBackground(TimeSpan sleepTime, F f)
		{
			Thread thread = new Thread((ThreadStart)delegate
			{
				while (true)
				{
					try
					{
						Thread.Sleep(sleepTime);
						f();
					}
					catch (ThreadInterruptedException)
					{
						break;
					}
					catch (ThreadAbortException)
					{
						break;
					}
					catch (Exception ex3)
					{
						ExceptionHandler.LogException(ex3);
					}
				}
			});
			thread.IsBackground = true;
			thread.Start();
			return thread;
		}

		public static Handle SetOnProcessExit(EventWaitHandle eventWaitHandle)
		{
			return new Handle(eventWaitHandle);
		}
	}
}
