//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class FIUIChartDataSet, NSArray;
@protocol FIUIChartPoint;

@protocol FIUIChartDataSetDataSource <NSObject>
- (id <FIUIChartPoint>)dataSet:(FIUIChartDataSet *)arg1 chartPointForIndex:(NSUInteger)arg2;
- (NSUInteger)numberOfDataPointsForDataSet:(FIUIChartDataSet *)arg1;

@optional
- (NSArray *)labelsForSet:(FIUIChartDataSet *)arg1;
@end

