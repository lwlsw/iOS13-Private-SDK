//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <RunningBoardServices/RBSConnectionServiceDelegate-Protocol.h>

@class NSMutableSet, RBSConnection;
@protocol OS_dispatch_queue, RBSServiceDelegate;

@interface RBSService : NSObject <RBSConnectionServiceDelegate>
{
    id <RBSServiceDelegate> _delegate;
//     struct os_unfair_lock_s _lock;
    NSMutableSet *_inheritances;
    RBSConnection *_connection;
    NSObject<OS_dispatch_queue> *_calloutQueue;
}

// - (void).cxx_destruct;
- (void)willTerminateProcessWithAcknowledgement:(CDUnknownBlockType)arg1;
- (void)didLoseInheritances:(id)arg1;
- (void)didReceiveInheritances:(id)arg1;
- (id)inheritances;
- (void)dealloc;
- (id)_init;
- (id)init;

@end

