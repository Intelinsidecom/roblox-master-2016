using System;
using System.Collections.Generic;
using System.Data;
using System.Data.Common;
using System.Data.SqlClient;
using System.Linq;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using Roblox.Caching;
using Roblox.Caching.Interfaces;
using Roblox.Data;
using Roblox.Data.Interfaces;
using Roblox.Data.Properties;
using Roblox.EventLog;

namespace Roblox.Common
{
	public class EntityHelper
	{
		public class GetOrCreateDALWrapper<T>
		{
			public bool CreatedNewEntity;

			public T DAL;

			public GetOrCreateDALWrapper(bool createdNewEntity, T dal)
			{
				CreatedNewEntity = createdNewEntity;
				DAL = dal;
			}
		}

		public delegate void PostActionNonBlockingWork();

		public delegate T BuildDAL<T>(SqlDataReader dataReader);

		public delegate ICollection<T> BuildDALCollection<T>(SqlDataReader dataReader);

		public delegate void DeleteDAL();

		public delegate T Get<T>();

		public delegate TEntity GetByID<TEntity, TIndex>(TIndex id) where TIndex : struct, IComparable<TIndex>;

		public delegate ICollection<TEntity> GetCollectionByIDs<TEntity, TIndex>(ICollection<TIndex> ids) where TIndex : struct, IComparable<TIndex>;

		public delegate T GetCount<T>() where T : struct;

		public delegate ICollection<T> GetIDCollection<T>() where T : struct;

		public delegate T GetOrCreate<T>();

		public delegate GetOrCreateDALWrapper<T> GetOrCreateDAL<T>();

		public delegate void InsertDAL();

		public delegate void SetID<T>(T id) where T : struct;

		public delegate void UpdateDAL();

		[StructLayout(LayoutKind.Auto)]
		[CompilerGenerated]
		private struct _003C_003Ec__DisplayClass26_0<TEntity, TIndex> where TEntity : class, ICacheableObject<TIndex> where TIndex : struct, IComparable<TIndex>
		{
			public List<TIndex> uncachedEntityIds;

			public List<TEntity> entities;

			public Dictionary<TIndex, int> idOrderDictionary;
		}

		public static void DeleteEntity<T>(ICacheableObject<T> entity, DeleteDAL dalDeleter)
		{
			dalDeleter();
			CacheManager.ProcessEntityChange(entity, StateChangeEventType.Deletion);
		}

		public static void DeleteEntityWithRemoteCache<T>(ICacheableObject<T> entity, DeleteDAL dalDeleter)
		{
			dalDeleter();
			CacheManager.ProcessEntityChange(entity, StateChangeEventType.Deletion);
			IEnumerable<string> enumerable = entity.BuildEntityIDLookups();
			ILookupCache remoteCache = LookupCacheFactory.GetInstance().GetLookupCache(entity.CacheInfo);
			foreach (string idLookup in enumerable)
			{
				remoteCache.RemoveEntityIDLookupCache(entity.CacheInfo, idLookup);
			}
		}

		public static void DoEntityDALAction(DbInfo dbInfo)
		{
			using (DbHelper dbHelper = new DbHelper(dbInfo.ConnectionString))
			{
				foreach (SqlParameter queryParameter in dbInfo.QueryParameters)
				{
					dbHelper.SQLParameters.Add(queryParameter);
				}
				dbHelper.ExecuteSQLNonQuery(dbInfo.StoredProcedure, CommandType.StoredProcedure);
			}
		}

		[Obsolete("Use the generic DoEntityDALAction instead")]
		public static void DoEntityDALDelete(DbInfo dbInfo)
		{
			DoEntityDALAction(dbInfo);
		}

