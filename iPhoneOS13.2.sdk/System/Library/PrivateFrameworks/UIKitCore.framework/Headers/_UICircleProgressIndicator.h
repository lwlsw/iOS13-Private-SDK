//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "UIView.h"

@class CADisplayLink, UIColor, UIImage, UIImageView;

__attribute__((visibility("hidden")))
@interface _UICircleProgressIndicator : UIView
{
    double _animatedValue;
    double _animationEndTime;
    double _animationStartTime;
    double _animationStartValue;
    UIImage *_borderImage;
    UIImage *_centerImage;
    UIEdgeInsets _centerImageInsets;
    CADisplayLink *_displayLink;
    UIImage *_fillImage;
    BOOL _highlighted;
    UIImageView *_indeterminateView;
    BOOL _isAnimating;
    double _progress;
    UIColor *_unhighlightedBackgroundColor;
}

+ (id)_indeterminateImage;
+ (id)_fillImage;
+ (id)_borderImage;
@property(retain, nonatomic) UIImage *fillImage; // @synthesize fillImage=_fillImage;
@property(retain, nonatomic) UIImage *borderImage; // @synthesize borderImage=_borderImage;
@property(nonatomic) double progress; // @synthesize progress=_progress;
@property(nonatomic, getter=isHighlighted) BOOL highlighted; // @synthesize highlighted=_highlighted;
@property(nonatomic) UIEdgeInsets imageInsets; // @synthesize imageInsets=_centerImageInsets;
@property(retain, nonatomic) UIImage *image; // @synthesize image=_centerImage;
// - (void).cxx_destruct;
- (void)_startIndeterminateAnimation;
- (void)_animateValueOnDisplayLink:(id)arg1;
- (void)_setHidesBorderView:(BOOL)arg1;
- (void)tintColorDidChange;
- (CGSize)sizeThatFits:(CGSize)arg1;
- (void)layoutSubviews;
- (void)drawRect:(CGRect)arg1;
- (void)didMoveToWindow;
- (void)setProgress:(double)arg1 animated:(BOOL)arg2;
@property(nonatomic, getter=isIndeterminate) BOOL indeterminate;
- (void)dealloc;
- (id)initWithFrame:(CGRect)arg1;

@end

