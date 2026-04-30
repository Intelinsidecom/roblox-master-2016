using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Configuration;
using System.Linq;
using System.Runtime.CompilerServices;
using System.Text.RegularExpressions;

namespace Roblox.Configuration
{
	[TypeConverter(typeof(WeightedCsvConverter))]
	[SettingsSerializeAs(SettingsSerializeAs.String)]
	public class WeightedCsv
	{
		[CompilerGenerated]
		private readonly string _003CSource_003Ek__BackingField;

		[CompilerGenerated]
		private readonly IReadOnlyCollection<WeightedValue> _003CWeightedValues_003Ek__BackingField;

		public string Source
		{
			[CompilerGenerated]
			get
			{
				return _003CSource_003Ek__BackingField;
			}
		}

		public IReadOnlyCollection<WeightedValue> WeightedValues
		{
			[CompilerGenerated]
			get
			{
				return _003CWeightedValues_003Ek__BackingField;
			}
		}

		public string GetDescription()
		{
			IReadOnlyCollection<WeightedValue> weightedValues = WeightedValues;
			if (weightedValues == null || weightedValues.Count == 0)
			{
				return "Empty list of values.";
			}
			int num = 0;
			foreach (WeightedValue item in weightedValues)
			{
				num += item.Weight;
			}
			List<string> list = new List<string>();
			for (int i = 0; i < weightedValues.Count; i++)
			{
				string value = weightedValues.ElementAt(i).Value;
				string arg = ((num == 0) ? "NaN" : string.Format("{0:0%}", (double)weightedValues.ElementAt(i).Weight / (double)num));
				list.Add(string.Format("{0}:{1}", value, arg));
			}
			return string.Join(",", list);
		}

		public WeightedCsv(string weightedCsv)
		{
			_003CSource_003Ek__BackingField = weightedCsv;
			_003CWeightedValues_003Ek__BackingField = (IReadOnlyCollection<WeightedValue>)(object)ParseConfiguration(weightedCsv);
		}

		private WeightedValue[] ParseConfiguration(string weightedCsv)
		{
			if (string.IsNullOrEmpty(weightedCsv))
			{
				return new WeightedValue[0];
			}
			return weightedCsv.Split(new char[1] { ',' }).Select(ParseEntry).ToArray();
		}

		private WeightedValue ParseEntry(string weightedValue)
		{
			Match match = null;
			try
			{
				match = Regex.Match(weightedValue, "^(.*):([0-9]+)$");
			}
			catch (Exception arg)
			{
				throw new WeightedCsvParseException(string.Format("Error in parsing entry: \"{0}\" - {1}", weightedValue, arg));
			}
			if (match == null || !match.Success)
			{
				throw new WeightedCsvParseException(string.Format("Entry did not contain value or weight: \"{0}\"", weightedValue));
			}
			string value = match.Groups[1].Value;
			int result;
			if (!int.TryParse(match.Groups[2].Value, out result))
			{
				throw new WeightedCsvParseException(string.Format("Entry did not contain weight: \"{0}\"", weightedValue));
			}
			if (result < 0)
			{
				throw new WeightedCsvParseException(string.Format("The weight must be a non-negative number: \"{0}\"", weightedValue));
			}
			return new WeightedValue(value, result);
		}
	}
}
