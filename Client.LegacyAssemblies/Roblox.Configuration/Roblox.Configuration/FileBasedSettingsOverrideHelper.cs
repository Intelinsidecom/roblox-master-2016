using System;
using System.Collections.Generic;
using System.IO;
using System.Linq;
using System.Xml.Linq;

namespace Roblox.Configuration
{
	public class FileBasedSettingsOverrideHelper
	{
		public static Dictionary<string, object> ReadOverriddenSettingsFromFilePath(string fileName, Action<string, object[]> errorLogger = null)
		{
			if (string.IsNullOrWhiteSpace(fileName))
			{
				return null;
			}
			string fileContent = null;
			FileStream fileStream = null;
			StreamReader streamReader = null;
			try
			{
				fileStream = File.Open(fileName, FileMode.Open);
				streamReader = new StreamReader(fileStream);
				fileContent = streamReader.ReadToEnd();
			}
			catch (Exception arg)
			{
				if (errorLogger != null)
				{
					errorLogger(string.Format("Unable to read file :{0} Exception: {1}", fileName, arg), new object[0]);
				}
				return null;
			}
			finally
			{
				if (streamReader != null)
				{
					streamReader.Dispose();
				}
				if (fileStream != null)
				{
					fileStream.Dispose();
				}
			}
			return ReadOverriddenSettingsFromFileContent(fileContent, errorLogger);
		}

		public static Dictionary<string, object> ReadOverriddenSettingsFromFileContent(string fileContent, Action<string, object[]> errorLogger = null, Action<string, object[]> informationLogger = null)
		{
			if (string.IsNullOrWhiteSpace(fileContent))
			{
				return null;
			}
			Dictionary<string, object> dictionary = new Dictionary<string, object>();
			try
			{
				foreach (XElement item in XDocument.Parse(fileContent).Descendants("setting"))
				{
					XElement parent = item.Parent;
					if (!(((parent != null) ? parent.Name : null) != null))
					{
						continue;
					}
					XName name = item.Parent.Name;
					XAttribute xAttribute = item.Attribute("name");
					string text = string.Format("{0}.{1}", name, (xAttribute != null) ? xAttribute.Value : null);
					XAttribute xAttribute2 = item.Attribute("serializeAs");
					string text2 = ((xAttribute2 != null) ? xAttribute2.Value : null);
					if (!string.IsNullOrEmpty(text2))
					{
						if (!string.IsNullOrEmpty(item.Descendants("value").First().Value))
						{
							Type type = Type.GetType(text2);
							if (type != null)
							{
								object obj = Convert.ChangeType(item.Descendants("value").First().Value, type);
								if (informationLogger != null)
								{
									informationLogger(string.Format("Reading file based setting-Name:{0} with value:{1}", text, obj), new object[0]);
								}
								dictionary[text] = obj;
							}
							else if (errorLogger != null)
							{
								errorLogger(string.Format("File based override setting:{0} has Invalid type (serializeAs) :{1}", text, text2), new object[0]);
							}
						}
						else if (errorLogger != null)
						{
							errorLogger(string.Format("File based override does not contain a value for setting name:{0}", text), new object[0]);
						}
					}
					else if (errorLogger != null)
					{
						errorLogger(string.Format("File based override setting:{0} 'serializeAs' attribute not provided. Skipping", text), new object[0]);
					}
				}
				return dictionary;
			}
			catch (Exception arg)
			{
				if (errorLogger != null)
				{
					errorLogger(string.Format("There was an exception while reading file-based override settings. FileContents:{0} Exception:{1}", fileContent, arg), new object[0]);
				}
				return null;
			}
		}
	}
}
