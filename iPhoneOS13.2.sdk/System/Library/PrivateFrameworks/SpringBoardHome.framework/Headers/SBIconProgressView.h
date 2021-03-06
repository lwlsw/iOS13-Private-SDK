//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class CADisplayLink, UIImage, _SBIconProgressFractionTransition, _SBIconProgressPausedTransition, _SBIconProgressStateTransition;
@protocol SBIconProgressViewDelegate;

@interface SBIconProgressView : UIView
{
    _SBIconProgressStateTransition *_activeStateTransition;
    _SBIconProgressPausedTransition *_activePausedTransition;
    _SBIconProgressFractionTransition *_activeFractionTransition;
    long long _modelState;
    BOOL _modelPaused;
    double _modelFraction;
    CADisplayLink *_displayLink;
    double _lastUpdate;
    UIImage *_maskImage;
    BOOL _canAnimate;
    BOOL _displayingPaused;
    id <SBIconProgressViewDelegate> _delegate;
    UIImage *_overlayImage;
    double _backgroundAlpha;
    double _foregroundAlpha;
    double _circleRadiusFraction;
    double _pauseRadiusFraction;
    long long _displayedState;
    double _displayedFraction;
//    struct SBIconImageInfo _iconImageInfo;
}

+ (id)_pieImageAtFraction:(double)arg1;
+ (id)_pieImagesMemoryPool;
@property(retain, nonatomic) _SBIconProgressFractionTransition *activeFractionTransition; // @synthesize activeFractionTransition=_activeFractionTransition;
@property(retain, nonatomic) _SBIconProgressPausedTransition *activePausedTransition; // @synthesize activePausedTransition=_activePausedTransition;
@property(retain, nonatomic) _SBIconProgressStateTransition *activeStateTransition; // @synthesize activeStateTransition=_activeStateTransition;
@property(nonatomic) double displayedFraction; // @synthesize displayedFraction=_displayedFraction;
@property(nonatomic) BOOL displayingPaused; // @synthesize displayingPaused=_displayingPaused;
@property(nonatomic) long long displayedState; // @synthesize displayedState=_displayedState;
@property(nonatomic) double pauseRadiusFraction; // @synthesize pauseRadiusFraction=_pauseRadiusFraction;
@property(nonatomic) double circleRadiusFraction; // @synthesize circleRadiusFraction=_circleRadiusFraction;
@property(nonatomic) double foregroundAlpha; // @synthesize foregroundAlpha=_foregroundAlpha;
@property(nonatomic) double backgroundAlpha; // @synthesize backgroundAlpha=_backgroundAlpha;
// property(nonatomic) struct SBIconImageInfo iconImageInfo; // @synthesize iconImageInfo=_iconImageInfo;
@property(nonatomic) BOOL canAnimate; // @synthesize canAnimate=_canAnimate;
@property(retain, nonatomic) UIImage *overlayImage; // @synthesize overlayImage=_overlayImage;
@property(nonatomic) __weak id <SBIconProgressViewDelegate> delegate; // @synthesize delegate=_delegate;
// - (void).cxx_destruct;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)description;
@property(readonly, nonatomic) CGRect circleBoundingRect;
- (id)_maskImage;
- (void)_drawPauseUIWithCenter:(CGPoint)arg1;
- (void)_drawIncomingCircleWithCenter:(CGPoint)arg1;
- (void)_drawOutgoingCircleWithCenter:(CGPoint)arg1;
- (void)_drawPieWithCenter:(CGPoint)arg1;
- (void)drawRect:(CGRect)arg1;
- (void)_clearDisplayLink;
- (void)_ensureDisplayLink;
- (void)_onDisplayLink:(id)arg1;
- (void)_updateFractionTransitionAnimated:(BOOL)arg1;
- (void)_updateStateTransitionAnimated:(BOOL)arg1;
- (void)_updatePausedTransitionAnimated:(BOOL)arg1;
- (void)_updateTransitionsAnimated:(BOOL)arg1;
- (BOOL)_hasActiveTransitions;
- (void)setState:(long long)arg1 paused:(BOOL)arg2 fractionLoaded:(double)arg3 animated:(BOOL)arg4;
- (void)dealloc;
- (id)initWithFrame:(CGRect)arg1;

@end

