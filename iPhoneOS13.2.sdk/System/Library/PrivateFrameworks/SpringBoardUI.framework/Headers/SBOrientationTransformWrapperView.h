//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class NSArray, NSMutableArray, _SBOrientationTransformedContentView;

@interface SBOrientationTransformWrapperView : UIView
{
    _SBOrientationTransformedContentView *_transformedView;
    long long _contentOrientation;
    long long _containerOrientation;
    NSMutableArray *_hitTestViews;
}

@property(nonatomic) long long containerOrientation; // @synthesize containerOrientation=_containerOrientation;
@property(nonatomic) long long contentOrientation; // @synthesize contentOrientation=_contentOrientation;
// - (void).cxx_destruct;
- (void)setCenter:(CGPoint)arg1;
- (void)setBounds:(CGRect)arg1;
- (void)setFrame:(CGRect)arg1;
- (void)layoutSubviews;
- (CGSize)sizeThatFits:(CGSize)arg1;
- (id)hitTest:(CGPoint)arg1 withEvent:(id)arg2;
- (void)_updateGeometry;
- (CGAffineTransform)convertTransformFromContentInterfaceOrientationToContainerInterfaceOrientation:(CGAffineTransform)arg1;
- (CGRect)convertRectFromContentInterfaceOrientationToContainerInterfaceOrientation:(CGRect)arg1;
- (CGPoint)convertPointFromContentInterfaceOrientationToContainerInterfaceOrientation:(CGPoint)arg1;
- (CGAffineTransform)convertTransformFromContainerInterfaceOrientationToContentInterfaceOrientation:(CGAffineTransform)arg1;
- (CGRect)convertRectFromContainerInterfaceOrientationToContentInterfaceOrientation:(CGRect)arg1;
- (CGPoint)convertPointFromContainerInterfaceOrientationToContentInterfaceOrientation:(CGPoint)arg1;
- (CGSize)_referenceContainerSize;
- (void)bringContentSubviewToFront:(id)arg1;
- (void)removeGestureRecognizerFromTransformedView:(id)arg1;
- (void)addGestureRecognizerToTransformedView:(id)arg1;
- (void)addHitTestView:(id)arg1;
- (void)addContentView:(id)arg1;
@property(readonly, nonatomic) NSArray *contentViews;
- (id)description;
- (id)initWithFrame:(CGRect)arg1;

@end

