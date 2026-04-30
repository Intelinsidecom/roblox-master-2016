using System.Collections.Generic;
using SettingsReader.SettingInfo;

namespace SettingsReader.Aquirer
{
    public interface ISettingsAquirer
    {
        Options.SettingsFormat InputFormat { get; }

        ISet<UnifiedSettingInfo> SettingsList { get; set; }

        bool AreSettingsLoaded { get; set; }
        long ElapsedTime { get; }

        string ErrorMessage { get; set; }

        void Execute();
    }
}