		public static T DoEntityDALInsert<T>(DbInfo dbInfo) where T : struct
		{
			using (DbHelper dbHelper = new DbHelper(dbInfo.ConnectionString))
			{
				dbHelper.SQLParameters.Add(dbInfo.OutputParameter);
				foreach (SqlParameter queryParameter in dbInfo.QueryParameters)
				{
					dbHelper.SQLParameters.Add(queryParameter);
				}
				dbHelper.ExecuteSQLNonQuery(dbInfo.StoredProcedure, CommandType.StoredProcedure);
				try
				{
					return (T)((DbParameter)(object)dbInfo.OutputParameter).Value;
				}
				catch (InvalidCastException ex)
				{
					SqlParameter outputParameter = dbInfo.OutputParameter;
					object outputParamValue = ((outputParameter != null) ? ((DbParameter)(object)outputParameter).Value : null);
					bool outputParamHasValue = outputParamValue != null;
					StaticLoggerRegistry.Instance.Error(string.Format("Type to cast to = {0}, Type found: {1} and paramValue = {2} Exception {3}", typeof(T).FullName, outputParamHasValue ? outputParamValue.GetType().FullName : "outputParam was null!", outputParamValue, ex));
					return outputParamHasValue ? ((T)Convert.ChangeType(outputParamValue, typeof(T))) : default(T);
				}
			}
		}

		public static void DoEntityDALUpdate(DbInfo dbInfo)
		{
			DoEntityDALAction(dbInfo);
		}

		public static TEntity DoGet<TIndex, TDal, TEntity>(Func<TDal> dalGetter, TIndex index) where TIndex : struct, IComparable<TIndex> where TDal : class where TEntity : IRobloxEntity<TIndex, TDal>, new()
		{
			TEntity entity = new TEntity();
			TDal dal = dalGetter();
			if (dal != null)
			{
				entity.Construct(dal);
				CacheManager.AddEntityToCache(entity);
				foreach (string idLookup in entity.BuildEntityIDLookups())
				{
					CacheManager.AddEntityIDToLookupCache(entity.CacheInfo, idLookup, entity.ID);
				}
			}
			else
			{
				CacheManager.AddNullEntityToCache(entity.CacheInfo, index);
				entity = default(TEntity);
			}
			return entity;
		}

		public static TEntity DoGetByLookup<TIndex, TDal, TEntity>(Func<TDal> dalGetter, string entityIdLookup) where TEntity : IRobloxEntity<TIndex, TDal>, new()
		{
			TEntity entity = new TEntity();
			TDal dal = dalGetter();
			if (dal != null)
			{
				entity.Construct(dal);
				AddEntityAndIdLookupsToCache(entity);
			}
			else
			{
				AddNullEntityIDToLookupCache(entityIdLookup, entity.CacheInfo);
				entity = default(TEntity);
			}
			return entity;
		}

		public static TEntity DoGetOrCreate<TIndex, TDal, TEntity>(GetOrCreateDAL<TDal> dalGetterOrCreater) where TDal : class where TEntity : IRobloxEntity<TIndex, TDal>, ICacheableObject<TIndex>, new()
		{
			GetOrCreateDALWrapper<TDal> dalWrapper = dalGetterOrCreater();
			TDal dal = ((dalWrapper != null) ? dalWrapper.DAL : null);
			if (dal != null)
			{
				TEntity entity = new TEntity();
				entity.Construct(dal);
				if (dalWrapper.CreatedNewEntity)
				{
					CacheManager.ProcessEntityChange(entity, StateChangeEventType.Creation);
				}
				else
				{
					CacheManager.AddEntityToCache(entity);
				}
				{
					foreach (string idLookup in entity.BuildEntityIDLookups())
					{
						TIndex id = entity.ID;
						CacheManager.AddEntityIDToLookupCache(entity.CacheInfo, idLookup, id);
					}
					return entity;
				}
			}
			throw new ApplicationException(string.Format("GetOrCreate failure ({0} is null).", typeof(TDal).Name));
		}

		public static T GetDataCount<T>(DbInfo dbInfo)
		{
			object count;
			using (DbHelper dbHelper = new DbHelper(dbInfo.ConnectionString))
			{
				foreach (SqlParameter queryParameter in dbInfo.QueryParameters)
				{
					dbHelper.SQLParameters.Add(queryParameter);
				}
				count = dbHelper.ExecuteSQLScalar(dbInfo.StoredProcedure, CommandType.StoredProcedure);
			}
			if (count == DBNull.Value)
			{
				return default(T);
			}
			return (T)count;
		}

