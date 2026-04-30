using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Diagnostics;
using System.Diagnostics.CodeAnalysis;
using System.Linq;
using System.Net;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using System.Threading;
using System.Threading.Tasks;
using Consul;
using Roblox.Configuration;
using Roblox.EventLog;
using Roblox.ServiceDiscovery.Properties;

namespace Roblox.ServiceDiscovery
{
	public class ConsulHttpServiceResolver : IServiceResolver, INotifyPropertyChanged, IDisposable
	{
		[CompilerGenerated]
		private sealed class _003C_003Ec__DisplayClass18_0
		{
			public string lastServiceName;
		}

		[CompilerGenerated]
		private sealed class _003C_003Ec__DisplayClass18_1
		{
			public string newServiceName;

			public _003C_003Ec__DisplayClass18_0 CS_0024_003C_003E8__locals1;

			internal string _003CRefreshThread_003Eb__1()
			{
				return string.Format("ConsulHttpServiceResolver: Service name changed from {0} to {1}.", CS_0024_003C_003E8__locals1.lastServiceName, newServiceName);
			}
		}

		[StructLayout(LayoutKind.Auto)]
		[CompilerGenerated]
		private struct _003CRefreshThread_003Ed__18 : IAsyncStateMachine
		{
			public int _003C_003E1__state;

			public AsyncVoidMethodBuilder _003C_003Et__builder;

			public ConsulHttpServiceResolver _003C_003E4__this;

			private _003C_003Ec__DisplayClass18_0 _003C_003E8__1;

			private ulong? _003ClastIndex_003E5__2;

			private int _003Cfailures_003E5__3;

			private object _003C_003E7__wrap3;

			private int _003C_003E7__wrap4;

			private ConfiguredTaskAwaitable<ulong?>.ConfiguredTaskAwaiter _003C_003Eu__1;

			private ConfiguredTaskAwaitable.ConfiguredTaskAwaiter _003C_003Eu__2;

