//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


#import <UserNotificationsUIKit/NCNotificationCustomContentDelegate-Protocol.h>
#import <UserNotificationsUIKit/PLContentSizeCategoryAdjusting-Protocol.h>
#import <UserNotificationsUIKit/PLExpandedPlatterPresentationControllerDelegate-Protocol.h>

@class NCNotificationRequest, NCNotificationViewControllerView, NSPointerArray, NSString, UIPanGestureRecognizer, UIView;
@protocol NCAuxiliaryOptionsProviding, NCNotificationCustomContent, NCNotificationCustomContentProviding, NCNotificationStaticContentProviding, NCNotificationViewControllerDelegate, PLContentSizeManaging, UIViewControllerTransitionCoordinator;

@interface NCNotificationViewController : UIViewController <UIScrollViewDelegate, NCNotificationCustomContentDelegate, PLExpandedPlatterPresentationControllerDelegate, PLContentSizeCategoryAdjusting>
{
    BOOL _didQueryCanPan;
    BOOL _canPan;
    long long _ncTransitionAnimationState;
    NSPointerArray *_observers;
    UIView<PLContentSizeManaging> *_contentSizeManagingView;
    UIView _lookView;
    BOOL _revealAdditionalContentOnPresentation;
    BOOL _customContentHomeAffordanceVisible;
    BOOL _notificationContentViewHidden;
    BOOL _hasShadow;
    BOOL _contentReplacedWithSnapshot;
    BOOL _interactionEnabled;
    BOOL _shouldRestorePresentingShortLookOnDismiss;
    id <NCNotificationViewControllerDelegate> _delegate;
    NCNotificationRequest *_notificationRequest;
    NSString *_materialGroupNameBase;
    UIPanGestureRecognizer *_customContentHomeAffordanceGestureRecognizer;
    id <NCNotificationStaticContentProviding> _staticContentProvider;
    id <NCNotificationCustomContentProviding> _customContentProvider;
    id <NCAuxiliaryOptionsProviding> _auxiliaryOptionsContentProvider;
    id <UIViewControllerTransitionCoordinator> _activeTransitionCoordinator;
    UIView *_associatedView;
    id /* CDUnknownBlockType */ _pendingPresentationTransitionDidEndBlock;
    UIViewController<NCNotificationCustomContent> *_customContentProvidingViewController;
    id /* CDUnknownBlockType */ _dismissalCompletion;
}

