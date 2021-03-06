//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@class NSArray, UIView, _UIViewControllerTransitionCoordinator;
@protocol UIViewControllerAnimatedTransitioning, UIViewControllerInteractiveTransitioning;

@interface _UIViewControllerTransitionContext : NSObject <UIViewControllerContextTransitioningEx>
{
    double _previousPercentComplete;
    NSArray *_disabledViews;
    struct {
        unsigned int interactorImplementsCompletionSpeed:1;
        unsigned int interactorImplementsCompletionCurve:1;
        unsigned int transitionWasCancelled:1;
        unsigned int transitionIsCompleting:1;
        unsigned int transitionIsInterruptible:1;
    } _transitionContextFlags;
    id <UIViewControllerAnimatedTransitioning> __animator;
    UIView *_containerView;
    BOOL __allowUserInteraction;
    BOOL _rotating;
    BOOL _animated;
    BOOL _initiallyInteractive;
    BOOL _currentlyInteractive;
    BOOL __isPresentation;
    NSArray *__containerViews;
    double __percentOffset;
    id <UIViewControllerInteractiveTransitioning> __interactor;
    double __duration;
    id /* CDUnknownBlockType */ __willCompleteHandler;
    id /* CDUnknownBlockType */ __completionHandler;
    id /* CDUnknownBlockType */ __didCompleteHandler;
    double __completionVelocity;
    long long __completionCurve;
    _UIViewControllerTransitionCoordinator *__auxContext;
    long long __state;
    id /* CDUnknownBlockType */ __interactiveUpdateHandler;
    id /* CDUnknownBlockType */ __postInteractiveCompletionHandler;
    long long _presentationStyle;
}

+ (id)_associatedTransitionContextForObject:(id)arg1;
@property(nonatomic, setter=_setIsPresentation:) BOOL _isPresentation; // @synthesize _isPresentation=__isPresentation;
@property(nonatomic, setter=_setPresentationStyle:) long long presentationStyle; // @synthesize presentationStyle=_presentationStyle;
@property(copy, nonatomic, setter=_setPostInteractiveCompletionHandler:) id /* CDUnknownBlockType */ _postInteractiveCompletionHandler; // @synthesize _postInteractiveCompletionHandler=__postInteractiveCompletionHandler;
@property(copy, nonatomic, setter=_setInteractiveUpdateHandler:) id /* CDUnknownBlockType */ _interactiveUpdateHandler; // @synthesize _interactiveUpdateHandler=__interactiveUpdateHandler;
@property(nonatomic, setter=_setState:) long long _state; // @synthesize _state=__state;
@property(retain, nonatomic, setter=_setAuxContext:) _UIViewControllerTransitionCoordinator *_auxContext; // @synthesize _auxContext=__auxContext;
@property(nonatomic, setter=_setCompletionCurve:) long long _completionCurve; // @synthesize _completionCurve=__completionCurve;
@property(nonatomic, setter=_setCompletionVelocity:) double _completionVelocity; // @synthesize _completionVelocity=__completionVelocity;
@property(nonatomic, getter=isCurrentlyInteractive, setter=_setCurrentlyInteractive:) BOOL currentlyInteractive; // @synthesize currentlyInteractive=_currentlyInteractive;
@property(nonatomic, getter=_initiallyInteractive, setter=_setInitiallyInteractive:) BOOL initiallyInteractive; // @synthesize initiallyInteractive=_initiallyInteractive;
@property(copy, nonatomic, setter=_setDidCompleteHandler:) id /* CDUnknownBlockType */ _didCompleteHandler; // @synthesize _didCompleteHandler=__didCompleteHandler;
@property(copy, nonatomic, setter=_setCompletionHandler:) id /* CDUnknownBlockType */ _completionHandler; // @synthesize _completionHandler=__completionHandler;
@property(copy, nonatomic, setter=_setWillCompleteHandler:) id /* CDUnknownBlockType */ _willCompleteHandler; // @synthesize _willCompleteHandler=__willCompleteHandler;
@property(nonatomic, setter=_setDuration:) double _duration; // @synthesize _duration=__duration;
@property(readonly, nonatomic, getter=isAnimated) BOOL animated; // @synthesize animated=_animated;
@property(nonatomic, getter=_isRotating, setter=_setRotating:) BOOL rotating; // @synthesize rotating=_rotating;
@property(nonatomic, getter=_allowUserInteraction, setter=_setAllowUserInteraction:) BOOL _allowUserInteraction; // @synthesize _allowUserInteraction=__allowUserInteraction;
@property(nonatomic, setter=_setInteractor:) __weak id <UIViewControllerInteractiveTransitioning> _interactor; // @synthesize _interactor=__interactor;
@property(nonatomic, setter=_setPercentOffset:) double _percentOffset; // @synthesize _percentOffset=__percentOffset;
@property(retain, nonatomic, setter=_setContainerViews:) NSArray *_containerViews; // @synthesize _containerViews=__containerViews;
// - (void).cxx_destruct;
- (void)_enableInteractionForDisabledViews;
- (void)_disableInteractionForViews:(id)arg1;
- (long long)_alongsideAnimationsCount;
- (void)__runAlongsideAnimations;
- (void)_interactivityDidChange:(BOOL)arg1;
- (void)_runAlongsideCompletions;
- (void)_setIsAnimated:(BOOL)arg1;
@property(nonatomic, getter=isInterruptible, setter=_setInterruptible:) BOOL interruptible;
@property(nonatomic, setter=_setTransitionIsCompleting:) BOOL _transitionIsCompleting;
- (void)_setTransitionIsInFlight:(BOOL)arg1;
- (BOOL)_transitionIsInFlight;
@property(readonly, nonatomic) BOOL transitionWasCancelled;
- (CGRect)finalFrameForViewController:(id)arg1;
- (CGRect)initialFrameForViewController:(id)arg1;
- (id)viewForKey:(id)arg1;
- (id)viewControllerForKey:(id)arg1;
- (void)completeTransition:(BOOL)arg1;
- (void)_stopInteractiveTransition;
- (void)cancelInteractiveTransition;
- (void)finishInteractiveTransition;
- (void)updateInteractiveTransition:(double)arg1;
- (void)pauseInteractiveTransition;
- (void)_updateInteractiveTransitionWithoutTrackingPercentComplete:(double)arg1;
- (void)_setPreviousPercentComplete:(double)arg1;
- (double)_previousPercentComplete;
- (id)_transitionCoordinator;
- (BOOL)initiallyInteractive;
@property(readonly, nonatomic, getter=isInteractive) BOOL interactive;
@property(readonly, nonatomic) CGAffineTransform targetTransform;
@property(readonly, nonatomic, getter=_affineTransform) CGAffineTransform affineTransform;
@property(nonatomic, setter=_setAnimator:) __weak id <UIViewControllerAnimatedTransitioning> _animator;
- (void)_setContainerView:(id)arg1;
@property(readonly, nonatomic) UIView *containerView;
- (void)dealloc;
- (id)init;

@end

