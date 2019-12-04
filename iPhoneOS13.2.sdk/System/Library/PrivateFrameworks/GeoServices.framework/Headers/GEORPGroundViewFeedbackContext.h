//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>



@class GEOPDMuninViewState, NSMutableArray, NSString, PBDataReader, PBUnknownFields;

@interface GEORPGroundViewFeedbackContext : PBCodable <NSCopying>
{
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    CDStruct_62a50c50 _visiblePlaceMuids;
    NSString *_imageId;
    unsigned long long _imdataId;
    NSMutableArray *_onscreenImageResources;
    GEOPDMuninViewState *_viewState;
    NSMutableArray *_visibleFeatureHandles;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s _readerLock;
    unsigned int _metadataTileBuildId;
    struct {
        unsigned int has_imdataId:1;
        unsigned int has_metadataTileBuildId:1;
        unsigned int read_unknownFields:1;
        unsigned int read_visiblePlaceMuids:1;
        unsigned int read_imageId:1;
        unsigned int read_onscreenImageResources:1;
        unsigned int read_viewState:1;
        unsigned int read_visibleFeatureHandles:1;
        unsigned int wrote_unknownFields:1;
        unsigned int wrote_visiblePlaceMuids:1;
        unsigned int wrote_imageId:1;
        unsigned int wrote_imdataId:1;
        unsigned int wrote_onscreenImageResources:1;
        unsigned int wrote_viewState:1;
        unsigned int wrote_visibleFeatureHandles:1;
        unsigned int wrote_metadataTileBuildId:1;
    } _flags;
}

+ (_Bool)isValid:(id)arg1;
+ (Class)visibleFeatureHandleType;
+ (Class)onscreenImageResourceType;
- (void)clearUnknownFields:(_Bool)arg1;
@property(readonly, nonatomic) PBUnknownFields *unknownFields;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)readAll:(_Bool)arg1;
- (id)dictionaryRepresentation;
- (id)description;
- (id)visibleFeatureHandleAtIndex:(unsigned long long)arg1;
- (unsigned long long)visibleFeatureHandlesCount;
- (void)_addNoFlagsVisibleFeatureHandle:(id)arg1;
- (void)addVisibleFeatureHandle:(id)arg1;
- (void)clearVisibleFeatureHandles;
@property(retain, nonatomic) NSMutableArray *visibleFeatureHandles;
- (void)_readVisibleFeatureHandles;
@property(retain, nonatomic) NSString *imageId;
@property(readonly, nonatomic) _Bool hasImageId;
- (void)_readImageId;
@property(nonatomic) _Bool hasImdataId;
@property(nonatomic) unsigned long long imdataId;
- (void)setVisiblePlaceMuids:(unsigned long long *)arg1 count:(unsigned long long)arg2;
- (unsigned long long)visiblePlaceMuidAtIndex:(unsigned long long)arg1;
- (void)_addNoFlagsVisiblePlaceMuid:(unsigned long long)arg1;
- (void)addVisiblePlaceMuid:(unsigned long long)arg1;
- (void)clearVisiblePlaceMuids;
@property(readonly, nonatomic) unsigned long long *visiblePlaceMuids;
@property(readonly, nonatomic) unsigned long long visiblePlaceMuidsCount;
- (void)_readVisiblePlaceMuids;
- (id)onscreenImageResourceAtIndex:(unsigned long long)arg1;
- (unsigned long long)onscreenImageResourcesCount;
- (void)_addNoFlagsOnscreenImageResource:(id)arg1;
- (void)addOnscreenImageResource:(id)arg1;
- (void)clearOnscreenImageResources;
@property(retain, nonatomic) NSMutableArray *onscreenImageResources;
- (void)_readOnscreenImageResources;
@property(nonatomic) _Bool hasMetadataTileBuildId;
@property(nonatomic) unsigned int metadataTileBuildId;
@property(retain, nonatomic) GEOPDMuninViewState *viewState;
@property(readonly, nonatomic) _Bool hasViewState;
- (void)_readViewState;
- (void)dealloc;
- (id)initWithData:(id)arg1;
- (id)init;

@end
