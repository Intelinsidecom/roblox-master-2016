using SettingsReader.Options;
using SettingsReader.Presenters;

namespace SettingsReader.Factories
{
    public class SettingsPresenterFactory : ISettingsPresenterFactory
    {
        public ISettingsPresenter GetPresenter(PresenterType type, string fileName)
        {
            switch (type)
            {
                case PresenterType.Unified:
                    return new UnifiedFilePresenter(fileName);
                case PresenterType.Json:
                    return new JsonFilePresenter(fileName);
                case PresenterType.File:
                    return new FilePresenter(fileName);
                case PresenterType.Console:
                default:
                    return new ConsolePresenter();
            }
        }

        public IReportBuffer CreateReportBuffer()
        {
            return new ReportBuffer();
        }

        public Aquirer.ISettingsAquirer GetSettingsAquirer(ExtractOptions options)
        {
            return SettingsAquirerFactory.GetSettingsAquirer(options);
        }
    }
}
