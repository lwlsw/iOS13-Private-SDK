//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//



@class UIView;

@interface CPSPanButton : UIButton <UIGestureRecognizerDelegate>
{
    long long _direction;
    UIView *_backgroundView;
}

+ (id)dynamicBackgroundColor;
@property(retain, nonatomic) UIView *backgroundView; // @synthesize backgroundView=_backgroundView;
@property(readonly, nonatomic) long long direction; // @synthesize direction=_direction;
// - (void).cxx_destruct;
- (void)_setupPanImages;
- (void)_updateColors;
- (void)traitCollectionDidChange:(id)arg1;
- (void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2;
- (void)layoutSubviews;
- (id)initWithDirection:(long long)arg1;

@end

