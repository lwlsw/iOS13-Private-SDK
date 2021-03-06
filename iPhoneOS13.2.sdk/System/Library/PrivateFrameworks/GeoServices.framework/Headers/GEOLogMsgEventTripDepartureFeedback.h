//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>


@interface GEOLogMsgEventTripDepartureFeedback : PBCodable <NSCopying>
{
    double _distanceFromOrigin;
    double _timeFromOrigin;
    int _transportMode;
    struct {
        unsigned int has_distanceFromOrigin:1;
        unsigned int has_timeFromOrigin:1;
        unsigned int has_transportMode:1;
    } _flags;
}

+ (BOOL)isValid:(id)arg1;
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
@property(nonatomic) BOOL hasTimeFromOrigin;
@property(nonatomic) double timeFromOrigin;
@property(nonatomic) BOOL hasDistanceFromOrigin;
@property(nonatomic) double distanceFromOrigin;
- (int)StringAsTransportMode:(id)arg1;
- (id)transportModeAsString:(int)arg1;
@property(nonatomic) BOOL hasTransportMode;
@property(nonatomic) int transportMode;

@end

