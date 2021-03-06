//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>


@class GEORPFeedbackConversation, GEORPFeedbackNotification, GEORPFeedbackOverview, PBDataReader, PBUnknownFields;

@interface GEORPFeedbackComponentValue : PBCodable <NSCopying>
{
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    GEORPFeedbackConversation *_conversation;
    GEORPFeedbackNotification *_notification;
    GEORPFeedbackOverview *_overview;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
//     struct os_unfair_lock_s _readerLock;
    struct {
        unsigned int read_unknownFields:1;
        unsigned int read_conversation:1;
        unsigned int read_notification:1;
        unsigned int read_overview:1;
        unsigned int wrote_unknownFields:1;
        unsigned int wrote_conversation:1;
        unsigned int wrote_notification:1;
        unsigned int wrote_overview:1;
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
@property(retain, nonatomic) GEORPFeedbackConversation *conversation;
@property(readonly, nonatomic) BOOL hasConversation;
- (void)_readConversation;
@property(retain, nonatomic) GEORPFeedbackOverview *overview;
@property(readonly, nonatomic) BOOL hasOverview;
- (void)_readOverview;
@property(retain, nonatomic) GEORPFeedbackNotification *notification;
@property(readonly, nonatomic) BOOL hasNotification;
- (void)_readNotification;
- (id)initWithData:(id)arg1;
- (id)init;

@end

