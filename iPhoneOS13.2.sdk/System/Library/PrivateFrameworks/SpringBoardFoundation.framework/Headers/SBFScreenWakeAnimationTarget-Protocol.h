//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class SBFLockScreenDateView, UIView;

@protocol SBFScreenWakeAnimationTarget <NSObject>
@property(readonly, nonatomic) SBFLockScreenDateView *dateView;
@property(readonly, nonatomic) UIView *superviewForDateViewAnimation;
- (void)updateWakeEffectsForWake:(BOOL)arg1 animated:(BOOL)arg2 completion:(void (^)(BOOL))arg3;
- (void)updateWakeEffectsForWake:(BOOL)arg1;
@end

