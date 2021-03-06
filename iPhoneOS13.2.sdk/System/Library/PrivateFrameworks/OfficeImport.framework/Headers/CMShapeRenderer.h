//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface CMShapeRenderer : NSObject
{
}

+ (void)_setupDrawingStyleInDrawingContext:(id)arg1 dash:(id)arg2 state:(id)arg3;
+ (void)_setupDrawingStyleInDrawingContext:(id)arg1 stroke:(id)arg2 state:(id)arg3;
+ (void)_setupDrawingStyleInDrawingContext:(id)arg1 fill:(id)arg2 stroke:(id)arg3 state:(id)arg4;
+ (CGImageRef)copyImageFromOADImageFill:(id)arg1 withContext:(id)arg2;
+ (CGImageRef)copyImageFromOADImageFill:(id)arg1 withMapper:(id)arg2;
+ (CGColorRef)_copyCGColorFromOADFill:(id)arg1 andState:(id)arg2;
+ (CGColorRef)_copyCGColorFromOADColor:(id)arg1 andState:(id)arg2;
+ (void)_renderCGPath:(CGPathRef)arg1 stroke:(id)arg2 fill:(id)arg3 orientedBounds:(id)arg4 state:(id)arg5 drawingContext:(id)arg6;
+ (void)renderCanonicalShape:(int)arg1 fill:(id)arg2 stroke:(id)arg3 adjustValues:(id)arg4 orientedBounds:(id)arg5 state:(id)arg6 drawingContext:(id)arg7;
+ (void)renderLine:(int)arg1 stroke:(id)arg2 adjustValues:(id)arg3 orientedBounds:(id)arg4 state:(id)arg5 drawingContext:(id)arg6;
+ (void)renderDiagramPath:(id)arg1 fill:(id)arg2 stroke:(id)arg3 state:(id)arg4 drawingContext:(id)arg5;
+ (void)renderFreeForm:(id)arg1 fill:(id)arg2 stroke:(id)arg3 orientedBounds:(id)arg4 state:(id)arg5 drawingContext:(id)arg6;

@end

