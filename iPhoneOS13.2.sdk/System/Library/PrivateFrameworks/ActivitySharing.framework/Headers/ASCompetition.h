//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@class NSArray, NSDate, NSDateComponents, NSUUID;

@interface ASCompetition : NSObject <NSCopying>
{
    NSUUID *_UUID;
    long long _currentCacheIndex;
    long long _lastPushedCacheIndex;
    NSArray *_scores;
    NSArray *_opponentScores;
    NSDateComponents *_startDateComponents;
    NSDateComponents *_durationDateComponents;
    NSArray *_preferredVictoryBadgeStyles;
    NSUInteger _maximumNumberOfPointsPerDay;
    NSDate *_currentDateOverride;
}

+ (id)competitionWithCodableCompetition:(id)arg1;
+ (id)codableDatabaseCompetitionsFromCompetitions:(id)arg1 withFriendWithUUID:(id)arg2 withType:(long long)arg3;
@property(retain, nonatomic) NSDate *currentDateOverride; // @synthesize currentDateOverride=_currentDateOverride;
@property(nonatomic) NSUInteger maximumNumberOfPointsPerDay; // @synthesize maximumNumberOfPointsPerDay=_maximumNumberOfPointsPerDay;
@property(retain, nonatomic) NSArray *preferredVictoryBadgeStyles; // @synthesize preferredVictoryBadgeStyles=_preferredVictoryBadgeStyles;
@property(retain, nonatomic) NSDateComponents *durationDateComponents; // @synthesize durationDateComponents=_durationDateComponents;
@property(retain, nonatomic) NSDateComponents *startDateComponents; // @synthesize startDateComponents=_startDateComponents;
@property(retain, nonatomic) NSArray *opponentScores; // @synthesize opponentScores=_opponentScores;
@property(retain, nonatomic) NSArray *scores; // @synthesize scores=_scores;
@property(nonatomic) long long lastPushedCacheIndex; // @synthesize lastPushedCacheIndex=_lastPushedCacheIndex;
@property(nonatomic) long long currentCacheIndex; // @synthesize currentCacheIndex=_currentCacheIndex;
@property(retain, nonatomic) NSUUID *UUID; // @synthesize UUID=_UUID;
// - (void).cxx_destruct;
- (id)_scoresForParticipant:(long long)arg1;
- (id)currentDate;
- (BOOL)isEqualToCompetition:(id)arg1;
@property(readonly, nonatomic) BOOL hasPushedFinalScore;
@property(readonly, nonatomic) BOOL hasCalculatedFinalScore;
- (BOOL)isParticipantWinning:(long long)arg1;
- (id)daysWonByParticipant:(long long)arg1;
- (NSUInteger)dailyScoreForParticipant:(long long)arg1 onDate:(id)arg2;
@property(readonly, nonatomic) BOOL isScoreTied;
@property(readonly, nonatomic) NSUInteger opponentDailyAverageScore;
@property(readonly, nonatomic) NSUInteger opponentTotalScore;
@property(readonly, nonatomic) NSUInteger myDailyAverageScore;
@property(readonly, nonatomic) NSUInteger myTotalScore;
@property(readonly, nonatomic) long long stage;
@property(readonly, nonatomic) NSUInteger numberOfDaysRemaining;
@property(readonly, nonatomic) long long endDateCacheIndex;
@property(readonly, nonatomic) BOOL isLastDayOfCompetition;
@property(readonly, nonatomic) BOOL isFirstDayOfCompetition;
@property(readonly, nonatomic) NSDate *lastDayOfCompetition;
@property(readonly, nonatomic) NSDate *endDate;
@property(readonly, nonatomic) NSDate *startDate;
@property(readonly, nonatomic) unsigned int victoryBadgeStyle;
@property(readonly, nonatomic) BOOL isDailyScoreCapped;
// - (id)copyWithZone:(_NSZone )arg1;
- (BOOL)isEqual:(id)arg1;
- (id)description;
- (id)init;
- (id)codableCompetition;

@end

