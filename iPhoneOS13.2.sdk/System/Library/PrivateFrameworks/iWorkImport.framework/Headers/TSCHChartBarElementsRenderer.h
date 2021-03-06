//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <iWorkImport/TSCHRenderer.h>

__attribute__((visibility("hidden")))
@interface TSCHChartBarElementsRenderer : TSCHRenderer
{
    BOOL mVertical;
    BOOL mTouchInResize;
    BOOL mTouchInBody;
    NSUInteger mHitSeriesIndex;
    NSUInteger mHitValueIndex;
    double mHitFudgeOffset;
    BOOL mResizeIsOutsideBody;
    CGRect mLastDrawRect;
}

- (void)p_renderIntoContext:(CGContextRef )arg1 visible:(CGRect)arg2;
- (void)p_drawLabels:(CGContextRef )arg1 visible:(CGRect)arg2;
- (CGPathRef)roundedCornerPathForRect:(CGRect)arg1 shouldRoundOuterEndOnly:(BOOL)arg2 relativelyPositive:(BOOL)arg3;
- (id)stackRectsWithContext:(CGContextRef )arg1;
- (CGPathRef)clippingPathForRect:(CGRect)arg1 inGroupIndex:(NSUInteger)arg2 withContext:(CGContextRef )arg3 relativelyPositive:(BOOL)arg4 stackRects:(id)arg5;
- (id)p_strokeForSeriesIndex:(NSUInteger)arg1 withContext:(CGContextRef )arg2;
- (void)renderRoundedCornerElementStrokeIntoContext:(CGContextRef )arg1 stroke:(id)arg2 clippingPath:(CGPathRef)arg3 elementRenderRect:(CGRect)arg4;
- (void)renderElementStroke:(id)arg1 intoContext:(CGContextRef )arg2 usingElementRenderRect:(CGRect)arg3 inGroupIndex:(NSUInteger)arg4 relativelyPositive:(BOOL)arg5 stackRects:(id)arg6;
- (void)enumerateElementsForSeries:(id)arg1 withValueSet:(id)arg2 context:(CGContextRef )arg3 forBlock:(CDUnknownBlockType)arg4;
- (void)enumerateRenderingElementsForSeries:(id)arg1 context:(CGContextRef )arg2 forBlock:(CDUnknownBlockType)arg3;
- (void)enumerateAllElementsForSeries:(id)arg1 context:(CGContextRef )arg2 forBlock:(CDUnknownBlockType)arg3;
- (void)p_drawLayer:(CGLayer )arg1 intoContext:(CGContextRef )arg2 contextRect:(CGRect)arg3 groupIndex:(NSUInteger)arg4 relativelyPositive:(BOOL)arg5 stackRects:(id)arg6;
- (void)p_drawBars:(CGContextRef )arg1 visible:(CGRect)arg2;
// - (CGRect)renderingElementFrameForBarElementFrame:(CGRect)arg1 groupIndex:(NSUInteger)arg2 modelCache:(id)arg3 stroke:(id)arg4 viewScale:(double)arg5 contextInfo:(CDStruct_71493e60)arg6 returningFillRect:(CGRect )arg7 strokeRect:(CGRect )arg8;
- (CGRect)barElementFrameForSeries:(id)arg1 groupIndex:(NSUInteger)arg2;
- (BOOL)supportsSeparateLabelsRenderPass;
- (int)chunkPlane;
- (id)initWithChartRep:(id)arg1 layoutItem:(id)arg2;

@end

