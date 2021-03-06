//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>


@class GEOPDCameraFrame, GEOPDLocationInfo, PBDataReader;

@interface GEOPDMuninViewState : PBCodable <NSCopying>
{
    PBDataReader *_reader;
    GEOPDCameraFrame *_cameraFrame;
    GEOPDLocationInfo *_locationInfo;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
//     struct os_unfair_lock_s _readerLock;
    struct {
        unsigned int read_cameraFrame:1;
        unsigned int read_locationInfo:1;
        unsigned int wrote_cameraFrame:1;
        unsigned int wrote_locationInfo:1;
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
@property(retain, nonatomic) GEOPDLocationInfo *locationInfo;
@property(readonly, nonatomic) BOOL hasLocationInfo;
- (void)_readLocationInfo;
@property(retain, nonatomic) GEOPDCameraFrame *cameraFrame;
@property(readonly, nonatomic) BOOL hasCameraFrame;
- (void)_readCameraFrame;
- (id)initWithData:(id)arg1;
- (id)init;

@end

