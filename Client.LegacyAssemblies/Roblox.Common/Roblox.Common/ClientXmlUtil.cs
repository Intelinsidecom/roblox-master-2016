using System.Collections.Generic;

namespace Roblox.Common
{
	public static class ClientXmlUtil
	{
		public static string GenerateXmlTable(ICollection<KeyValuePair<object, object>> entries)
		{
			string xml = "<Value><Table>";
			foreach (KeyValuePair<object, object> pair in entries)
			{
				xml += string.Format("<Entry><Key>{0}</Key><Value>{1}</Value></Entry>", pair.Key, pair.Value);
			}
			return xml + "</Table></Value>";
		}

		public static string GenerateXmlList(ICollection<object> entries)
		{
			string xml = "<List>";
			foreach (object entry in entries)
			{
				xml += string.Format("<Value>{0}</Value>", entry);
			}
			return xml + "</List>";
		}

		public static string GenerateXmlBool(bool value)
		{
			return string.Format("<Value Type=\"boolean\">{0}</Value>", value ? "true" : "false");
		}

		public static string GenerateXmlString(string value)
		{
			return string.Format("<Value>{0}</Value>", value);
		}

		public static string GenerateXmlInteger(int value)
		{
			return string.Format("<Value Type=\"integer\">{0}</Value>", value);
		}

		public static string GenerateXmlDouble(double value)
		{
			return string.Format("<Value Type=\"number\">{0}</Value>", value);
		}
	}
}
