//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


#import <CameraUI/CAMAccessibilityHUDItemProvider-Protocol.h>

@class CAGradientLayer, NSArray, NSDictionary, UIView;
@protocol CAMModeDialDataSource;

@interface CAMModeDial : UIControl <CAMAccessibilityHUDItemProvider>
{
    long long _layoutStyle;
    id <CAMModeDialDataSource> _dataSource;
    long long _selectedMode;
    UIView *__selectedItemBackgroundView;
    NSArray *__modes;
    NSDictionary *__items;
    UIView *__meshTransformView;
    CAGradientLayer *__gradientLayer;
    UIView *__itemsContainerView;
}

+ (BOOL)wantsVerticalModeDialForLayoutStyle:(long long)arg1;
@property(readonly, nonatomic) UIView *_itemsContainerView; // @synthesize _itemsContainerView=__itemsContainerView;
@property(readonly, nonatomic) CAGradientLayer *_gradientLayer; // @synthesize _gradientLayer=__gradientLayer;
@property(readonly, nonatomic) UIView *_meshTransformView; // @synthesize _meshTransformView=__meshTransformView;
@property(retain, nonatomic, setter=_setItems:) NSDictionary *_items; // @synthesize _items=__items;
@property(retain, nonatomic, setter=_setModes:) NSArray *_modes; // @synthesize _modes=__modes;
@property(readonly, nonatomic) UIView *_selectedItemBackgroundView; // @synthesize _selectedItemBackgroundView=__selectedItemBackgroundView;
@property(nonatomic) long long selectedMode; // @synthesize selectedMode=_selectedMode;
@property(nonatomic) id <CAMModeDialDataSource> dataSource; // @synthesize dataSource=_dataSource;
@property(nonatomic) long long layoutStyle; // @synthesize layoutStyle=_layoutStyle;
// - (void).cxx_destruct;
- (void)selectedByAccessibilityHUDManager:(id)arg1;
- (id)hudItemForAccessibilityHUDManager:(id)arg1;
- (void)_updateSelectedItemBackgroundForLayoutStyle:(long long)arg1;
- (void)_updateForLayoutStyle;
- (void)updateToContentSize:(id)arg1;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)_configureMeshTransformForLayoutStyle:(long long)arg1;
- (id)_meshTransformForLayoutStyle:(long long)arg1;
- (id)_horizontalMeshTransform;
- (void)_configureGradientForLayoutStyle:(long long)arg1;
- (long long)_nearestCaptureModeForLocation:(CGPoint)arg1;
- (void)reloadData;
- (id)_selectedItem;
- (void)_updateItemsForLayoutStyle:(long long)arg1;
- (id)_fontForLayoutStyle:(long long)arg1 selected:(BOOL)arg2;
- (void)_updateContainerCenterFromSelectedModeAnimated:(BOOL)arg1;
- (CGPoint)_verticalContainerCenterForMode:(long long)arg1;
- (CGPoint)_horizontalContainerCenterForMode:(long long)arg1;
- (double)_centeringNudgeForMode:(long long)arg1;
- (void)setSelectedMode:(long long)arg1 animated:(BOOL)arg2;
- (void)_layoutVerticalModeDial;
- (void)_layoutHorizontalModeDial;
- (CGSize)_interpolatedHorizontalMeshTransformSize;
- (void)layoutSubviews;
- (CGSize)sizeThatFits:(CGSize)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(CGRect)arg1;
- (id)initWithLayoutStyle:(long long)arg1;
- (void)_commonCAMModeDialInitializationWithLayoutStyle:(long long)arg1;

@end

