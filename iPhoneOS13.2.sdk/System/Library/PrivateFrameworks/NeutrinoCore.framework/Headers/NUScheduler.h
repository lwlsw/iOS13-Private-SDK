//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableSet, NUJobQueue, NUScheduledQueue;
@protocol OS_dispatch_queue;

@interface NUScheduler : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;
    NUJobQueue *_prepareQueue;
    NUJobQueue *_renderQueue;
    NUJobQueue *_completeQueue;
    NSMutableSet *_scheduledContextWakeups;
    NUScheduledQueue *_rateLimiterQueue;
}

+ (id)sharedScheduler;
- (id)debugDescription;
- (void)cancelJobsForRenderContext:(id)arg1;
- (void)_enqueueRenderJob:(id)arg1 toStage:(long long)arg2;
- (void)_resumeRenderJob:(id)arg1;
- (void)_enqueueDependentJobsForRenderJob:(id)arg1;
- (void)_observeRenderJob:(id)arg1 withGroup:(id)arg2;
- (void)_scheduleRateLimitWakeupForContext:(id)arg1;
- (void)_wakeupRateLimitJobForContext:(id)arg1;
- (void)_enqueueJobsForRequests:(id)arg1 withGroup:(id)arg2;
- (id)_queueForStage:(long long)arg1;
- (void)submitRequests:(id)arg1 withGroup:(id)arg2;
- (id)init;
- (_Bool)_coalesceJobs:(id)arg1;
- (_Bool)_prepareNewJob:(id)arg1 at:(unsigned long long)arg2;

@end
