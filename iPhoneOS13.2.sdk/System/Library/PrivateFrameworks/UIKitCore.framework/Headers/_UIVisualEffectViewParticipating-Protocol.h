//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class NSArray, UIView, _UIVisualEffectViewBackdropCaptureGroup;
@protocol _UIVisualEffectViewParticipating;

@protocol _UIVisualEffectViewParticipating <NSObject>
@property(copy, nonatomic) NSArray *filters;
@property(copy, nonatomic) NSArray *viewEffects;
@property(retain, nonatomic) UIView<_UIVisualEffectViewParticipating> *containedView;
@property(retain, nonatomic) _UIVisualEffectViewBackdropCaptureGroup *primaryCaptureGroup;
- (void)applyIdentityFilterEffects;
- (void)applyRequestedFilterEffects;
- (void)applyIdentityViewEffects;
- (void)applyRequestedViewEffects;
@end

