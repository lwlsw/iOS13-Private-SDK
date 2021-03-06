//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class NAUILayoutConstraintSet, UIImageView, UILabel, UIVisualEffectView;

@interface HUCameraFloatingMicrophoneButton : UIButton
{
    UIVisualEffectView *_backgroundView;
    UILabel *_microphoneLabel;
    UIImageView *_microphoneImageView;
    NAUILayoutConstraintSet *_constraintSet;
}

+ (id)_createBackgroundEffect;
+ (BOOL)requiresConstraintBasedLayout;
@property(readonly, nonatomic) NAUILayoutConstraintSet *constraintSet; // @synthesize constraintSet=_constraintSet;
@property(readonly, nonatomic) UIImageView *microphoneImageView; // @synthesize microphoneImageView=_microphoneImageView;
@property(readonly, nonatomic) UILabel *microphoneLabel; // @synthesize microphoneLabel=_microphoneLabel;
@property(readonly, nonatomic) UIVisualEffectView *backgroundView; // @synthesize backgroundView=_backgroundView;
// - (void).cxx_destruct;
- (void)updateConstraints;
- (void)_setupConstraintSet;
- (void)_updateSelectionState;
- (void)_updateAlpha;
- (void)setEnabled:(BOOL)arg1;
- (void)setHighlighted:(BOOL)arg1;
- (void)setSelected:(BOOL)arg1;
- (id)initWithFrame:(CGRect)arg1;

@end

