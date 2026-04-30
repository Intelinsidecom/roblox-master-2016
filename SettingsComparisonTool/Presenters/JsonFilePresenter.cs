using System.Collections.Generic;
using System.IO;
using Newtonsoft.Json;
using SettingsReader.SettingInfo;

namespace SettingsReader.Presenters
{
    public class JsonFilePresenter : PresenterBase
    {
        private readonly string _fileName;

        public JsonFilePresenter(string fileName)
        {
            _fileName = fileName;
        }

        public override void Report(IEnumerable<UnifiedSettingInfo> settings, string headerText)
        {
            string json = JsonConvert.SerializeObject(settings, Formatting.Indented);
            _reportBuffer.Add(json);
        }

        public override void PrintReport()
        {
            File.WriteAllText(_fileName, _reportBuffer.GetReport());
        }
    }
}
