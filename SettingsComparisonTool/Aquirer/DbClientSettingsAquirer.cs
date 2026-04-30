using System;
using System.Collections.Generic;
using System.Data.SqlClient;
using System.Diagnostics;
using SettingsReader.Options;
using SettingsReader.SettingInfo;

namespace SettingsReader.Aquirer
{
    public class DbClientSettingsAquirer : ISettingsAquirer
    {
        private readonly string _server;
        private readonly bool _noTimer;
        private readonly Stopwatch _stopwatch = new Stopwatch();

        public SettingsFormat InputFormat { get { return SettingsFormat.Client; } }
        public ISet<UnifiedSettingInfo> SettingsList { get; set; }
        public bool AreSettingsLoaded { get; set; }
        public long ElapsedTime { get { return _stopwatch.ElapsedMilliseconds; } }
        public string ErrorMessage { get; set; }

        public DbClientSettingsAquirer(string server, bool noTimer = false)
        {
            _server = server;
            _noTimer = noTimer;
            SettingsList = new HashSet<UnifiedSettingInfo>();
        }

        public void Execute()
        {
            if (!_noTimer) _stopwatch.Start();

            try
            {
                string connStr = Configuration.Default.GetClientConnectionString(_server);
                using (var conn = new SqlConnection(connStr))
                {
                    conn.Open();
                    string query = "SELECT ApplicationName, Name, Value FROM ClientSettings";
                    using (var cmd = new SqlCommand(query, conn))
                    using (var reader = cmd.ExecuteReader())
                    {
                        while (reader.Read())
                        {
                            string app = reader["ApplicationName"].ToString();
                            string name = reader["Name"].ToString();
                            string value = reader["Value"].ToString();
                            SettingsList.Add(new UnifiedSettingInfo(name, value, app, "ClientSetting"));
                        }
                    }
                }
                AreSettingsLoaded = true;
            }
            catch (Exception ex)
            {
                ErrorMessage = ex.Message;
                AreSettingsLoaded = false;
            }
            finally
            {
                if (_stopwatch.IsRunning) _stopwatch.Stop();
            }
        }
    }
}
