//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSXPCConnection;
@protocol OS_dispatch_queue;

@interface REUpNextSiriClient : NSObject
{
    NSXPCConnection *_connection;
    NSObject<OS_dispatch_queue> *_queue;
}

// - (void).cxx_destruct;
- (void)_performOnRemoteObject:(CDUnknownBlockType)arg1;
- (void)completedRequestWithDomain:(id)arg1;
- (void)dealloc;
- (id)init;

@end

