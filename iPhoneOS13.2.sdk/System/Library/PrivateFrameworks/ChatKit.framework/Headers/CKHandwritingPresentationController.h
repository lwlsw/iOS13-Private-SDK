//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class CKBrowserItemPayload, CKDeviceOrientationManager, CKHandwritingWindow, CKScheduledUpdater, NSString, UIViewController;
@protocol CKHandwritingBrowserViewControllerProtocol, CKHandwritingPresentationControllerDelegate, CKHandwritingViewControllerSendDelegate;

__attribute__((visibility("hidden")))
@interface CKHandwritingPresentationController : NSObject
{
    BOOL _requestedVisibility;
    BOOL _actualVisibility;
    BOOL _requestedVisibilityShouldBeAnimated;
    BOOL _suppressAppearanceCallbacksBecauseOfFirstInitialization;
    BOOL _foregrounded;
    NSObject<CKHandwritingPresentationControllerDelegate> *_delegate;
    CKDeviceOrientationManager *_deviceOrientationManager;
    long long _initialInterfaceOrientation;
    CKHandwritingWindow *_handwritingWindow;
    UIViewController<CKHandwritingBrowserViewControllerProtocol> *_browserViewController;
    CKScheduledUpdater *_animationScheduledUpdater;
    NSObject<CKHandwritingViewControllerSendDelegate> *_cachedSendDelegate;
    CKBrowserItemPayload *_cachedPluginPayload;
}

@property(nonatomic) BOOL foregrounded; // @synthesize foregrounded=_foregrounded;
@property(nonatomic) BOOL suppressAppearanceCallbacksBecauseOfFirstInitialization; // @synthesize suppressAppearanceCallbacksBecauseOfFirstInitialization=_suppressAppearanceCallbacksBecauseOfFirstInitialization;
@property(retain, nonatomic) CKBrowserItemPayload *cachedPluginPayload; // @synthesize cachedPluginPayload=_cachedPluginPayload;
@property(nonatomic) __weak NSObject<CKHandwritingViewControllerSendDelegate> *cachedSendDelegate; // @synthesize cachedSendDelegate=_cachedSendDelegate;
@property(nonatomic) BOOL requestedVisibilityShouldBeAnimated; // @synthesize requestedVisibilityShouldBeAnimated=_requestedVisibilityShouldBeAnimated;
@property(nonatomic) BOOL actualVisibility; // @synthesize actualVisibility=_actualVisibility;
@property(nonatomic) BOOL requestedVisibility; // @synthesize requestedVisibility=_requestedVisibility;
@property(retain, nonatomic) CKScheduledUpdater *animationScheduledUpdater; // @synthesize animationScheduledUpdater=_animationScheduledUpdater;
@property(retain, nonatomic) UIViewController<CKHandwritingBrowserViewControllerProtocol> *browserViewController; // @synthesize browserViewController=_browserViewController;
@property(retain, nonatomic) CKHandwritingWindow *handwritingWindow; // @synthesize handwritingWindow=_handwritingWindow;
@property(nonatomic) long long initialInterfaceOrientation; // @synthesize initialInterfaceOrientation=_initialInterfaceOrientation;
@property(retain, nonatomic) CKDeviceOrientationManager *deviceOrientationManager; // @synthesize deviceOrientationManager=_deviceOrientationManager;
@property(nonatomic) __weak NSObject<CKHandwritingPresentationControllerDelegate> *delegate; // @synthesize delegate=_delegate;
// - (void).cxx_destruct;
- (void)_loadCachedPayloadIntoBrowser;
- (void)_doInitialization;
- (void)_flushHandwritingWindowCacheIfNeeded;
- (void)_updateVisibilityState;
- (void)_handleApplicationDidEnterBackground:(id)arg1;
- (void)_handleApplicationWillEnterForeground:(id)arg1;
- (BOOL)isHandwritingLandscape;
@property(readonly) NSString *pluginBundleID;
- (void)setVisible:(BOOL)arg1 animated:(BOOL)arg2;
@property(nonatomic) BOOL visible;
@property(retain, nonatomic) CKBrowserItemPayload *pluginPayload;
@property(nonatomic) __weak NSObject<CKHandwritingViewControllerSendDelegate> *sendDelegate;
- (void)dealloc;
- (id)init;

@end

