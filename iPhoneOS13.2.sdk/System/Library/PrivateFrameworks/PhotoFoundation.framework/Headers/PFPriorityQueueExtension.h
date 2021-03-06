//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotoFoundation/PFDispatchQueueExtension.h>

#import <PhotoFoundation/PFPriorityEnqueuing-Protocol.h>

@class NSArray, NSMutableArray, PFDispatchQueue, PFSerialQueue;

@interface PFPriorityQueueExtension : PFDispatchQueueExtension <PFPriorityEnqueuing>
{
    PFDispatchQueue *_executionQueue;
    PFDispatchQueue *_serializer;
    NSUInteger _lastScheduledPriority;
    NSArray *_priorityLevels;
    NSMutableArray *_emptyNotifications;
    NSUInteger _scheduledCount;
    PFSerialQueue *_schedulingQueue;
    NSUInteger _qosBlockCount[6];
    BOOL _queueSuspended;
    NSUInteger _schedulingSuspendCount;
    BOOL _performsConcurrentScheduling;
}

// - (void).cxx_destruct;
- (void)resumeScheduling;
- (void)suspendScheduling;
- (void)queueWillResume:(id)arg1;
- (void)queueDidSuspend:(id)arg1;
- (void)queue:(id)arg1 skippedExecuting:(id)arg2;
- (void)queue:(id)arg1 didExecute:(id)arg2;
- (id)queue:(id)arg1 receivedDispatchAsync:(CDUnknownBlockType)arg2;
- (void)enqueueEmptyNotification:(CDUnknownBlockType)arg1;
- (void)enqueueWithPriority:(NSUInteger)arg1 block:(CDUnknownBlockType)arg2;
- (void)enqueueWithPriority:(NSUInteger)arg1 qos:(unsigned int)arg2 block:(CDUnknownBlockType)arg3;
- (void)_scheduleNextBlock;
- (void)_scheduleBlock:(id)arg1;
- (NSUInteger)schedulingLimitForPriorityLevel:(NSUInteger)arg1;
- (void)installOnQueue:(id)arg1;
- (void)dealloc;
- (id)initWithPriorityLevels:(NSUInteger)arg1 concurrentScheduling:(BOOL)arg2;
- (id)init;

@end

