using CommandLine;

namespace SettingsReader.Options
{
    [Verb("extract", HelpText = "Extract settings from a Roblox environment or database.")]
    [VerbDescription("Settings extraction mode")]
    public class ExtractOptions : OptionsBase
    {
        [Option('S', "server", HelpText = "DB Server / environment name", Required = false)]
        [OptionDescription("DB Server")]
        public string ConfigurationDatabaseServer { get; set; }

        [Option('T', "table", HelpText = "Table with settings", Required = false, DefaultValue = "Settings")]
        [OptionDescription("Table with settings")]
        public string SettingsTable { get; set; }

        [Option('I', "input-format", HelpText = "Settings extraction mode", Required = false, DefaultValue = SettingsFormat.ApiClient)]
        [OptionDescription("Input format")]
        public SettingsFormat InputFormat { get; set; }

        [Option('F', "output-format", HelpText = "Output format", Required = false, DefaultValue = SettingsOutputFormat.Unified)]
        [OptionDescription("Output format")]
        public SettingsOutputFormat OutputFormat { get; set; }

        [Option('O', "output", HelpText = "Output file", Required = false)]
        [OptionDescription("Output file")]
        public string OutputFileName { get; set; }

        [Option("no-timer", HelpText = "Timer disable", Required = false, DefaultValue = false)]
        [OptionDescription("Timer disable")]
        public bool NoTimer { get; set; }
    }
}