@property(copy, nonatomic, getter=_dismissalCompletion, setter=_setDismissalCompletion:) id /* CDUnknownBlockType */ dismissalCompletion; // @synthesize dismissalCompletion=_dismissalCompletion;
@property(nonatomic, getter=_shouldRestorePresentingShortLookOnDismiss, setter=_setShouldRestorePresentingShortLookOnDismiss:) BOOL shouldRestorePresentingShortLookOnDismiss; // @synthesize shouldRestorePresentingShortLookOnDismiss=_shouldRestorePresentingShortLookOnDismiss;
@property(retain, nonatomic, getter=_customContentProvidingViewController, setter=_setCustomContentProvidingViewController:) UIViewController<NCNotificationCustomContent> *customContentProvidingViewController; // @synthesize customContentProvidingViewController=_customContentProvidingViewController;
@property(copy, nonatomic, getter=_pendingPresentationTransitionDidEndBlock, setter=_setPendingPresentationTransitionDidEndBlock:) id /* CDUnknownBlockType */ pendingPresentationTransitionDidEndBlock; // @synthesize pendingPresentationTransitionDidEndBlock=_pendingPresentationTransitionDidEndBlock;
@property(nonatomic) __weak UIView *associatedView; // @synthesize associatedView=_associatedView;
@property(nonatomic, getter=isInteractionEnabled) BOOL interactionEnabled; // @synthesize interactionEnabled=_interactionEnabled;
@property(retain, nonatomic, getter=_activeTransitionCoordinator, setter=_setActiveTransitionCoordinator:) id <UIViewControllerTransitionCoordinator> activeTransitionCoordinator; // @synthesize activeTransitionCoordinator=_activeTransitionCoordinator;
@property(retain, nonatomic) id <NCAuxiliaryOptionsProviding> auxiliaryOptionsContentProvider; // @synthesize auxiliaryOptionsContentProvider=_auxiliaryOptionsContentProvider;
@property(retain, nonatomic) id <NCNotificationCustomContentProviding> customContentProvider; // @synthesize customContentProvider=_customContentProvider;
@property(retain, nonatomic) id <NCNotificationStaticContentProviding> staticContentProvider; // @synthesize staticContentProvider=_staticContentProvider;
@property(nonatomic, getter=isContentReplacedWithSnapshot) BOOL contentReplacedWithSnapshot; // @synthesize contentReplacedWithSnapshot=_contentReplacedWithSnapshot;
@property(nonatomic) BOOL hasShadow; // @synthesize hasShadow=_hasShadow;
@property(nonatomic, getter=isNotificationContentViewHidden) BOOL notificationContentViewHidden; // @synthesize notificationContentViewHidden=_notificationContentViewHidden;
@property(nonatomic) __weak UIPanGestureRecognizer *customContentHomeAffordanceGestureRecognizer; // @synthesize customContentHomeAffordanceGestureRecognizer=_customContentHomeAffordanceGestureRecognizer;
@property(nonatomic, getter=isCustomContentHomeAffordanceVisible) BOOL customContentHomeAffordanceVisible; // @synthesize customContentHomeAffordanceVisible=_customContentHomeAffordanceVisible;
@property(retain, nonatomic) NSString *materialGroupNameBase; // @synthesize materialGroupNameBase=_materialGroupNameBase;
@property(nonatomic) BOOL revealAdditionalContentOnPresentation; // @synthesize revealAdditionalContentOnPresentation=_revealAdditionalContentOnPresentation;
@property(retain, nonatomic) NCNotificationRequest *notificationRequest; // @synthesize notificationRequest=_notificationRequest;
@property(nonatomic) __weak id <NCNotificationViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
// - (void).cxx_destruct;
- (id)succinctDescriptionBuilder;
- (id)succinctDescription;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
- (BOOL)adjustForContentSizeCategoryChange;
@property(nonatomic) BOOL adjustsFontForContentSizeCategory;
- (id)settleHomeAffordanceAnimationBehaviorDescriptionForExpandedPlatterPresentationController:(id)arg1;
- (id)unhideHomeAffordanceAnimationSettingsForExpandedPlatterPresentationController:(id)arg1;
- (id)hideHomeAffordanceAnimationSettingsForExpandedPlatterPresentationController:(id)arg1;
- (id)expandedPlatterPresentationController:(id)arg1 keyboardAssertionForGestureWindow:(id)arg2;
- (void)customContentRequestsDismiss:(id)arg1;
- (void)customContentRequestsDefaultAction:(id)arg1;
- (void)customContent:(id)arg1 forwardAction:(id)arg2 forNotification:(id)arg3 withUserInfo:(id)arg4;
- (void)customContent:(id)arg1 requestPermissionToExecuteAction:(id)arg2 forNotification:(id)arg3 withUserInfo:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (void)contentProvider:(id)arg1 performAction:(id)arg2 animated:(BOOL)arg3;
- (void)_askDelegateToExecuteAction:(id)arg1 withParameters:(id)arg2 animated:(BOOL)arg3;
- (void)_updateScrollViewContentSize;
- (BOOL)_shouldPadScrollViewContentSizeHeight;
- (void)_executeCancelAction:(BOOL)arg1;
- (void)_executeCloseAction:(BOOL)arg1;
- (void)_executeClearAction:(BOOL)arg1;
- (void)_executeDefaultAction:(BOOL)arg1;
- (void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (void)preferredContentSizeDidChangeForChildContentContainer:(id)arg1;
- (void)setNCTransitionAnimationState:(long long)arg1;
- (long long)ncTransitionAnimationState;
- (void)dismissViewControllerWithTransition:(int)arg1 completion:(CDUnknownBlockType)arg2;
- (void)presentViewController:(id)arg1 animated:(BOOL)arg2 completion:(CDUnknownBlockType)arg3;
- (BOOL)prefersStatusBarHidden;
- (NSUInteger)supportedInterfaceOrientations;
- (BOOL)shouldAutorotate;
- (void)viewWillLayoutSubviews;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewDidLoad;
- (void)loadView;
- (id)notificationUsageTrackingState;
- (void)_updatePreferredContentSize;
- (void)_setPreferredCustomContentSize:(CGSize)arg1;
- (CGSize)_preferredCustomContentSizeForSize:(CGSize)arg1 parentContentContainerBounds:(CGRect)arg2;
- (void)_notificationViewControllerViewDidLoad;
- (void)_updateLookView:(UIView )arg1 withTitleFromProvidedStaticContent:(id)arg2;
- (void)_loadLookView;
- (id)_contentSizeManagingView;
@property(readonly, nonatomic, getter=_notificationViewControllerView) NCNotificationViewControllerView *notificationViewControllerView;
- (void)_updateWithProvidedAuxiliaryOptionsContent;
- (void)_updateWithProvidedCustomContent;
- (long long)_dateFormatStyle;
- (NSUInteger)_maximumNumberOfSecondaryLargeTextLinesForProvidedStaticContent;
- (NSUInteger)_maximumNumberOfSecondaryTextLinesForProvidedStaticContent;
- (NSUInteger)_maximumNumberOfPrimaryLargeTextLinesForProvidedStaticContent;
- (NSUInteger)_maximumNumberOfPrimaryTextLinesForProvidedStaticContent;
- (void)_updateWithProvidedStaticContent;
- (UIView )_lookView;
- (UIView )_lookViewIfLoaded;
- (UIView )_lookViewLoadingIfNecessary:(BOOL)arg1;
@property(readonly, nonatomic, getter=isCoalescedNotificationBundle) BOOL coalescedNotificationBundle;
- (long long)materialRecipe;
- (BOOL)shouldRestorePresentingShortLookOnDismiss;
- (void)expandAndPlayMedia;
- (BOOL)_canPan;
- (BOOL)restoreInputViews;
- (void)preserveInputViews;
- (BOOL)isContentExtensionVisible:(id)arg1;
- (BOOL)dismissPresentedViewControllerAndClearNotification:(BOOL)arg1 animated:(BOOL)arg2;
- (BOOL)dismissPresentedViewControllerAndClearNotification:(BOOL)arg1 animated:(BOOL)arg2 completion:(CDUnknownBlockType)arg3;
- (void)updateContent;
- (void)setHasUpdatedContent;
- (BOOL)didReceiveNotificationRequest:(id)arg1;
- (void)_notifyObserversWithBlock:(CDUnknownBlockType)arg1;
- (void)removeObserver:(id)arg1;
- (void)addObserver:(id)arg1;
- (id)_customContentProvidingViewControllerCreateIfNecessary;
- (void)_setupAuxiliaryOptionsContentProvider;
- (void)_setupCustomContentProvider;
- (void)_setupStaticContentProvider;
- (void)invalidateContentProviders;
@property(readonly, nonatomic, getter=isNotPresentingOrHasCommittedToDismissingCustomContentProvidingViewController) BOOL notPresentingOrHasCommittedToDismissingCustomContentProvidingViewController;
@property(readonly, nonatomic, getter=hasCommittedToPresentingCustomContentProvidingViewController) BOOL committedToPresentingCustomContentProvidingViewController;
@property(readonly, nonatomic, getter=_isPresentingCustomContentProvidingViewController) BOOL presentingCustomContentProvidingViewController;
@property(readonly, nonatomic, getter=isDragging) BOOL dragging;
@property(readonly, nonatomic, getter=isShortLook) BOOL shortLook;
- (BOOL)_setNotificationRequest:(id)arg1;
- (BOOL)_setDelegate:(id)arg1;
- (id)initWithNotificationRequest:(id)arg1;
- (id)initWithNotificationRequest:(id)arg1 revealingAdditionalContentOnPresentation:(BOOL)arg2;
- (id)_initWithNotificationRequest:(id)arg1 revealingAdditionalContentOnPresentation:(BOOL)arg2;
- (void)presentLongLookAnimated:(BOOL)arg1 trigger:(long long)arg2 completion:(CDUnknownBlockType)arg3;
@property(readonly, nonatomic, getter=_presentedLongLookViewController) NCNotificationViewController *presentedLongLookViewController;
@property(readonly, nonatomic, getter=isLookStyleLongLook) BOOL lookStyleLongLook;
- (void)reloadContentProviders;

@end

