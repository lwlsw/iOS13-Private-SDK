//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface PKLegacyDrawingRegressionTester : NSObject
{
}

+ (id)regressionTestImagePathForFile:(id)arg1 forClass:(Class)arg2;
+ (id)regressionTestDrawingPathForFile:(id)arg1 forClass:(Class)arg2;
+ (double)compareImage:(CGImageRef)arg1 with:(CGImageRef)arg2 drawing:(id)arg3;
+ (double)compareLegacyDrawingImage:(id)arg1 toConvertedDrawing:(id)arg2 debugImagesDirectory:(id)arg3;
+ (double)compareLegacyDrawingImage:(id)arg1 toConvertedDrawing:(id)arg2;
+ (CGImageRef)createFilteredImageFromImage:(id)arg1 context:(id)arg2 filterRadius:(double)arg3;
// + (double)maxStdDevErrorFromResult:(CDStruct_c5e6d23b)arg1;

@end

