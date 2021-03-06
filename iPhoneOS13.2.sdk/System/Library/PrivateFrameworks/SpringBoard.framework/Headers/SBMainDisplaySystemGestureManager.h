//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SpringBoard/SBSystemGestureManager.h>

@class SBGestureDefaults, SBHomeGestureParticipant;

@interface SBMainDisplaySystemGestureManager : SBSystemGestureManager
{
    SBGestureDefaults *_gestureDefaults;
    BOOL _multitaskingGesturesEnabled;
    SBHomeGestureParticipant *_accessibilityHomeGestureParticipant;
}

+ (id)sharedInstance;
@property(retain, nonatomic) SBHomeGestureParticipant *accessibilityHomeGestureParticipant; // @synthesize accessibilityHomeGestureParticipant=_accessibilityHomeGestureParticipant;
// - (void).cxx_destruct;
- (void)_updateUserPreferences;
- (void)setSystemGesturesDisabledForAccessibility:(BOOL)arg1;
- (BOOL)shouldSystemGestureReceiveTouchWithLocation:(CGPoint)arg1;
- (BOOL)_isTouchGestureWithType:(NSUInteger)arg1;
- (BOOL)_shouldEnableSystemGestureWithType:(NSUInteger)arg1;
- (BOOL)_isGestureWithTypeAllowed:(NSUInteger)arg1;
- (void)_evaluateEnablement;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (void)dealloc;
- (id)_init;
- (id)_initWithDisplayIdentity:(id)arg1;

@end

