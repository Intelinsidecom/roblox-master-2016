namespace SettingsReader
{
    public sealed class Configuration
    {
        private static readonly Configuration _default = new Configuration();
        public static Configuration Default { get { return _default; } }

        private Configuration() { }

        public string WebSettingsConnectionStringTemplate
        {
            get { return @"Data Source={0};Initial Catalog=RobloxConfiguration;User ID=Roblox;Password=@rbitrary.Scal3"; }
        }

        public string ClientSettingsConnectionStringTemplate
        {
            get { return @"Data Source={0};Initial Catalog=RobloxClientSettings;User ID=Roblox;Password=@rbitrary.Scal3"; }
        }

        public string GetWebConnectionString(string server)
        {
            return string.Format(WebSettingsConnectionStringTemplate, server);
        }

        public string GetClientConnectionString(string server)
        {
            return string.Format(ClientSettingsConnectionStringTemplate, server);
        }
    }
}
