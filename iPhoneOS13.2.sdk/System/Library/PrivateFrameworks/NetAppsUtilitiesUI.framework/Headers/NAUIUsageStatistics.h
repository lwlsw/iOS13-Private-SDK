//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSString;
@protocol OS_dispatch_queue;

@interface NAUIUsageStatistics : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableDictionary *_nextAllowedUsageEventType;
    NSString *_usageStatisticsDomain;
}

+ (id)sharedUsageStatisticsForDomain:(id)arg1;
+ (id)voiceMemoUsageStatistics;
@property(readonly, nonatomic) NSString *usageStatisticsDomain; // @synthesize usageStatisticsDomain=_usageStatisticsDomain;
// - (void).cxx_destruct;
- (void)_incrementUsageCountForEventWithUsageStatisticName:(id)arg1 statisticType:(long long)arg2;
- (void)_pushDistributionStatisticNamed:(id)arg1 value:(double)arg2;
- (id)_eventKeyForUsageStatisticName:(id)arg1 groupingKey:(id)arg2;
- (void)pushDistributionStatisticNamed:(id)arg1 value:(double)arg2;
- (void)incrementUsageStatisticNamed:(id)arg1 statisticType:(long long)arg2;
- (id)initWithUsageStatisticsDomain:(id)arg1;

@end

