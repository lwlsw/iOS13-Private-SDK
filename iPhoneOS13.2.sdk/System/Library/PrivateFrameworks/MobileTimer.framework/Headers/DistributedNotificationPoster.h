//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface DistributedNotificationPoster : NSObject
{
}

+ (void)postNotificationForUserPreferences:(BOOL)arg1 localNotifications:(BOOL)arg2;
+ (void)postNotificationForAlarmActiveChanged;
+ (void)postNotificationForAlarmsEdited;

@end

