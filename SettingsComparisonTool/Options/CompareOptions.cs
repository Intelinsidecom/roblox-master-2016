using System.Collections.Generic;
using CommandLine;

namespace SettingsReader.Options
{
    [Verb("compare", HelpText = "Compare two or more extracted settings files.")]
    [VerbDescription("Settings comparison mode")]
    public class CompareOptions : OptionsBase
    {
        [Value(0, Required = false)]
        [OptionDescription("Files to compare")]
        public IEnumerable<string> SetsToCompare { get; set; }

        [Option('L', "slice", HelpText = "Setting name to slice", Required = false)]
        [OptionDescription("Setting name to slice")]
        public string SliceOption { get; set; }

        [Option('O', "output", HelpText = "Output file name", Required = false)]
        [OptionDescription("Output file name")]
        public string OutputFileName { get; set; }

        [Option('G', "group-filter", HelpText = "Group filter", Required = false)]
        [OptionDescription("Group filter")]
        public string GroupFilter { get; set; }

        [Option('N', "name-filter", HelpText = "Name filter", Required = false)]
        [OptionDescription("Name filter")]
        public string NameFilter { get; set; }
    }
}
