//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TSReading/TSDPathManipulation.h>

@class NSMutableArray, NSMutableDictionary;

@interface TSDBrushPathManipulation : TSDPathManipulation
{
    CGPathRef mBrushStroke;
    double mRepeatLength;
    NSMutableDictionary *mSections;
    NSMutableArray *mMiddleSections;
    NSMutableArray *mSmallSections;
    double mSmallLimitWidth;
    BOOL mSplitAtSharpAngles;
}

@end

