//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PassKitCore/PKApplyWebServiceRequest.h>


@class NSString, NSURL, PKPaymentDeviceMetadata;

@interface PKApplyWebServiceTermsRequest : PKApplyWebServiceRequest <NSSecureCoding>
{
    BOOL _termsAccepted;
    NSString *_applicationIdentifier;
    NSString *_applicationTermsIdentifier;
    NSString *_offerTermsIdentifier;
    NSURL *_baseURL;
    PKPaymentDeviceMetadata *_deviceMetadata;
}

+ (BOOL)supportsSecureCoding;
@property(retain, nonatomic) PKPaymentDeviceMetadata *deviceMetadata; // @synthesize deviceMetadata=_deviceMetadata;
@property(retain, nonatomic) NSURL *baseURL; // @synthesize baseURL=_baseURL;
@property(nonatomic) BOOL termsAccepted; // @synthesize termsAccepted=_termsAccepted;
@property(copy, nonatomic) NSString *offerTermsIdentifier; // @synthesize offerTermsIdentifier=_offerTermsIdentifier;
@property(copy, nonatomic) NSString *applicationTermsIdentifier; // @synthesize applicationTermsIdentifier=_applicationTermsIdentifier;
@property(copy, nonatomic) NSString *applicationIdentifier; // @synthesize applicationIdentifier=_applicationIdentifier;
// - (void).cxx_destruct;
- (id)_urlRequestWithAppleAccountInformation:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

