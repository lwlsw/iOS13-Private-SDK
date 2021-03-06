//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class SGSqlEntityStore;
@protocol OS_dispatch_queue;

@interface SGDSpotlightCommander : NSObject
{
    id _deviceStateToken;
    SGSqlEntityStore *_store;
    NSObject<OS_dispatch_queue> *_serialQueue;
}

+ (id)sharedInstance;
// - (void).cxx_destruct;
- (void)_issueCommand:(id)arg1;
- (void)_reimportFromBundleId:(id)arg1 protectionClasses:(id)arg2 identifiers:(id)arg3;
- (void)_executeReimportOfIdentifiers:(id)arg1;
- (id)_reimportQueryForPersonHandle:(id)arg1 startDate:(id)arg2 endDate:(id)arg3 requestId:(NSUInteger)arg4;
- (id)_protectionClasses;
- (void)_attemptToProcessRequests;
- (BOOL)_unlocked;
- (BOOL)_locked;
- (void)_unregisterForLockStateChange;
- (void)_registerForLockStateChange;
- (void)requestReimportForHistoricalDataRequest:(id)arg1;
- (void)requestReimportFromIdentifier:(id)arg1 forPersonHandle:(id)arg2 startDate:(id)arg3 endDate:(id)arg4;
- (id)init;
- (id)queryForPersonHandle:(id)arg1 startDate:(id)arg2 endDate:(id)arg3 contentTypes:(id)arg4;

@end

