//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <FrontBoard/FBApplicationDataStoreRepository-Protocol.h>

@class BSSqliteDatabaseConnection, NSURL;
@protocol FBApplicationDataStoreRepositoryDelegate, FBApplicationDataStoreRepositoryReadingDelegate, OS_dispatch_queue;

@interface FBSqliteApplicationDataStoreRepository : NSObject <FBApplicationDataStoreRepository>
{
    NSURL *_storeURL;
    id <FBApplicationDataStoreRepositoryDelegate> _delegate;
    NSObject<OS_dispatch_queue> *_dbQueue;
    BSSqliteDatabaseConnection *_dbQueue_dbConnection;
    NSUInteger _dbQueue_batchDepth;
    int _dbQueue_firstUnlockToken;
    NSObject<OS_dispatch_queue> *_calloutQueue;
}

+ (id)_generateParameterizedQuery:(id)arg1 forKeyList:(id)arg2 outBindings:(id )arg3;
+ (id)_objectForResultRow:(id)arg1 index:(NSUInteger)arg2;
+ (BOOL)_objectRequiresSerialization:(id)arg1;
// - (void).cxx_destruct;
- (BOOL)_inAlternateSystemApp;
- (void)_dbQueue_createTables;
- (long long)_dbQueue_databaseVersion;
- (void)_dbQueue_performWithSavepoint:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (BOOL)_dbQueue_executeStatement:(id)arg1 bindings:(id)arg2 resultRowHandler:(CDUnknownBlockType)arg3;
- (BOOL)_dbQueue_executeStatement:(id)arg1 bindings:(id)arg2 resultRowHandler:(CDUnknownBlockType)arg3 error:(out id )arg4;
- (void)_dbQueue_notifyDelegateOfLateLoad;
- (void)_dbQueue_notifyDelegateOfStoreInvalidationForIdentifier:(id)arg1;
- (void)_dbQueue_notifyDelegateOfChangeForKeys:(id)arg1 application:(id)arg2;
- (id)_dbQueue_objectsForKeys:(id)arg1;
- (id)_dbQueue_keysForApplication:(id)arg1;
- (id)_dbQueue_applicationIdentifiersWithState;
- (BOOL)_dbQueue_containsKey:(id)arg1 forApplication:(id)arg2;
- (id)_dbQueue_objectForKey:(id)arg1 forApplication:(id)arg2;
- (BOOL)_dbQueue_loadDatabase;
- (BOOL)_dbQueue_truncateDamagedDatabase;
- (BOOL)_dbQueue_tryPreserveDamagedDatabase;
- (BOOL)_preserveFileAtURL:(id)arg1;
- (id)urlByAppendingString:(id)arg1 toURL:(id)arg2;
- (id)_dbQueue_openDatabase;
- (BOOL)_dbQueue_databaseIntegrityCheck;
- (void)_dbQueue_load;
- (BOOL)_isEligibleForSaving:(id)arg1;
- (void)endBatchedUpdate;
- (void)beginBatchedUpdate;
- (void)flushSynchronously;
- (void)removeAllObjectsForApplication:(id)arg1;
- (void)removeObjectsForKeys:(id)arg1 forApplication:(id)arg2;
- (void)removeObjectForKey:(id)arg1 forApplication:(id)arg2;
- (void)setObject:(id)arg1 forKey:(id)arg2 forApplication:(id)arg3;
- (void)close;
- (id)allObjectsForKeys:(id)arg1;
- (id)objectForKey:(id)arg1 forApplication:(id)arg2;
- (BOOL)containsKey:(id)arg1 forApplication:(id)arg2;
- (id)keysForApplication:(id)arg1;
- (id)applicationIdentifiersWithState;
@property(nonatomic) __weak id <FBApplicationDataStoreRepositoryReadingDelegate> delegate;
- (void)dealloc;
- (id)initWithStorePath:(id)arg1;

@end

