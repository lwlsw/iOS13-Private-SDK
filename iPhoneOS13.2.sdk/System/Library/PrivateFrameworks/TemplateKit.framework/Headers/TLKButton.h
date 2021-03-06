//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class CAShapeLayer, TLKImageView, TLKTapContainerButton, UIImage;

@interface TLKButton : UIView
{
    BOOL _toggled;
    BOOL _indeterminate;
    UIImage *_untoggledImage;
    UIImage *_toggledImage;
    UIImage *_overlayImage;
    TLKTapContainerButton *_button;
    CAShapeLayer *_outerProgressLayer;
    CAShapeLayer *_innerProgressLayer;
    double _progress;
    TLKImageView *_imageView;
    CGSize _fixedSize;
}

// + (CDStruct_afa449f9)_calculateStatistics:(CGImageRef)arg1 withSize:(CGSize)arg2;
+ (id)blurColorForColor:(id)arg1;
+ (id)blurColorForImage:(id)arg1 forButtonSize:(CGSize)arg2 withOffsetRight:(float)arg3 withOffsetBottom:(float)arg4;
@property(retain, nonatomic) TLKImageView *imageView; // @synthesize imageView=_imageView;
@property(nonatomic) double progress; // @synthesize progress=_progress;
@property(retain, nonatomic) CAShapeLayer *innerProgressLayer; // @synthesize innerProgressLayer=_innerProgressLayer;
@property(retain, nonatomic) CAShapeLayer *outerProgressLayer; // @synthesize outerProgressLayer=_outerProgressLayer;
@property(retain, nonatomic) TLKTapContainerButton *button; // @synthesize button=_button;
@property(readonly, nonatomic, getter=isIndeterminate) BOOL indeterminate; // @synthesize indeterminate=_indeterminate;
@property(nonatomic) CGSize fixedSize; // @synthesize fixedSize=_fixedSize;
@property(retain, nonatomic) UIImage *overlayImage; // @synthesize overlayImage=_overlayImage;
@property(retain, nonatomic) UIImage *toggledImage; // @synthesize toggledImage=_toggledImage;
@property(retain, nonatomic) UIImage *untoggledImage; // @synthesize untoggledImage=_untoggledImage;
@property(nonatomic, getter=isToggled) BOOL toggled; // @synthesize toggled=_toggled;
// - (void).cxx_destruct;
@property(readonly) UIView *hitView;
- (void)addTarget:(id)arg1 forAction:(SEL)arg2;
- (id)_newShapeViewWithBounds:(CGRect)arg1 lineWidth:(double)arg2;
- (id)iconColor;
- (void)_updateInnerProgressLayerStroke;
- (void)updateOuterProgressLayerStroke;
- (id)_innerProgressLayer;
- (id)_outerProgressLayer;
- (void)_beginIndeterminateAnimation;
- (void)endIndeterminateAnimation;
- (void)beginIndeterminateAnimation;
- (void)setProgress:(float)arg1 animated:(BOOL)arg2;
- (void)showPlayIndicator:(BOOL)arg1;
- (void)setButtonSelectionState:(BOOL)arg1;
- (void)hideProgressAnimated:(BOOL)arg1;
- (void)layoutSubviews;
- (CGSize)sizeThatFits:(CGSize)arg1;
- (CGSize)intrinsicContentSize;
@property(nonatomic) __weak UIView *containerView;
- (void)tlk_updateForAppearance:(id)arg1;
- (void)didMoveToWindow;
- (void)_dynamicUserInterfaceTraitDidChange;
@property(readonly) UIImage *imageOnImageView;
- (id)init;

@end

