//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface CalChronometry : NSObject
{
}

+ (id)currentLanguageCode;
+ (id)currentLocationCode;
+ (id)activeCalendar;
+ (void)_updateActiveCalendar;
+ (void)_updateActiveTimeZone;
+ (void)setActiveTimeZone:(id)arg1;
+ (id)activeTimeZone;
+ (void)_updateEveything;
+ (void)_currentTimeZoneDidChange:(id)arg1;
+ (void)_updateForLocaleChange;
+ (void)_currentLocaleDidChange:(id)arg1;
+ (void)_configureChronometry;
+ (void)initialize;

@end

