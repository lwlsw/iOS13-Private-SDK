//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface CLSAutoupdatingCurrentCalendar : NSObject
{
}

+ (BOOL)nextWeekendLocalStartDate:(out id )arg1 interval:(out double )arg2 options:(NSUInteger)arg3 afterDate:(id)arg4;
+ (BOOL)rangeOfWeekendLocalStartDate:(out id )arg1 interval:(out double )arg2 containingDate:(id)arg3;
+ (BOOL)closestWeekendLocalStartDate:(out id )arg1 interval:(out double )arg2 afterDate:(id)arg3;
+ (BOOL)dateIntervalIntersectsWeekend:(id)arg1;
+ (BOOL)isWeekendDate:(id)arg1;
+ (id)timezone;
+ (id)calendar;
+ (void)initialize;

@end

