//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "CATTaskResultObject.h"

@class NSData;

@interface CRKGenerateIdentityResultObject : CATTaskResultObject
{
    NSData *_certificateData;
    NSData *_privateKeyData;
}

+ (BOOL)supportsSecureCoding;
@property(copy, nonatomic) NSData *privateKeyData; // @synthesize privateKeyData=_privateKeyData;
@property(copy, nonatomic) NSData *certificateData; // @synthesize certificateData=_certificateData;
// - (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;

@end

