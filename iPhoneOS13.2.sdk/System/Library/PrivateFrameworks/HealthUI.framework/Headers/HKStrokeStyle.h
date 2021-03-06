//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@class UIColor;

@interface HKStrokeStyle : NSObject <NSCopying>
{
    int _lineCap;
    int _lineJoin;
    int _blendMode;
    UIColor *_strokeColor;
    double _lineWidth;
    long long _dashStyle;
}

+ (id)strokeStyleWithColor:(id)arg1 lineWidth:(double)arg2;
@property(nonatomic) int blendMode; // @synthesize blendMode=_blendMode;
@property(nonatomic) long long dashStyle; // @synthesize dashStyle=_dashStyle;
@property(nonatomic) int lineJoin; // @synthesize lineJoin=_lineJoin;
@property(nonatomic) int lineCap; // @synthesize lineCap=_lineCap;
@property(nonatomic) double lineWidth; // @synthesize lineWidth=_lineWidth;
@property(copy, nonatomic) UIColor *strokeColor; // @synthesize strokeColor=_strokeColor;
// - (void).cxx_destruct;
- (void)applyToContext:(CGContextRef )arg1;
- (id)init;
// - (id)copyWithZone:(_NSZone )arg1;

@end

