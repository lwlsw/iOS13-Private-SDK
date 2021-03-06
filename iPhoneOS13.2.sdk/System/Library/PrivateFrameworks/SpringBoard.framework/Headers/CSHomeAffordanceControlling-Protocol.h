//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class BSAnimationSettings, UIPanGestureRecognizer, UIWindow;
@protocol CSHomeGestureParticipating, PLKeyboardHomeAffordanceAssertion, UIViewSpringAnimationBehaviorDescribing;

@protocol CSHomeAffordanceControlling <NSObject>
@property(readonly, nonatomic) id <UIViewSpringAnimationBehaviorDescribing> settleHomeAffordanceAnimationBehaviorDescription;
@property(readonly, nonatomic) BSAnimationSettings *unhideHomeAffordanceAnimationSettings;
@property(readonly, nonatomic) BSAnimationSettings *hideHomeAffordanceAnimationSettings;
@property(readonly, nonatomic) UIPanGestureRecognizer *screenEdgePanGesture;
- (id <PLKeyboardHomeAffordanceAssertion>)keyboardAssertionForGestureWindow:(UIWindow *)arg1;
- (void)unregisterHomeGestureParticipant:(id <CSHomeGestureParticipating>)arg1 withIdentifier:(long long)arg2;
- (void)registerHomeGestureParticipant:(id <CSHomeGestureParticipating>)arg1 withIdentifier:(long long)arg2;
@end

