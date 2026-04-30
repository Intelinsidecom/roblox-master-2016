namespace SettingsReader.Presenters
{
    /// <summary>
    /// Accumulates report lines in memory, then returns them as a single string.
    /// Matches symbols at 004042e1: Add (x2), GetReport, ToString.
    /// </summary>
    public interface IReportBuffer
    {
        void Add(string line);
        void Add(string format, params object[] args);
        string GetReport();
    }
}
