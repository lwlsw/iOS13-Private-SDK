//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NanoTimeKitCompanion/NTKRichComplicationCornerBaseGaugeView.h>

@class NTKCurvedColoringLabel;

@interface NTKRichComplicationCornerGaugeTextView : NTKRichComplicationCornerBaseGaugeView
{
    NTKCurvedColoringLabel *_outerLabel;
}

+ (BOOL)supportsComplicationFamily:(long long)arg1;
+ (BOOL)handlesComplicationTemplate:(id)arg1;
@property(readonly, nonatomic) NTKCurvedColoringLabel *outerLabel; // @synthesize outerLabel=_outerLabel;
// - (void).cxx_destruct;
- (void)updateMonochromeColor;
- (void)transitionToMonochromeWithFraction:(double)arg1;
- (void)_editingDidEnd;
- (void)_enumerateLabelsWithBlock:(CDUnknownBlockType)arg1;
- (void)_handleTemplate:(id)arg1 reason:(long long)arg2;
- (void)layoutSubviews;
- (id)init;

@end

