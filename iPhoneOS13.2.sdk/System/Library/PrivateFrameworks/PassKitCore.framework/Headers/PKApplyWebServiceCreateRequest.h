//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PassKitCore/PKApplyWebServiceRequest.h>

@interface PKApplyWebServiceCreateRequest : PKApplyWebServiceRequest
{
    NSUInteger _featureIdentifier;
}

+ (BOOL)supportsSecureCoding;
@property(nonatomic) NSUInteger featureIdentifier; // @synthesize featureIdentifier=_featureIdentifier;
- (id)_urlRequestWithServiceURL:(id)arg1 appleAccountInformation:(id)arg2;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

