//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@class NSString;

@interface NNMKAccountIdentity : NSObject <NSSecureCoding>
{
    NSString *_accountId;
    NSString *_username;
    NSString *_displayName;
    NSString *_token;
    NSString *_refreshToken;
    NSUInteger _identityType;
}

+ (BOOL)supportsSecureCoding;
@property(nonatomic) NSUInteger identityType; // @synthesize identityType=_identityType;
@property(copy, nonatomic) NSString *refreshToken; // @synthesize refreshToken=_refreshToken;
@property(copy, nonatomic) NSString *token; // @synthesize token=_token;
@property(copy, nonatomic) NSString *displayName; // @synthesize displayName=_displayName;
@property(copy, nonatomic) NSString *username; // @synthesize username=_username;
@property(copy, nonatomic) NSString *accountId; // @synthesize accountId=_accountId;
// - (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
@property(copy, nonatomic) NSString *accountIdentifier;

@end

