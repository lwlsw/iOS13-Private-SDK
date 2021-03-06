//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray;

__attribute__((visibility("hidden")))
@interface TSCHChartPieQuadrant : NSObject
{
    NSArray *mWedgeLayoutInfos;
    NSUInteger mHorizontalHalfDisk;
    NSUInteger mVerticalHalfDisk;
}

@property(readonly, nonatomic) NSUInteger verticalHalfDisk; // @synthesize verticalHalfDisk=mVerticalHalfDisk;
@property(readonly, nonatomic) NSUInteger horizontalHalfDisk; // @synthesize horizontalHalfDisk=mHorizontalHalfDisk;
@property(readonly, copy, nonatomic) NSArray *wedgeLayoutInfos; // @synthesize wedgeLayoutInfos=mWedgeLayoutInfos;
// - (void).cxx_destruct;
- (id)initWithWedgeLayoutInfos:(id)arg1 horizontalHalfDisk:(NSUInteger)arg2 verticalHalfDisk:(NSUInteger)arg3;

@end

