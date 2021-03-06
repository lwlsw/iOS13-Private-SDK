//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

@interface IMDCKSyncStatsCollector : NSObject
{
    NSMutableDictionary *_inMemorySyncStatistics;
}

+ (id)sharedInstance;
@property(retain, nonatomic) NSMutableDictionary *inMemorySyncStatistics; // @synthesize inMemorySyncStatistics=_inMemorySyncStatistics;
- (void)_incrementCountsForColumnSyncedKey:(id)arg1 syncedColumnAmountToIncrease:(NSUInteger)arg2 totalColumnAmountKey:(id)arg3 totalColumnAmountToIncrease:(NSUInteger)arg4;
- (void)incrementSyncedAttachmentCount:(NSUInteger)arg1 incrementTotalAttachmentCount:(NSUInteger)arg2;
- (void)incrementSyncedMessageCount:(NSUInteger)arg1 incrementTotalMessageCount:(NSUInteger)arg2;
- (void)incrementSyncedChatCount:(NSUInteger)arg1 incrementTotalChatCount:(NSUInteger)arg2;
- (id)currentInMemorySyncStatistics;
- (void)refreshWithDBSyncStatistics;
- (void)dealloc;
- (id)init;

@end

