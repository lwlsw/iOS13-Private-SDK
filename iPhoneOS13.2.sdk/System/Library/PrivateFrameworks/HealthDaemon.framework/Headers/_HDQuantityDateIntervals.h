//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray;

@interface _HDQuantityDateIntervals : NSObject
{
    double _currentStartInterval;
    double _currentEndInterval;
    long long _currentPairIndex;
    NSMutableArray *_intervalPairs;
}

// - (void).cxx_destruct;
- (BOOL)insideRanges:(double)arg1;
- (void)addDateRangeFrom:(double)arg1 to:(double)arg2;
- (id)init;

@end

