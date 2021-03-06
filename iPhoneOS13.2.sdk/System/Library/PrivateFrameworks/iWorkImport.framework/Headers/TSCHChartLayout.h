//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class TSCHChartInfo, TSCHChartModel;

__attribute__((visibility("hidden")))
@interface TSCHChartLayout : NSObject
{
    BOOL mNeedsLayout;
    TSCHChartInfo *mChartInfo;
//     CDStruct_b1c75024 mLayoutSettings;
    CGRect _legendModelGeometryFrame;
}

+ (id)propertiesThatInvalidateLayout;
+ (CGSize)legendSizeForChartInfo:(id)arg1 initialWidth:(double)arg2;
+ (id)chartLayoutWithChartInfo:(id)arg1;
@property CGRect legendModelGeometryFrame; // @synthesize legendModelGeometryFrame=_legendModelGeometryFrame;
// @property CDStruct_b1c75024 layoutSettings; // @synthesize layoutSettings=mLayoutSettings;
@property(readonly) TSCHChartInfo *chartInfo; // @synthesize chartInfo=mChartInfo;
// - (void).cxx_destruct;
- (CGPathRef)newDragAndDropHighlightPathForSelection:(id)arg1;
- (id)subselectionHaloPositionsForSelections:(id)arg1;
- (id)subselectionKnobPositionsForSelection:(id)arg1;
- (id)hitChartElements:(CGPoint)arg1 passingTest:(CDUnknownBlockType)arg2;
- (void)setForceTitleAtTop:(BOOL)arg1;
- (void)setForceOmitLabelPlacement:(BOOL)arg1;
- (void)setForceOmitLegend:(BOOL)arg1;
- (CGRect)convertNaturalSpaceRectToChartLayoutSpaceRect:(CGRect)arg1;
- (CGRect)convertChartLayoutSpaceRectToNaturalSpaceRect:(CGRect)arg1;
- (CGPoint)convertNaturalSpaceToChartLayoutSpace:(CGPoint)arg1;
- (CGPoint)convertChartLayoutSpaceToNaturalSpace:(CGPoint)arg1;
- (CGAffineTransform)transformToConvertChartLayoutToNatural;
- (id)renderersWithRep:(id)arg1;
- (void)endResize;
- (void)takeSizeFromTracker:(id)arg1;
- (void)beginResize;
- (void)setLegendSize:(CGSize)arg1;
- (void)layoutForResizingSize:(CGSize)arg1;
- (CGRect)boundsForResize;
- (void)endDynamicOperation;
- (void)beginDynamicOperation;
- (void)invalidateCachedOriginRelativeToChartAreaFrame;
- (BOOL)isValid;
- (void)invalidate;
- (void)processChanges:(id)arg1;
- (BOOL)layoutFrameShouldEncloseInfoGeometry;
- (void)layoutForChartBodySize:(CGSize)arg1;
- (void)layoutForChartAreaSize:(CGSize)arg1;
- (void)layoutForCircumscribingSize:(CGSize)arg1;
@property NSUInteger dataSetIndex;
@property(readonly) CGRect chartBodyFrame;
@property CGRect legendGeometryFrame;
@property(readonly) CGRect legendDrawingFrame;
@property(readonly) CGRect titleFrame;
@property(readonly) CGRect legendFrame;
@property(readonly) CGRect chartAreaFrame;
@property(readonly) CGRect outerShadowFrame;
@property(readonly) CGRect outerLayoutFrame;
@property(readonly) TSCHChartModel *model;
- (id)initWithChartInfo:(id)arg1;

@end

