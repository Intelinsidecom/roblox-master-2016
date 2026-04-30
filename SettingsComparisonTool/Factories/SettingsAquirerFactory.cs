using SettingsReader.Aquirer;
using SettingsReader.Options;

namespace SettingsReader.Factories
{
    public static class SettingsAquirerFactory
    {
        public static ISettingsAquirer GetSettingsAquirer(ExtractOptions options)
        {
            Guard.ArgumentNotNull(options, "options");

            switch (options.InputFormat)
            {
                case SettingsFormat.ApiClient:
                    return new ApiClientSettingsAquirer(options.ConfigurationDatabaseServer, options.NoTimer);
                case SettingsFormat.Client:
                    return new DbClientSettingsAquirer(options.ConfigurationDatabaseServer, options.NoTimer);
                case SettingsFormat.Web:
                    return new DbSettingsAquirer(options.ConfigurationDatabaseServer, options.NoTimer);
                default:
                    throw new System.NotSupportedException(string.Format("Input format {0} is not supported.", options.InputFormat));
            }
        }
    }
}
