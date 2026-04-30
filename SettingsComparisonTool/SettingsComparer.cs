using System;
using System.Collections.Generic;
using System.IO;
using System.Linq;
using SettingsReader.Options;
using SettingsReader.Presenters;
using SettingsReader.SettingInfo;

namespace SettingsReader
{
    public class SettingsComparer
    {
        private readonly CompareOptions _options;
        private readonly IReportBuffer _reportBuffer;

        public SettingsComparer(CompareOptions options)
        {
            _options = options;
            _reportBuffer = new ReportBuffer();
        }

        public void Execute()
        {
            if (_options.SetsToCompare == null || _options.SetsToCompare.Count() < 2)
            {
                Console.WriteLine("Error: At least two files are required for comparison.");
                return;
            }

            var files = _options.SetsToCompare.ToList();
            var dataSets = new List<Dictionary<string, string>>();

            foreach (var file in files)
            {
                if (File.Exists(file))
                {
                    var data = new Dictionary<string, string>();
                    string[] lines = File.ReadAllLines(file);
                    foreach (string l in lines)
                    {
                        string[] parts = l.Split('=');
                        if (parts.Length == 2)
                        {
                            data[parts[0]] = parts[1];
                        }
                    }
                    dataSets.Add(data);
                }
            }

            var allKeys = dataSets.SelectMany(d => d.Keys).Distinct().OrderBy(k => k);
            
            _reportBuffer.Add(string.Format("Comparison of {0} files:", files.Count));
            foreach (var key in allKeys)
            {
                var values = dataSets.Select(d => d.ContainsKey(key) ? d[key] : "[MISSING]").ToList();
                if (values.Distinct().Count() > 1)
                {
                    _reportBuffer.Add(string.Format("{0}: {1}", key, string.Join(" vs ", values)));
                }
            }

            if (!string.IsNullOrEmpty(_options.OutputFileName))
                File.WriteAllText(_options.OutputFileName, _reportBuffer.GetReport());
            else
                Console.WriteLine(_reportBuffer.GetReport());
        }
    }
}
