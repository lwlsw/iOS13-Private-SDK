//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray;

@interface FIUIWorkoutSummaryRowBuilder : NSObject
{
    NSArray *_rowTypesForTableRowIndex;
    NSUInteger _lastMetricRowType;
}

// - (void).cxx_destruct;
@property(readonly, nonatomic) long long numberOfRows;
- (NSUInteger)rowTypeForTableRowIndex:(long long)arg1;
- (NSUInteger)indexForRowOfType:(NSUInteger)arg1;
- (id)_generateRowsWithWorkout:(id)arg1 supportedMetrics:(id)arg2 buttonBehavior:(NSUInteger)arg3;
- (id)initWithWorkout:(id)arg1 supportedMetrics:(id)arg2 buttonBehavior:(NSUInteger)arg3;

@end

