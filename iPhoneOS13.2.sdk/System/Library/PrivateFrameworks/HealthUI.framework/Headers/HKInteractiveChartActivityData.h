//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <HealthUI/HKGraphSeriesChartData-Protocol.h>

@class HKActivitySummary, NSString;

@interface HKInteractiveChartActivityData : NSObject <HKGraphSeriesChartData>
{
    HKActivitySummary *_activitySummaryData;
    long long _activityValue;
}

@property(nonatomic) long long activityValue; // @synthesize activityValue=_activityValue;
@property(retain, nonatomic) HKActivitySummary *activitySummaryData; // @synthesize activitySummaryData=_activitySummaryData;
// - (void).cxx_destruct;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) BOOL activityValueGoalMet;
@property(readonly, nonatomic) BOOL hasActivityGoal;

@end

