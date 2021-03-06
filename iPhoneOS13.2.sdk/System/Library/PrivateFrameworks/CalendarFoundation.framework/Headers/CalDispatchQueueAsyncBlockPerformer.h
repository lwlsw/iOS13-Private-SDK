//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CalendarFoundation/CalAsyncBlockPerformer-Protocol.h>

@protocol OS_dispatch_queue;

@interface CalDispatchQueueAsyncBlockPerformer : NSObject <CalAsyncBlockPerformer>
{
    NSObject<OS_dispatch_queue> *_queue;
}

@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
// - (void).cxx_destruct;
- (id)performAfterDelay:(double)arg1 block:(CDUnknownBlockType)arg2;
- (id)performAsync:(CDUnknownBlockType)arg1;
- (id)initWithQueue:(id)arg1;

@end

