using System;

namespace SettingsReader.Options
{
    [AttributeUsage(AttributeTargets.Property, AllowMultiple = false, Inherited = true)]
    public sealed class OptionDescriptionAttribute : Attribute
    {
        public string Description { get; set; }

        public OptionDescriptionAttribute(string description)
        {
            Description = description;
        }
    }
}
