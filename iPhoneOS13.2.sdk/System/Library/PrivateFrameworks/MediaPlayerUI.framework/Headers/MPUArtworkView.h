//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class NSLayoutConstraint, UIImage, UIView;

@interface MPUArtworkView : UIImageView
{
    NSLayoutConstraint *_aspectConstraint;
    UIImage *_externalImage;
    UIView *_highlightView;
    BOOL _isDeallocating;
    BOOL _automaticallyApplyAspectConstraints;
    BOOL _dimsWhenHighlighted;
    BOOL _forcesAnimatedUnhighlighting;
    BOOL _displayingPlaceholder;
    UIImage *_placeholderImage;
}

@property(nonatomic, getter=isDisplayingPlaceholder) BOOL displayingPlaceholder; // @synthesize displayingPlaceholder=_displayingPlaceholder;
@property(retain, nonatomic) UIImage *placeholderImage; // @synthesize placeholderImage=_placeholderImage;
@property(nonatomic) BOOL forcesAnimatedUnhighlighting; // @synthesize forcesAnimatedUnhighlighting=_forcesAnimatedUnhighlighting;
@property(nonatomic) BOOL dimsWhenHighlighted; // @synthesize dimsWhenHighlighted=_dimsWhenHighlighted;
@property(nonatomic) BOOL automaticallyApplyAspectConstraints; // @synthesize automaticallyApplyAspectConstraints=_automaticallyApplyAspectConstraints;
@property(readonly, nonatomic) UIImage *_externalImage; // @synthesize _externalImage;
// - (void).cxx_destruct;
- (void)_updateHighlightViewAnimated:(BOOL)arg1;
- (BOOL)_shouldShowHighlightView;
- (void)_setPlaceholderHidden:(BOOL)arg1;
- (void)_imageDidChange;
@property(nonatomic, getter=_aspectConstraintMultiplier, setter=_setAspectConstraintMultiplier:) double aspectConstraintMultiplier;
@property(readonly, nonatomic) BOOL shouldDisplayPlaceholder;
- (void)stopAnimating;
- (void)startAnimating;
- (void)setImage:(id)arg1;
- (void)setHighlightedAnimationImages:(id)arg1;
- (void)setHighlightedImage:(id)arg1;
- (void)setHighlighted:(BOOL)arg1 animated:(BOOL)arg2;
- (void)setHighlighted:(BOOL)arg1;
- (void)updateConstraints;
- (void)dealloc;
- (id)initWithFrame:(CGRect)arg1;
- (id)initWithImage:(id)arg1;

@end

