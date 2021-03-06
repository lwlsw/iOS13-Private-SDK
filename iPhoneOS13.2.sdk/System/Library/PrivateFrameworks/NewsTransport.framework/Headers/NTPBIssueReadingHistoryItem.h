//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>


@class NSString, NTPBDate;

@interface NTPBIssueReadingHistoryItem : PBCodable <NSCopying>
{
    NSString *_identifier;
    NSString *_issueID;
    NTPBDate *_lastBadgedPBDate;
    NTPBDate *_lastEngagedPBDate;
    NTPBDate *_lastRemovedFromMyMagazinesPBDate;
    NSString *_lastVisitedArticleID;
    NTPBDate *_lastVisitedPBDate;
    NSString *_lastVisitedPageID;
}

@property(retain, nonatomic) NTPBDate *lastRemovedFromMyMagazinesPBDate; // @synthesize lastRemovedFromMyMagazinesPBDate=_lastRemovedFromMyMagazinesPBDate;
@property(retain, nonatomic) NTPBDate *lastEngagedPBDate; // @synthesize lastEngagedPBDate=_lastEngagedPBDate;
@property(retain, nonatomic) NTPBDate *lastBadgedPBDate; // @synthesize lastBadgedPBDate=_lastBadgedPBDate;
@property(retain, nonatomic) NSString *lastVisitedPageID; // @synthesize lastVisitedPageID=_lastVisitedPageID;
@property(retain, nonatomic) NSString *lastVisitedArticleID; // @synthesize lastVisitedArticleID=_lastVisitedArticleID;
@property(retain, nonatomic) NTPBDate *lastVisitedPBDate; // @synthesize lastVisitedPBDate=_lastVisitedPBDate;
@property(retain, nonatomic) NSString *issueID; // @synthesize issueID=_issueID;
@property(retain, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (void)mergeFrom:(id)arg1;
- (NSUInteger)hash;
- (BOOL)isEqual:(id)arg1;
// - (id)copyWithZone:(_NSZone )arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(readonly, nonatomic) BOOL hasLastRemovedFromMyMagazinesPBDate;
@property(readonly, nonatomic) BOOL hasLastEngagedPBDate;
@property(readonly, nonatomic) BOOL hasLastBadgedPBDate;
@property(readonly, nonatomic) BOOL hasLastVisitedPageID;
@property(readonly, nonatomic) BOOL hasLastVisitedArticleID;
@property(readonly, nonatomic) BOOL hasLastVisitedPBDate;
@property(readonly, nonatomic) BOOL hasIssueID;
@property(readonly, nonatomic) BOOL hasIdentifier;
- (void)dealloc;

@end

