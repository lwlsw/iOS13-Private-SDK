//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <AppleIDSSOAuthentication/AIDAServiceOwnerProtocol-Protocol.h>

@class ACAccountStore, NSDictionary;

@interface AIDAServiceOwnersManager : NSObject <AIDAServiceOwnerProtocol>
{
//    struct os_unfair_lock_s _serviceOwnersLock;
    ACAccountStore *_accountStore;
    NSDictionary *_serviceOwners;
}

+ (id)supportedServices;
+ (id)serviceOwnerBundles;
@property(copy, nonatomic) NSDictionary *serviceOwners; // @synthesize serviceOwners=_serviceOwners;
// - (void).cxx_destruct;
- (void)signOutService:(id)arg1 withContext:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)signInService:(id)arg1 withContext:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (id)nameComponentsForAccount:(id)arg1 service:(id)arg2;
- (id)DSIDForAccount:(id)arg1 service:(id)arg2;
- (id)altDSIDForAccount:(id)arg1 service:(id)arg2;
- (id)accountForService:(id)arg1;
- (id)_buildServiceOwnerMapping;
- (id)initWithAccountStore:(id)arg1;
- (id)init;

@end

