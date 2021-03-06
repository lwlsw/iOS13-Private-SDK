//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface AXDispatchTimer : NSObject
{
    BOOL _active;
    BOOL _pending;
    BOOL _cancelled;
    BOOL _automaticallyCancelPendingBlockUponSchedulingNewBlock;
    BOOL _useWallTime;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    NSObject<OS_dispatch_source> *_dispatchTimer;
    NSString *_label;
    id /* CDUnknownBlockType */ _processBlock;
    id /* CDUnknownBlockType */ _cancelBlock;
}

@property(copy, nonatomic) id /* CDUnknownBlockType */ cancelBlock; // @synthesize cancelBlock=_cancelBlock;
@property(copy, nonatomic) id /* CDUnknownBlockType */ processBlock; // @synthesize processBlock=_processBlock;
@property(retain, nonatomic) NSString *label; // @synthesize label=_label;
@property(retain, nonatomic) NSObject<OS_dispatch_source> *dispatchTimer; // @synthesize dispatchTimer=_dispatchTimer;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue; // @synthesize dispatchQueue=_dispatchQueue;
@property(nonatomic) BOOL useWallTime; // @synthesize useWallTime=_useWallTime;
@property(nonatomic) BOOL automaticallyCancelPendingBlockUponSchedulingNewBlock; // @synthesize automaticallyCancelPendingBlockUponSchedulingNewBlock=_automaticallyCancelPendingBlockUponSchedulingNewBlock;
@property(nonatomic, getter=isCancelled) BOOL cancelled; // @synthesize cancelled=_cancelled;
@property(nonatomic, getter=isPending) BOOL pending; // @synthesize pending=_pending;
@property(nonatomic, getter=isActive) BOOL active; // @synthesize active=_active;
// - (void).cxx_destruct;
- (id)description;
- (void)cancel;
- (void)_reallyCancel;
- (void)afterDelay:(double)arg1 processBlock:(CDUnknownBlockType)arg2 cancelBlock:(CDUnknownBlockType)arg3;
- (void)afterDelay:(double)arg1 processBlock:(CDUnknownBlockType)arg2;
- (void)_afterDelay:(double)arg1 processBlock:(CDUnknownBlockType)arg2 cancelBlock:(CDUnknownBlockType)arg3;
- (void)dealloc;
- (id)initWithTargetSerialQueue:(id)arg1;
- (id)init;

@end

