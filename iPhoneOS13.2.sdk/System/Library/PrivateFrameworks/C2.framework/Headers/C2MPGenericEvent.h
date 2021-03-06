//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>


@class NSMutableArray, NSString;

__attribute__((visibility("hidden")))
@interface C2MPGenericEvent : PBCodable <NSCopying>
{
    NSUInteger _timestampEnd;
    NSUInteger _timestampStart;
    NSMutableArray *_metrics;
    NSString *_name;
    int _type;
    struct {
        unsigned int timestampEnd:1;
        unsigned int timestampStart:1;
        unsigned int type:1;
    } _has;
}

+ (Class)metricType;
@property(retain, nonatomic) NSMutableArray *metrics; // @synthesize metrics=_metrics;
@property(nonatomic) NSUInteger timestampEnd; // @synthesize timestampEnd=_timestampEnd;
@property(nonatomic) NSUInteger timestampStart; // @synthesize timestampStart=_timestampStart;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
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
- (id)metricAtIndex:(NSUInteger)arg1;
- (NSUInteger)metricsCount;
- (void)addMetric:(id)arg1;
- (void)clearMetrics;
@property(nonatomic) BOOL hasTimestampEnd;
@property(nonatomic) BOOL hasTimestampStart;
@property(readonly, nonatomic) BOOL hasName;
- (int)StringAsType:(id)arg1;
- (id)typeAsString:(int)arg1;
@property(nonatomic) BOOL hasType;
@property(nonatomic) int type; // @synthesize type=_type;

@end

