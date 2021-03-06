//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SpringBoard/SBTransientOverlayViewController.h>

#import <SpringBoard/PTSettingsKeyObserver-Protocol.h>
#import <SpringBoard/SBFAuthenticationResponder-Protocol.h>
#import <SpringBoard/SBUIPasscodeLockViewDelegate-Protocol.h>

@class CSLockScreenPearlSettings, NSString, SBFUserAuthenticationController, SBUIPasscodeViewWithLockScreenStyle;
@protocol SBPasscodeEntryTransientOverlayViewControllerDelegate, SBUIPasscodeLockView;

@interface SBPasscodeEntryTransientOverlayViewController : SBTransientOverlayViewController <PTSettingsKeyObserver, SBFAuthenticationResponder, SBUIPasscodeLockViewDelegate>
{
    BOOL _attemptingUnlock;
    SBFUserAuthenticationController *_authenticationController;
    id <SBUIPasscodeLockView> _passcodeRequester;
    SBUIPasscodeViewWithLockScreenStyle *_passcodeView;
    CSLockScreenPearlSettings *_pearlSettings;
    BOOL _showEmergencyCallButton;
    BOOL _useBiometricPresentation;
    id <SBPasscodeEntryTransientOverlayViewControllerDelegate> _delegate;
    NSString *_unlockDestination;
}

@property(copy, nonatomic) NSString *unlockDestination; // @synthesize unlockDestination=_unlockDestination;
@property(nonatomic) BOOL useBiometricPresentation; // @synthesize useBiometricPresentation=_useBiometricPresentation;
@property(nonatomic) BOOL showEmergencyCallButton; // @synthesize showEmergencyCallButton=_showEmergencyCallButton;
@property(nonatomic) __weak id <SBPasscodeEntryTransientOverlayViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
// - (void).cxx_destruct;
- (void)_updatePrototypeSettings;
- (void)_passcodeLockViewPasscodeEntered:(id)arg1 viaMesa:(BOOL)arg2;
- (void)_attemptUnlock:(id)arg1 passcode:(id)arg2;
- (void)settings:(id)arg1 changedValueForKey:(id)arg2;
- (void)passcodeLockViewEmergencyCallButtonPressed:(id)arg1;
- (void)passcodeLockViewCancelButtonPressed:(id)arg1;
- (void)passcodeLockViewPasscodeEnteredViaMesa:(id)arg1;
- (void)passcodeLockViewPasscodeEntered:(id)arg1;
- (void)passcodeLockViewPasscodeDidChange:(id)arg1;
- (long long)idleWarnMode;
- (long long)idleTimerMode;
- (long long)idleTimerDuration;
- (void)handleInvalidAuthenticationRequest:(id)arg1;
- (void)handleFailedAuthenticationRequest:(id)arg1 error:(id)arg2;
- (void)handleSuccessfulAuthenticationRequest:(id)arg1;
- (id)preferredDisplayLayoutElementIdentifier;
- (id)newTransientOverlayPresentationTransitionCoordinator;
- (id)newTransientOverlayDismissalTransitionCoordinator;
- (BOOL)isContentOpaque;
- (BOOL)_canShowWhileLocked;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (void)viewDidDisappear:(BOOL)arg1;
- (NSUInteger)supportedInterfaceOrientations;
- (long long)preferredStatusBarStyle;
- (long long)preferredInterfaceOrientationForPresentation;
- (id)initWithAuthenticationController:(id)arg1;

@end

