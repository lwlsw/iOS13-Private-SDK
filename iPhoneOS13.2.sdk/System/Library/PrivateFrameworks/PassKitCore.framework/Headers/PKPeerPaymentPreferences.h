//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@interface PKPeerPaymentPreferences : NSObject <NSSecureCoding, NSCopying>
{
    BOOL _requiresConfirmation;
    BOOL _canReceiveFormalPaymentRequests;
}

+ (BOOL)supportsSecureCoding;
+ (id)preferencesWithDictionary:(id)arg1;
@property(nonatomic) BOOL canReceiveFormalPaymentRequests; // @synthesize canReceiveFormalPaymentRequests=_canReceiveFormalPaymentRequests;
@property(nonatomic) BOOL requiresConfirmation; // @synthesize requiresConfirmation=_requiresConfirmation;
- (id)description;
- (NSUInteger)hash;
// - (id)copyWithZone:(_NSZone )arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)dictionaryRepresentation;
- (id)initWithDictionary:(id)arg1;

@end

