using System;
using System.Collections.Generic;
using SettingsReader.SettingInfo;

namespace SettingsReader.Presenters
{
    public class ConsolePresenter : PresenterBase
    {
        public override void Report(IEnumerable<UnifiedSettingInfo> settings, string headerText)
        {
            if (!string.IsNullOrEmpty(headerText))
                Console.WriteLine(string.Format("--- {0} ---", headerText));

            foreach (var s in settings)
            {
                Console.WriteLine(s.ToString());
            }
        }

        public override void PrintReport()
        {
        }
    }
}
