//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "UIView.h"

@class NSValue, _DUIPreview, _UIPlatterSoftShadowView, _UIPortalView, _UIShapeView;

@interface _UIPlatterView : UIView
{
    BOOL _constrainSize;
    BOOL _lifted;
    BOOL _backgroundVisible;
    BOOL _shadowVisible;
    BOOL _appliesOriginalRotation;
    BOOL _constrainSizeWhenNotLifted;
    BOOL _transformAppliedExternally;
    BOOL _flipped;
    BOOL _precisionMode;
    _DUIPreview *_preview;
    double _orientationRotation;
    double _rotation;
    UIView *_componentView;
    double _stackRotation;
    NSValue *_anchorPointValueToAdjustToOnMoveToWindow;
    UIView *_backgroundView;
    _UIShapeView *_platterMaskView;
    _UIShapeView *_portalMaskView;
    _UIPortalView *_portalView;
    UIView *_portalWrapperView;
    _UIPlatterSoftShadowView *_shadowView;
    CGPoint _offset;
    CGSize _overrideSize;
    CGSize _contentSize;
    UIEdgeInsets _contentInsets;
    CGAffineTransform _additionalTransform;
    CGAffineTransform _containerCounterScaleTransform;
    CGAffineTransform _containerCounterRotationTransform;
}

@property(nonatomic) CGAffineTransform containerCounterRotationTransform; // @synthesize containerCounterRotationTransform=_containerCounterRotationTransform;
@property(nonatomic) CGAffineTransform containerCounterScaleTransform; // @synthesize containerCounterScaleTransform=_containerCounterScaleTransform;
@property(readonly, nonatomic) _UIPlatterSoftShadowView *shadowView; // @synthesize shadowView=_shadowView;
@property(readonly, nonatomic) UIView *portalWrapperView; // @synthesize portalWrapperView=_portalWrapperView;
@property(retain, nonatomic) _UIPortalView *portalView; // @synthesize portalView=_portalView;
@property(readonly, nonatomic) _UIShapeView *portalMaskView; // @synthesize portalMaskView=_portalMaskView;
@property(readonly, nonatomic) _UIShapeView *platterMaskView; // @synthesize platterMaskView=_platterMaskView;
@property(readonly, nonatomic) UIView *backgroundView; // @synthesize backgroundView=_backgroundView;
@property(nonatomic) BOOL precisionMode; // @synthesize precisionMode=_precisionMode;
@property(nonatomic, getter=isFlipped) BOOL flipped; // @synthesize flipped=_flipped;
@property(readonly, nonatomic) CGSize contentSize; // @synthesize contentSize=_contentSize;
@property(nonatomic) BOOL transformAppliedExternally; // @synthesize transformAppliedExternally=_transformAppliedExternally;
@property(nonatomic) CGAffineTransform additionalTransform; // @synthesize additionalTransform=_additionalTransform;
@property(nonatomic) BOOL constrainSizeWhenNotLifted; // @synthesize constrainSizeWhenNotLifted=_constrainSizeWhenNotLifted;
@property(retain, nonatomic) NSValue *anchorPointValueToAdjustToOnMoveToWindow; // @synthesize anchorPointValueToAdjustToOnMoveToWindow=_anchorPointValueToAdjustToOnMoveToWindow;
@property(nonatomic) double stackRotation; // @synthesize stackRotation=_stackRotation;
@property(retain, nonatomic) UIView *componentView; // @synthesize componentView=_componentView;
@property(nonatomic) double rotation; // @synthesize rotation=_rotation;
@property(nonatomic) BOOL appliesOriginalRotation; // @synthesize appliesOriginalRotation=_appliesOriginalRotation;
@property(nonatomic) CGSize overrideSize; // @synthesize overrideSize=_overrideSize;
@property(nonatomic) double orientationRotation; // @synthesize orientationRotation=_orientationRotation;
@property(nonatomic) CGPoint offset; // @synthesize offset=_offset;
@property(nonatomic, getter=isShadowVisible) BOOL shadowVisible; // @synthesize shadowVisible=_shadowVisible;
@property(nonatomic, getter=isBackgroundVisible) BOOL backgroundVisible; // @synthesize backgroundVisible=_backgroundVisible;
@property(nonatomic, getter=isLifted) BOOL lifted; // @synthesize lifted=_lifted;
@property(readonly, nonatomic) UIEdgeInsets contentInsets; // @synthesize contentInsets=_contentInsets;
@property(nonatomic) BOOL constrainSize; // @synthesize constrainSize=_constrainSize;
@property(readonly, copy, nonatomic) _DUIPreview *preview; // @synthesize preview=_preview;
// - (void).cxx_destruct;
- (void)_unmaskPlatterView;
- (void)updateTransform;
- (void)didMoveToSuperview;
- (BOOL)pointInside:(CGPoint)arg1 withEvent:(id)arg2;
- (void)didMoveToWindow;
- (CGSize)sizeThatFits:(CGSize)arg1;
- (void)takeCounterTransformsToAddToContainer:(id)arg1;
// @property(readonly, nonatomic) struct CATransform3D targetTransform;
// - (struct CATransform3D)scaleTransform;
@property(nonatomic) __weak UIView *sourceView;
- (double)scaleFactor;
- (void)setComponentViews:(id)arg1;
@property(readonly, nonatomic) CGPoint contentOffset;
@property(readonly, nonatomic) CGPoint badgeLocation;
- (id)initWithDroppedItem:(id)arg1;
- (id)initWithPreview:(id)arg1;
- (id)initWithDUIPreview:(id)arg1 imageComponent:(id)arg2;
- (id)initWithDUIPreview:(id)arg1;

@end

