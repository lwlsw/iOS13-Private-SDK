//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSNumber, UIColor;

__attribute__((visibility("hidden")))
@interface STUsageReportGraphSegment : NSObject
{
    NSNumber *_amount;
    double _amountAsPercentageOfDataPointTotal;
    UIColor *_color;
}

@property(retain, nonatomic) UIColor *color; // @synthesize color=_color;
@property(nonatomic) double amountAsPercentageOfDataPointTotal; // @synthesize amountAsPercentageOfDataPointTotal=_amountAsPercentageOfDataPointTotal;
@property(copy, nonatomic) NSNumber *amount; // @synthesize amount=_amount;
// - (void).cxx_destruct;
- (id)initWithAmount:(id)arg1 amountAsPercentageOfDataPointTotal:(double)arg2 color:(id)arg3;

@end

