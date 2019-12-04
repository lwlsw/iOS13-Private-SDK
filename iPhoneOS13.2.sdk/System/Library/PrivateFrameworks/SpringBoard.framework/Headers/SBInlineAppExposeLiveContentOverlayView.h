//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <SpringBoard/SBSwitcherLiveContentOverlay-Protocol.h>

@class NSString, SBDeviceApplicationSceneViewController, SBSceneViewStatusBarAssertion, UIView;

@interface SBInlineAppExposeLiveContentOverlayView : NSObject <SBSwitcherLiveContentOverlay>
{
    _Bool _transitioning;
    SBDeviceApplicationSceneViewController *_deviceApplicationSceneViewController;
    SBSceneViewStatusBarAssertion *_statusBarAssertion;
}

@property(nonatomic, getter=isTransitioning) _Bool transitioning; // @synthesize transitioning=_transitioning;
@property(readonly, nonatomic) SBSceneViewStatusBarAssertion *statusBarAssertion; // @synthesize statusBarAssertion=_statusBarAssertion;
@property(readonly, nonatomic) SBDeviceApplicationSceneViewController *deviceApplicationSceneViewController; // @synthesize deviceApplicationSceneViewController=_deviceApplicationSceneViewController;
- (void)disableAsynchronousRenderingForNextCommit;
- (void)setRasterizationStyle:(long long)arg1 withMinificationFilterEnabled:(_Bool)arg2;
- (long long)rasterizationStyle;
- (void)noteKeyboardFocusDidChangeToSceneID:(id)arg1;
- (void)dealloc;
- (void)setUsesBrightSceneViewBackgroundMaterial:(_Bool)arg1;
- (void)setHomeGrabberHidden:(_Bool)arg1 animated:(_Bool)arg2;
- (void)setStatusBarHidden:(_Bool)arg1 nubViewHidden:(_Bool)arg2 animator:(id /* block */)arg3;
@property(readonly, nonatomic) UIView *contentOverlayView;
- (id)initWithDeviceApplicationSceneViewController:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end
