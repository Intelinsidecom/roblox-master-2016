using System;
using System.Net.Http;
using System.Threading.Tasks;
using System.IO;

namespace SettingsReader.Aquirer.ApiDataReader
{
    public class FastFlagApiDataReader : IFastFlagDataReader
    {
        private readonly HttpClient _httpClient;
        private bool _disposed = false;

        public FastFlagApiDataReader(string baseUrl)
        {
            Guard.ArgumentNotNullOrEmpty(baseUrl, "baseUrl");
            _httpClient = new HttpClient();
            _httpClient.BaseAddress = new Uri(baseUrl);
            _httpClient.DefaultRequestHeaders.Add("Accept", "application/json");
        }

        public string GetData(string relativeUrl)
        {
            return GetDataAsync(relativeUrl).GetAwaiter().GetResult();
        }

        public async Task<string> GetDataAsync(string relativeUrl)
        {
            using (var response = await _httpClient.GetAsync(relativeUrl))
            {
                response.EnsureSuccessStatusCode();
                return await response.Content.ReadAsStringAsync();
            }
        }

        public void Dispose()
        {
            Dispose(true);
            GC.SuppressFinalize(this);
        }

        protected virtual void Dispose(bool disposing)
        {
            if (!_disposed)
            {
                if (disposing)
                {
                    if (_httpClient != null)
                    {
                        _httpClient.Dispose();
                    }
                }
                _disposed = true;
            }
        }
    }
}
