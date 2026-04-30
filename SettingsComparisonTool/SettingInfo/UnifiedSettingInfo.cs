using System;

namespace SettingsReader.SettingInfo
{
    public class UnifiedSettingInfo : SettingInfoBase, IComparable<UnifiedSettingInfo>, IComparable
    {
        public string Type      { get; set; }
        public string GroupName { get; set; }

        public DateTime LastModified { get; set; }
        public DateTime Created      { get; set; }
        public DateTime TimeStamp    { get; set; }

        public string ValueKey
        {
            get
            {
                if (string.IsNullOrEmpty(GroupName))
                    return Name;
                return string.Format("{0}/{1}", GroupName, Name);
            }
        }

        public UnifiedSettingInfo() { }

        public UnifiedSettingInfo(string name, string value, string groupName = null, string type = null)
            : base(name, value)
        {
            GroupName = groupName;
            Type      = type;
        }

        public int CompareTo(UnifiedSettingInfo other)
        {
            if (other == null) return 1;
            return string.Compare(ValueKey, other.ValueKey, StringComparison.OrdinalIgnoreCase);
        }

        public int CompareTo(object obj)
        {
            return CompareTo(obj as UnifiedSettingInfo);
        }

        public override bool Equals(object obj)
        {
            UnifiedSettingInfo other = obj as UnifiedSettingInfo;
            if (other != null)
            {
                return string.Equals(ValueKey, other.ValueKey, StringComparison.OrdinalIgnoreCase);
            }
            return false;
        }

        public override int GetHashCode()
        {
            string key = ValueKey;
            if (key == null) return "".GetHashCode();
            return key.ToLowerInvariant().GetHashCode();
        }

        public override string ToString()
        {
            return string.Format("{0}={1}", ValueKey, Value);
        }
    }
}