		public static ICollection<T> GetDataEntityIDCollection<T>(DbInfo dbInfo) where T : struct
		{
			using (DbHelper dbHelper = new DbHelper(dbInfo.ConnectionString))
			{
				foreach (SqlParameter queryParameter in dbInfo.QueryParameters)
				{
					dbHelper.SQLParameters.Add(queryParameter);
				}
				SqlDataReader dataReader = dbHelper.ExecuteSQLReader(dbInfo.StoredProcedure, CommandType.StoredProcedure);
				try
				{
					return DbHelper.BuildIDCollection<T>(dataReader);
				}
				finally
				{
					if (dataReader != null)
					{
						((IDisposable)dataReader).Dispose();
					}
				}
			}
		}

		public static SqlParameter GetMultiGetIDsSqlParameter<TIndex>(IEnumerable<TIndex> indices, string parameterName = "IDs")
		{
			//IL_0065: Unknown result type (might be due to invalid IL or missing references)
			//IL_006a: Unknown result type (might be due to invalid IL or missing references)
			//IL_0071: Expected O, but got Unknown
			//IL_0071: Unknown result type (might be due to invalid IL or missing references)
			//IL_0079: Unknown result type (might be due to invalid IL or missing references)
			//IL_0080: Expected O, but got Unknown
			//IL_0081: Expected O, but got Unknown
			DataTable dataTable = new DataTable(GetTableTypeName<TIndex>());
			dataTable.Columns.Add("ID", typeof(TIndex));
			foreach (TIndex index in indices)
			{
				dataTable.Rows.Add(index);
			}
			SqlParameter val = new SqlParameter();
			((DbParameter)val).ParameterName = parameterName;
			val.SqlDbType = SqlDbType.Structured;
			((DbParameter)val).Value = dataTable;
			return val;
		}

		public static SqlParameter[] GetMultiGetIDsSqlParameters<TIndex>(IEnumerable<TIndex> indices)
		{
			return (SqlParameter[])(object)new SqlParameter[1] { GetMultiGetIDsSqlParameter(indices) };
		}

		private static ICollection<TEntity> BuildDalCollection<TEntity, TIndex>(DbInfo dbInfo, BuildDALCollection<TEntity> dalCollectionBuilder, IEnumerable<TIndex> indices)
		{
			using (DbHelper dbHelper = DBHelperFactory.GetDBHelper(dbInfo.ConnectionString))
			{
				SqlParameter parameter = GetMultiGetIDsSqlParameter(indices);
				dbHelper.SQLParameters.Add(parameter);
				SqlDataReader dataReader = dbHelper.ExecuteSQLReader(dbInfo.StoredProcedure, CommandType.StoredProcedure);
				try
				{
					ICollection<TEntity> dalCollection = dalCollectionBuilder(dataReader);
					return dalCollection ?? new List<TEntity>();
				}
				finally
				{
					if (dataReader != null)
					{
						((IDisposable)dataReader).Dispose();
					}
				}
			}
		}

		public static ICollection<TEntity> GetEntityDALCollection<TEntity, TIndex>(DbInfo dbInfo, ICollection<TIndex> indices, BuildDALCollection<TEntity> dalBuilderMultiple)
		{
			List<TEntity> dals = new List<TEntity>();
			int batchSize = Settings.Default.DatabaseBulkQueryLimit;
			int batchIndex = 0;
			IEnumerable<TIndex> batchedIds = indices.Skip(batchIndex * batchSize).Take(batchSize).ToList();
			while (batchedIds.Any())
			{
				ICollection<TEntity> dalCollection = BuildDalCollection(dbInfo, dalBuilderMultiple, batchedIds);
				dals.AddRange(dalCollection);
				batchIndex++;
				batchedIds = indices.Skip(batchIndex * batchSize).Take(batchSize).ToList();
			}
			return dals;
		}

		public static TEntity GetEntityOld<TIndex, TEntity>(CacheInfo cacheInfo, TIndex identifier, Func<TEntity> getter) where TEntity : class, ICacheableObject<TIndex>
		{
			return CacheManager.GetEntityFromCache(cacheInfo, identifier, getter);
		}

