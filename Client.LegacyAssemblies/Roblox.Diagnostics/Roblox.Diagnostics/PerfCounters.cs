using System.Collections.Generic;
using System.Diagnostics;
using System.IO;
using System.Linq;
using System.Reflection;
using System.Runtime.Serialization.Formatters.Binary;
using System.Security.Cryptography;

namespace Roblox.Diagnostics
{
	public static class PerfCounters
	{
		private static readonly object Sync = new object();

		public static void Initialize(object obj)
		{
			Initialize(obj, PerformanceCounterCategoryType.SingleInstance, null);
		}

		public static void Initialize(object obj, string instanceName)
		{
			Initialize(obj, PerformanceCounterCategoryType.MultiInstance, instanceName);
		}

		private static IEnumerable<FieldInfo> GetCounterFields(object obj)
		{
			FieldInfo[] fields = obj.GetType().GetFields(BindingFlags.Instance | BindingFlags.Public | BindingFlags.NonPublic);
			foreach (FieldInfo field in fields)
			{
				if (field.FieldType == typeof(PerformanceCounter))
				{
					yield return field;
				}
			}
		}

		private static void Initialize(object obj, PerformanceCounterCategoryType type, string instanceName)
		{
			CounterCategory attr = (CounterCategory)obj.GetType().GetCustomAttributes(typeof(CounterCategory), false)[0];
			CounterCreationDataCollection collection = new CounterCreationDataCollection();
			foreach (FieldInfo counterField in GetCounterFields(obj))
			{
				Counter fieldAttr = (Counter)counterField.GetCustomAttributes(typeof(Counter), true)[0];
				collection.Add(new CounterCreationData(fieldAttr.Name, fieldAttr.Help, fieldAttr.Type));
			}
			string hash = (attr.IsAutoUpdateEnabled ? ComputeHash(collection, attr.CategoryHelp, type) : string.Empty);
			lock (Sync)
			{
				bool needToCreate = !PerformanceCounterCategory.Exists(attr.CategoryName);
				if (attr.IsAutoUpdateEnabled && !needToCreate)
				{
					PerformanceCounterCategory[] categories = PerformanceCounterCategory.GetCategories();
					foreach (PerformanceCounterCategory category in categories)
					{
						if (category.CategoryName == attr.CategoryName)
						{
							if (!category.CategoryHelp.Contains(hash))
							{
								PerformanceCounterCategory.Delete(attr.CategoryName);
								needToCreate = true;
							}
							break;
						}
					}
				}
				if (needToCreate)
				{
					string help = (string.IsNullOrEmpty(attr.CategoryHelp) ? "No help defined." : attr.CategoryHelp);
					string helpString = (attr.IsAutoUpdateEnabled ? string.Format("{0} (hash: {1})", help, hash) : help);
					PerformanceCounterCategory.Create(attr.CategoryName, helpString, type, collection);
				}
			}
			foreach (FieldInfo counterField2 in GetCounterFields(obj))
			{
				Counter fieldAttr2 = (Counter)counterField2.GetCustomAttributes(typeof(Counter), true)[0];
				PerformanceCounter counter = ((instanceName == null) ? new PerformanceCounter(attr.CategoryName, fieldAttr2.Name, false)
				{
					RawValue = 0L
				} : new PerformanceCounter(attr.CategoryName, fieldAttr2.Name, instanceName, false)
				{
					RawValue = 0L
				});
				counterField2.SetValue(obj, counter);
			}
		}

		private static string ComputeHash(params object[] objectsToSerialize)
		{
			using (MemoryStream ms = new MemoryStream())
			{
				new BinaryFormatter().Serialize(ms, objectsToSerialize);
				using (MD5CryptoServiceProvider md5 = new MD5CryptoServiceProvider())
				{
					return md5.ComputeHash(ms.ToArray()).Aggregate("", (string current, byte b) => current + b.ToString("x"));
				}
			}
		}

		public static void Dispose(object obj)
		{
			foreach (FieldInfo counterField in GetCounterFields(obj))
			{
				PerformanceCounter obj2 = (PerformanceCounter)counterField.GetValue(obj);
				if (obj2 != null)
				{
					obj2.Dispose();
				}
			}
		}
	}
}
