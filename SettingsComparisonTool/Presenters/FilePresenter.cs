using System;
using System.Collections.Generic;
using System.IO;
using SettingsReader.SettingInfo;

namespace SettingsReader.Presenters
{
    public class FilePresenter : PresenterBase
    {
        private readonly string _fileName;

        public FilePresenter(string fileName)
        {
            _fileName = fileName;
        }

        public override void Report(IEnumerable<UnifiedSettingInfo> settings, string headerText)
        {
            foreach (var s in settings)
            {
                _reportBuffer.Add(string.Format("{0}={1}", s.Name, s.Value));
            }
        }

        public override void PrintReport()
        {
            File.WriteAllText(_fileName, _reportBuffer.GetReport());
        }
    }
}
