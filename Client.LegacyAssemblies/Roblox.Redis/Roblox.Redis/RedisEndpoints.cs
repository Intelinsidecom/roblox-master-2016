using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Configuration;
using System.Linq;
using System.Runtime.CompilerServices;

namespace Roblox.Redis
{
	[TypeConverter(typeof(RedisEndpointsConverter))]
	[SettingsSerializeAs(SettingsSerializeAs.String)]
	public class RedisEndpoints
	{
		[CompilerGenerated]
		private readonly string _003CSource_003Ek__BackingField;

		[CompilerGenerated]
		private readonly ICollection<string> _003CEndpoints_003Ek__BackingField;

		public string Source
		{
			[CompilerGenerated]
			get
			{
				return _003CSource_003Ek__BackingField;
			}
		}

		public ICollection<string> Endpoints
		{
			[CompilerGenerated]
			get
			{
				return _003CEndpoints_003Ek__BackingField;
			}
		}

		public RedisEndpoints(string hostsWithPorts)
		{
			_003CSource_003Ek__BackingField = hostsWithPorts;
			_003CEndpoints_003Ek__BackingField = ParseConfiguration(hostsWithPorts);
		}

		private List<string> ParseConfiguration(string hostsWithPorts)
		{
			return (from str in hostsWithPorts.Split(new char[1] { ',' }).SelectMany(ParseEntry)
				orderby str
				select str).ToList();
		}

		private List<string> ParseEntry(string hostWithPorts)
		{
			string[] array = hostWithPorts.Split(new char[1] { ':' });
			if (array.Length != 2)
			{
				throw new RedisEndpointParseException(string.Format("Entry did not contain and host and port/port-range pair: \"{0}\"", hostWithPorts));
			}
			string arg = array[0];
			string[] array2 = array[1].Split(new char[1] { '-' });
			if (array2.Length == 1)
			{
				return new List<string> { hostWithPorts };
			}
			if (array2.Length == 2)
			{
				try
				{
					int num = int.Parse(array2[0]);
					int num2 = int.Parse(array2[1]);
					if (num2 < num)
					{
						throw new RedisEndpointParseException(string.Format("Entry's end port is lower than the start port: \"{0}\"", hostWithPorts));
					}
					List<string> list = new List<string>();
					for (int i = num; i <= num2; i++)
					{
						list.Add(string.Format("{0}:{1}", arg, i));
					}
					return list;
				}
				catch (FormatException)
				{
					throw new RedisEndpointParseException(string.Format("Entry has unparseable start and end port numbers: \"{0}\"", hostWithPorts));
				}
			}
			throw new RedisEndpointParseException(string.Format("Entry has unparseable port range: \"{0}\"", hostWithPorts));
		}

		public bool HasTheSameEndpoints(RedisEndpoints otherEndpoints)
		{
			if (otherEndpoints != null)
			{
				return Endpoints.SequenceEqual(otherEndpoints.Endpoints);
			}
			return false;
		}

		public override string ToString()
		{
			return string.Join(",", Endpoints);
		}
	}
}
