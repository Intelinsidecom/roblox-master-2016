using System.Collections.Generic;
using System.Linq;
using SettingsReader.SettingInfo;

namespace SettingsReader
{
    public static class ClientToUnifiedConverter
    {
        public static IEnumerable<UnifiedSettingInfo> ConvertToUnified(
            IEnumerable<ClientSettingInfo> settings)
        {
            Guard.ArgumentNotNull(settings, "settings");

            return settings.Select(s => new UnifiedSettingInfo(
                name:      s.Name,
                value:     s.Value,
                groupName: s.GroupName,
                type:      s.Type));
        }

        public static IEnumerable<UnifiedSettingInfo> ConvertToUnified(
            IEnumerable<KeyValuePair<string, string>> pairs,
            string groupName = null)
        {
            Guard.ArgumentNotNull(pairs, "pairs");

            return pairs.Select(kvp => new UnifiedSettingInfo(
                name:      kvp.Key,
                value:     kvp.Value,
                groupName: groupName,
                type:      null));
        }
    }
}
