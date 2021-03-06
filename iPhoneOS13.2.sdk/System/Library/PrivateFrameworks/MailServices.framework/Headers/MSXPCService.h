//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSLock, NSXPCConnection, NSXPCInterface;

@interface MSXPCService : NSObject
{
    NSLock *_lock;
    NSXPCInterface *_remoteObjectInterface;
    NSXPCConnection *_connection;
    BOOL _shouldLaunchMobileMail;
}

+ (id)remoteProxyForXPCInterface:(id)arg1 shouldLaunchMobileMail:(BOOL)arg2 connectionErrorHandler:(CDUnknownBlockType)arg3;
+ (id)remoteProxyForXPCInterface:(id)arg1 connectionErrorHandler:(CDUnknownBlockType)arg2;
@property(nonatomic) BOOL shouldLaunchMobileMail; // @synthesize shouldLaunchMobileMail=_shouldLaunchMobileMail;
// - (void).cxx_destruct;
- (id)remoteObjectProxyWithErrorHandler:(CDUnknownBlockType)arg1;
- (id)remoteObjectProxy;
- (id)newConnectionForInterface:(id)arg1;
- (id)connection;
- (void)dealloc;
- (id)initWithRemoteObjectInterface:(id)arg1;
- (id)init;

@end

