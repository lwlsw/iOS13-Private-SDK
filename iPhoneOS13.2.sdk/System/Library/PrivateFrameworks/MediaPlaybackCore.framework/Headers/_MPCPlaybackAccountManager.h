//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class MPCPlaybackEngine, NSArray, NSMutableDictionary;

@interface _MPCPlaybackAccountManager : NSObject
{
//    struct os_unfair_lock_s _lock;
    NSMutableDictionary *_accounts;
    MPCPlaybackEngine *_playbackEngine;
}

@property(readonly, nonatomic) __weak MPCPlaybackEngine *playbackEngine; // @synthesize playbackEngine=_playbackEngine;
// - (void).cxx_destruct;
- (void)_enumerateIdentitiesWithCompletion:(CDUnknownBlockType)arg1;
- (void)_buildAccountFromDelegatedIdentity:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_buildAccountFromLocalIdentity:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_updateAccounts;
- (void)_userIdentityStoreChangedNotification:(id)arg1;
- (void)_subscriptionStatusChangedNotification:(id)arg1;
- (id)accountForHashedDSID:(id)arg1;
- (id)accountForDSID:(id)arg1;
@property(readonly, copy, nonatomic) NSArray *accounts;
- (id)initWithPlaybackEngine:(id)arg1;

@end

