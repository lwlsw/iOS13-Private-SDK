//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <HealthDaemon/HDDiagnosticObject-Protocol.h>

@class NSMutableDictionary, NSString;

@interface HDDatabaseValueCache : NSObject <HDDiagnosticObject>
{
    NSMutableDictionary *_cache;
    NSString *_threadLocalKey;
    long long _cacheScope;
//    struct os_unfair_lock_s _lock;
   struct {
        long long faultCount;
        long long lookupCount;
        long long resetCount;
    } _statistics;
    NSString *_name;
}

@property(readonly, copy) NSString *name; // @synthesize name=_name;
// - (void).cxx_destruct;
- (id)diagnosticDescription;
- (void)_commitTransactionStorage:(id)arg1;
- (id)_transactionStorageWithDatabase:(id)arg1 createIfNecessary:(BOOL)arg2;
- (void)removeAllObjectsWithDatabase:(id)arg1;
- (void)removeObjectForKey:(id)arg1 database:(id)arg2;
- (void)_lock_removeAllObjectsWithDatabase:(id)arg1;
- (void)_lock_storeObject:(id)arg1 forKey:(id)arg2 database:(id)arg3;
- (id)_lock_objectForKey:(id)arg1 database:(id)arg2;
- (id)objectForKey:(id)arg1;
- (id)fetchObjectForKey:(id)arg1 database:(id)arg2 error:(id )arg3 faultHandler:(CDUnknownBlockType)arg4;
// @property(readonly) CDStruct_2ec95fd7 statistics;
@property(readonly) long long cacheScope;
- (void)dealloc;
- (id)initWithName:(id)arg1 cacheScope:(long long)arg2;
- (id)initWithName:(id)arg1;
- (id)init;

@end

