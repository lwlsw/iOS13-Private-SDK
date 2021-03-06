//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SpringBoardHome/SBIconZoomAnimationContaining-Protocol.h>

@class SBIcon, SBIconView, SBScaleIconZoomAnimator, SBSearchGesture, UIView;

@protocol SBScaleIconZoomAnimationContaining <SBIconZoomAnimationContaining>
- (void)returnScalingView;
- (UIView *)borrowScalingView;

@optional
- (SBSearchGesture *)searchGesture;
- (void)prepareForAnimation:(SBScaleIconZoomAnimator *)arg1 withTargetIcon:(SBIcon *)arg2;
- (void)setContentAlpha:(double)arg1;
- (UIView *)matchMoveSourceViewForIconView:(SBIconView *)arg1;
- (UIView *)targetIconContainerView;
@end

