namespace SettingsReader.SettingInfo
{
    public abstract class SettingInfoBase
    {
        public string Name  { get; set; }
        public string Value { get; set; }

        protected SettingInfoBase() { }

        protected SettingInfoBase(string name, string value)
        {
            Name  = name;
            Value = value;
        }
    }
}
