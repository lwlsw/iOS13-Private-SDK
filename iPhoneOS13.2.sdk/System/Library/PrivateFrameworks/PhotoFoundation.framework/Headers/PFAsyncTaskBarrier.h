//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSCondition, NSString;

@interface PFAsyncTaskBarrier : NSObject
{
    NSString *_label;
    long long _remainingTaskCount;
    id /* CDUnknownBlockType */ _completionBlock;
    NSArray *_errors;
    NSCondition *_conditionLock;
}

@property(readonly) NSCondition *conditionLock; // @synthesize conditionLock=_conditionLock;
@property(retain) NSArray *errors; // @synthesize errors=_errors;
@property(readonly, copy) id /* CDUnknownBlockType */ completionBlock; // @synthesize completionBlock=_completionBlock;
@property(readonly) long long remainingTaskCount; // @synthesize remainingTaskCount=_remainingTaskCount;
@property(readonly) NSString *label; // @synthesize label=_label;
// - (void).cxx_destruct;
- (id)description;
- (void)executeCriticalBlock:(CDUnknownBlockType)arg1;
- (void)changeRemainingTaskCount:(long long)arg1;
- (void)taskCompletedWithErrors:(id)arg1 criticalBlock:(CDUnknownBlockType)arg2;
- (void)taskCompletedWithErrors:(id)arg1;
- (void)taskCompletedWithError:(id)arg1 criticalBlock:(CDUnknownBlockType)arg2;
- (void)taskCompletedWithError:(id)arg1;
- (void)taskCompletedWithCriticalBlock:(CDUnknownBlockType)arg1;
- (void)taskCompleted;
- (void)waitUntilCompletedOrError;
- (void)waitUntilCompleted;
- (id)initWithLabel:(id)arg1 taskCount:(long long)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (id)initWithLabel:(id)arg1 taskCount:(long long)arg2;

@end

