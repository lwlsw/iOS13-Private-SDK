//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@class UIViewPropertyAnimator;

__attribute__((visibility("hidden")))
@interface CKBrowserFullscreenRevealAnimationController : NSObject <UIViewControllerAnimatedTransitioning>
{
    BOOL _presenting;
    UIViewPropertyAnimator *_ascentDescentAnimator;
}

@property(nonatomic, getter=isPresenting) BOOL presenting; // @synthesize presenting=_presenting;
@property(retain, nonatomic) UIViewPropertyAnimator *ascentDescentAnimator; // @synthesize ascentDescentAnimator=_ascentDescentAnimator;
// - (void).cxx_destruct;
- (void)animateTransition:(id)arg1;
- (double)transitionDuration:(id)arg1;
- (id)initWithDirection:(BOOL)arg1;

@end

