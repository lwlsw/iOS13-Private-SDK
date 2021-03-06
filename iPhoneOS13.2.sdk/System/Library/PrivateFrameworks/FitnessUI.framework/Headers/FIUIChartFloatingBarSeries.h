//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FitnessUI/FIUIChartSeries.h>

@class NSArray, NSDictionary, NSMutableArray, UIColor;

@interface FIUIChartFloatingBarSeries : FIUIChartSeries
{
    NSArray *_barRects;
    NSMutableArray *_barLabelTopPoints;
    NSMutableArray *_barLabelBottomPoints;
    NSMutableArray *_barLabels;
    UIColor *_barColor;
    double _cornerRadius;
    NSDictionary *_labelAttributes;
}

@property(retain, nonatomic) NSDictionary *labelAttributes; // @synthesize labelAttributes=_labelAttributes;
@property(nonatomic) double cornerRadius; // @synthesize cornerRadius=_cornerRadius;
@property(retain, nonatomic) UIColor *barColor; // @synthesize barColor=_barColor;
// - (void).cxx_destruct;
- (void)drawLayer:(id)arg1 inContext:(CGContextRef )arg2;
- (void)layoutSubviews;
- (void)_loadFromDataSet;

@end