			private void MoveNext()
			{
				int num = _003C_003E1__state;
				ConsulHttpServiceResolver consulHttpServiceResolver = _003C_003E4__this;
				try
				{
					if (num == 0)
					{
						goto IL_0055;
					}
					if (num != 1)
					{
						_003C_003E8__1 = new _003C_003Ec__DisplayClass18_0();
						_003ClastIndex_003E5__2 = null;
						_003C_003E8__1.lastServiceName = null;
						_003Cfailures_003E5__3 = 0;
						goto IL_0042;
					}
					ConfiguredTaskAwaitable.ConfiguredTaskAwaiter awaiter = _003C_003Eu__2;
					_003C_003Eu__2 = default(ConfiguredTaskAwaitable.ConfiguredTaskAwaiter);
					num = (_003C_003E1__state = -1);
					goto IL_0272;
					IL_0042:
					consulHttpServiceResolver._CancellationTokenSource = new CancellationTokenSource();
					_003C_003E7__wrap4 = 0;
					goto IL_0055;
					IL_0272:
					awaiter.GetResult();
					_003Cfailures_003E5__3++;
					goto IL_0042;
					IL_0055:
					try
					{
						ConfiguredTaskAwaitable<ulong?>.ConfiguredTaskAwaiter awaiter2;
						if (num != 0)
						{
							_003C_003Ec__DisplayClass18_1 CS_0024_003C_003E8__locals7 = new _003C_003Ec__DisplayClass18_1
							{
								CS_0024_003C_003E8__locals1 = _003C_003E8__1,
								newServiceName = consulHttpServiceResolver._ServiceNameSetting.Value
							};
							if (CS_0024_003C_003E8__locals7.newServiceName != CS_0024_003C_003E8__locals7.CS_0024_003C_003E8__locals1.lastServiceName)
							{
								consulHttpServiceResolver._Logger.Info(() => string.Format("ConsulHttpServiceResolver: Service name changed from {0} to {1}.", CS_0024_003C_003E8__locals7.CS_0024_003C_003E8__locals1.lastServiceName, CS_0024_003C_003E8__locals7.newServiceName));
								CS_0024_003C_003E8__locals7.CS_0024_003C_003E8__locals1.lastServiceName = CS_0024_003C_003E8__locals7.newServiceName;
								_003ClastIndex_003E5__2 = null;
							}
							awaiter2 = consulHttpServiceResolver.DoRefreshAsync(CS_0024_003C_003E8__locals7.CS_0024_003C_003E8__locals1.lastServiceName, _003ClastIndex_003E5__2, consulHttpServiceResolver._CancellationTokenSource.Token).ConfigureAwait(false).GetAwaiter();
							if (!awaiter2.IsCompleted)
							{
								num = (_003C_003E1__state = 0);
								_003C_003Eu__1 = awaiter2;
								_003C_003Et__builder.AwaitUnsafeOnCompleted(ref awaiter2, ref this);
								return;
							}
						}
						else
						{
							awaiter2 = _003C_003Eu__1;
							_003C_003Eu__1 = default(ConfiguredTaskAwaitable<ulong?>.ConfiguredTaskAwaiter);
							num = (_003C_003E1__state = -1);
						}
						ulong? result = awaiter2.GetResult();
						_003ClastIndex_003E5__2 = result;
					}
					catch (TaskCanceledException)
					{
						consulHttpServiceResolver._Logger.Debug(() => "ConsulHttpServiceResolver: TaskCanceledException in resolving thread.");
					}
					catch (Exception ex2)
					{
						_003C_003E7__wrap3 = ex2;
						_003C_003E7__wrap4 = 1;
					}
					int num2 = _003C_003E7__wrap4;
					if (num2 == 1)
					{
						Exception arg = (Exception)_003C_003E7__wrap3;
						consulHttpServiceResolver._Logger.Error(string.Format("ConsulHttpServiceResolver: Exception while resolving {0}. There have been {1} continuous failures. {2}", _003C_003E8__1.lastServiceName, _003Cfailures_003E5__3, arg));
						_003ClastIndex_003E5__2 = null;
						awaiter = Task.Delay(consulHttpServiceResolver.DetermineBackoffDelayTime(_003Cfailures_003E5__3, consulHttpServiceResolver._Settings.ConsulBackoffBase, consulHttpServiceResolver._Settings.MaximumConsulBackoff)).ConfigureAwait(false).GetAwaiter();
						if (!awaiter.IsCompleted)
						{
							num = (_003C_003E1__state = 1);
							_003C_003Eu__2 = awaiter;
							_003C_003Et__builder.AwaitUnsafeOnCompleted(ref awaiter, ref this);
							return;
						}
						goto IL_0272;
					}
					_003C_003E7__wrap3 = null;
					_003Cfailures_003E5__3 = 0;
					goto IL_0042;
				}
				catch (Exception exception)
				{
					_003C_003E1__state = -2;
					_003C_003Et__builder.SetException(exception);
				}
			}

			void IAsyncStateMachine.MoveNext()
			{
				//ILSpy generated this explicit interface implementation from .override directive in MoveNext
				this.MoveNext();
			}

			[DebuggerHidden]
			private void SetStateMachine(IAsyncStateMachine stateMachine)
			{
				_003C_003Et__builder.SetStateMachine(stateMachine);
			}

			void IAsyncStateMachine.SetStateMachine(IAsyncStateMachine stateMachine)
			{
				//ILSpy generated this explicit interface implementation from .override directive in SetStateMachine
				this.SetStateMachine(stateMachine);
			}
		}

		[CompilerGenerated]
		private sealed class _003C_003Ec__DisplayClass19_0
		{
			public string serviceName;

			public IEnumerable<IPEndPoint> endpoints;

			internal string _003CDoRefreshAsync_003Eb__0()
			{
				return string.Format("Fetched new endpoints for {0}: {1}", serviceName, string.Join(", ", endpoints));
			}

			internal string _003CDoRefreshAsync_003Eb__1()
			{
				return string.Format("Endpoints for {0} have not changed.", serviceName);
			}
		}

		[StructLayout(LayoutKind.Auto)]
		[CompilerGenerated]
		private struct _003CDoRefreshAsync_003Ed__19 : IAsyncStateMachine
		{
			public int _003C_003E1__state;

			public AsyncTaskMethodBuilder<ulong?> _003C_003Et__builder;

			public string serviceName;

			public ulong? lastIndex;

			public ConsulHttpServiceResolver _003C_003E4__this;

			public CancellationToken cancellationToken;

			private _003C_003Ec__DisplayClass19_0 _003C_003E8__1;

			private ConfiguredTaskAwaitable<QueryResult<ServiceEntry[]>>.ConfiguredTaskAwaiter _003C_003Eu__1;

