//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@interface _PKColorPickerSimpleCrosshairView : UIView
{
    double _borderCornerRadius;
    UIView *_shadowView;
    UIView *_borderView;
}

@property(retain, nonatomic) UIView *borderView; // @synthesize borderView=_borderView;
@property(retain, nonatomic) UIView *shadowView; // @synthesize shadowView=_shadowView;
@property(nonatomic) double borderCornerRadius; // @synthesize borderCornerRadius=_borderCornerRadius;
// - (void).cxx_destruct;
- (double)_cornerRadiusForShadowView;
- (double)_cornerRadiusForBorderView;
- (void)configureShadowView:(id)arg1;
- (void)configureBorderView:(id)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(CGRect)arg1;

@end

