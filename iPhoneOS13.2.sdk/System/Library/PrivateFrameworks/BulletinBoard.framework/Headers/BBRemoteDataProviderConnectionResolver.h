//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <BulletinBoard/BBDataProviderConnectionCheckinServer-Protocol.h>
#import <BulletinBoard/BBDataProviderStore-Protocol.h>
#import <BulletinBoard/BBRemoteDataProviderStoreDelegate-Protocol.h>


@class BKSApplicationStateMonitor, NSMutableDictionary, NSString, NSXPCListener;
@protocol BBDataProviderStoreDelegate, OS_dispatch_queue;

@interface BBRemoteDataProviderConnectionResolver : NSObject <BBDataProviderConnectionCheckinServer, BBRemoteDataProviderStoreDelegate, NSXPCListenerDelegate, BBDataProviderStore>
{
    NSXPCListener *_listener;
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_queue> *_registerQueue;
    NSMutableDictionary *_dataProviderConnectionsByService;
    NSMutableDictionary *_dataProviderConnectionsBySectionID;
    NSMutableDictionary *_dataProviderConnectionsByUniversalSectionID;
    NSMutableDictionary *_xpcConnectionsByService;
    id <BBDataProviderStoreDelegate> _delegate;
    int _listeningToken;
    BKSApplicationStateMonitor *_appStateMonitor;
}

+ (id)xpcInterface;
+ (id)resolverWithDelegate:(id)arg1;
- (void)dataProviderStore:(id)arg1 didAddParentSectionFactory:(id)arg2;
- (void)dataProviderStore:(id)arg1 didRemoveDataProvider:(id)arg2;
- (void)dataProviderStore:(id)arg1 didAddDataProvider:(id)arg2 performMigration:(_Bool)arg3 completion:(id /* block */)arg4;
- (void)performBlockOnDataProviders:(id /* block */)arg1;
- (void)loadAllDataProviders;
- (void)removeDataProvider:(id)arg1;
- (id)dataProviderForUniversalSectionID:(id)arg1;
- (id)dataProviderForSectionID:(id)arg1;
- (void)wakeService:(id)arg1 bundleID:(id)arg2;
- (void)remoteDataProviderNeedsToWakeClient:(id)arg1;
- (void)_registerServiceName:(id)arg1 appBundleID:(id)arg2 completion:(id /* block */)arg3;
- (void)registerServiceName:(id)arg1 appBundleID:(id)arg2 completion:(id /* block */)arg3;
- (_Bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
@property(readonly, copy) NSString *debugDescription;
- (id)debugDescriptionWithChildren:(unsigned long long)arg1;
- (void)dealloc;
- (void)_registerForPublicationNotification;
- (id)initWithDelegate:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end