			private void MoveNext()
			{
				//IL_0030: Unknown result type (might be due to invalid IL or missing references)
				//IL_0036: Expected O, but got Unknown
				int num = _003C_003E1__state;
				ConsulHttpServiceResolver consulHttpServiceResolver = _003C_003E4__this;
				ulong? result2;
				try
				{
					ConfiguredTaskAwaitable<QueryResult<ServiceEntry[]>>.ConfiguredTaskAwaiter awaiter;
					if (num != 0)
					{
						_003C_003E8__1 = new _003C_003Ec__DisplayClass19_0();
						_003C_003E8__1.serviceName = serviceName;
						QueryOptions val = new QueryOptions();
						if (lastIndex.HasValue)
						{
							val.WaitTime = consulHttpServiceResolver._Settings.ConsulLongPollingMaxWaitTime;
							val.WaitIndex = lastIndex.Value;
						}
						awaiter = consulHttpServiceResolver._ConsulClientProvider.Client.Health.Service(_003C_003E8__1.serviceName, consulHttpServiceResolver._EnvironmentName, true, val, cancellationToken).ConfigureAwait(false).GetAwaiter();
						if (!awaiter.IsCompleted)
						{
							num = (_003C_003E1__state = 0);
							_003C_003Eu__1 = awaiter;
							_003C_003Et__builder.AwaitUnsafeOnCompleted(ref awaiter, ref this);
							return;
						}
					}
					else
					{
						awaiter = _003C_003Eu__1;
						_003C_003Eu__1 = default(ConfiguredTaskAwaitable<QueryResult<ServiceEntry[]>>.ConfiguredTaskAwaiter);
						num = (_003C_003E1__state = -1);
					}
					QueryResult<ServiceEntry[]> result = awaiter.GetResult();
					if (((ConsulResult)result).StatusCode != HttpStatusCode.OK)
					{
						throw new Exception(string.Format("StatusCode while retrieving service endpoints: {0}", ((ConsulResult)result).StatusCode));
					}
					cancellationToken.ThrowIfCancellationRequested();
					_003C_003E8__1.endpoints = consulHttpServiceResolver.ParseCatalogServiceResults(result.Response);
					bool flag = consulHttpServiceResolver.UpdateEndpointsIfChanged(_003C_003E8__1.endpoints);
					_003C_003Ec__DisplayClass19_0 locals = _003C_003E8__1;
					consulHttpServiceResolver._Logger.Info(flag ? ((Func<string>)(() => string.Format("Fetched new endpoints for {0}: {1}", locals.serviceName, string.Join(", ", locals.endpoints)))) : ((Func<string>)(() => string.Format("Endpoints for {0} have not changed.", locals.serviceName))));
					result2 = ((QueryResult)result).LastIndex;
				}
				catch (Exception exception)
				{
					_003C_003E1__state = -2;
					_003C_003Et__builder.SetException(exception);
					return;
				}
				_003C_003E1__state = -2;
				_003C_003Et__builder.SetResult(result2);
			}

			void IAsyncStateMachine.MoveNext()
			{
				//ILSpy generated this explicit interface implementation from .override directive in MoveNext
				this.MoveNext();
			}

			[DebuggerHidden]
			private void SetStateMachine(IAsyncStateMachine stateMachine)
			{
				_003C_003Et__builder.SetStateMachine(stateMachine);
			}

			void IAsyncStateMachine.SetStateMachine(IAsyncStateMachine stateMachine)
			{
				//ILSpy generated this explicit interface implementation from .override directive in SetStateMachine
				this.SetStateMachine(stateMachine);
			}
		}

		private readonly ISettings _Settings;

		private readonly ILogger _Logger;

		private readonly ISingleSetting<string> _ServiceNameSetting;

		private readonly IConsulClientProvider _ConsulClientProvider;

		private readonly string _EnvironmentName;

		private readonly Thread _Thread;

		private CancellationTokenSource _CancellationTokenSource;

		public ISet<IPEndPoint> EndPoints { get; private set; }

		public event PropertyChangedEventHandler PropertyChanged;

		[ExcludeFromCodeCoverage]
		public ConsulHttpServiceResolver(ILogger logger, IConsulClientProvider consulClientProvider, ISingleSetting<string> serviceNameSetting)
			: this(Settings.Default, logger, consulClientProvider, serviceNameSetting, RobloxEnvironment.Name)
		{
		}

