//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class TSUColor;

@interface TSDPathStroker : NSObject
{
    TSUColor *mColor;
    double mWidth;
    TSDPathStroker *mPrecedingStroker;
}

@property(nonatomic) double width; // @synthesize width=mWidth;
- (void)strokePath:(CGPathRef)arg1 inContext:(CGContextRef )arg2 inColor:(id)arg3;
- (void)dealloc;
- (id)initWithProperties:(id)arg1 bundle:(id)arg2 dataManager:(void )arg3 precedingStroker:(id)arg4;

@end

