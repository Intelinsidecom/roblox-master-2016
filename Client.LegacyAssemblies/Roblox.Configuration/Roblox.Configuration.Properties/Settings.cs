using System.CodeDom.Compiler;
using System.Configuration;
using System.Diagnostics;
using System.Runtime.CompilerServices;

namespace Roblox.Configuration.Properties
{
	[CompilerGenerated]
	[GeneratedCode("Microsoft.VisualStudio.Editors.SettingsDesigner.SettingsSingleFileGenerator", "12.0.0.0")]
	internal sealed class Settings : ApplicationSettingsBase
	{
		private static Settings defaultInstance = (Settings)SettingsBase.Synchronized(new Settings());

		public static Settings Default
		{
			get
			{
				return defaultInstance;
			}
		}

		[ApplicationScopedSetting]
		[DebuggerNonUserCode]
		[SpecialSetting(SpecialSetting.ConnectionString)]
		[DefaultSettingValue("Data Source=.\\SQLEXPRESS;AttachDbFilename=|DataDirectory|\\ConfigurationDatabase.mdf;Integrated Security=True;User Instance=True")]
		public string BasicConfigSource
		{
			get
			{
				return (string)this["BasicConfigSource"];
			}
		}

		[ApplicationScopedSetting]
		[DebuggerNonUserCode]
		[SpecialSetting(SpecialSetting.ConnectionString)]
		[DefaultSettingValue("Data Source=.\\SQLEXPRESS;AttachDbFilename=|DataDirectory|\\ConfigurationDatabase.mdf;Integrated Security=True;User Instance=True")]
		public string ConfigurationDatabaseConnectionString
		{
			get
			{
				return (string)this["ConfigurationDatabaseConnectionString"];
			}
		}
	}
}
