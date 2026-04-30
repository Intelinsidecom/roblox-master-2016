using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Linq;
using System.Threading.Tasks;
using Newtonsoft.Json;
using SettingsReader.Aquirer.ApiDataReader;
using SettingsReader.Options;
using SettingsReader.SettingInfo;

namespace SettingsReader.Aquirer
{
    public class ApiClientSettingsAquirer : ISettingsAquirer
    {
        private readonly string _envName;
        private readonly string _apiKey;
        private readonly bool _noTimer;
        private readonly Stopwatch _stopwatch = new Stopwatch();

        public SettingsFormat InputFormat { get { return SettingsFormat.ApiClient; } }
        public ISet<UnifiedSettingInfo> SettingsList { get; set; }
        public bool AreSettingsLoaded { get; set; }
        public long ElapsedTime { get { return _stopwatch.ElapsedMilliseconds; } }
        public string ErrorMessage { get; set; }

        public ApiClientSettingsAquirer(string envName, bool noTimer = false)
        {
            _envName = envName;
            _apiKey = ApiConnectionHelpers.GetApiKey();
            _noTimer = noTimer;
            SettingsList = new HashSet<UnifiedSettingInfo>();
        }

        public void Execute()
        {
            if (!_noTimer) _stopwatch.Start();

            try
            {
                string baseUrl = ApiConnectionHelpers.GetServerUrl(_envName);
                using (var reader = new FastFlagApiDataReader(baseUrl))
                {
                    var blobNames = GetSettingBlobNames(reader).GetAwaiter().GetResult();

                    foreach (var blob in blobNames)
                    {
                        try
                        {
                            string relativeUrl = string.Format("/v1/settings/application?applicationName={0}", blob);
                            string json = reader.GetData(relativeUrl);
                            
                            var settingsMap = JsonConvert.DeserializeObject<Dictionary<string, string>>(json);
                            if (settingsMap != null)
                            {
                                var unified = ClientToUnifiedConverter.ConvertToUnified(settingsMap, blob);
                                foreach (var item in unified)
                                {
                                    SettingsList.Add(item);
                                }
                            }
                        }
                        catch (Exception)
                        {
                        }
                    }
                }

                AreSettingsLoaded = true;
            }
            catch (Exception ex)
            {
                ErrorMessage = ex.Message;
                AreSettingsLoaded = false;
                
                if (ex is ArgumentOutOfRangeException || ex is ArgumentNullException)
                    throw;
            }
            finally
            {
                if (_stopwatch.IsRunning) _stopwatch.Stop();
            }
        }

        private async Task<IEnumerable<string>> GetSettingBlobNames(IFastFlagDataReader reader)
        {
            return new List<string> { 
                "PCDesktopClient", 
                "MacDesktopClient", 
                "AndroidApp", 
                "iOSApp", 
                "XboxClient",
                "UWPApp"
            };
        }
    }
}
