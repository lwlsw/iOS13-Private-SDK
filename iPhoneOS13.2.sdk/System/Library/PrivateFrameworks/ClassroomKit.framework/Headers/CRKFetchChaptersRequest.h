//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "CATTaskRequest.h"

@class NSString;

@interface CRKFetchChaptersRequest : CATTaskRequest
{
    NSString *_path;
    NSString *_identifierType;
    NSString *_identifier;
}

+ (BOOL)supportsSecureCoding;
+ (Class)whitelistedClassForResultObject;
@property(copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(copy, nonatomic) NSString *identifierType; // @synthesize identifierType=_identifierType;
@property(copy, nonatomic) NSString *path; // @synthesize path=_path;
// - (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (BOOL)isValidWithError:(id )arg1;

@end

