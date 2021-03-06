//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDate, NSHashTable, NSMutableSet, NSString, NSTimeZone, _CLKTimeFormatterSubstringRange;
@protocol CLKTimeFormatterDelegate;

@interface CLKTimeFormatter : NSObject
{
    NSDate *_date;
    NSString *_timeText;
    NSString *_designatorText;
    NSString *_timeAndDesignatorText;
    NSString *_timeAndDesignatorTextWithoutMinutesIfZero;
    NSString *_timeSubstringToSeparatorText;
    NSString *_timeSubstringFromSeparatorText;
    _CLKTimeFormatterSubstringRange *_designatorRangeInTimeAndDesignatorText;
    _CLKTimeFormatterSubstringRange *_designatorRangeInTimeAndDesignatorTextWithoutMinutesIfZero;
    _CLKTimeFormatterSubstringRange *_timeRange;
    _CLKTimeFormatterSubstringRange *_separatorRangeInTimeText;
    _CLKTimeFormatterSubstringRange *_separatorRangeInTimeAndDesignatorText;
    _CLKTimeFormatterSubstringRange *_blinkerRangeInTimeText;
    _CLKTimeFormatterSubstringRange *_lastBlinkerRangeInTimeText;
    _CLKTimeFormatterSubstringRange *_blinkerRangeInTimeAndDesignatorText;
    _CLKTimeFormatterSubstringRange *_blinkerRangeInTimeSubstringToSeparatorText;
    _CLKTimeFormatterSubstringRange *_blinkerRangeInTimeSubstringFromSeparatorText;
    _CLKTimeFormatterSubstringRange *_rangeInTimeSubstringFromSecondsSeparatorText;
    NSHashTable *_observers;
    NSMutableSet *_reasonsToPause;
    NSNumber *_secondsUpdateToken;
    NSNumber *_minutesUpdateToken;
    BOOL _useNarrowDesignatorTextForGerman;
    BOOL _suppressesDesignatorWhitespace;
    BOOL _includeSeparatorInTimeSubstringFromSeparatorText;
    BOOL _showSeconds;
    BOOL _forcesLatinNumbers;
    NSTimeZone *_timeZone;
    double _timeOffset;
    NSDate *_overrideDate;
    id <CLKTimeFormatterDelegate> _delegate;
}

@property(nonatomic) __weak id <CLKTimeFormatterDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) BOOL forcesLatinNumbers; // @synthesize forcesLatinNumbers=_forcesLatinNumbers;
@property(nonatomic) BOOL showSeconds; // @synthesize showSeconds=_showSeconds;
@property(nonatomic) BOOL includeSeparatorInTimeSubstringFromSeparatorText; // @synthesize includeSeparatorInTimeSubstringFromSeparatorText=_includeSeparatorInTimeSubstringFromSeparatorText;
@property(retain, nonatomic) NSDate *overrideDate; // @synthesize overrideDate=_overrideDate;
@property(nonatomic) BOOL suppressesDesignatorWhitespace; // @synthesize suppressesDesignatorWhitespace=_suppressesDesignatorWhitespace;
@property(nonatomic) double timeOffset; // @synthesize timeOffset=_timeOffset;
@property(retain, nonatomic) NSTimeZone *timeZone; // @synthesize timeZone=_timeZone;
// - (void).cxx_destruct;
- (void)_handleSignificantTimeChange;
- (void)_invalidateText;
- (void)_invalidateDate:(id)arg1;
- (void)_startOrStopUpdatesIfNecessary;
- (void)_stopSecondsUpdates:(BOOL)arg1;
- (void)_stopMinuteUpdates:(BOOL)arg1;
- (void)_notifyReportingLiveTimeDidChange;
- (void)_notifyTextDidChange;
- (void)removeObserver:(id)arg1;
- (void)addObserver:(id)arg1;
- (id)_timeAndDesignatorFormatter;
- (id)_rangeInTimeSubstringFromSecondsSeparatorText;
- (id)_blinkerRangeInTimeSubstringFromSeparatorText;
- (id)_blinkerRangeInTimeSubstringToSeparatorText;
- (id)_blinkerRangeInTimeAndDesignatorText;
- (id)_lastBlinkerRangeInTimeText;
- (id)_blinkerRangeInTimeText;
- (id)_separatorRangeInTimeAndDesignatorText;
- (id)_separatorRangeInTimeText;
- (id)_designatorRangeInTimeAndDesignatorTextWithoutMinutesIfZero;
- (id)_designatorRangeInTimeAndDesignatorText;
- (id)_designatorRangeInText:(id)arg1;
@property(readonly, nonatomic) NSRange * rangeInTimeSubstringFromSecondsSeparatorText;
@property(readonly, nonatomic) NSRange * blinkerRangeInTimeSubstringFromSeparatorText;
@property(readonly, nonatomic) NSRange * blinkerRangeInTimeSubstringToSeparatorText;
@property(readonly, nonatomic) NSRange * blinkerRangeInTimeAndDesignatorText;
@property(readonly, nonatomic) NSRange * lastBlinkerRangeInTimeText;
@property(readonly, nonatomic) NSRange * blinkerRangeInTimeText;
@property(readonly, nonatomic) NSRange * separatorRangeInTimeAndDesignatorText;
@property(readonly, nonatomic) NSRange * separatorRangeInTimeText;
@property(readonly, nonatomic) BOOL timeAndDesignatorTextStartsWithDesignator;
@property(readonly, nonatomic) BOOL timeAndDesignatorTextHasDesignator;
@property(readonly, nonatomic) NSRange * designatorRangeInTimeAndDesignatorTextWithoutMinutesIfZero;
@property(readonly, nonatomic) NSRange * designatorRangeInTimeAndDesignatorText;
@property(readonly, nonatomic) NSString *timeSubstringFromSeparatorText;
@property(readonly, nonatomic) NSString *timeSubstringToSeparatorText;
@property(readonly, nonatomic) NSString *timeAndDesignatorTextWithoutMinutesIfZero;
@property(readonly, nonatomic) NSString *timeAndDesignatorText;
@property(readonly, nonatomic) NSString *designatorText;
@property(readonly, nonatomic) NSString *timeText;
@property(nonatomic, getter=_useNarrowDesignatorTextForGerman, setter=_setUseNarrowDesignatorTextForGerman:) BOOL _useNarrowDesignatorTextForGerman;
@property(readonly, nonatomic) BOOL reportingLiveTime;
- (void)setPaused:(BOOL)arg1 forReason:(id)arg2;
- (void)dealloc;
- (id)initWithForcesLatinNumbers:(BOOL)arg1;
- (id)init;

@end

