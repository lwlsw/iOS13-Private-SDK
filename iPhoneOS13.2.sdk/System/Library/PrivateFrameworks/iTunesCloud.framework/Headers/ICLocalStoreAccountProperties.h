//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@class NSDictionary, NSString;

@interface ICLocalStoreAccountProperties : NSObject <NSCopying, NSMutableCopying, NSSecureCoding>
{
    NSString *_storefrontIdentifier;
}

+ (BOOL)supportsSecureCoding;
// - (void).cxx_destruct;
- (void)_copyLocalStoreAccountPropertiesToOtherInstance:(id)arg1 withZone:(_NSZone )arg2;
@property(readonly, copy, nonatomic) NSDictionary *propertyListRepresentation;
- (id)initWithPropertyListRepresentation:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)mutableCopyWithZone:(_NSZone )arg1;
// - (id)copyWithZone:(_NSZone )arg1;
- (BOOL)isEqual:(id)arg1;
- (NSUInteger)hash;
- (id)description;
@property(readonly, copy, nonatomic) NSString *storefrontIdentifier;

@end

