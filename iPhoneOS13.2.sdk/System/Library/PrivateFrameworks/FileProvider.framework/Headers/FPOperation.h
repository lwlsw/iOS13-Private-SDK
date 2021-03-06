//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


#import <FileProvider/FPOperationClient-Protocol.h>

@class NSObject;
@protocol FPCancellable, OS_dispatch_queue;

@interface FPOperation : NSOperation <FPOperationClient>
{
    id <FPCancellable> _remoteOperation;
    NSObject<OS_dispatch_queue> *_queue;
    unsigned char _uuid[16];
    id _executionTransaction;
    BOOL _finished;
    id /* CDUnknownBlockType */ _finishedBlock;
}

@property(copy) id /* CDUnknownBlockType */ finishedBlock; // @synthesize finishedBlock=_finishedBlock;
@property(retain, nonatomic) id <FPCancellable> remoteOperation; // @synthesize remoteOperation=_remoteOperation;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *callbackQueue; // @synthesize callbackQueue=_queue;
@property(readonly, getter=isFinished) BOOL finished; // @synthesize finished=_finished;
// - (void).cxx_destruct;
- (void)operationDidProgressWithInfo:(id)arg1 error:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)invalidate;
- (void)setCancellationHandler:(id)arg1;
- (void)_setRemoteCancellationHandler:(id)arg1;
- (void)resetRemoteOperation;
- (void)finishWithResult:(id)arg1 error:(id)arg2;
- (void)completedWithResult:(id)arg1 error:(id)arg2;
- (BOOL)finishIfCancelled;
- (BOOL)_finishIfCancelled;
- (void)cancel;
- (void)start;
- (void)_setExecuting:(BOOL)arg1;
@property(readonly, getter=isExecuting) BOOL executing;
- (void)_setFinished:(BOOL)arg1;
- (void)dealloc;
- (id)description;
- (id)proxifiedDescription;
- (id)operationDescription;
- (id)init;

@end

