//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>


@interface HealthUIAWDHealthUIRecordsNumberOfAccountsQuery : PBCodable <NSCopying>
{
    NSUInteger _numAccounts;
    NSUInteger _timestamp;
   struct {
        unsigned int numAccounts:1;
        unsigned int timestamp:1;
    } _has;
}

@property(nonatomic) NSUInteger numAccounts; // @synthesize numAccounts=_numAccounts;
@property(nonatomic) NSUInteger timestamp; // @synthesize timestamp=_timestamp;
- (void)mergeFrom:(id)arg1;
- (NSUInteger)hash;
- (BOOL)isEqual:(id)arg1;
// - (id)copyWithZone:(_NSZone )arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(nonatomic) BOOL hasNumAccounts;
@property(nonatomic) BOOL hasTimestamp;

@end

