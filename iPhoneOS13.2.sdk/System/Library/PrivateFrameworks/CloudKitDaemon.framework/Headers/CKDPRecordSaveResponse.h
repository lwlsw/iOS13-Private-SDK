//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>


@class CKDPDateStatistics, CKDPRecord, NSString;

__attribute__((visibility("hidden")))
@interface CKDPRecordSaveResponse : PBCodable <NSCopying>
{
    NSString *_etag;
    CKDPRecord *_serverFields;
    CKDPDateStatistics *_timeStatistics;
}

@property(retain, nonatomic) CKDPRecord *serverFields; // @synthesize serverFields=_serverFields;
@property(retain, nonatomic) CKDPDateStatistics *timeStatistics; // @synthesize timeStatistics=_timeStatistics;
@property(retain, nonatomic) NSString *etag; // @synthesize etag=_etag;
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
@property(readonly, nonatomic) BOOL hasServerFields;
@property(readonly, nonatomic) BOOL hasTimeStatistics;
@property(readonly, nonatomic) BOOL hasEtag;

@end

