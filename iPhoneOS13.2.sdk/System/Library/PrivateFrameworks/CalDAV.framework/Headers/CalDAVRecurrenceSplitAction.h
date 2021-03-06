//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDate, NSString, NSURL;

@interface CalDAVRecurrenceSplitAction : NSObject
{
    BOOL _isFloating;
    BOOL _isAllDay;
    NSURL *_resourceURL;
    NSDate *_recurrenceDate;
    NSString *_uidForCreatedSeries;
}

@property(readonly, nonatomic) BOOL isAllDay; // @synthesize isAllDay=_isAllDay;
@property(readonly, nonatomic) BOOL isFloating; // @synthesize isFloating=_isFloating;
@property(readonly, nonatomic) NSString *uidForCreatedSeries; // @synthesize uidForCreatedSeries=_uidForCreatedSeries;
@property(readonly, nonatomic) NSDate *recurrenceDate; // @synthesize recurrenceDate=_recurrenceDate;
@property(readonly, nonatomic) NSURL *resourceURL; // @synthesize resourceURL=_resourceURL;
// - (void).cxx_destruct;
- (id)initWithResourceURL:(id)arg1 recurrenceDate:(id)arg2 uidForCreatedSeries:(id)arg3 floating:(BOOL)arg4 allday:(BOOL)arg5;

@end

