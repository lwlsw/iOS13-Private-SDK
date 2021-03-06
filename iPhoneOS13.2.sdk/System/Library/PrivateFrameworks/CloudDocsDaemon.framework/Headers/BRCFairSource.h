//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class BRCFairScheduler, NSString;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface BRCFairSource : NSObject
{
    NSUInteger _schedulerBitIndex;
    NSString *_name;
    BRCFairScheduler *_scheduler;
    int _suspendCount;
    BOOL _cancelled;
    BOOL _signaled;
    NSObject<OS_dispatch_queue> *_queue;
    id /* CDUnknownBlockType */ _eventHandler;
}

@property(copy, nonatomic) id /* CDUnknownBlockType */ eventHandler; // @synthesize eventHandler=_eventHandler;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
// - (void).cxx_destruct;
- (void)resume;
- (void)suspend;
- (void)cancel;
- (void)_runEventHandler;
- (void)signal;
- (id)description;
- (id)initWithName:(id)arg1 scheduler:(id)arg2;

@end

