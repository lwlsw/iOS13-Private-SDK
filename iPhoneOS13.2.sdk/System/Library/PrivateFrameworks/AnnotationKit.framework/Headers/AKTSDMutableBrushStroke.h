//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AnnotationKit/AKTSDBrushStroke.h>

@class NSString, UIColor;

@interface AKTSDMutableBrushStroke : AKTSDBrushStroke
{
    int join;
    UIColor *color;
    double width;
    double miterLimit;
    NSString *strokeName;
}

@property(copy, nonatomic) NSString *strokeName; // @synthesize strokeName;
@property(nonatomic) double miterLimit; // @synthesize miterLimit;
@property(nonatomic) int join; // @synthesize join;
@property(nonatomic) double width; // @synthesize width;
@property(retain, nonatomic) UIColor *color; // @synthesize color;
// - (void).cxx_destruct;
// - (id)copyWithZone:(_NSZone )arg1;

@end

