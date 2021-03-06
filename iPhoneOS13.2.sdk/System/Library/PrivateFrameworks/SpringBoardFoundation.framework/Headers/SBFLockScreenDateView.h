//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class NSDate, NSTimeZone, SBFLockScreenDateSubtitleDateView, SBFLockScreenDateSubtitleView, SBUILegibilityLabel, UIColor, _UILegibilitySettings;

@interface SBFLockScreenDateView : UIView
{
    SBUILegibilityLabel *_timeLabel;
    double _timeAlpha;
    double _subtitleAlpha;
    SBFLockScreenDateSubtitleDateView *_dateSubtitleView;
    SBFLockScreenDateSubtitleView *_customSubtitleView;
    NSTimeZone *_timeZone;
    BOOL _useCompactDateFormat;
    NSDate *_date;
    UIColor *_overrideTextColor;
    _UILegibilitySettings *_legibilitySettings;
    double _alignmentPercent;
    double _dateToTimeStretch;
    double _timeLegibilityStrength;
    double _subtitleLegibilityStrength;
    double _maximumSubtitleWidth;
    CGRect _restingFrame;
}

// + (CDStruct_91d2e2b9)timeFontMetrics;
+ (id)timeFont;
+ (double)defaultHeight;
@property(retain, nonatomic) SBFLockScreenDateSubtitleView *customSubtitleView; // @synthesize customSubtitleView=_customSubtitleView;
@property(nonatomic) CGRect restingFrame; // @synthesize restingFrame=_restingFrame;
@property(nonatomic) double maximumSubtitleWidth; // @synthesize maximumSubtitleWidth=_maximumSubtitleWidth;
@property(nonatomic) double subtitleLegibilityStrength; // @synthesize subtitleLegibilityStrength=_subtitleLegibilityStrength;
@property(nonatomic) double timeLegibilityStrength; // @synthesize timeLegibilityStrength=_timeLegibilityStrength;
@property(nonatomic) BOOL useCompactDateFormat; // @synthesize useCompactDateFormat=_useCompactDateFormat;
@property(nonatomic) double dateToTimeStretch; // @synthesize dateToTimeStretch=_dateToTimeStretch;
@property(nonatomic) double alignmentPercent; // @synthesize alignmentPercent=_alignmentPercent;
@property(retain, nonatomic) _UILegibilitySettings *legibilitySettings; // @synthesize legibilitySettings=_legibilitySettings;
@property(retain, nonatomic) UIColor *textColor; // @synthesize textColor=_overrideTextColor;
@property(retain, nonatomic) NSDate *date; // @synthesize date=_date;
// - (void).cxx_destruct;
- (void)traitCollectionDidChange:(id)arg1;
@property(readonly, nonatomic) double subtitleBaselineOffsetFromOrigin;
@property(readonly, nonatomic) double timeBaselineOffsetFromOrigin;
- (CGRect)_subtitleViewFrameForView:(id)arg1 alignmentPercent:(double)arg2;
- (UIEdgeInsets)_cachedGlyphInsetsTimeFontForString:(id)arg1;
- (UIEdgeInsets)_timeLabelInsetsForTimeString:(id)arg1;
- (CGRect)_timeLabelFrameForAlignmentPercent:(double)arg1;
- (void)layoutSubviews;
- (void)_updateUsesCompactDateFormat;
- (void)_updateLabelAlpha;
- (void)_setSubtitleAlpha:(double)arg1;
- (void)_updateLabels;
- (CGRect)chargingVisualInformationTimeSubtitleFrame;
- (CGRect)chargingVisualInformationTimeFrame;
- (id)_timeLabel;
- (CGRect)presentationExtentForAlignmentPercent:(double)arg1;
- (void)setContentAlpha:(double)arg1 withSubtitleVisible:(BOOL)arg2;
@property(readonly, nonatomic) double contentAlpha;
- (void)updateFormat;
- (void)_setDate:(id)arg1 inTimeZone:(id)arg2;
@property(nonatomic, getter=isSubtitleHidden) BOOL subtitleHidden;
- (id)initWithFrame:(CGRect)arg1;

@end

