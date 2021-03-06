//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SIMSetupSupport/TSSIMSetupFlowDelegate-Protocol.h>

@protocol TSSIMSetupDelegate;

@interface TSSIMSetupFlow : NSObject <TSSIMSetupFlowDelegate>
{
    id <TSSIMSetupDelegate> _delegate;
}

+ (id)initWithActivationCodeOnlyFlow;
+ (id)initWithAppName:(id)arg1 requireSetup:(BOOL)arg2 skipGeneralInstallConsent:(BOOL)arg3;
+ (id)initWithAppName:(id)arg1 requireSetup:(BOOL)arg2;
+ (id)initActivationCodeRequireSetup:(BOOL)arg1;
+ (id)initWithSetupFlowWithIccid:(id)arg1 showAddPlan:(BOOL)arg2;
+ (id)initWithOptions:(id)arg1;
+ (void)needsToRunUsingMessageSession:(id)arg1 completion:(CDUnknownBlockType)arg2;
+ (void)needsToRun:(CDUnknownBlockType)arg1;
@property __weak id <TSSIMSetupDelegate> delegate; // @synthesize delegate=_delegate;
// - (void).cxx_destruct;
- (void)receivedResponse;
- (void)waitForResponse:(id)arg1;
- (void)userDidTapCancel;
- (void)viewControllerDidComplete:(id)arg1;
- (void)navigateToNextPaneFrom:(id)arg1 navigationController:(id)arg2;
- (id)nextViewControllerFrom:(id)arg1;
- (void)firstViewController:(CDUnknownBlockType)arg1;
- (id)firstViewController;

@end

