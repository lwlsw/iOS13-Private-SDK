//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <HealthUI/HKChartCacheDataSource-Protocol.h>

@class HKDisplayType, HKHealthStore;

@interface HKHealthQueryChartCacheDataSource : NSObject <HKChartCacheDataSource>
{
    HKHealthStore *_healthStore;
    HKDisplayType *_displayType;
}

@property(readonly, nonatomic) HKDisplayType *displayType; // @synthesize displayType=_displayType;
// - (void).cxx_destruct;
- (id)queriesForStartDate:(id)arg1 endDate:(id)arg2 statisticsInterval:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (id)statisticsIntervalForTimeScope:(long long)arg1 displayType:(id)arg2;
- (NSUInteger)calendarUnitForTimeScope:(long long)arg1 displayType:(id)arg2;
- (CDUnknownBlockType)mappingFunctionForContext:(id)arg1;
- (id)operationForIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)initWithDisplayType:(id)arg1 healthStore:(id)arg2;

@end

