using System;
using System.IO;
using SettingsReader.Aquirer;
using SettingsReader.Factories;
using SettingsReader.Options;
using SettingsReader.Presenters;

namespace SettingsReader
{
    public class SettingsExtractor
    {
        private readonly ExtractOptions _options;
        private readonly ISettingsAquirer _aquirer;
        private readonly ISettingsPresenter _presenter;

        private TextWriter _errorReporter = Console.Error;
        public TextWriter ErrorReporter
        {
            get { return _errorReporter; }
            set { _errorReporter = value; }
        }

        public SettingsExtractor(ExtractOptions options)
        {
            _options = options;
            _aquirer = SettingsAquirerFactory.GetSettingsAquirer(options);
            
            var factory = new SettingsPresenterFactory();
            PresenterType pType = PresenterType.Console;
            switch (options.OutputFormat)
            {
                case SettingsOutputFormat.Unified: pType = PresenterType.Unified; break;
                case SettingsOutputFormat.Json: pType = PresenterType.Json; break;
                case SettingsOutputFormat.Simple:
                case SettingsOutputFormat.Verbose: pType = PresenterType.File; break;
            }

            _presenter = factory.GetPresenter(pType, options.OutputFileName);
        }

        public void Extract()
        {
            string statusText = StatusTextProvider.GenerateStatusText(_options);

            Console.Write(statusText);

            _presenter.SetHeader(statusText);

            _aquirer.Execute();
            if (_aquirer.AreSettingsLoaded)
            {
                _presenter.Report(_aquirer, SettingsReportStyle.Brief);
                _presenter.PrintReport();
            }
            else
            {
                _presenter.PrintErrorReport(_aquirer.ErrorMessage);
                _presenter.PrintReport();
            }
        }
    }
}
