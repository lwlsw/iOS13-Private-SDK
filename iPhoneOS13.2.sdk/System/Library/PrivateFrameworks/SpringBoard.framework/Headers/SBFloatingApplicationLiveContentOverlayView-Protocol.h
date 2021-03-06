//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SpringBoard/SBSwitcherLiveContentOverlay-Protocol.h>

@class SBWorkspaceEntity, UIViewController;
@protocol SBLayoutStateTransitionObserver;

@protocol SBFloatingApplicationLiveContentOverlayView <SBSwitcherLiveContentOverlay>
- (void)invalidate;
- (void)setLiveContentRasterizationDisabled:(BOOL)arg1;
- (void)configureWithWorkspaceEntity:(SBWorkspaceEntity *)arg1 referenceFrame:(CGRect)arg2 interfaceOrientation:(long long)arg3;
- (UIViewController<SBLayoutStateTransitionObserver> *)contentViewController;
@end

