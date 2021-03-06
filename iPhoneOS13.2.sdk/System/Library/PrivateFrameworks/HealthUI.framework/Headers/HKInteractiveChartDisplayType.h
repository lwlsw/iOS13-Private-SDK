//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HealthUI/HKDisplayType.h>

@class HKGraphSeries, HKInteractiveChartDataFormatter, NSString, UIColor;

@interface HKInteractiveChartDisplayType : HKDisplayType
{
    HKGraphSeries *_graphSeries;
    UIColor *_color;
    NSString *_specifiedDisplayName;
    NSString *_specifiedUnitName;
    HKInteractiveChartDataFormatter *_specifiedValueFormatter;
}

@property(readonly, nonatomic) HKInteractiveChartDataFormatter *specifiedValueFormatter; // @synthesize specifiedValueFormatter=_specifiedValueFormatter;
@property(readonly, nonatomic) NSString *specifiedUnitName; // @synthesize specifiedUnitName=_specifiedUnitName;
@property(readonly, nonatomic) NSString *specifiedDisplayName; // @synthesize specifiedDisplayName=_specifiedDisplayName;
@property(retain, nonatomic) UIColor *color; // @synthesize color=_color;
@property(readonly, nonatomic) HKGraphSeries *graphSeries; // @synthesize graphSeries=_graphSeries;
// - (void).cxx_destruct;
- (long long)_internalDisplayTypeIdentifier;
- (id)description;
- (id)hk_interactiveChartsFormatterForTimeScope:(long long)arg1;
- (id)colorWithDisplayCategoryController:(id)arg1;
- (id)unitNameForValue:(id)arg1 unitPreferenceController:(id)arg2;
- (id)displayName;
- (id)_initWithGraphSeries:(id)arg1 displayName:(id)arg2 unitDisplayNameOverrides:(id)arg3 chartingRules:(id)arg4 unitName:(id)arg5 valueFormatter:(id)arg6 dataTypeCode:(long long)arg7;
- (id)initWithGraphSeries:(id)arg1 displayName:(id)arg2 unitName:(id)arg3 valueFormatter:(id)arg4 dataTypeCode:(long long)arg5;
- (id)initWithGraphSeries:(id)arg1 baseDisplayType:(id)arg2 valueFormatter:(id)arg3 dataTypeCode:(long long)arg4;

@end

