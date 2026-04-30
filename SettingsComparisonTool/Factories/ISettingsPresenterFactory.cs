using System.Collections.Generic;
using SettingsReader.Aquirer;
using SettingsReader.Options;
using SettingsReader.Presenters;

namespace SettingsReader.Factories
{
    public interface ISettingsPresenterFactory
    {
        ISettingsPresenter GetPresenter(PresenterType type, string fileName);
        ISettingsAquirer GetSettingsAquirer(ExtractOptions options);
        IReportBuffer CreateReportBuffer();
    }
}
