//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@class _GKBubbleFlowTransitionInfo;

@interface GKTabBarTransitionAnimator : NSObject <UIViewControllerAnimatorTransitioning>
{
    _GKBubbleFlowTransitionInfo *_transitionInfo;
}

@property(retain, nonatomic) _GKBubbleFlowTransitionInfo *transitionInfo; // @synthesize transitionInfo=_transitionInfo;
- (void)animationEnded:(BOOL)arg1;
- (void)_animateTransitionInTwoParts:(id)arg1;
- (void)_animateTransition:(id)arg1;
- (void)animateTransition:(id)arg1;
- (void)dealloc;
- (double)transitionDuration:(id)arg1;

@end

