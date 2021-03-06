//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SAObjects/SADomainObject.h>

@class NSArray, NSDate, NSNumber, NSString, NSURL;

@interface SACalendarEvent : SADomainObject
{
}

+ (id)eventWithDictionary:(id)arg1 context:(id)arg2;
+ (id)event;
@property(copy, nonatomic) NSString *title;
@property(copy, nonatomic) NSString *timeZoneId;
@property(copy, nonatomic) NSString *status;
@property(copy, nonatomic) NSDate *startDate;
@property(copy, nonatomic) NSString *selfParticipantStatus;
@property(copy, nonatomic) NSArray *recurrences;
@property(copy, nonatomic) NSNumber *readOnly;
@property(copy, nonatomic) NSString *notes;
@property(copy, nonatomic) NSString *location;
@property(copy, nonatomic) NSNumber *includeRecurrences;
@property(copy, nonatomic) NSDate *endDate;
@property(copy, nonatomic) NSURL *calendarPunchoutURI;
@property(copy, nonatomic) NSURL *calendarId;
@property(copy, nonatomic) NSArray *attendees;
@property(nonatomic) BOOL allDay;
@property(copy, nonatomic) NSArray *alerts;
- (id)encodedClassName;
- (id)groupIdentifier;

@end

