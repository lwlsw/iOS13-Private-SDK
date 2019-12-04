//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@protocol OS_dispatch_queue;

@interface BYSilentLoginUpgradeGuarantor : NSObject
{
    _Bool _didEnsureQueuesAndStartSilentLoginUpgrade;
    NSObject<OS_dispatch_queue> *_silentLoginUpgradeCompletionQueue;
    NSObject<OS_dispatch_queue> *_shortLivedTokenUpgradeCompletionQueue;
}

+ (id)sharedInstance;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *shortLivedTokenUpgradeCompletionQueue; // @synthesize shortLivedTokenUpgradeCompletionQueue=_shortLivedTokenUpgradeCompletionQueue;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *silentLoginUpgradeCompletionQueue; // @synthesize silentLoginUpgradeCompletionQueue=_silentLoginUpgradeCompletionQueue;
@property(nonatomic) _Bool didEnsureQueuesAndStartSilentLoginUpgrade; // @synthesize didEnsureQueuesAndStartSilentLoginUpgrade=_didEnsureQueuesAndStartSilentLoginUpgrade;
- (void)didShortCircuitShortLivedTokenUpgrade;
- (void)blockUntilShortLivedTokenUpgradeCompletes;
- (void)didShortCircuitSilentLoginUpgrade;
- (void)blockUntilSilentLoginUpgradeCompletes;
- (void)blockUntilSilentLoginUpgradeCompletesForNonLoginUser;
- (void)_ensureQueuesAndStartSilentLoginUpgrade;
- (id)init;

@end
