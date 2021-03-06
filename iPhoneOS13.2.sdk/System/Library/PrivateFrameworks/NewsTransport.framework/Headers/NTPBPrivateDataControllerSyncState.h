//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>


@class NSMutableArray;

@interface NTPBPrivateDataControllerSyncState : PBCodable <NSCopying>
{
    NSUInteger _version;
    NSMutableArray *_recordStates;
    NSMutableArray *_zoneStates;
//     CDStruct_f20694ce _has;
}

+ (Class)recordStatesType;
+ (Class)zoneStatesType;
@property(nonatomic) NSUInteger version; // @synthesize version=_version;
@property(retain, nonatomic) NSMutableArray *recordStates; // @synthesize recordStates=_recordStates;
@property(retain, nonatomic) NSMutableArray *zoneStates; // @synthesize zoneStates=_zoneStates;
- (void)mergeFrom:(id)arg1;
- (NSUInteger)hash;
- (BOOL)isEqual:(id)arg1;
// - (id)copyWithZone:(_NSZone )arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(nonatomic) BOOL hasVersion;
- (id)recordStatesAtIndex:(NSUInteger)arg1;
- (NSUInteger)recordStatesCount;
- (void)addRecordStates:(id)arg1;
- (void)clearRecordStates;
- (id)zoneStatesAtIndex:(NSUInteger)arg1;
- (NSUInteger)zoneStatesCount;
- (void)addZoneStates:(id)arg1;
- (void)clearZoneStates;
- (void)dealloc;

@end

