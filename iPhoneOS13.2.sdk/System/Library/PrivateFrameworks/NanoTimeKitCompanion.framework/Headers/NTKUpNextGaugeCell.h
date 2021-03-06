//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NanoTimeKitCompanion/NTKUpNextBaseCell.h>



@class CLKFont, NTKColoringLabel, NTKRichComplicationLineProgressView, UILayoutGuide;

@interface NTKUpNextGaugeCell : NTKUpNextBaseCell
{
    UILayoutGuide *_contentLayoutGuide;
    NTKColoringLabel *_headerLabel;
    NTKColoringLabel *_descriptionLine1Label;
    NTKRichComplicationLineProgressView *_progressView;
    NTKColoringLabel *_descriptionLine2Label;
    NTKColoringLabel *_descriptionLine3Label;
    CLKFont *_standardFont;
    CLKFont *_boldFont;
    CLKFont *_semiboldFont;
}

// - (void).cxx_destruct;
- (void)updateMonochromeColor;
- (void)transitionToMonochromeWithFraction:(double)arg1;
- (void)prepareForReuse;
- (id)colorForView:(id)arg1 accented:(BOOL)arg2;
- (id)filterForView:(id)arg1 style:(long long)arg2;
- (id)filterForView:(id)arg1 style:(long long)arg2 fraction:(double)arg3;
- (void)setPaused:(BOOL)arg1;
- (void)configureWithContent:(id)arg1;
- (id)initWithFrame:(CGRect)arg1;

@end

