//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>



@class GEOLocation, NSMutableArray, NSString, PBDataReader, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDExternalTransitLookupParameters : PBCodable <NSCopying>
{
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    NSMutableArray *_externalTransitStationCodes;
    NSString *_sourceId;
    GEOLocation *_transactionLocation;
    double _transactionTimestamp;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s _readerLock;
    struct {
        unsigned int has_transactionTimestamp:1;
        unsigned int read_unknownFields:1;
        unsigned int read_externalTransitStationCodes:1;
        unsigned int read_sourceId:1;
        unsigned int read_transactionLocation:1;
        unsigned int wrote_unknownFields:1;
        unsigned int wrote_externalTransitStationCodes:1;
        unsigned int wrote_sourceId:1;
        unsigned int wrote_transactionLocation:1;
        unsigned int wrote_transactionTimestamp:1;
    } _flags;
}

+ (_Bool)isValid:(id)arg1;
+ (Class)externalTransitStationCodeType;
- (void)clearUnknownFields:(_Bool)arg1;
@property(readonly, nonatomic) PBUnknownFields *unknownFields;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)clearSensitiveFields;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)readAll:(_Bool)arg1;
- (id)dictionaryRepresentation;
- (id)description;
- (id)externalTransitStationCodeAtIndex:(unsigned long long)arg1;
- (unsigned long long)externalTransitStationCodesCount;
- (void)_addNoFlagsExternalTransitStationCode:(id)arg1;
- (void)addExternalTransitStationCode:(id)arg1;
- (void)clearExternalTransitStationCodes;
@property(retain, nonatomic) NSMutableArray *externalTransitStationCodes;
- (void)_readExternalTransitStationCodes;
@property(retain, nonatomic) NSString *sourceId;
@property(readonly, nonatomic) _Bool hasSourceId;
- (void)_readSourceId;
@property(retain, nonatomic) GEOLocation *transactionLocation;
@property(readonly, nonatomic) _Bool hasTransactionLocation;
- (void)_readTransactionLocation;
@property(nonatomic) _Bool hasTransactionTimestamp;
@property(nonatomic) double transactionTimestamp;
- (id)initWithData:(id)arg1;
- (id)init;

@end
