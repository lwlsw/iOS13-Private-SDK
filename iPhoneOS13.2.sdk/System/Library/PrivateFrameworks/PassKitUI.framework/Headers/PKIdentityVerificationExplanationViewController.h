//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PassKitUI/PKExplanationViewController.h>

#import <PassKitUI/PKExplanationViewDelegate-Protocol.h>
#import <PassKitUI/PKPeerPaymentAccountResolutionControllerDelegate-Protocol.h>

@class PKPeerPaymentIdentityVerificationController;
@protocol PKPaymentSetupViewControllerDelegate;

@interface PKIdentityVerificationExplanationViewController : PKExplanationViewController <PKExplanationViewDelegate, PKPeerPaymentAccountResolutionControllerDelegate>
{
    PKPeerPaymentIdentityVerificationController *_controller;
    id <PKPaymentSetupViewControllerDelegate> _setupDelegate;
    NSUInteger _identityVerificaionError;
}

// - (void).cxx_destruct;
- (CGSize)_snapshotSize;
- (id)_bodyText;
- (id)_titleText;
- (void)_terminateFlow;
- (void)_cancel;
- (void)_processNextViewController;
- (void)explanationViewDidSelectSetupLater:(id)arg1;
- (void)explanationViewDidSelectContinue:(id)arg1;
- (void)peerPaymentAccountResolutionController:(id)arg1 requestsDismissCurrentViewControllerAnimated:(BOOL)arg2;
- (void)peerPaymentAccountResolutionController:(id)arg1 requestsPresentViewController:(id)arg2 animated:(BOOL)arg3;
- (void)loadView;
- (id)initWithContext:(long long)arg1 setupDelegate:(id)arg2 identityVerificationController:(id)arg3;

@end

