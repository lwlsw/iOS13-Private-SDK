//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@class NSString;

@interface PKDSPContext : NSObject <NSCopying, NSSecureCoding>
{
    NSString *_secureElementID;
    NSString *_serverEndpointIdentifier;
    NSString *_cardholderName;
    NSString *_phoneNumber;
    NSString *_peerPaymentRecipientAddress;
    NSUInteger _eventFrequency;
    NSString *_primaryAppleAccountFirstName;
    NSString *_primaryAppleAccountLastName;
}

+ (BOOL)supportsSecureCoding;
@property(copy, nonatomic) NSString *primaryAppleAccountLastName; // @synthesize primaryAppleAccountLastName=_primaryAppleAccountLastName;
@property(copy, nonatomic) NSString *primaryAppleAccountFirstName; // @synthesize primaryAppleAccountFirstName=_primaryAppleAccountFirstName;
@property(nonatomic) NSUInteger eventFrequency; // @synthesize eventFrequency=_eventFrequency;
@property(copy, nonatomic) NSString *peerPaymentRecipientAddress; // @synthesize peerPaymentRecipientAddress=_peerPaymentRecipientAddress;
@property(copy, nonatomic) NSString *phoneNumber; // @synthesize phoneNumber=_phoneNumber;
@property(copy, nonatomic) NSString *cardholderName; // @synthesize cardholderName=_cardholderName;
@property(copy, nonatomic) NSString *serverEndpointIdentifier; // @synthesize serverEndpointIdentifier=_serverEndpointIdentifier;
@property(copy, nonatomic) NSString *secureElementID; // @synthesize secureElementID=_secureElementID;
// - (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)setPrimaryAppleAccount:(id)arg1;
- (NSUInteger)hash;
- (BOOL)isEqual:(id)arg1;
// - (id)copyWithZone:(_NSZone )arg1;

@end

