using System;
using System.Collections.Generic;
using System.Linq;

namespace SettingsReader.Aquirer.ApiDataReader
{
    public static class ApiConnectionHelpers
    {
        private static readonly string _TestEnvironmentBaseUrlFormat = "https://{0}.robloxlabs.com";
        private static readonly string _ProdEnvironmentBaseUrl = "https://www.roblox.com";
        
        private static readonly string[] _AllowedEnvIds = { 
            "prod", "gametest1", "gametest2", "gametest3", "gametest4", "gametest5", "sitetest1", "sitetest2", "sitetest3" 
        };

        public static string GetServerUrl(string envShortName)
        {
            if (string.IsNullOrEmpty(envShortName))
                throw new ArgumentNullException("envShortName");

            string env = envShortName.ToLower().Trim();

            if (env == "prod")
                return _ProdEnvironmentBaseUrl;

            if (_AllowedEnvIds.Contains(env))
            {
                return string.Format(_TestEnvironmentBaseUrlFormat, env);
            }

            if (env.Contains("."))
            {
                if (env.StartsWith("http"))
                    return envShortName;
                return "https://" + envShortName;
            }

            throw new ArgumentOutOfRangeException("envShortName", 
                "Environment id should be one of " + string.Join(", ", _AllowedEnvIds) + " or a full URL.");
        }

        public static string GetApiKey()
        {
            return "76942241-F0B3-4A63-9562-B9AD9422F0D8";
        }
    }
}
