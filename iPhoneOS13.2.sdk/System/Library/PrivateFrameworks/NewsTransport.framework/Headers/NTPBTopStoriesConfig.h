//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>


@class NSMutableArray, NSString;

@interface NTPBTopStoriesConfig : PBCodable <NSCopying>
{
    long long _badgesTimeout;
    long long _cutoffTime;
    long long _maximumArticleCount;
    NSString *_channelId;
    NSMutableArray *_styleConfigs;
    BOOL _pinningEnabled;
    BOOL _promotingEnabled;
   struct {
        unsigned int badgesTimeout:1;
        unsigned int cutoffTime:1;
        unsigned int maximumArticleCount:1;
        unsigned int pinningEnabled:1;
        unsigned int promotingEnabled:1;
    } _has;
}

+ (Class)styleConfigsType;
@property(nonatomic) long long badgesTimeout; // @synthesize badgesTimeout=_badgesTimeout;
@property(retain, nonatomic) NSMutableArray *styleConfigs; // @synthesize styleConfigs=_styleConfigs;
@property(nonatomic) long long cutoffTime; // @synthesize cutoffTime=_cutoffTime;
@property(nonatomic) long long maximumArticleCount; // @synthesize maximumArticleCount=_maximumArticleCount;
@property(retain, nonatomic) NSString *channelId; // @synthesize channelId=_channelId;
@property(nonatomic) BOOL promotingEnabled; // @synthesize promotingEnabled=_promotingEnabled;
@property(nonatomic) BOOL pinningEnabled; // @synthesize pinningEnabled=_pinningEnabled;
// - (void).cxx_destruct;
- (void)mergeFrom:(id)arg1;
- (NSUInteger)hash;
- (BOOL)isEqual:(id)arg1;
// - (id)copyWithZone:(_NSZone )arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(nonatomic) BOOL hasBadgesTimeout;
- (id)styleConfigsAtIndex:(NSUInteger)arg1;
- (NSUInteger)styleConfigsCount;
- (void)addStyleConfigs:(id)arg1;
- (void)clearStyleConfigs;
@property(nonatomic) BOOL hasCutoffTime;
@property(nonatomic) BOOL hasMaximumArticleCount;
@property(readonly, nonatomic) BOOL hasChannelId;
@property(nonatomic) BOOL hasPromotingEnabled;
@property(nonatomic) BOOL hasPinningEnabled;

@end

