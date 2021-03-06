//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SpringBoardHome/SBViewControllerTransitionCoordinatorContext-Protocol.h>

@class UIView;

@protocol SBViewControllerTransitionCoordinator <UIViewControllerTransitionCoordinator, SBViewControllerTransitionCoordinatorContext>
- (void)notifyWhenInteractionEndsUsingBlock:(void (^)(id <SBViewControllerTransitionCoordinatorContext>))arg1;
- (BOOL)animateAlongsideTransitionInView:(UIView *)arg1 animation:(void (^)(id <SBViewControllerTransitionCoordinatorContext>))arg2 completion:(void (^)(id <SBViewControllerTransitionCoordinatorContext>))arg3;
- (BOOL)animateAlongsideTransition:(void (^)(id <SBViewControllerTransitionCoordinatorContext>))arg1 completion:(void (^)(id <SBViewControllerTransitionCoordinatorContext>))arg2;
- (void)addTransitionContinuation:(void (^)(id <SBViewControllerTransitionCoordinatorContext>, void (^)(void)))arg1;
- (BOOL)requiresRestartableAnimations;
- (BOOL)requiresInteractiveAnimations;
- (BOOL)requiresCancellableAnimations;
@end

