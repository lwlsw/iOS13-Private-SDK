//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <iMessageApps/CKBrowserDragControllerTranscriptDelegate-Protocol.h>
#import <iMessageApps/CKBrowserSwitcherViewControllerDelegate-Protocol.h>
#import <iMessageApps/CKBrowserTransitionCoordinatorDelegate-Protocol.h>
#import <iMessageApps/CKBrowserViewControllerSendDelegate-Protocol.h>
#import <iMessageApps/CKFullScreenAppViewControllerDelegate-Protocol.h>

@class CKBrowserSwitcherViewController, CKBrowserTransitionCoordinator, CKFullScreenAppViewController, IMBalloonPlugin, NSString, UIViewController;
@protocol IMAAppPresenterDelegate;

@interface IMAAppPresenter : NSObject <CKBrowserViewControllerSendDelegate, CKBrowserSwitcherViewControllerDelegate, CKFullScreenAppViewControllerDelegate, CKBrowserDragControllerTranscriptDelegate, CKBrowserTransitionCoordinatorDelegate>
{
    id <IMAAppPresenterDelegate> _delegate;
    IMBalloonPlugin *_currentBalloonPlugin;
    CKFullScreenAppViewController *_expandedAppViewController;
    CKBrowserTransitionCoordinator *_transitionCoordinator;
    _Bool _isTransitioningPresentationStyles;
    _Bool _alwaysPresentAppsExpanded;
    _Bool _hidesCompactAppForStickerDrag;
    double _compactHeight;
    CKBrowserSwitcherViewController *_switcherViewController;
}

+ (void)loadAppWithIdentifierIfNeeded:(id)arg1;
+ (void)disableAutomaticAppDiscovery;
@property(retain, nonatomic) CKBrowserSwitcherViewController *switcherViewController; // @synthesize switcherViewController=_switcherViewController;
@property(nonatomic) _Bool hidesCompactAppForStickerDrag; // @synthesize hidesCompactAppForStickerDrag=_hidesCompactAppForStickerDrag;
@property(nonatomic) _Bool alwaysPresentAppsExpanded; // @synthesize alwaysPresentAppsExpanded=_alwaysPresentAppsExpanded;
@property(nonatomic) double compactHeight; // @synthesize compactHeight=_compactHeight;
@property(nonatomic) __weak id <IMAAppPresenterDelegate> delegate; // @synthesize delegate=_delegate;
- (_Bool)switcherViewControllerShouldShowIconAndTitleWhenCompact:(id)arg1;
- (void)switcherViewControllerDidCollapse:(id)arg1;
- (void)switcherViewControllerDidFinishSwitching:(id)arg1 toViewController:(id)arg2;
- (struct CGRect)alwaysExpandedAppViewControllerFrame;
- (id)transitionsPresentationViewController;
- (_Bool)shouldAlwaysShowAppTitle;
- (_Bool)browserTransitionCoordinatorShouldDismissOnDragSuccess:(id)arg1;
- (double)browserTransitionCoordinatorCollapsedContentHeight:(id)arg1;
- (struct CGSize)browserTransitionCoordinator:(id)arg1 preferredSizeForBrowser:(id)arg2;
- (void)browserTransitionCoordinatorDidCollapseOrDismiss:(id)arg1 withReason:(long long)arg2;
- (void)browserTransitionCoordinatorWillCollapseOrDismiss:(id)arg1 withReason:(long long)arg2;
- (void)browserTransitionCoordinatorDidTransitionOrPresentToFullscreen:(id)arg1 withReason:(long long)arg2;
- (void)browserTransitionCoordinatorWillTransitionOrPresentToFullscreen:(id)arg1 withReason:(long long)arg2;
- (void)dragManager:(id)arg1 overrideDropPointForTarget:(id)arg2 completion:(id /* block */)arg3;
- (int)dragManager:(id)arg1 dropAreaForDragTarget:(id)arg2;
- (void)dragManagerDidEndDragging:(id)arg1;
- (void)dragManager:(id)arg1 draggedItemWithTarget:(id)arg2;
- (void)dragManagerDidBeginDragging:(id)arg1;
- (void)commitSticker:(id)arg1 withDragTarget:(id)arg2;
- (void)commitSticker:(id)arg1;
- (id)dragControllerTranscriptDelegate;
- (void)dismissToKeyboard:(_Bool)arg1;
- (void)requestPresentationStyleFullScreenModalForPlugin:(id)arg1;
- (void)requestPresentationStyleExpanded:(_Bool)arg1;
- (void)dismiss;
- (void)dismissAndReloadInputViews:(_Bool)arg1 forPlugin:(id)arg2;
- (void)dismissAndReloadInputViews:(_Bool)arg1;
- (void)openURL:(id)arg1 applicationIdentifier:(id)arg2 pluginID:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)openURL:(id)arg1 pluginID:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)setLocalUserIsTyping:(_Bool)arg1;
- (void)startEditingPayload:(id)arg1 dismiss:(_Bool)arg2;
- (void)startEditingPayload:(id)arg1;
- (void)commitPayload:(id)arg1;
- (_Bool)isSwitcherOffscreen;
- (_Bool)isAppCompact;
- (void)positionSwitcherOffscreen:(_Bool)arg1;
- (void)animateSwitcherOffscreen:(_Bool)arg1 completion:(id /* block */)arg2;
- (void)updateSwitcherViewFrame;
- (_Bool)addSwitcher;
- (double)switcherHeight;
- (id)appViewControllerPresenter;
- (void)updateAppFrameForRotation;
- (void)_hideCompactBrowserAnimated:(_Bool)arg1 completion:(id /* block */)arg2;
- (void)hideAppViewControllerAnimated:(_Bool)arg1 completion:(id /* block */)arg2;
@property(readonly, nonatomic) UIViewController *currentAppViewController;
- (void)presentFullScreenModalAppWithBundleIdentifier:(id)arg1 completion:(id /* block */)arg2;
- (void)presentAppWithBundleIdentifier:(id)arg1 completion:(id /* block */)arg2;
- (void)notifyDelegateOfSelectedPlugin:(id)arg1;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end
