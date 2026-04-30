using System.Configuration;

namespace Roblox.Configuration
{
	public class GroupConfigElements : ConfigurationElementCollection
	{
		public override ConfigurationElementCollectionType CollectionType
		{
			get
			{
				return ConfigurationElementCollectionType.BasicMap;
			}
		}

		protected override string ElementName
		{
			get
			{
				return "group";
			}
		}

		protected override ConfigurationPropertyCollection Properties
		{
			get
			{
				return new ConfigurationPropertyCollection();
			}
		}

		public GroupConfigElement this[int index]
		{
			get
			{
				return (GroupConfigElement)BaseGet(index);
			}
			set
			{
				if (BaseGet(index) != null)
				{
					BaseRemoveAt(index);
				}
				BaseAdd(index, value);
			}
		}

		public new GroupConfigElement this[string name]
		{
			get
			{
				return (GroupConfigElement)BaseGet(name);
			}
		}

		public void Add(GroupConfigElement item)
		{
			BaseAdd(item);
		}

		public void Remove(GroupConfigElement item)
		{
			BaseRemove(item);
		}

		public void RemoveAt(int index)
		{
			BaseRemoveAt(index);
		}

		protected override ConfigurationElement CreateNewElement()
		{
			return new GroupConfigElement();
		}

		protected override object GetElementKey(ConfigurationElement element)
		{
			return (element as GroupConfigElement).GroupName;
		}
	}
}
