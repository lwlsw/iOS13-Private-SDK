//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>


@class GEOTimeCheckpoints, PBUnknownFields;

@interface GEOETAStep : PBCodable <NSCopying>
{
    PBUnknownFields *_unknownFields;
    GEOTimeCheckpoints *_timeCheckpoints;
    unsigned int _distanceRemaining;
    unsigned int _expectedTime;
    unsigned int _stepID;
    int _zilchPointIndex;
    struct {
        unsigned int has_distanceRemaining:1;
        unsigned int has_expectedTime:1;
        unsigned int has_stepID:1;
        unsigned int has_zilchPointIndex:1;
    } _flags;
}

+ (BOOL)isValid:(id)arg1;
// - (void).cxx_destruct;
@property(nonatomic) BOOL hasDistanceRemaining;
@property(nonatomic) unsigned int distanceRemaining;
- (void)clearUnknownFields:(BOOL)arg1;
@property(readonly, nonatomic) PBUnknownFields *unknownFields;
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
@property(retain, nonatomic) GEOTimeCheckpoints *timeCheckpoints;
@property(readonly, nonatomic) BOOL hasTimeCheckpoints;
@property(nonatomic) BOOL hasZilchPointIndex;
@property(nonatomic) int zilchPointIndex;
@property(nonatomic) BOOL hasExpectedTime;
@property(nonatomic) unsigned int expectedTime;
@property(nonatomic) BOOL hasStepID;
@property(nonatomic) unsigned int stepID;

@end

