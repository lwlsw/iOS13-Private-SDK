//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NanoTimeKitCompanion/NTKRichComplicationCircularBaseTextView.h>

@class NTKDigitalTimeLabel;

@interface NTKDigitalTimeRichComplicationCircularView : NTKRichComplicationCircularBaseTextView
{
    NTKDigitalTimeLabel *_timeLabel;
}

// - (void).cxx_destruct;
- (void)updateMonochromeColor;
- (void)transitionToMonochromeWithFraction:(double)arg1;
- (void)setTimeTravelDate:(id)arg1 animated:(BOOL)arg2;
- (void)_handleTemplate:(id)arg1 reason:(long long)arg2;
- (void)updateDate;
- (void)timeOffsetChanged;
- (id)_createLabelViewWithFont:(id)arg1;
- (void)dealloc;
- (id)init;

@end

