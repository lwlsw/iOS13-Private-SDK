//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class NSObject, NSProtocolChecker;
@protocol OS_dispatch_queue;

@interface IDSDaemonControllerForwarder : NSProxy
{
    NSProtocolChecker *_protocol;
    id /* CDUnknownBlockType */ _completion;
    NSObject<OS_dispatch_queue> *_ivarQueue;
    NSObject<OS_dispatch_queue> *_remoteMessageQueue;
    int _priority;
}

@property(nonatomic) int priority; // @synthesize priority=_priority;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *remoteMessageQueue; // @synthesize remoteMessageQueue=_remoteMessageQueue;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *ivarQueue; // @synthesize ivarQueue=_ivarQueue;
@property(readonly, nonatomic) id /* CDUnknownBlockType */ completion; // @synthesize completion=_completion;
@property(readonly, nonatomic) NSProtocolChecker *protocol; // @synthesize protocol=_protocol;
// - (void).cxx_destruct;
- (void)forwardInvocation:(id)arg1;
- (id)methodSignatureForSelector:(SEL)arg1;
- (id)initWithProtocol:(id)arg1 ivarQueue:(id)arg2 remoteMessageQueue:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (id)initWithProtocol:(id)arg1 ivarQueue:(id)arg2 remoteMessageQueue:(id)arg3;

@end

