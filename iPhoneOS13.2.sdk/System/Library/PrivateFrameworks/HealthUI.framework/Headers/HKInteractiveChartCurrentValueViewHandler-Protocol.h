//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class HKGraphView, UIView;
@protocol HKInteractiveChartCurrentValueViewCallbacks;

@protocol HKInteractiveChartCurrentValueViewHandler <NSObject>
- (void)setCurrentValueViewCallbacks:(id <HKInteractiveChartCurrentValueViewCallbacks>)arg1;
- (void)updateCurrentValueView:(UIView *)arg1 graphView:(HKGraphView *)arg2 timeScope:(long long)arg3;
- (UIView *)makeCurrentValueView;
@end

