//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface PKPaymentSetupAssistantRegistrationUtilities : NSObject
{
}

+ (void)_macPreflight:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
+ (id)_peerPaymentCredentialFromPeerPaymentWebService:(id)arg1;
+ (id)_bridgeContextDefaultLocalCredential;
+ (void)_handlePreflightFinishedWithSuccess:(BOOL)arg1 paymentCredentials:(id)arg2 provisioningController:(id)arg3 completion:(CDUnknownBlockType)arg4;
+ (void)_bridgePreflight:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
+ (void)_phonePreflight:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
+ (void)preflightPaymentSetupProvisioningController:(id)arg1 forSetupAssistant:(NSUInteger)arg2 withCompletion:(CDUnknownBlockType)arg3;
+ (BOOL)_shouldCheckMacNeedsToRun;
+ (BOOL)_macNeedsToRun:(NSUInteger )arg1 secureElementOwnershipState:(NSUInteger)arg2;
+ (BOOL)_macNeedsToRun:(NSUInteger )arg1;
+ (BOOL)_bridgeNeedsToRun:(NSUInteger )arg1;
+ (BOOL)_phoneNeedsToRun:(NSUInteger )arg1;
+ (BOOL)setupAssistantNeedsToRun:(NSUInteger)arg1 returningRequirements:(NSUInteger )arg2;

@end

