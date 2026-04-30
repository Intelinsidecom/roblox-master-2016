using System;
using System.Collections.Generic;
using System.IO;
using System.Linq;
using SettingsReader.Aquirer;
using SettingsReader.SettingInfo;

namespace SettingsReader.Presenters
{
    public abstract class PresenterBase : ISettingsPresenter
    {
        protected readonly IReportBuffer _reportBuffer;
        protected string _headerText;
        public string TimerDisplay { get; set; }

        protected PresenterBase()
        {
            _reportBuffer = new ReportBuffer();
        }

        public virtual void SetHeader(string headerText)
        {
            _headerText = headerText;
        }

        public virtual void Report(ISettingsAquirer aquirer, SettingsReportStyle style)
        {
            if (aquirer == null) return;
            Report(aquirer.SettingsList, _headerText);
            
            if (!string.IsNullOrEmpty(TimerDisplay) && aquirer.ElapsedTime > 0)
            {
                _reportBuffer.Add(string.Format("{0}: {1}ms", TimerDisplay, aquirer.ElapsedTime));
            }
        }

        public abstract void Report(IEnumerable<UnifiedSettingInfo> settings, string headerText);

        public virtual void PrintErrorReport(string errorMessage)
        {
            _reportBuffer.Add("ERROR: " + errorMessage);
        }

        public abstract void PrintReport();

        protected string CreateReportText(IEnumerable<UnifiedSettingInfo> settings)
        {
            var ordered = settings.OrderBy(s => s).ToList();
            var sb = new System.Text.StringBuilder();
            foreach (var s in ordered)
            {
                sb.AppendLine(s.ToString());
            }
            return sb.ToString();
        }
    }
}
