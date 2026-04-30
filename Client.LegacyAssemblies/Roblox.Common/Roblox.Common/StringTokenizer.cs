using System;
using System.Collections.Generic;

namespace Roblox.Common
{
	public class StringTokenizer<T>
	{
		private readonly string _StringToSeparate;

		private readonly char _Separator;

		public StringTokenizer(string stringToSeparate, char separator = ',')
		{
			if (typeof(T).IsEnum)
			{
				throw new ArgumentException("Cannot use an enum type");
			}
			_StringToSeparate = stringToSeparate;
			_Separator = separator;
		}

		public IEnumerable<T> Parse()
		{
			List<T> validItems = new List<T>();
			string[] array = _StringToSeparate.Trim().Split(_Separator);
			foreach (string str in array)
			{
				try
				{
					if (str.Trim() != string.Empty)
					{
						T item = (T)Convert.ChangeType(str.Trim(), typeof(T));
						validItems.Add(item);
					}
				}
				catch (Exception innerException)
				{
					throw new ArgumentException(string.Format("Item '{0}' in separated string could not be cast to type '{1}'", str, typeof(T).FullName), innerException);
				}
			}
			return validItems;
		}
	}
}