		internal ConsulHttpServiceResolver(ISettings settings, ILogger logger, IConsulClientProvider consulClientProvider, ISingleSetting<string> serviceNameSetting, string environmentName)
		{
			if (settings == null)
			{
				throw new ArgumentNullException("settings");
			}
			_Settings = settings;
			if (logger == null)
			{
				throw new ArgumentNullException("logger");
			}
			_Logger = logger;
			if (serviceNameSetting == null)
			{
				throw new ArgumentNullException("serviceNameSetting");
			}
			_ServiceNameSetting = serviceNameSetting;
			if (consulClientProvider == null)
			{
				throw new ArgumentNullException("consulClientProvider");
			}
			_ConsulClientProvider = consulClientProvider;
			if (environmentName == null)
			{
				throw new ArgumentNullException("environmentName");
			}
			_EnvironmentName = environmentName;
			EndPoints = new HashSet<IPEndPoint>();
			_ServiceNameSetting.PropertyChanged += delegate
			{
				CancellationTokenSource cancellationTokenSource = _CancellationTokenSource;
				if (cancellationTokenSource != null)
				{
					cancellationTokenSource.Cancel();
				}
			};
			_ConsulClientProvider.PropertyChanged += delegate
			{
				CancellationTokenSource cancellationTokenSource = _CancellationTokenSource;
				if (cancellationTokenSource != null)
				{
					cancellationTokenSource.Cancel();
				}
			};
			_Thread = StartRefreshThread();
		}

		public void Dispose()
		{
			Thread thread = _Thread;
			if (thread != null)
			{
				thread.Abort();
			}
		}

		private Thread StartRefreshThread()
		{
			Thread thread = new Thread(RefreshThread);
			thread.IsBackground = true;
			thread.Start();
			return thread;
		}

		[AsyncStateMachine(typeof(_003CRefreshThread_003Ed__18))]
		private void RefreshThread()
		{
			_003CRefreshThread_003Ed__18 stateMachine = default(_003CRefreshThread_003Ed__18);
			stateMachine._003C_003E4__this = this;
			stateMachine._003C_003Et__builder = AsyncVoidMethodBuilder.Create();
			stateMachine._003C_003E1__state = -1;
			AsyncVoidMethodBuilder asyncVoidMethodBuilder = stateMachine._003C_003Et__builder;
			asyncVoidMethodBuilder.Start(ref stateMachine);
		}

		[AsyncStateMachine(typeof(_003CDoRefreshAsync_003Ed__19))]
		private Task<ulong?> DoRefreshAsync(string serviceName, ulong? lastIndex, CancellationToken cancellationToken)
		{
			_003CDoRefreshAsync_003Ed__19 stateMachine = default(_003CDoRefreshAsync_003Ed__19);
			stateMachine._003C_003E4__this = this;
			stateMachine.serviceName = serviceName;
			stateMachine.lastIndex = lastIndex;
			stateMachine.cancellationToken = cancellationToken;
			stateMachine._003C_003Et__builder = AsyncTaskMethodBuilder<ulong?>.Create();
			stateMachine._003C_003E1__state = -1;
			AsyncTaskMethodBuilder<ulong?> asyncTaskMethodBuilder = stateMachine._003C_003Et__builder;
			asyncTaskMethodBuilder.Start(ref stateMachine);
			return stateMachine._003C_003Et__builder.Task;
		}

		private IEnumerable<IPEndPoint> ParseCatalogServiceResults(IEnumerable<ServiceEntry> catalogServices)
		{
			return catalogServices.Select((ServiceEntry s) => new IPEndPoint(IPAddress.Parse(s.Node.Address), s.Service.Port));
		}

		private TimeSpan DetermineBackoffDelayTime(int failures, TimeSpan backoffBase, TimeSpan maxBackoff)
		{
			return TimeSpan.FromTicks(Math.Min(backoffBase.Ticks * failures, maxBackoff.Ticks));
		}

		private bool UpdateEndpointsIfChanged(IEnumerable<IPEndPoint> newEndPoints)
		{
			HashSet<IPEndPoint> hashSet = new HashSet<IPEndPoint>(newEndPoints);
			if (EndPoints.SetEquals(hashSet))
			{
				return false;
			}
			EndPoints = hashSet;
			PropertyChangedEventHandler propertyChangedEventHandler = this.PropertyChanged;
			if (propertyChangedEventHandler != null)
			{
				propertyChangedEventHandler(this, new PropertyChangedEventArgs("EndPoints"));
			}
			return true;
		}
	}
}
