//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class MISSING_TYPE, NSDate, NSString;

__attribute__((visibility("hidden")))
@interface _TtC19HealthVisualization24HighlightCalendarDayView : UIView
{
    MISSING_TYPE *model;
    MISSING_TYPE *dayLabel;
    MISSING_TYPE *todayIndicatorLayer;
    MISSING_TYPE *ringsRenderer;
    MISSING_TYPE *activityRingsView;
}

// - (void).cxx_destruct;
- (id)initWithFrame:(CGRect)arg1;
- (void)traitCollectionDidChange:(id)arg1;
- (void)layoutSublayersOfLayer:(id)arg1;
- (void)layoutSubviews;
- (CGSize)sizeThatFits:(CGSize)arg1;
- (id)initWithCoder:(id)arg1;
@property(nonatomic, readonly) long long axCircleState;
@property(nonatomic, readonly) NSString *axProjectionKind;
@property(nonatomic, readonly) long long axProbability;
@property(nonatomic, readonly) NSDate *axDate;

@end