		public static TEntity TryGetEntityFromCache<TIndex, TDal, TEntity>(CacheInfo cacheInfo, TIndex identifier, out bool cacheHit) where TIndex : struct, IComparable<TIndex> where TEntity : class, IRobloxEntity<TIndex, TDal>, new()
		{
			return CacheManager.TryGetEntityOnlyFromCache<TIndex, TEntity>(cacheInfo, identifier, out cacheHit);
		}

		public static TEntity GetEntity<TIndex, TDal, TEntity>(CacheInfo cacheInfo, TIndex identifier, Func<TDal> getter) where TIndex : struct, IComparable<TIndex> where TDal : class where TEntity : class, IRobloxEntity<TIndex, TDal>, new()
		{
			return CacheManager.GetEntityFromCache(cacheInfo, identifier, () => DoGet<TIndex, TDal, TEntity>(getter, identifier));
		}

		public static ICollection<TEntity> MultiGetEntity<TIndex, TDal, TEntity>(ICollection<TIndex> ids, CacheInfo cacheInfo, Func<ICollection<TIndex>, ICollection<TDal>> getterMultiple) where TIndex : struct, IComparable<TIndex> where TDal : class where TEntity : class, IRobloxEntity<TIndex, TDal>, new()
		{
			ICollection<TEntity> entities = new List<TEntity>();
			foreach (TDal dalEntity in getterMultiple(ids))
			{
				TEntity entity = new TEntity();
				entity.Construct(dalEntity);
				CacheManager.AddEntityToCache(entity);
				foreach (string idLookup in entity.BuildEntityIDLookups())
				{
					CacheManager.AddEntityIDToLookupCache(entity.CacheInfo, idLookup, entity.ID);
				}
				entities.Add(entity);
			}
			return entities;
		}

		public static TEntity GetEntityByLookupOld<TIndex, TEntity>(CacheInfo cacheInfo, string lookup, Get<TEntity> getter) where TIndex : struct, IComparable<TIndex> where TEntity : class, ICacheableObject<TIndex>
		{
			return CacheManager.GetEntityFromCacheByIDLookup<TIndex, TEntity>(cacheInfo, lookup, () => getter());
		}

		public static TEntity GetEntityByLookup<TIndex, TDal, TEntity>(CacheInfo cacheInfo, string lookup, Func<TDal> getter) where TIndex : struct, IComparable<TIndex> where TDal : class where TEntity : class, IRobloxEntity<TIndex, TDal>, new()
		{
			return CacheManager.GetEntityFromCacheByIDLookup<TIndex, TEntity>(cacheInfo, lookup, () => DoGetByLookup<TIndex, TDal, TEntity>(getter, lookup));
		}

		public static TEntity GetEntityByLookupWithRemoteCache<TIndex, TDal, TEntity>(CacheInfo cacheInfo, string entityIdLookup, Func<TDal> dalGetter, Func<TIndex, TEntity> entityGetterById) where TIndex : struct, IComparable<TIndex> where TDal : class where TEntity : class, IRobloxEntity<TIndex, TDal>, new()
		{
			return CacheManager.GetEntityFromCacheByIDLookup<TIndex, TEntity>(cacheInfo, entityIdLookup, delegate
			{
				ILookupCache lookupCache = LookupCacheFactory.GetInstance().GetLookupCache(cacheInfo);
				ValueTuple<bool, TIndex> entityIDFromLookupCache = lookupCache.GetEntityIDFromLookupCache<TIndex>(cacheInfo, entityIdLookup);
				bool item = entityIDFromLookupCache.Item1;
				TIndex item2 = entityIDFromLookupCache.Item2;
				TEntity val;
				if (item)
				{
					if (!item2.Equals(default(TIndex)))
					{
						val = entityGetterById(item2);
						if (val != null)
						{
							AddEntityAndIdLookupsToCache(val);
						}
						else
						{
							lookupCache.RemoveEntityIDLookupCache(cacheInfo, entityIdLookup);
						}
					}
					else
					{
						val = null;
						AddNullEntityIDToLookupCache(entityIdLookup, cacheInfo);
					}
				}
				else
				{
					val = DoGetByLookup<TIndex, TDal, TEntity>(dalGetter, entityIdLookup);
					CacheInfo cacheInfo2 = cacheInfo;
					string lookup = entityIdLookup;
					TEntity val2 = val;
					lookupCache.AddEntityIDToLookupCache(cacheInfo2, lookup, (val2 != null) ? new TIndex?(val2.ID) : ((TIndex?)null));
				}
				return val;
			});
		}

