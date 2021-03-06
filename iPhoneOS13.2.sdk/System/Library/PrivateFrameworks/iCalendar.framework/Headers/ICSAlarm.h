//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <iCalendar/ICSComponent.h>

@class ICSDateTimeUTCValue, NSData, NSString;

@interface ICSAlarm : ICSComponent
{
}

+ (id)createNoneAlarm;
+ (id)parseableDocumentFromICS:(id)arg1;
+ (id)ICSStringFromAction:(int)arg1;
+ (int)actionFromICSString:(id)arg1;
+ (id)name;
@property(retain, nonatomic) NSData *bookmark; // @dynamic bookmark;
@property(nonatomic) BOOL x_apple_local_default_alarm;
@property(nonatomic) BOOL x_apple_travel_default_alarm;
@property(nonatomic) BOOL x_apple_default_alarm;
@property(retain, nonatomic) NSString *x_apple_proximity;
@property(retain, nonatomic) NSString *relatedTo;
@property(retain, nonatomic) ICSDateTimeUTCValue *acknowledged;
@property(retain, nonatomic) NSString *x_wr_alarmuid;
@property(nonatomic) int action;
- (BOOL)isNoneAlarm;
- (void)fixAlarm;

@end

