//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface AXPIFingerUtilities : NSObject
{
}

+ (id)_points:(id)arg1 adjustedForBounds:(CGRect)arg2;
+ (id)pointStringsForFingerModels:(id)arg1;
+ (id)fingerModelsForPointStrings:(id)arg1;
+ (void)updateFirstLocation:(CGPoint )arg1 secondLocation:(CGPoint )arg2 forPinchWithRadiusDelta:(double)arg3 angleDelta:(double)arg4;
+ (id)defaultPinchLocationsAroundPoint:(CGPoint)arg1 withinBounds:(CGRect)arg2;
+ (id)defaultLocationsForNumberOfFingers:(NSUInteger)arg1 aroundPoint:(CGPoint)arg2 withinBounds:(CGRect)arg3;
+ (id)defaultLocationsForNumberOfFingers:(NSUInteger)arg1 aroundPoint:(CGPoint)arg2;

@end

