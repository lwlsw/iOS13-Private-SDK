//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SiriActivation/SASSystemState.h>

@class SiriContextOverride;

@interface SASOverriddenSystemState : SASSystemState
{
    SASSystemState *_systemState;
    SiriContextOverride *_contextOverride;
}

@property(retain, nonatomic) SiriContextOverride *contextOverride; // @synthesize contextOverride=_contextOverride;
@property(retain, nonatomic) SASSystemState *systemState; // @synthesize systemState=_systemState;
- (_Bool)siriIsSupported;
- (_Bool)siriIsRestricted;
- (_Bool)siriIsEnabled;
- (_Bool)isConnectedToTrustedCarPlay;
- (_Bool)isConnectedToCarPlay;
- (_Bool)carDNDActive;
- (_Bool)accessibilityShortcutEnabled;
- (_Bool)smartCoverClosed;
- (_Bool)isPad;
- (_Bool)pocketStateShouldPreventVoiceTrigger;
- (_Bool)deviceIsPasscodeLocked;
- (_Bool)deviceIsBlocked;
- (_Bool)hasUnlockedSinceBoot;
- (id)currentSpokenLanguageCode;
- (void)setLockStateMonitor:(id)arg1;
- (id)lockStateMonitor;
- (id)initWithSystemState:(id)arg1 contextOverride:(id)arg2;

@end
