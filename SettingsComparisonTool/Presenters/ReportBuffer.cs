using System.Text;

namespace SettingsReader.Presenters
{
    public sealed class ReportBuffer : IReportBuffer
    {
        private readonly StringBuilder _buffer;

        public ReportBuffer()
        {
            _buffer = new StringBuilder();
        }

        public void Add(string line)
        {
            _buffer.AppendLine(line);
        }
        public void Add(string format, params object[] args)
        {
            _buffer.AppendFormat(format, args);
            _buffer.AppendLine();
        }

        public string GetReport()
        {
            return _buffer.ToString();
        }

        public override string ToString()
        {
            return GetReport();
        }
    }
}
