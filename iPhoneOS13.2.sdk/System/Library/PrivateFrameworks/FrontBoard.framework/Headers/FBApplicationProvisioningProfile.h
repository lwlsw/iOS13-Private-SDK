//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDate, NSString;

@interface FBApplicationProvisioningProfile : NSObject
{
    NSString *_allowedApplicationIdentifierEntitlement;
    BOOL _appleInternalProfile;
    BOOL _beta;
    BOOL _freeDeveloperProfile;
    BOOL _provisionsAllDevices;
    BOOL _provisionsThisDevice;
    NSString *_signerIdentity;
    NSDate *_expirationDate;
    NSString *_UUID;
}

@property(readonly, copy, nonatomic) NSString *UUID; // @synthesize UUID=_UUID;
@property(readonly, nonatomic) BOOL provisionsThisDevice; // @synthesize provisionsThisDevice=_provisionsThisDevice;
@property(readonly, nonatomic) BOOL provisionsAllDevices; // @synthesize provisionsAllDevices=_provisionsAllDevices;
@property(readonly, nonatomic, getter=isFreeDeveloperProfile) BOOL freeDeveloperProfile; // @synthesize freeDeveloperProfile=_freeDeveloperProfile;
@property(readonly, nonatomic, getter=isBeta) BOOL beta; // @synthesize beta=_beta;
@property(readonly, nonatomic, getter=isAppleInternalProfile) BOOL appleInternalProfile; // @synthesize appleInternalProfile=_appleInternalProfile;
@property(readonly, nonatomic) NSDate *expirationDate; // @synthesize expirationDate=_expirationDate;
@property(readonly, copy, nonatomic) NSString *signerIdentity; // @synthesize signerIdentity=_signerIdentity;
// - (void).cxx_destruct;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)succinctDescriptionBuilder;
- (id)succinctDescription;
- (id)description;
- (BOOL)allowsApplicationIdentifierEntitlement:(id)arg1;
- (id)initWithSignerIdentity:(id)arg1 profile:(id)arg2;

@end

