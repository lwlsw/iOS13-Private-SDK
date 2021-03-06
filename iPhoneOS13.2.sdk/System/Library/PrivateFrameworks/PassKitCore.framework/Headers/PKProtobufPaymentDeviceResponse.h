//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>


@class NSMutableArray;

@interface PKProtobufPaymentDeviceResponse : PBCodable <NSCopying>
{
    unsigned int _defaultPaymentInstrumentIndex;
    int _nearby;
    NSMutableArray *_paymentInstruments;
    unsigned int _protocolVersion;
    NSMutableArray *_supportedSetupFeatures;
    BOOL _deviceDisabled;
    BOOL _locked;
    BOOL _supportsFaceID;
    BOOL _userDisabled;
   struct {
        unsigned int defaultPaymentInstrumentIndex:1;
        unsigned int nearby:1;
        unsigned int protocolVersion:1;
        unsigned int deviceDisabled:1;
        unsigned int locked:1;
        unsigned int supportsFaceID:1;
        unsigned int userDisabled:1;
    } _has;
}

+ (Class)supportedSetupFeaturesType;
+ (Class)paymentInstrumentsType;
@property(retain, nonatomic) NSMutableArray *supportedSetupFeatures; // @synthesize supportedSetupFeatures=_supportedSetupFeatures;
@property(nonatomic) BOOL supportsFaceID; // @synthesize supportsFaceID=_supportsFaceID;
@property(nonatomic) unsigned int protocolVersion; // @synthesize protocolVersion=_protocolVersion;
@property(nonatomic) BOOL deviceDisabled; // @synthesize deviceDisabled=_deviceDisabled;
@property(nonatomic) BOOL userDisabled; // @synthesize userDisabled=_userDisabled;
@property(nonatomic) unsigned int defaultPaymentInstrumentIndex; // @synthesize defaultPaymentInstrumentIndex=_defaultPaymentInstrumentIndex;
@property(retain, nonatomic) NSMutableArray *paymentInstruments; // @synthesize paymentInstruments=_paymentInstruments;
@property(nonatomic) BOOL locked; // @synthesize locked=_locked;
// - (void).cxx_destruct;
- (void)mergeFrom:(id)arg1;
- (NSUInteger)hash;
- (BOOL)isEqual:(id)arg1;
// - (id)copyWithZone:(_NSZone )arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
- (id)supportedSetupFeaturesAtIndex:(NSUInteger)arg1;
- (NSUInteger)supportedSetupFeaturesCount;
- (void)addSupportedSetupFeatures:(id)arg1;
- (void)clearSupportedSetupFeatures;
@property(nonatomic) BOOL hasSupportsFaceID;
@property(nonatomic) BOOL hasProtocolVersion;
- (int)StringAsNearby:(id)arg1;
- (id)nearbyAsString:(int)arg1;
@property(nonatomic) BOOL hasNearby;
@property(nonatomic) int nearby; // @synthesize nearby=_nearby;
@property(nonatomic) BOOL hasDeviceDisabled;
@property(nonatomic) BOOL hasUserDisabled;
@property(nonatomic) BOOL hasDefaultPaymentInstrumentIndex;
- (id)paymentInstrumentsAtIndex:(NSUInteger)arg1;
- (NSUInteger)paymentInstrumentsCount;
- (void)addPaymentInstruments:(id)arg1;
- (void)clearPaymentInstruments;
@property(nonatomic) BOOL hasLocked;

@end

