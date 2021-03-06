//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>


@class NSMutableArray;

@interface NTPBTodayWidgetExposure : PBCodable <NSCopying>
{
    int _widgetAppearanceType;
    int _widgetArticleCount;
    int _widgetHeadlineExposureCount;
    NSMutableArray *_widgetPersonalizationFeatureCTRPairs;
    NSMutableArray *_widgetSectionsArticleCountPairs;
   struct {
        unsigned int widgetAppearanceType:1;
        unsigned int widgetArticleCount:1;
        unsigned int widgetHeadlineExposureCount:1;
    } _has;
}

+ (Class)widgetPersonalizationFeatureCTRPairType;
+ (Class)widgetSectionsArticleCountPairType;
@property(retain, nonatomic) NSMutableArray *widgetPersonalizationFeatureCTRPairs; // @synthesize widgetPersonalizationFeatureCTRPairs=_widgetPersonalizationFeatureCTRPairs;
@property(retain, nonatomic) NSMutableArray *widgetSectionsArticleCountPairs; // @synthesize widgetSectionsArticleCountPairs=_widgetSectionsArticleCountPairs;
@property(nonatomic) int widgetHeadlineExposureCount; // @synthesize widgetHeadlineExposureCount=_widgetHeadlineExposureCount;
@property(nonatomic) int widgetArticleCount; // @synthesize widgetArticleCount=_widgetArticleCount;
// - (void).cxx_destruct;
- (void)mergeFrom:(id)arg1;
- (NSUInteger)hash;
- (BOOL)isEqual:(id)arg1;
// - (id)copyWithZone:(_NSZone )arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(nonatomic) BOOL hasWidgetAppearanceType;
@property(nonatomic) int widgetAppearanceType; // @synthesize widgetAppearanceType=_widgetAppearanceType;
- (id)widgetPersonalizationFeatureCTRPairAtIndex:(NSUInteger)arg1;
- (NSUInteger)widgetPersonalizationFeatureCTRPairsCount;
- (void)addWidgetPersonalizationFeatureCTRPair:(id)arg1;
- (void)clearWidgetPersonalizationFeatureCTRPairs;
- (id)widgetSectionsArticleCountPairAtIndex:(NSUInteger)arg1;
- (NSUInteger)widgetSectionsArticleCountPairsCount;
- (void)addWidgetSectionsArticleCountPair:(id)arg1;
- (void)clearWidgetSectionsArticleCountPairs;
@property(nonatomic) BOOL hasWidgetHeadlineExposureCount;
@property(nonatomic) BOOL hasWidgetArticleCount;

@end

