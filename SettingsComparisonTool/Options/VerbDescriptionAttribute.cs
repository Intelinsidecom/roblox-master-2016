using System;

namespace SettingsReader.Options
{
    [AttributeUsage(AttributeTargets.Class, AllowMultiple = false, Inherited = false)]
    public sealed class VerbDescriptionAttribute : Attribute
    {
        public string Description { get; set; }

        public VerbDescriptionAttribute(string description)
        {
            Description = description;
        }
    }
}
