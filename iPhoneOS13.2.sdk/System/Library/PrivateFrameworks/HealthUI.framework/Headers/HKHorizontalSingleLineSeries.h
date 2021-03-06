//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HealthUI/HKGraphSeries.h>

#import <HealthUI/HKAxisLabelDataSource-Protocol.h>

@class UIColor, UIImage;

@interface HKHorizontalSingleLineSeries : HKGraphSeries <HKAxisLabelDataSource>
{
    BOOL _shouldConnectPoints;
    double _topInsetPercentage;
    UIColor *_baseColor;
    double _lineWidth;
    double _selectedLineWidth;
    double _markRadius;
    UIImage *_selectedPointMarkerImage;
}

@property(retain, nonatomic) UIImage *selectedPointMarkerImage; // @synthesize selectedPointMarkerImage=_selectedPointMarkerImage;
@property(nonatomic) double markRadius; // @synthesize markRadius=_markRadius;
@property(nonatomic) double selectedLineWidth; // @synthesize selectedLineWidth=_selectedLineWidth;
@property(nonatomic) double lineWidth; // @synthesize lineWidth=_lineWidth;
@property(retain, nonatomic) UIColor *baseColor; // @synthesize baseColor=_baseColor;
@property(nonatomic) BOOL shouldConnectPoints; // @synthesize shouldConnectPoints=_shouldConnectPoints;
@property(nonatomic) double topInsetPercentage; // @synthesize topInsetPercentage=_topInsetPercentage;
// - (void).cxx_destruct;
- (CGPoint)renderPositionForLabel:(id)arg1 rect:(CGRect)arg2 zoomScale:(double)arg3 contentOffset:(CGPoint)arg4 constantOffset:(double)arg5 isHorizontal:(BOOL)arg6 optionalOffset:(CGPoint)arg7;
- (id)findAxisLabelsInModelRange:(id)arg1 zoomScale:(double)arg2;
- (BOOL)blockCoordinate:(id)arg1 greaterThan:(id)arg2;
- (BOOL)blockCoordinate:(id)arg1 lessThan:(id)arg2;
- (double)yAxisDifferenceToPoint:(CGPoint)arg1 blockCoordinate:(id)arg2 chartRect:(CGRect)arg3;
- (double)xAxisDistanceFromPoint:(CGPoint)arg1 blockCoordinate:(id)arg2 chartRect:(CGRect)arg3;
- (double)distanceFromPoint:(CGPoint)arg1 blockCoordinate:(id)arg2 chartRect:(CGRect)arg3;
- (BOOL)supportsMultiTouchSelection;
- (double)yCoordinateForLevel:(long long)arg1 chartRect:(CGRect)arg2;
- (void)setYAxis:(id)arg1;
// - (id)coordinatesForBlock:(id)arg1 blockPath:(CDStruct_6ca94699)arg2 xAxis:(id)arg3 yAxis:(id)arg4;
- (void)drawSeriesWithBlockCoordinates:(id)arg1 axisRect:(CGRect)arg2 zoomLevelConfiguration:(id)arg3 pointTransform:(CGAffineTransform)arg4 renderContext:(CGContextRef )arg5 secondaryRenderContext:(id)arg6;
- (id)init;

@end

