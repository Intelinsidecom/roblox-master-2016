using System.Text;
using System.Reflection;
using SettingsReader.Options;

namespace SettingsReader
{
    public static class StatusTextProvider
    {
        public static string GenerateStatusText(ExtractOptions options)
        {
            var sb = new StringBuilder();
            
            var verbAttr = (VerbDescriptionAttribute)System.Attribute.GetCustomAttribute(typeof(ExtractOptions), typeof(VerbDescriptionAttribute));
            if (verbAttr != null)
                sb.AppendLine(verbAttr.Description);
            
            AddOptionLine(sb, "DB Server", options.ConfigurationDatabaseServer);
            AddOptionLine(sb, "Table with settings", options.SettingsTable);
            AddOptionLine(sb, "Output file", options.OutputFileName);
            AddOptionLine(sb, "Input format", options.InputFormat);
            AddOptionLine(sb, "Output format", options.OutputFormat);
            AddOptionLine(sb, "Timer disable", options.NoTimer);
            
            return sb.ToString();
        }

        private static void AddOptionLine(StringBuilder sb, string description, object value)
        {
            sb.Append("        ");
            sb.Append(description);
            sb.Append(": ");
            sb.AppendLine(value != null ? value.ToString() : "[NONE]");
        }
    }
}
