//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


#import <PhotoLibrary/PLVideoOverlayButton-Protocol.h>

@class UIButton, UIImageView, _UIBackdropView;

@interface PLHighFidelityVideoOverlayButton : UIView <PLVideoOverlayButton>
{
    long long _style;
    UIButton *_button;
    _UIBackdropView *_backdropView;
    UIImageView *_overlayPlayBackground;
    id _target;
    SEL _action;
}

- (void)_playButtonTapped:(id)arg1;
- (void)_playButtonDeactivate:(id)arg1;
- (void)_playButtonActivate:(id)arg1;
- (void)setTarget:(id)arg1 action:(SEL)arg2;
- (long long)style;
- (void)dealloc;
- (void)layoutSubviews;
- (id)initWithStyle:(long long)arg1;

@end

