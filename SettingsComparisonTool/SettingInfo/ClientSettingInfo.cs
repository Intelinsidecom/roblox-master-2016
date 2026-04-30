namespace SettingsReader.SettingInfo
{
    public class ClientSettingInfo : SettingInfoBase
    {
        public string GroupName { get; set; }

        public string Type { get; set; }

        public ClientSettingInfo() { }

        public ClientSettingInfo(string name, string value, string groupName = null, string type = null)
            : base(name, value)
        {
            GroupName = groupName;
            Type      = type;
        }
    }
}