		public static ICollection<TEntity> GetEntityCollection<TEntity, TIndex>(CacheInfo cacheInfo, CacheManager.CachePolicy cachePolicy, string collectionId, GetIDCollection<TIndex> idCollectionGetter, GetByID<TEntity, TIndex> entityGetter) where TIndex : struct, IComparable<TIndex>
		{
			ICollection<TEntity> entities = new List<TEntity>();
			foreach (TIndex id in GetEntityIDCollection(cacheInfo, cachePolicy, collectionId, idCollectionGetter))
			{
				TEntity entity = entityGetter(id);
				entities.Add(entity);
			}
			return entities;
		}

		public static ICollection<TEntity> GetEntityCollection<TEntity, TIndex>(CacheInfo cacheInfo, CacheManager.CachePolicy cachePolicy, string collectionId, GetIDCollection<TIndex> idCollectionGetter, GetCollectionByIDs<TEntity, TIndex> entityGetterMultiple) where TEntity : class, ICacheableObject<TIndex> where TIndex : struct, IComparable<TIndex>
		{
			List<TIndex> entityIdCollection = GetEntityIDCollection(cacheInfo, cachePolicy, collectionId, idCollectionGetter).ToList();
			return GetEntitiesByIds(cacheInfo, entityIdCollection, entityGetterMultiple);
		}

		public static ICollection<TEntity> GetEntityCollection<TEntity, TIndex>(CacheInfo cacheInfo, CacheManager.CachePolicy cachePolicy, SortedDictionary<TIndex, string> idToCacheKeyLookupMap, Func<ICollection<TIndex>, ICollection<TIndex>> idCollectionGetter, GetCollectionByIDs<TEntity, TIndex> entityGetterMultiple) where TEntity : class, ICacheableObject<TIndex> where TIndex : struct, IComparable<TIndex>
		{
			List<TIndex> entityIdCollection = GetEntityIDCollection(cacheInfo, cachePolicy, idToCacheKeyLookupMap, idCollectionGetter).ToList();
			return GetEntitiesByIds(cacheInfo, entityIdCollection, entityGetterMultiple);
		}

		private static ICollection<TEntity> GetEntitiesByIds<TEntity, TIndex>(CacheInfo cacheInfo, IReadOnlyList<TIndex> entityIdCollection, GetCollectionByIDs<TEntity, TIndex> entityGetterMultiple) where TEntity : class, ICacheableObject<TIndex> where TIndex : struct, IComparable<TIndex>
		{
			List<TEntity> entities = new List<TEntity>();
			List<TIndex> uncachedEntityIds = new List<TIndex>();
			Dictionary<TIndex, int> idOrderDictionary = new Dictionary<TIndex, int>();
			foreach (var item in CacheManager.TryGetEntitiesOnlyFromCache<TIndex, TEntity>(cacheInfo, entityIdCollection))
			{
				TIndex id = item.Item1;
				TEntity result = item.Item2;
				if (!item.Item3)
				{
					uncachedEntityIds.Add(id);
					idOrderDictionary[id] = entities.Count;
					entities.Add(null);
				}
				else
				{
					idOrderDictionary[id] = entities.Count;
					entities.Add(result);
				}
			}
			if (uncachedEntityIds.Count > 0)
			{
				foreach (TEntity entity in entityGetterMultiple(uncachedEntityIds))
				{
					int entityIndex = idOrderDictionary[entity.ID];
					entities[entityIndex] = entity;
				}
			}
			for (int i = 0; i < entities.Count; i++)
			{
				if (entities[i] == null)
				{
					CacheManager.AddNullEntityToCache(cacheInfo, entityIdCollection[i]);
				}
			}
			return entities;
		}

