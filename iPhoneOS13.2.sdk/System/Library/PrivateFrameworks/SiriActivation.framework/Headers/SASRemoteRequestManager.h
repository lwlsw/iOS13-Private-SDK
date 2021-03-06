//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class AFRemoteRequestWatcher, CMPocketStateManager, INUIAppIntentDeliverer;

@interface SASRemoteRequestManager : NSObject
{
    BOOL _hasPendingVoiceTriggerActivation;
    AFRemoteRequestWatcher *_remoteRequestWatcher;
    INUIAppIntentDeliverer *_currentAppIntentDeliverer;
    NSUInteger _currentVoiceTriggerRestriction;
    NSUInteger _pendingVoiceTriggerRestrictionCount;
    CMPocketStateManager *_pocketStateManager;
    long long _currentPocketState;
}

+ (id)new;
+ (id)manager;
@property(nonatomic) long long currentPocketState; // @synthesize currentPocketState=_currentPocketState;
@property(retain, nonatomic) CMPocketStateManager *pocketStateManager; // @synthesize pocketStateManager=_pocketStateManager;
@property(nonatomic) BOOL hasPendingVoiceTriggerActivation; // @synthesize hasPendingVoiceTriggerActivation=_hasPendingVoiceTriggerActivation;
@property(nonatomic) NSUInteger pendingVoiceTriggerRestrictionCount; // @synthesize pendingVoiceTriggerRestrictionCount=_pendingVoiceTriggerRestrictionCount;
@property(nonatomic) NSUInteger currentVoiceTriggerRestriction; // @synthesize currentVoiceTriggerRestriction=_currentVoiceTriggerRestriction;
@property(retain, nonatomic) INUIAppIntentDeliverer *currentAppIntentDeliverer; // @synthesize currentAppIntentDeliverer=_currentAppIntentDeliverer;
@property(retain, nonatomic) AFRemoteRequestWatcher *remoteRequestWatcher; // @synthesize remoteRequestWatcher=_remoteRequestWatcher;
// - (void).cxx_destruct;
- (BOOL)_requestWatcherVoiceActivationEnabled;
- (void)_startFetchingPocketStateUpdates;
- (void)_handlePendingVoiceTriggerActivationsWithInfo:(id)arg1;
- (void)_handleRemoteRequestDismissalWithReason:(long long)arg1 options:(NSUInteger)arg2 analyticsContext:(id)arg3;
- (void)_processPendingVoiceTriggerActivationsWithInfo:(id)arg1 delay:(double)arg2;
- (void)_handleRequestWatcherVoiceTriggerRequestWithInfo:(id)arg1;
- (void)_handleNewRemoteRequestWithInfo:(id)arg1;
- (void)_handleRemotePrewarmWithInfo:(id)arg1;
- (id)init;
- (id)_init;

@end

