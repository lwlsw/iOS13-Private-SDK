//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKitCore/UIControl.h>


#import <UIKitCore/UIPickerViewScrollTesting-Protocol.h>

@class NSCalendar, NSDate, NSLocale, NSTimeZone, UIColor, _UIDatePickerView;

@interface UIDatePicker : UIControl <UIPickerViewScrollTesting, NSCoding>
{
    _UIDatePickerView *_pickerView;
    _Bool _useCurrentDateDuringDecoding;
    _Bool shouldAnimateSetDateCall;
}

@property(nonatomic, getter=_shouldAnimateSetDateCall, setter=_setShouldAnimateSetDateCall:) _Bool shouldAnimateSetDateCall; // @synthesize shouldAnimateSetDateCall;
- (void)didReceiveBindingsUpdate;
- (void)willReceiveBindingsUpdate;
- (void)_emitValueChanged;
- (unsigned long long)_controlEventsForActionTriggered;
- (void)_performScrollTest:(id)arg1 withIterations:(long long)arg2 rowsToScroll:(long long)arg3 inComponent:(long long)arg4;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)traitCollectionDidChange:(id)arg1;
- (void)invalidateIntrinsicContentSize;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (struct CGSize)_intrinsicSizeWithinSize:(struct CGSize)arg1;
- (_Bool)_contentHuggingDefault_isUsuallyFixedWidth;
- (_Bool)_contentHuggingDefault_isUsuallyFixedHeight;
- (void)setDate:(id)arg1 animated:(_Bool)arg2;
@property(nonatomic) long long minuteInterval; // @dynamic minuteInterval;
@property(nonatomic) double countDownDuration; // @dynamic countDownDuration;
@property(retain, nonatomic) NSDate *maximumDate; // @dynamic maximumDate;
@property(retain, nonatomic) NSDate *minimumDate; // @dynamic minimumDate;
@property(retain, nonatomic) NSDate *date; // @dynamic date;
@property(copy, nonatomic) NSCalendar *calendar; // @dynamic calendar;
@property(retain, nonatomic) NSTimeZone *timeZone; // @dynamic timeZone;
@property(retain, nonatomic) NSLocale *locale; // @dynamic locale;
- (void)_setLocale:(id)arg1;
- (id)_locale;
@property(nonatomic) long long datePickerMode; // @dynamic datePickerMode;
- (void)_setUpInitialValues;
- (void)encodeWithCoder:(id)arg1;
- (void)_populateArchivedSubviews:(id)arg1;
- (void)awakeFromNib;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)_installPickerView:(id)arg1;
- (void)setEnabled:(_Bool)arg1;
- (void)setBounds:(struct CGRect)arg1;
- (void)setFrame:(struct CGRect)arg1;
- (void)setDate:(id)arg1 animate:(_Bool)arg2;
- (void)setBackgroundColor:(id)arg1;
- (int)second;
- (int)minute;
- (int)hour;
- (void)setHighlightsToday:(_Bool)arg1;
- (void)setStaggerTimeIntervals:(_Bool)arg1;
- (void)setDateComponents:(id)arg1;
- (id)dateComponents;
- (void)setDelegate:(id)arg1;
@property(nonatomic, getter=_useCurrentDateDuringDecoding, setter=_setUseCurrentDateDuringDecoding:) _Bool useCurrentDateDuringDecoding;
@property(retain, nonatomic, getter=_magnifierLineColor, setter=_setMagnifierLineColor:) UIColor *magnifierLineColor;
@property(retain, nonatomic, getter=_textShadowColor, setter=_setTextShadowColor:) UIColor *textShadowColor;
@property(retain, nonatomic, getter=_textColor, setter=_setTextColor:) UIColor *textColor;
@property(retain, nonatomic, getter=_highlightColor, setter=_setHighlightColor:) UIColor *highlightColor;
@property(nonatomic, getter=_allowsZeroTimeInterval, setter=_setAllowsZeroTimeInterval:) _Bool allowsZeroTimeInterval; // @dynamic allowsZeroTimeInterval;
@property(nonatomic, getter=_allowsZeroCountDownDuration, setter=_setAllowsZeroCountDownDuration:) _Bool allowsZeroCountDownDuration; // @dynamic allowsZeroCountDownDuration;
@property(nonatomic, getter=_drawsBackground, setter=_setDrawsBackground:) _Bool drawsBackground; // @dynamic drawsBackground;
@property(nonatomic, getter=_usesBlackChrome, setter=_setUsesBlackChrome:) _Bool usesBlackChrome; // @dynamic usesBlackChrome;
@property(readonly, nonatomic, getter=_dateUnderSelectionBar) NSDate *dateUnderSelectionBar; // @dynamic dateUnderSelectionBar;
- (void)_setHidesLabels:(_Bool)arg1;
- (void)_setHighlightsToday:(_Bool)arg1;
@property(readonly, nonatomic, getter=_contentWidth) double contentWidth; // @dynamic contentWidth;
@property(readonly, nonatomic, getter=_isTimeIntervalMode) _Bool isTimeIntervalMode; // @dynamic isTimeIntervalMode;
- (id)_lastSelectedDateComponents;
- (id)_labelTextForCalendarUnit:(unsigned long long)arg1;
- (id)_selectedTextForCalendarUnit:(unsigned long long)arg1;
@property(nonatomic) double timeInterval; // @dynamic timeInterval;

@end
