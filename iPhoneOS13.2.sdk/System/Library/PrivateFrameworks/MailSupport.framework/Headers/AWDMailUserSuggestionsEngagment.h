//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>


@interface AWDMailUserSuggestionsEngagment : PBCodable <NSCopying>
{
    long long _searchTermLength;
    BOOL _topHitsPresent;
    BOOL _userSelectedTopHit;
    struct {
        unsigned int searchTermLength:1;
        unsigned int topHitsPresent:1;
        unsigned int userSelectedTopHit:1;
    } _has;
}

@property(nonatomic) long long searchTermLength; // @synthesize searchTermLength=_searchTermLength;
@property(nonatomic) BOOL userSelectedTopHit; // @synthesize userSelectedTopHit=_userSelectedTopHit;
@property(nonatomic) BOOL topHitsPresent; // @synthesize topHitsPresent=_topHitsPresent;
- (void)mergeFrom:(id)arg1;
- (NSUInteger)hash;
- (BOOL)isEqual:(id)arg1;
// - (id)copyWithZone:(_NSZone )arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(nonatomic) BOOL hasSearchTermLength;
@property(nonatomic) BOOL hasUserSelectedTopHit;
@property(nonatomic) BOOL hasTopHitsPresent;
- (id)initWithSearchTermLength:(NSUInteger)arg1 topHitsPresent:(BOOL)arg2 userSelectedTopHit:(BOOL)arg3;

@end

