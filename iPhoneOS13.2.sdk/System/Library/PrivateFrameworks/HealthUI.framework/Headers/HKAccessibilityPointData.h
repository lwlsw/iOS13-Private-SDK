//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSDate, NSString;

@interface HKAccessibilityPointData : NSObject
{
    double _horizontalScreenCoordinate;
    NSString *_horizontalTimeCoordinate;
    NSDate *_horizontalDate;
    NSArray *_values;
}

@property(readonly, nonatomic) NSArray *values; // @synthesize values=_values;
@property(readonly, nonatomic) NSDate *horizontalDate; // @synthesize horizontalDate=_horizontalDate;
@property(readonly, nonatomic) NSString *horizontalTimeCoordinate; // @synthesize horizontalTimeCoordinate=_horizontalTimeCoordinate;
@property(readonly, nonatomic) double horizontalScreenCoordinate; // @synthesize horizontalScreenCoordinate=_horizontalScreenCoordinate;
// - (void).cxx_destruct;
- (id)description;
- (id)initWithHorizontalScreenCoordinate:(double)arg1 horizontalTimeCoordinate:(id)arg2 horizontalDate:(id)arg3 values:(id)arg4;

@end

