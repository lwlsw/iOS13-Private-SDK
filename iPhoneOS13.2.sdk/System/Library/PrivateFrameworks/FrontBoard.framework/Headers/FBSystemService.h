//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <FrontBoard/BSServiceConnectionListenerDelegate-Protocol.h>
#import <FrontBoard/FBSOpenApplicationServiceServerInterface-Protocol.h>

@class BSServiceConnectionListener, FBSSerialQueue, FBServiceFacilityServer, NSString;
@protocol FBSApplicationInfoProvider, FBSystemServiceDelegate;

@interface FBSystemService : NSObject <BSServiceConnectionListenerDelegate, FBSOpenApplicationServiceServerInterface>
{
    FBSSerialQueue *_queue;
    BSServiceConnectionListener *_legacyOpenServiceListener;
    int _pendingExit;
    id <FBSApplicationInfoProvider> _lock_defaultInfoProvider;
    struct os_unfair_lock_s _defaultInfoProviderLock;
    id <FBSystemServiceDelegate> _delegate;
    FBServiceFacilityServer *_server;
}

+ (id)sharedInstance;
@property(retain, nonatomic) FBServiceFacilityServer *server; // @synthesize server=_server;
@property(nonatomic) __weak id <FBSystemServiceDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) FBSSerialQueue *queue; // @synthesize queue=_queue;
- (unsigned long long)_mapShutdownOptionsToOptions:(id)arg1;
- (_Bool)_isWhitelistedLaunchSuspendedApp:(id)arg1;
- (_Bool)_isTrustedRequest:(id)arg1 forCaller:(id)arg2 fromClient:(id)arg3 forApplication:(id)arg4 withOptions:(id)arg5 fatalError:(out id *)arg6;
- (void)_performExitTasksForRelaunch:(_Bool)arg1;
- (void)_setInfoProvider;
- (oneway void)openApplication:(id)arg1 withOptions:(id)arg2 originator:(id)arg3 requestID:(id)arg4 completion:(id /* block */)arg5;
- (void)canOpenApplication:(id)arg1 completion:(id /* block */)arg2;
- (void)listener:(id)arg1 didReceiveConnection:(id)arg2 withContext:(id)arg3;
- (void)handleActions:(id)arg1 source:(id)arg2 withResult:(id /* block */)arg3;
- (void)isPasscodeLockedOrBlockedWithResult:(id /* block */)arg1;
- (void)_reallyActivateApplication:(id)arg1 requestID:(id)arg2 options:(id)arg3 source:(id)arg4 originalSource:(id)arg5 isTrusted:(_Bool)arg6 sequenceNumber:(unsigned long long)arg7 cacheGUID:(id)arg8 ourSequenceNumber:(unsigned long long)arg9 ourCacheGUID:(id)arg10 withResult:(id /* block */)arg11;
- (_Bool)_shouldPendRequestForClientSequenceNumber:(unsigned long long)arg1 clientCacheGUID:(id)arg2 ourSequenceNumber:(unsigned long long)arg3 ourCacheGUID:(id)arg4;
- (void)_activateApplication:(id)arg1 requestID:(id)arg2 options:(id)arg3 source:(id)arg4 originalSource:(id)arg5 withResult:(id /* block */)arg6;
- (void)activateApplication:(id)arg1 requestID:(id)arg2 options:(id)arg3 source:(id)arg4 originalSource:(id)arg5 withResult:(id /* block */)arg6;
- (void)terminateApplicationGroup:(long long)arg1 forReason:(long long)arg2 andReport:(_Bool)arg3 withDescription:(id)arg4 source:(id)arg5 completion:(id /* block */)arg6;
- (void)terminateApplication:(id)arg1 forReason:(long long)arg2 andReport:(_Bool)arg3 withDescription:(id)arg4 source:(id)arg5 completion:(id /* block */)arg6;
- (void)_terminateProcesses:(id)arg1 forReason:(long long)arg2 andReport:(_Bool)arg3 withDescription:(id)arg4 completion:(id /* block */)arg5;
- (void)exitAndRelaunch:(_Bool)arg1 withOptions:(unsigned long long)arg2;
- (void)setPendingExit:(_Bool)arg1;
@property(readonly, getter=isPendingExit) _Bool pendingExit;
@property(readonly, nonatomic) id <FBSApplicationInfoProvider> _applicationInfoProvider;
- (void)prepareDisplaysForExit;
- (void)setSystemIdleSleepDisabled:(_Bool)arg1 forReason:(id)arg2;
- (void)prepareForExitAndRelaunch:(_Bool)arg1;
- (void)exitAndRelaunch:(_Bool)arg1;
- (void)shutdownWithOptions:(unsigned long long)arg1;
- (void)shutdownWithOptions:(id)arg1 origin:(id)arg2;
- (void)shutdownUsingOptions:(id)arg1;
- (void)shutdownWithOptions:(unsigned long long)arg1 forSource:(long long)arg2;
- (void)shutdownAndReboot:(_Bool)arg1;
- (void)dealloc;
- (id)initWithQueue:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end
