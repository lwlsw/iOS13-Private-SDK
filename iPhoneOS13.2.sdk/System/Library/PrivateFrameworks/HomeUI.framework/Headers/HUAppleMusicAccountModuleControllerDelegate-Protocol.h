//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class ACAccount, AKAppleIDAuthenticationInAppContext, HUAppleMusicAccountModuleController;

@protocol HUAppleMusicAccountModuleControllerDelegate <NSObject>
- (void)appleMusicModuleControllerPresentSignInFlow:(HUAppleMusicAccountModuleController *)arg1;
- (void)appleMusicModuleController:(HUAppleMusicAccountModuleController *)arg1 willPresentContext:(AKAppleIDAuthenticationInAppContext *)arg2 account:(ACAccount *)arg3;
- (void)appleMusicModuleControllerDidUpdateAuthenticationState:(HUAppleMusicAccountModuleController *)arg1;
@end

