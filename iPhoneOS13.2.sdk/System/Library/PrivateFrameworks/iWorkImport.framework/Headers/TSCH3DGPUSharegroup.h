//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <iWorkImport/TSCH3DSharegroup.h>

@class NSRecursiveLock, TSCH3DContext;

__attribute__((visibility("hidden")))
@interface TSCH3DGPUSharegroup : TSCH3DSharegroup
{
    TSCH3DContext *mGPUContext;
    long long mLockLevel;
    NSRecursiveLock *mLock;
}

+ (void)deleteSharegroupForToken:(id)arg1;
+ (id)sharegroupForToken:(id)arg1;
+ (void)flushSharegroupForToken:(id)arg1;
+ (void)removeInterestForSharegroupTokens:(id)arg1;
+ (void)addInterestForSharegroupTokens:(id)arg1;
+ (BOOL)hasInterestForSharegroupToken:(id)arg1;
// - (void).cxx_destruct;
- (void)unlock;
- (void)lock;
- (id)GPUContext;
- (void)p_forceFlushResourceSet:(id)arg1;
- (void)p_flushPurgeableResourceSet;
- (void)garbageCollectAllUnretainedResources;
- (void)garbageCollectResources:(id)arg1;
- (void)p_owningThreadWillChange;
- (void)p_clearContextInCurrentThread;
- (void)p_flushCache;
- (id)targetThreadForFlushing;
- (BOOL)debug_isInteractive;
- (id)description;
- (id)initWithOwningThread:(id)arg1 token:(id)arg2;

@end

