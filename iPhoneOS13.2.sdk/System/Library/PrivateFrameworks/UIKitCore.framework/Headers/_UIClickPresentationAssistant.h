//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <UIKitCore/_UIClickPresentationAssisting-Protocol.h>

@class UITargetedPreview, UIView, UIViewController, UIViewPropertyAnimator, _UIClickPresentation, _UIPortalView, _UIStateMachine;
@protocol UIViewControllerContextTransitioning;

__attribute__((visibility("hidden")))
@interface _UIClickPresentationAssistant : NSObject <UIViewControllerTransitioningDelegate, UIViewControllerAnimatedTransitioning, _UIClickPresentationAssisting>
{
    id <UIViewControllerContextTransitioning> _currentContext;
    UIViewPropertyAnimator *_presentationAnimator;
    id /* CDUnknownBlockType */ lifecycleCompletion;
    _UIClickPresentation *presentation;
    _UIPortalView *_presentationSourcePortalView;
    UITargetedPreview *_sourcePreview;
    UIViewController *_stashedParentViewController;
    UIView *_stashedSuperView;
    id /* CDUnknownBlockType */ _transitionCompletion;
    _UIStateMachine *_stateMachine;
}

@property(retain, nonatomic) _UIStateMachine *stateMachine; // @synthesize stateMachine=_stateMachine;
@property(copy, nonatomic) id /* CDUnknownBlockType */ transitionCompletion; // @synthesize transitionCompletion=_transitionCompletion;
@property(retain, nonatomic) UIView *stashedSuperView; // @synthesize stashedSuperView=_stashedSuperView;
@property(retain, nonatomic) UIViewController *stashedParentViewController; // @synthesize stashedParentViewController=_stashedParentViewController;
@property(retain, nonatomic) UITargetedPreview *sourcePreview; // @synthesize sourcePreview=_sourcePreview;
@property(retain, nonatomic) _UIPortalView *presentationSourcePortalView; // @synthesize presentationSourcePortalView=_presentationSourcePortalView;
@property(retain, nonatomic) _UIClickPresentation *presentation; // @synthesize presentation;
@property(copy, nonatomic) id /* CDUnknownBlockType */ lifecycleCompletion; // @synthesize lifecycleCompletion;
@property(readonly, nonatomic) UIViewPropertyAnimator *presentationAnimator; // @synthesize presentationAnimator=_presentationAnimator;
// - (void).cxx_destruct;
- (void)_createPropertyAnimatorIfNecessaryForTransition:(id)arg1 isAppearing:(BOOL)arg2;
- (void)animateTransition:(id)arg1;
- (double)transitionDuration:(id)arg1;
- (id)animationControllerForDismissedController:(id)arg1;
- (id)animationControllerForPresentedController:(id)arg1 presentingController:(id)arg2 sourceController:(id)arg3;
- (id)presentationControllerForPresentedViewController:(id)arg1 presentingViewController:(id)arg2 sourceViewController:(id)arg3;
- (id)_sourcePreviewPortal;
- (void)_applyStashedParentViewControllerIfNecessary;
- (void)_stashParentViewControllerIfNecessary;
- (void)_postInteractionCleanup;
- (void)_animateDismissalIsInterruption:(BOOL)arg1;
- (void)_animatePresentation;
- (void)_didTransitionToPossibleEndingTransition:(id)arg1;
- (void)_didTransitionToDismissingFromState:(NSUInteger)arg1;
- (void)_didTransitionToPresented;
- (void)_didTransitionToPresenting;
- (void)_prepareStateMachine;
- (void)dismissWithReason:(NSUInteger)arg1 alongsideActions:(CDUnknownBlockType)arg2 completion:(CDUnknownBlockType)arg3;
- (void)presentFromSourcePreview:(id)arg1 lifecycleCompletion:(CDUnknownBlockType)arg2;
- (id)initWithClickPresentation:(id)arg1;

@end

