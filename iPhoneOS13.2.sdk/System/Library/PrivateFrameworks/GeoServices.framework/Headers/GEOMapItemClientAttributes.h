//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>


@class GEOMapItemAddressBookAttributes, GEOMapItemCorrectedLocationAttributes, GEOMapItemRoutineAttributes, PBDataReader, PBUnknownFields;

@interface GEOMapItemClientAttributes : PBCodable <NSCopying>
{
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    GEOMapItemAddressBookAttributes *_addressBookAttributes;
    GEOMapItemCorrectedLocationAttributes *_correctedLocationAttributes;
    GEOMapItemRoutineAttributes *_routineAttributes;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
//     struct os_unfair_lock_s _readerLock;
    struct {
        unsigned int read_unknownFields:1;
        unsigned int read_addressBookAttributes:1;
        unsigned int read_correctedLocationAttributes:1;
        unsigned int read_routineAttributes:1;
        unsigned int wrote_unknownFields:1;
        unsigned int wrote_addressBookAttributes:1;
        unsigned int wrote_correctedLocationAttributes:1;
        unsigned int wrote_routineAttributes:1;
    } _flags;
}

+ (BOOL)isValid:(id)arg1;
// - (void).cxx_destruct;
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
@property(retain, nonatomic) GEOMapItemCorrectedLocationAttributes *correctedLocationAttributes;
@property(readonly, nonatomic) BOOL hasCorrectedLocationAttributes;
- (void)_readCorrectedLocationAttributes;
@property(retain, nonatomic) GEOMapItemRoutineAttributes *routineAttributes;
@property(readonly, nonatomic) BOOL hasRoutineAttributes;
- (void)_readRoutineAttributes;
@property(retain, nonatomic) GEOMapItemAddressBookAttributes *addressBookAttributes;
@property(readonly, nonatomic) BOOL hasAddressBookAttributes;
- (void)_readAddressBookAttributes;
- (id)initWithData:(id)arg1;
- (id)init;

@end

