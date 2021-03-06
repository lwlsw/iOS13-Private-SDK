//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>


@class NSMutableArray;

@interface NTPBPersonalizationProfile : PBCodable <NSCopying>
{
    NSMutableArray *_aggregates;
    NSMutableArray *_histories;
}

+ (Class)historiesType;
+ (Class)aggregatesType;
@property(retain, nonatomic) NSMutableArray *histories; // @synthesize histories=_histories;
@property(retain, nonatomic) NSMutableArray *aggregates; // @synthesize aggregates=_aggregates;
- (void)mergeFrom:(id)arg1;
- (NSUInteger)hash;
- (BOOL)isEqual:(id)arg1;
// - (id)copyWithZone:(_NSZone )arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
- (id)historiesAtIndex:(NSUInteger)arg1;
- (NSUInteger)historiesCount;
- (void)addHistories:(id)arg1;
- (void)clearHistories;
- (id)aggregatesAtIndex:(NSUInteger)arg1;
- (NSUInteger)aggregatesCount;
- (void)addAggregates:(id)arg1;
- (void)clearAggregates;
- (void)dealloc;

@end

