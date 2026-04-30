using System;
using System.Threading.Tasks;

namespace SettingsReader.Aquirer.ApiDataReader
{
    /// <summary>
    /// Contract for the HTTP data reader used by ApiClientSettingsAquirer.
    /// Matches symbols: GetData (00402a7b), GetDataAsync (00402ce0), Dispose (00402d23).
    /// </summary>
    public interface IFastFlagDataReader : IDisposable
    {
        /// <summary>Synchronously fetches the body of the given relative URL.</summary>
        string GetData(string relativeUrl);

        /// <summary>Asynchronously fetches the body of the given relative URL.</summary>
        Task<string> GetDataAsync(string relativeUrl);
    }
}
