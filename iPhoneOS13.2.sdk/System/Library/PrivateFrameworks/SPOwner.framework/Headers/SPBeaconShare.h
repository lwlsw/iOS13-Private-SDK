//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>




@class NSDate, NSString, NSUUID, SPHandle;

@interface SPBeaconShare : NSObject <NSCopying, NSSecureCoding>
{
    _Bool _accepted;
    NSUUID *_identifier;
    SPHandle *_handle;
    NSDate *_expiration;
    NSString *_correlationIdentifier;
}

+ (_Bool)supportsSecureCoding;
@property(copy, nonatomic) NSString *correlationIdentifier; // @synthesize correlationIdentifier=_correlationIdentifier;
@property(copy, nonatomic) NSDate *expiration; // @synthesize expiration=_expiration;
@property(nonatomic) _Bool accepted; // @synthesize accepted=_accepted;
@property(copy, nonatomic) SPHandle *handle; // @synthesize handle=_handle;
@property(copy, nonatomic) NSUUID *identifier; // @synthesize identifier=_identifier;
- (id)debugDescription;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)initWithIdentifier:(id)arg1 handle:(id)arg2 accepted:(_Bool)arg3 expiration:(id)arg4 correlationIdentifier:(id)arg5;

@end
