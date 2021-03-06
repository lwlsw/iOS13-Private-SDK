//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <iWorkImport/TSCHChartLayoutItem.h>

__attribute__((visibility("hidden")))
@interface TSCHChartAxisTitleLayoutItem : TSCHChartLayoutItem
{
    CGSize mChartBodySize;
    double mMinHitSize;
}

@property(nonatomic) double minHitSize; // @synthesize minHitSize=mMinHitSize;
@property(nonatomic) CGSize chartBodySize; // @synthesize chartBodySize=mChartBodySize;
- (CGPathRef)newDragAndDropHighlightPathForSelection:(id)arg1;
- (double)titlePaddingForAxis:(id)arg1;
- (id)subselectionHaloPositionsForSelections:(id)arg1;
- (id)subselectionKnobPositionsForSelection:(id)arg1;
- (void)protected_iterateHitChartElements:(CGPoint)arg1 withBlock:(CDUnknownBlockType)arg2;
- (CGAffineTransform)transformForRenderingRange:(NSRange *)arg1 outElementSize:(CGSize )arg2 outClipRect:(CGRect )arg3;
- (CGAffineTransform)transformForRenderingOutElementSize:(CGSize )arg1 outClipRect:(CGRect )arg2;
- (CGAffineTransform)p_transformForRenderingRangePtr:(NSRange * )arg1 outElementSize:(CGSize )arg2 outClipRect:(CGRect )arg3;
- (CGRect)calcDrawingRect;
- (CGSize)calcMinSize;
- (BOOL)isTitleOn;
- (id)axisLayoutItem;
- (id)initWithParent:(id)arg1;

@end

