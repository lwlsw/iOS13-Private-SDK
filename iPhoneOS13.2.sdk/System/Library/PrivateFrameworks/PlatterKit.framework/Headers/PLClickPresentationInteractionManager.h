//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <PlatterKit/UIGestureRecognizerDelegate-Protocol.h>
#import <PlatterKit/_UIClickPresentationInteractionDelegate-Protocol.h>

@class NSString, UIGestureRecognizer, UIViewController, _UIClickPresentation, _UIClickPresentationInteraction;
@protocol PLClickPresentationInteractionManagerDelegate, PLClickPresentationInteractionPresentable, PLClickPresentationInteractionPresenting;

@interface PLClickPresentationInteractionManager : NSObject <UIGestureRecognizerDelegate, _UIClickPresentationInteractionDelegate>
{
    _Bool _didPresent;
    UIViewController<PLClickPresentationInteractionPresenting> *_presentingViewController;
    _UIClickPresentationInteraction *_clickPresentationInteraction;
    _UIClickPresentation *_clickPresentation;
    id /* block */ _presentationCompletion;
    id /* block */ _dismissalCompletion;
    struct {
        unsigned int delegateImplementsContainerView:1;
        unsigned int delegateImplementsTransitioningDelegate:1;
        unsigned int delegateImplementsShouldBeginInteraction:1;
        unsigned int delegateImplementsShouldFinishInteraction:1;
        unsigned int delegateImplementsWillBeginUserInteraction:1;
        unsigned int delegateImplementsDidEndUserInteraction:1;
        unsigned int delegateImplementsWillDismissPresentedContent:1;
        unsigned int delegateImplementsDeclinedDismissingPresentedContent:1;
        unsigned int delegateImplementsShouldAllowLongPressGesture:1;
        unsigned int delegateShouldFinishInteraction:1;
    } _clickPresentationInteractionManagerDelegateFlags;
    _Bool _didInteractionInitiateWithHint;
    _Bool _willPresent;
    id <PLClickPresentationInteractionManagerDelegate> _delegate;
    UIViewController<PLClickPresentationInteractionPresentable> *_presentedViewController;
}

+ (void)initialize;
@property(nonatomic, getter=_willPresent, setter=_setWillPresent:) _Bool willPresent; // @synthesize willPresent=_willPresent;
@property(nonatomic, setter=_setDidInteractionInitiateWithHint:) _Bool didInteractionInitiateWithHint; // @synthesize didInteractionInitiateWithHint=_didInteractionInitiateWithHint;
@property(readonly, nonatomic) __weak UIViewController<PLClickPresentationInteractionPresentable> *presentedViewController; // @synthesize presentedViewController=_presentedViewController;
@property(nonatomic) __weak id <PLClickPresentationInteractionManagerDelegate> delegate; // @synthesize delegate=_delegate;
- (_Bool)_delegateShouldAllowLongPressGesture;
- (void)_setPresentingViewControllerHighlighted:(_Bool)arg1 animated:(_Bool)arg2;
- (id)_presentedViewController;
- (unsigned long long)activationStyleForClickPresentationInteraction:(id)arg1;
- (void)clickPresentationInteractionEnded:(id)arg1 wasCancelled:(_Bool)arg2;
- (id)clickPresentationInteraction:(id)arg1 previewForHighlightingAtLocation:(struct CGPoint)arg2;
- (id)clickPresentationInteraction:(id)arg1 presentationForPresentingViewController:(id)arg2;
- (_Bool)clickPresentationInteractionShouldPresent:(id)arg1;
- (_Bool)clickPresentationInteractionShouldBegin:(id)arg1;
- (void)_clickPresentationTransitionDidDismiss:(_Bool)arg1;
- (void)_clickInteractionDidEnd;
- (void)_clickPresentationTransitionDidPresent:(_Bool)arg1;
- (_Bool)dismissIfPossible:(id /* block */)arg1;
- (_Bool)presentIfPossible:(id /* block */)arg1;
@property(readonly, nonatomic) UIGestureRecognizer *gestureRecognizerForExclusionRelationship;
@property(readonly, nonatomic, getter=hasCommittedToPresentation) _Bool committedToPresentation;
- (id)initWithPresentingViewController:(id)arg1 delegate:(id)arg2;
- (void)_delegateDeclinedDismissingPresentedContentWithTrigger:(long long)arg1;
- (void)_delegateWillDismissPresentedContentWithTrigger:(long long)arg1;
- (void)_delegateShouldFinishInteractionThatReachedForceThreshold:(_Bool)arg1 withCompletionBlock:(id /* block */)arg2;
- (void)_delegateDidEndUserInteraction;
- (void)_delegateWillBeginUserInteraction;
- (_Bool)_delegateShouldBeginInteractionWithTouchAtLocation:(struct CGPoint)arg1;
- (id)_delegateContainerView;
- (id)_delegateTransitioningDelegate;
- (id)_delegatePresentedViewController;
- (_Bool)_dismissIfPossibleWithTrigger:(long long)arg1;
- (void)resetForInitialInteraction;
- (id)initWithPresentingViewController:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end
