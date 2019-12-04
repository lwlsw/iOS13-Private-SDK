//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSXPCConnection;
@protocol OS_dispatch_queue;

@interface DMFPolicyMonitor : NSObject
{
    NSXPCConnection *_xpcConnection;
    NSObject<OS_dispatch_queue> *_registrationCallbackQueue;
    NSMutableDictionary *_notificationTokensByPolicyMonitorIdentifier;
}

+ (id)remoteInterface;
+ (id)policyMonitor;
@property(readonly, nonatomic) NSMutableDictionary *notificationTokensByPolicyMonitorIdentifier; // @synthesize notificationTokensByPolicyMonitorIdentifier=_notificationTokensByPolicyMonitorIdentifier;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *registrationCallbackQueue; // @synthesize registrationCallbackQueue=_registrationCallbackQueue;
@property(readonly, nonatomic) NSXPCConnection *xpcConnection; // @synthesize xpcConnection=_xpcConnection;
- (id)requestPoliciesForTypes:(id)arg1 withError:(id *)arg2;
- (void)requestPoliciesForTypes:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)addRegistration:(id)arg1 forPolicyMonitorIdentifier:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)invalidatePolicyMonitor:(id)arg1;
- (void)dealloc;
- (id)initWithXPCConnection:(id)arg1;
- (id)init;

@end
