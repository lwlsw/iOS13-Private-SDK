//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "CATTaskResultObject.h"

@class NSDictionary;

@interface CRKIdentityServiceFetchPrivateKeysTaskResultObject : CATTaskResultObject
{
    NSDictionary *_identityPrivateKeySetsByKeyPairMarkers;
}

+ (_Bool)supportsSecureCoding;
@property(copy, nonatomic) NSDictionary *identityPrivateKeySetsByKeyPairMarkers; // @synthesize identityPrivateKeySetsByKeyPairMarkers=_identityPrivateKeySetsByKeyPairMarkers;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;

@end
