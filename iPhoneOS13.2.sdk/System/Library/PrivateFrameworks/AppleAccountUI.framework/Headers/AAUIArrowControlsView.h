//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class UIButton;
@protocol AAUIArrowControlsViewDelegate;

@interface AAUIArrowControlsView : UIView
{
    UIButton *_upButton;
    UIButton *_downButton;
    id <AAUIArrowControlsViewDelegate> _delegate;
    long long _interfaceOrientation;
}

+ (double)defaultWidthForOrientation:(long long)arg1;
+ (double)defaultHeightForOrientation:(long long)arg1;
@property(nonatomic) long long interfaceOrientation; // @synthesize interfaceOrientation=_interfaceOrientation;
@property(readonly, nonatomic) UIButton *upButton; // @synthesize upButton=_upButton;
@property(readonly, nonatomic) UIButton *downButton; // @synthesize downButton=_downButton;
@property(nonatomic) id <AAUIArrowControlsViewDelegate> delegate; // @synthesize delegate=_delegate;
// - (void).cxx_destruct;
- (id)hitTest:(CGPoint)arg1 withEvent:(id)arg2;
- (void)layoutSubviews;
- (void)_arrowButtonWasTapped:(id)arg1;
- (id)initWithFrame:(CGRect)arg1;

@end