		public static IEnumerable<TEntity> GetEntitiesByIds<TEntity, TEntityDal, TIndex>(CacheInfo cacheInfo, IReadOnlyCollection<TIndex> ids, GetCollectionByIDs<TEntityDal, TIndex> entityDalGetterMultiple) where TEntity : class, IRobloxEntity<TIndex, TEntityDal>, new() where TEntityDal : class where TIndex : struct, IComparable<TIndex>
		{
			if (cacheInfo == null)
			{
				throw new ArgumentNullException("cacheInfo");
			}
			if (ids == null)
			{
				throw new ArgumentNullException("ids");
			}
			if (entityDalGetterMultiple == null)
			{
				throw new ArgumentNullException("entityDalGetterMultiple");
			}
			ValueTuple<TIndex, TEntity, bool>[] source = CacheManager.TryGetEntitiesOnlyFromCache<TIndex, TEntity>(cacheInfo, ids).ToArray();
			Dictionary<TIndex, TEntity> entitiesByIds = source.ToDictionary((ValueTuple<TIndex, TEntity, bool> cr) => cr.Item1, (ValueTuple<TIndex, TEntity, bool> cr) => cr.Item2);
			List<TIndex> cacheMissIds = source.Where((ValueTuple<TIndex, TEntity, bool> cr) => !cr.Item3).Select((ValueTuple<TIndex, TEntity, bool> cr) => cr.Item1).Distinct().ToList();
			if (cacheMissIds.Any())
			{
				Dictionary<TIndex, TEntity> sourceEntitiesByIds = (from dal in entityDalGetterMultiple(cacheMissIds)
					where dal != null
					select dal).ToArray().Select(delegate(TEntityDal dal)
				{
					TEntity val = new TEntity();
					val.Construct(dal);
					return val;
				}).ToDictionary((TEntity entity) => entity.ID);
				foreach (TIndex id in cacheMissIds)
				{
					TEntity sourceEntity;
					if (!sourceEntitiesByIds.TryGetValue(id, out sourceEntity) || sourceEntity == null)
					{
						CacheManager.AddNullEntityToCache(cacheInfo, id);
					}
					else
					{
						CacheManager.AddEntityToCache(sourceEntity);
						foreach (string lookup in sourceEntity.BuildEntityIDLookups())
						{
							CacheManager.AddEntityIDToLookupCache(cacheInfo, lookup, sourceEntity.ID);
						}
					}
					entitiesByIds[id] = sourceEntity;
				}
			}
			return entitiesByIds.Values;
		}

		public static IEnumerable<TIndex> GetEntityIDCollection<TIndex>(CacheInfo cacheInfo, CacheManager.CachePolicy cachePolicy, string collectionId, GetIDCollection<TIndex> idCollectionGetter) where TIndex : struct, IComparable<TIndex>
		{
			if (cachePolicy == null)
			{
				return idCollectionGetter();
			}
			return CacheManager.GetIDCollectionFromCache(cacheInfo, collectionId, delegate(ref CacheManager.CachePolicy policy)
			{
				policy = cachePolicy;
				return idCollectionGetter();
			});
		}

		public static IEnumerable<TIndex> GetEntityIDCollection<TIndex>(CacheInfo cacheInfo, CacheManager.CachePolicy cachePolicy, SortedDictionary<TIndex, string> idToCacheKeyLookupMap, Func<ICollection<TIndex>, ICollection<TIndex>> getterByLookUps) where TIndex : struct, IComparable<TIndex>
		{
			if (cachePolicy == null)
			{
				return getterByLookUps(idToCacheKeyLookupMap.Select((KeyValuePair<TIndex, string> x) => x.Key).ToList());
			}
			return CacheManager.GetIDCollectionFromCache(cacheInfo, idToCacheKeyLookupMap, getterByLookUps);
		}

		public static T GetEntityCount<T>(CacheInfo cacheInfo, CacheManager.CachePolicy cachePolicy, string countId, GetCount<T> getter) where T : struct
		{
			return CacheManager.GetCountFromCache(cacheInfo, countId, delegate(ref CacheManager.CachePolicy policy)
			{
				policy = cachePolicy;
				return getter();
			});
		}

