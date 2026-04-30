using System.Collections.Generic;
using SettingsReader.Aquirer;
using SettingsReader.SettingInfo;

namespace SettingsReader.Presenters
{
    /// <summary>
    /// Contract for all presenters (file, console, JSON, unified).
    /// </summary>
    public interface ISettingsPresenter
    {
        /// <summary>Sets the header / title line written above the settings block.</summary>
        void SetHeader(string headerText);

        /// <summary>Writes a full settings report from the given acquirer results.</summary>
        void Report(ISettingsAquirer aquirer, SettingsReportStyle style);

        /// <summary>Writes a pre-built list of unified settings directly.</summary>
        void Report(IEnumerable<UnifiedSettingInfo> settings, string headerText);

        /// <summary>Writes an error report when acquisition failed.</summary>
        void PrintErrorReport(string errorMessage);

        /// <summary>Flushes/writes the completed report to its destination.</summary>
        void PrintReport();
    }
}
