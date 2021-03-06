//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>


@class GEOLatLng, GEOLatLngE7, NSMutableArray, NSString, PBDataReader;

@interface GEOWiFiBSS : PBCodable <NSCopying>
{
    PBDataReader *_reader;
//     CDStruct_95bda58d _attributes;
    NSString *_identifier;
    GEOLatLngE7 *_latLngE7;
    GEOLatLng *_location;
    NSMutableArray *_qualities;
    long long _uniqueIdentifier;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
//     struct os_unfair_lock_s _readerLock;
    struct {
        unsigned int has_uniqueIdentifier:1;
        unsigned int read_attributes:1;
        unsigned int read_identifier:1;
        unsigned int read_latLngE7:1;
        unsigned int read_location:1;
        unsigned int read_qualities:1;
        unsigned int wrote_attributes:1;
        unsigned int wrote_identifier:1;
        unsigned int wrote_latLngE7:1;
        unsigned int wrote_location:1;
        unsigned int wrote_qualities:1;
        unsigned int wrote_uniqueIdentifier:1;
    } _flags;
}

+ (BOOL)isValid:(id)arg1;
+ (Class)qualitiesType;
// - (void).cxx_destruct;
- (void)mergeFrom:(id)arg1;
- (NSUInteger)hash;
- (BOOL)isEqual:(id)arg1;
// - (id)copyWithZone:(_NSZone )arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)readAll:(BOOL)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(retain, nonatomic) GEOLatLngE7 *latLngE7;
@property(readonly, nonatomic) BOOL hasLatLngE7;
- (void)_readLatLngE7;
@property(nonatomic) BOOL hasUniqueIdentifier;
@property(nonatomic) long long uniqueIdentifier;
- (id)qualitiesAtIndex:(NSUInteger)arg1;
- (NSUInteger)qualitiesCount;
- (void)_addNoFlagsQualities:(id)arg1;
- (void)addQualities:(id)arg1;
- (void)clearQualities;
@property(retain, nonatomic) NSMutableArray *qualities;
- (void)_readQualities;
- (int)StringAsAttributes:(id)arg1;
- (id)attributesAsString:(int)arg1;
- (void)setAttributes:(int )arg1 count:(NSUInteger)arg2;
- (int)attributesAtIndex:(NSUInteger)arg1;
- (void)_addNoFlagsAttributes:(int)arg1;
- (void)addAttributes:(int)arg1;
- (void)clearAttributes;
@property(readonly, nonatomic) int attributes;
@property(readonly, nonatomic) NSUInteger attributesCount;
- (void)_readAttributes;
@property(retain, nonatomic) GEOLatLng *location;
@property(readonly, nonatomic) BOOL hasLocation;
- (void)_readLocation;
@property(retain, nonatomic) NSString *identifier;
@property(readonly, nonatomic) BOOL hasIdentifier;
- (void)_readIdentifier;
- (void)dealloc;
- (id)initWithData:(id)arg1;
- (id)init;

@end

