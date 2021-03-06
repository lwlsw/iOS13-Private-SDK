//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@class ICUserIdentity, ICUserIdentityStore, NSNumber, NSString, NSURL;

@interface ICConnectionConfiguration : NSObject <NSSecureCoding, NSCopying>
{
    ICUserIdentity *_userIdentity;
    ICUserIdentityStore *_userIdentityStore;
    NSURL *_baseURL;
    NSString *_libraryBagKey;
    NSString *_buildIdentifier;
    NSString *_purchaseClientIdentifier;
    long long _requestReason;
    NSNumber *_familyMemberStoreID;
}

+ (BOOL)supportsSecureCoding;
+ (id)configurationFromSourceConfiguration:(id)arg1 userIdentity:(id)arg2;
@property(copy, nonatomic) NSNumber *familyMemberStoreID; // @synthesize familyMemberStoreID=_familyMemberStoreID;
@property(nonatomic) long long requestReason; // @synthesize requestReason=_requestReason;
@property(copy, nonatomic) NSString *purchaseClientIdentifier; // @synthesize purchaseClientIdentifier=_purchaseClientIdentifier;
@property(copy, nonatomic) NSString *buildIdentifier; // @synthesize buildIdentifier=_buildIdentifier;
@property(copy, nonatomic) NSString *libraryBagKey; // @synthesize libraryBagKey=_libraryBagKey;
@property(copy, nonatomic) NSURL *baseURL; // @synthesize baseURL=_baseURL;
@property(readonly, nonatomic) ICUserIdentityStore *userIdentityStore; // @synthesize userIdentityStore=_userIdentityStore;
@property(copy, nonatomic) ICUserIdentity *userIdentity; // @synthesize userIdentity=_userIdentity;
// - (void).cxx_destruct;
// - (id)copyWithZone:(_NSZone )arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (NSUInteger)hash;
- (id)initWithUserIdentity:(id)arg1 userIdentityStore:(id)arg2;
- (id)initWithUserIdentity:(id)arg1;
- (id)init;

@end

