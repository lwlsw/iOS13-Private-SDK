//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>


@class GEOMapItemStorage;

@interface GEORouteHypothesisRequest : PBCodable <NSCopying>
{
    double _arrivalDate;
    GEOMapItemStorage *_destinationLocation;
    double _expirationDate;
    int _transportType;
    struct {
        unsigned int has_arrivalDate:1;
        unsigned int has_expirationDate:1;
        unsigned int has_transportType:1;
    } _flags;
}

+ (BOOL)isValid:(id)arg1;
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
@property(nonatomic) BOOL hasExpirationDate;
@property(nonatomic) double expirationDate;
- (int)StringAsTransportType:(id)arg1;
- (id)transportTypeAsString:(int)arg1;
@property(nonatomic) BOOL hasTransportType;
@property(nonatomic) int transportType;
@property(retain, nonatomic) GEOMapItemStorage *destinationLocation;
@property(readonly, nonatomic) BOOL hasDestinationLocation;
@property(nonatomic) BOOL hasArrivalDate;
@property(nonatomic) double arrivalDate;

@end

