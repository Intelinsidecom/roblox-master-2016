using System;
using System.Linq;
using CommandLine;
using SettingsReader.Options;

namespace SettingsReader
{
    class Program
    {
        static int Main(string[] args)
        {
            try
            {
                var parser = CommandLine.Parser.Default;
                if (parser == null) return -1;

                if (args.Length == 0)
                {
                    Console.WriteLine("Usage: getclientsettings [server name] [settings dump file name] [old settings dump file name] [diff file name]");
                    return 1;
                }

                string verb = args[0].ToLower();
                if (verb == "extract")
                {
                    var result = parser.ParseArguments<ExtractOptions>(args);
                    if (result.Errors.Any()) return 1;
                    return RunExtract(result.Value);
                }
                else if (verb == "compare")
                {
                    var result = parser.ParseArguments<CompareOptions>(args);
                    if (result.Errors.Any()) return 1;
                    return RunCompare(result.Value);
                }
                else
                {
                    var result = parser.ParseArguments<ExtractOptions, CompareOptions>(args);
                    if (result.Errors.Any()) return 1;
                    
                    ExtractOptions e = result.Value as ExtractOptions;
                    if (e != null) return RunExtract(e);
                    
                    CompareOptions c = result.Value as CompareOptions;
                    if (c != null) return RunCompare(c);
                }

                return 1;
            }
            catch (Exception ex)
            {
                Console.Error.WriteLine("FATAL ERROR: " + ex.Message);
                return -1;
            }
        }

        static int RunExtract(ExtractOptions opts)
        {
            var extractor = new SettingsExtractor(opts);
            extractor.Extract();
            return 0;
        }

        static int RunCompare(CompareOptions opts)
        {
            var comparer = new SettingsComparer(opts);
            comparer.Execute();
            return 0;
        }
    }
}