		public static T GetEntityDAL<T>(DbInfo dbInfo, BuildDAL<T> dalBuilder)
		{
			using (DbHelper dbHelper = DBHelperFactory.GetDBHelper(dbInfo.ConnectionString))
			{
				foreach (SqlParameter queryParameter in dbInfo.QueryParameters)
				{
					dbHelper.SQLParameters.Add(queryParameter);
				}
				SqlDataReader dataReader = dbHelper.ExecuteSQLReader(dbInfo.StoredProcedure, CommandType.StoredProcedure);
				try
				{
					return dalBuilder(dataReader);
				}
				finally
				{
					if (dataReader != null)
					{
						((IDisposable)dataReader).Dispose();
					}
				}
			}
		}

		public static TEntity GetOrCreateEntity<TIndex, TEntity>(CacheInfo cacheInfo, string entityIdLookup, GetOrCreate<TEntity> getterOrCreator) where TIndex : struct, IComparable<TIndex> where TEntity : class, ICacheableObject<TIndex>
		{
			return CacheManager.GetEntityFromCacheByIDLookup<TIndex, TEntity>(cacheInfo, entityIdLookup, () => getterOrCreator()) ?? getterOrCreator();
		}

		public static TEntity GetOrCreateEntityWithRemoteCache<TIndex, TEntity>(CacheInfo cacheInfo, string entityIdLookup, GetOrCreate<TEntity> getterOrCreator, Func<TIndex, TEntity> getterById) where TIndex : struct, IComparable<TIndex> where TEntity : class, ICacheableObject<TIndex>
		{
			TIndex zero = default(TIndex);
			LocalCache localCache = CacheManager.LocalCache;
			TIndex entityId;
			if (localCache.GetEntityIDFromLookupCache<TIndex>(cacheInfo, entityIdLookup, out entityId) && !entityId.Equals(zero))
			{
				return getterById(entityId);
			}
			ILookupCache remoteCache = LookupCacheFactory.GetInstance().GetLookupCache(cacheInfo);
			ValueTuple<bool, TIndex> entityIDFromLookupCache = remoteCache.GetEntityIDFromLookupCache<TIndex>(cacheInfo, entityIdLookup);
			bool idFound = entityIDFromLookupCache.Item1;
			entityId = entityIDFromLookupCache.Item2;
			TEntity entity;
			if (idFound && !entityId.Equals(zero))
			{
				entity = getterById(entityId);
				localCache.AddEntityIDToLookupCache(cacheInfo, entityIdLookup, entityId);
				return entity;
			}
			entity = getterOrCreator();
			remoteCache.AddEntityIDToLookupCache(cacheInfo, entityIdLookup, entity.ID);
			localCache.AddEntityIDToLookupCache(cacheInfo, entityIdLookup, entity.ID);
			return entity;
		}

		public static GetOrCreateDALWrapper<T> GetOrCreateEntityDAL<T>(DbInfo dbInfo, BuildDAL<T> dalBuilder) where T : class
		{
			//IL_0006: Unknown result type (might be due to invalid IL or missing references)
			//IL_000b: Unknown result type (might be due to invalid IL or missing references)
			//IL_0012: Expected O, but got Unknown
			//IL_0013: Expected O, but got Unknown
			SqlParameter val = new SqlParameter("@CreatedNewEntity", SqlDbType.Bit);
			((DbParameter)val).Direction = ParameterDirection.Output;
			SqlParameter createdNewEntityParameter = val;
			T dal;
			using (DbHelper dbHelper = new DbHelper(dbInfo.ConnectionString))
			{
				dbHelper.SQLParameters.Add(createdNewEntityParameter);
				foreach (SqlParameter queryParameter in dbInfo.QueryParameters)
				{
					dbHelper.SQLParameters.Add(queryParameter);
				}
				SqlDataReader dataReader = dbHelper.ExecuteSQLReader(dbInfo.StoredProcedure, CommandType.StoredProcedure);
				try
				{
					dal = dalBuilder(dataReader);
				}
				finally
				{
					if (dataReader != null)
					{
						((IDisposable)dataReader).Dispose();
					}
				}
			}
			if (dal == null)
			{
				throw new ApplicationException("GetOrCreate failure.");
			}
			return new GetOrCreateDALWrapper<T>((bool)((DbParameter)(object)createdNewEntityParameter).Value, dal);
		}

