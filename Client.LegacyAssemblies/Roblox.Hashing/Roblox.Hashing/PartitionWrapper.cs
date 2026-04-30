using System.Runtime.CompilerServices;
using System.Text;

namespace Roblox.Hashing
{
	public class PartitionWrapper
	{
		private readonly int _Hash;

		[CompilerGenerated]
		private readonly string _003CPartitionKey_003Ek__BackingField;

		public string PartitionKey
		{
			[CompilerGenerated]
			get
			{
				return _003CPartitionKey_003Ek__BackingField;
			}
		}

		public PartitionWrapper(string partitionKey)
		{
			_003CPartitionKey_003Ek__BackingField = partitionKey;
			uint hash = MurmurHash2.Hash(Encoding.ASCII.GetBytes(PartitionKey));
			_Hash = (int)hash;
		}

		public override int GetHashCode()
		{
			return _Hash;
		}
	}
}
