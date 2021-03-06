//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class CAShapeLayer, UIImageView;

@interface CAMPanoramaArrowView : UIView
{
    UIImageView *_arrowHead;
    UIView *_arrowTail;
    CAShapeLayer *_arrowTailPiecesLayer;
    CGPathRef _currentTailPiecesPath;
    CGRect _arrowTailRect;
    double _currentNormalizedSpeed;
    double _tailBiggestDelta;
    double _tailBigDelta;
    double _tailMediumDelta;
    double _tailSmallDelta;
}

// - (void).cxx_destruct;
- (void)reset;
- (void)animateWithNormalizedSpeed:(double)arg1 duration:(double)arg2;
- (void)_updateTailWithAnimationDuration:(double)arg1;
- (CGPathRef)_newTailPiecesPathOfWidth:(double )arg1;
- (void)layoutSubviews;
- (CGSize)intrinsicContentSize;
- (void)dealloc;
- (id)initWithFrame:(CGRect)arg1;

@end