		public static void SaveEntity<T>(ICacheableObject<T> entity, InsertDAL dalInserter, UpdateDAL dalUpdater) where T : IComparable
		{
			if (entity.ID.CompareTo(default(T)) == 0)
			{
				CreateEntity(entity, dalInserter);
			}
			else
			{
				UpdateEntity(entity, dalUpdater);
			}
		}

		public static void SaveEntityWithRemoteCache<T>(ICacheableObject<T> entity, InsertDAL dalInserter, UpdateDAL dalUpdater) where T : IComparable
		{
			if (entity.ID.CompareTo(default(T)) == 0)
			{
				CreateEntity(entity, dalInserter);
			}
			else
			{
				UpdateEntity(entity, dalUpdater);
			}
			IEnumerable<string> enumerable = entity.BuildEntityIDLookups();
			ILookupCache remoteCache = LookupCacheFactory.GetInstance().GetLookupCache(entity.CacheInfo);
			foreach (string idLookup in enumerable)
			{
				remoteCache.AddEntityIDToLookupCache(entity.CacheInfo, idLookup, entity.ID);
			}
		}

		public static void CreateEntity<T>(ICacheableObject<T> entity, InsertDAL dalInserter)
		{
			dalInserter();
			CacheManager.ProcessEntityChange(entity, StateChangeEventType.Creation);
			AddEntityIdLookupsToCache(entity);
		}

		public static void CreateEntity<T>(Func<ICacheableObject<T>> creator)
		{
			ICacheableObject<T> entity = creator();
			CacheManager.ProcessEntityChange(entity, StateChangeEventType.Modification);
			AddEntityIdLookupsToCache(entity);
		}

		public static void UpdateEntity<T>(ICacheableObject<T> entity, UpdateDAL dalUpdater)
		{
			dalUpdater();
			CacheManager.ProcessEntityChange(entity, StateChangeEventType.Modification);
			AddEntityIdLookupsToCache(entity);
		}

		public static void UpdateEntity<T>(Func<ICacheableObject<T>> updater)
		{
			ICacheableObject<T> entity = updater();
			CacheManager.ProcessEntityChange(entity, StateChangeEventType.Modification);
			AddEntityIdLookupsToCache(entity);
		}

		public static TEntity MustGet<TIndex, TEntity>(TIndex id, Func<TIndex, TEntity> getter)
		{
			TEntity entity = getter(id);
			if (entity != null)
			{
				return entity;
			}
			throw new DataIntegrityException(string.Format("Could not retrieve {0} with ID={1}", typeof(TEntity).FullName, id));
		}

		public static TEntity MustGet<TIndex, TEntity>(TIndex? id, Func<TIndex, TEntity> getter) where TIndex : struct
		{
			if (!id.HasValue)
			{
				return default(TEntity);
			}
			return MustGet(id.Value, getter);
		}

		private static void AddEntityIdLookupsToCache<T>(ICacheableObject<T> entity)
		{
			foreach (string idLookup in entity.BuildEntityIDLookups())
			{
				CacheManager.AddEntityIDToLookupCache(entity.CacheInfo, idLookup, entity.ID);
			}
		}

		private static void AddEntityAndIdLookupsToCache<T>(ICacheableObject<T> entity)
		{
			CacheManager.AddEntityToCache(entity);
			AddEntityIdLookupsToCache(entity);
		}

		private static void AddNullEntityIDToLookupCache(string entityIdLookup, CacheInfo cacheInfo)
		{
			if (!string.IsNullOrEmpty(entityIdLookup))
			{
				CacheManager.AddNullEntityIDToLookupCache(cacheInfo, entityIdLookup);
			}
		}

		private static string GetTableTypeName<TIndex>()
		{
			Type parameterType = typeof(TIndex);
			if (parameterType.IsValueType)
			{
				if (parameterType == typeof(long))
				{
					return "dbo.BigIntList";
				}
				if (parameterType == typeof(int))
				{
					return "dbo.IntList";
				}
				if (parameterType == typeof(short))
				{
					return "dbo.SmallIntList";
				}
				if (parameterType == typeof(byte))
				{
					return "dbo.TinyIntList";
				}
			}
			throw new ArgumentException("Invalid table type for Multi-Get: " + parameterType);
		}
	}
}
