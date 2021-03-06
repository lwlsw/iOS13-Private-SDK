//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSCondition, NSThread, TSUPointerKeyDictionary, TSURetainedPointerKeyDictionary;
@protocol TSUiOSMemoryWarningFlushable;

__attribute__((visibility("hidden")))
@interface TSUFlushingManager : NSObject
{
    TSURetainedPointerKeyDictionary *_objects;
//    struct set<TSUFlushableObjectInfo *, TSUFlushableObjectInfoPointerFlushingOrderLess, std::__1::allocator<TSUFlushableObjectInfo *>> _sortedObjects;
//    struct set<TSUFlushableObjectInfo *, TSUFlushableObjectInfoPointerTimeStampLess, std::__1::allocator<TSUFlushableObjectInfo *>> _sortedNewObjects;
    TSUPointerKeyDictionary *_inactiveObjects;
    unsigned int _clock;
    BOOL _alwaysFlushing;
    BOOL _stopFlushing;
    BOOL _stopFlushingWhenQueueEmpty;
    BOOL _isFlushing;
    id <TSUiOSMemoryWarningFlushable> _flushingObject;
    NSCondition *_cond;
    NSCondition *_isFlushingCond;
    NSThread *_bgThread;
    NSUInteger _backgroundTransitionTaskId;
    NSUInteger _activeBgThreadTask;
}

+ (id)allocWithZone:(_NSZone )arg1;
+ (id)sharedManager;
+ (id)_singletonAlloc;
- (void)_bgThreadInactive;
- (void)_bgThreadActive;
- (void)_bgTaskFinished;
- (void)_bgTaskStarted;
- (void)_didUseObject:(id)arg1;
- (BOOL)controlsInactiveObject:(id)arg1;
- (BOOL)controlsActiveObject:(id)arg1;
- (void)advanceClock;
- (void)transferNewObjects;
//  (void)insertObjectInfo:(struct TSUFlushableObjectInfo )arg1;
//  (struct TSUFlushableObjectInfo )eraseInfoForObject:(id)arg1;
//  (BOOL)isNewObject:(struct TSUFlushableObjectInfo )arg1;
- (void)_backgroundThread:(id)arg1;
- (void)_stopFlushingObjects;
- (void)_startFlushingObjects;
- (void)_flushAllEligible;
- (void)didReceiveMemoryWarning;
- (void)willEnterForeground;
- (void)didEnterBackground;
- (void)safeToFlush:(id)arg1 wasAccessed:(BOOL)arg2;
- (void)unsafeToFlush:(id)arg1;
- (void)doneWithObject:(id)arg1;
- (void)removeObject:(id)arg1;
- (void)addObject:(id)arg1;
- (void)dealloc;
- (id)init;
- (id)autorelease;
- (oneway void)release;
- (NSUInteger)retainCount;
- (id)retain;
// - (id)copyWithZone:(_NSZone )arg1;

@end

