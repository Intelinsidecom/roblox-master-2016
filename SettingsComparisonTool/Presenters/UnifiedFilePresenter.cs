using System;
using System.Collections.Generic;
using System.IO;
using System.Linq;
using SettingsReader.SettingInfo;

namespace SettingsReader.Presenters
{
    public class UnifiedFilePresenter : PresenterBase
    {
        private readonly string _fileName;
        private static readonly object _fileWriteLock = new object();

        public UnifiedFilePresenter(string fileName)
        {
            _fileName = fileName;
        }

        public override void Report(IEnumerable<UnifiedSettingInfo> settings, string headerText)
        {
            var text = CreateReportText(settings);
            _reportBuffer.Add(text);
        }

        public override void PrintReport()
        {
            lock (_fileWriteLock)
            {
                File.WriteAllText(_fileName, _reportBuffer.GetReport());
            }
        }
    }
}
