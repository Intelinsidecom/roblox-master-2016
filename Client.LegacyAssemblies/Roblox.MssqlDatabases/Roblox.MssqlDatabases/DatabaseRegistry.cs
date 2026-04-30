using System;
using System.Collections.Generic;
using Roblox.Mssql;

namespace Roblox.MssqlDatabases
{
	public sealed class DatabaseRegistry : IDisposable
	{
		private readonly Func<IDatabase, IDatabaseObserver> _DatabaseObserverBuilder;

		private readonly Dictionary<RobloxDatabase, Lazy<MonitoredGuardedDatabase>> _Databases = new Dictionary<RobloxDatabase, Lazy<MonitoredGuardedDatabase>>();

		private bool _IsDisposed;

		private static readonly TimeSpan _DefaultRetryInterval = TimeSpan.FromMilliseconds(100.0);

		public DatabaseRegistry(Func<IDatabase, IDatabaseObserver> databaseObserverBuilder)
		{
			if (databaseObserverBuilder == null)
			{
				throw new ArgumentNullException("databaseObserverBuilder");
			}
			_DatabaseObserverBuilder = databaseObserverBuilder;
			RobloxDatabase[] array = (RobloxDatabase[])Enum.GetValues(typeof(RobloxDatabase));
			foreach (RobloxDatabase robloxDatabase in array)
			{
				RobloxDatabase rd = robloxDatabase;
				Lazy<MonitoredGuardedDatabase> lazyDatabase = new Lazy<MonitoredGuardedDatabase>((Func<MonitoredGuardedDatabase>)(() => BuildDatabase(rd)));
				_Databases.Add(robloxDatabase, lazyDatabase);
			}
		}

		public void Dispose()
		{
			if (_IsDisposed)
			{
				return;
			}
			foreach (KeyValuePair<RobloxDatabase, Lazy<MonitoredGuardedDatabase>> database in _Databases)
			{
				Lazy<MonitoredGuardedDatabase> lazy = database.Value;
				if (lazy.IsValueCreated)
				{
					MonitoredGuardedDatabase value = lazy.Value;
					if (value != null)
					{
						((Database)value).Dispose();
					}
				}
			}
			_IsDisposed = true;
		}

		public Database GetDatabase(RobloxDatabase robloxDatabase)
		{
			Lazy<MonitoredGuardedDatabase> lazyDatabase;
			if (!_Databases.TryGetValue(robloxDatabase, out lazyDatabase))
			{
				throw new KeyNotFoundException("Unknown database: " + robloxDatabase);
			}
			return (Database)(object)lazyDatabase.Value;
		}

		private MonitoredGuardedDatabase BuildDatabase(RobloxDatabase robloxDatabase)
		{
			//IL_0028: Unknown result type (might be due to invalid IL or missing references)
			//IL_002e: Expected O, but got Unknown
			string text = robloxDatabase.ToString();
			Func<string> connectionStringGetter = robloxDatabase.GetConnectionStringGetter();
			Func<TimeSpan> commandTimeoutGetter = robloxDatabase.GetCommandTimeoutGetter();
			return new MonitoredGuardedDatabase(text, connectionStringGetter, commandTimeoutGetter, _DefaultRetryInterval, _DatabaseObserverBuilder);
		}
	}
}
