//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


#import <DrawingKit/DKInkRendererDelegate-Protocol.h>

@class CADisplayLink, DKDrawing, DKDrawingStroke, DKPointSmoothing, MISSING_TYPE, NSMutableArray, NSUndoManager, UIColor;
@protocol DKInkRenderer, DKInkViewRenderDelegate;

@interface DKInkView : UIView <DKInkRendererDelegate>
{
    DKDrawing *_currentDrawing;
    CGPoint _lastPoint;
    double _lastTouchTime;
    CGPoint _velocityInWindow;
    id _trackingTouchID;
    BOOL _trackingTouches;
    id /* CDUnknownBlockType */ _animationCompletionHandler;
    BOOL _isAddingPointWithoutSmoothing;
    BOOL _scaleDrawingToFitCanvas;
    BOOL _allowInput;
    BOOL _isRenderingPaused;
    UIColor *_strokeColor;
    double _minPressure;
    double _maxPressure;
    double _minThickness;
    double _maxThickness;
    UIView<DKInkRenderer> *_renderer;
    DKDrawingStroke *_currentBrushStroke;
    NSMutableArray *_currentInterpolatedBrushStroke;
    NSMutableArray *_cachedInterpolatedBrushStrokes;
    double _currentWeight;
    NSUInteger _totalPointsAdded;
    double _strokeStartTime;
    DKPointSmoothing *_inputFIFO;
    NSUInteger _animationType;
    NSMutableArray *_cachedInterpolatedAnimationPoints;
    NSMutableArray *_cachedInterpolatedAnimationStrokes;
    NSMutableArray *_computedAnimationFrames;
    double _drawingScale;
    CADisplayLink *_displayLink;
    NSUndoManager *_strokeUndoManager;
    NSUInteger _mode;
    id <DKInkViewRenderDelegate> _renderPreviewDelegate;
    NSUInteger _renderPreviewMode;
    CGPoint _strokeStartLocation;
    CGPoint _strokeLastLocation;
    MISSING_TYPE *_lastVectorPoint;
    CGRect _aggregateInvalid;
    CGRect _unionDrawingRect;
}

+ (double)lengthOfVector:(CGVector)arg1;
+ (CGVector)normalizeVector:(CGVector)arg1;
+ (CGPoint)normalizeVectorPoint:(CGPoint)arg1;
+ (double)windowBackingScaleFactor:(id)arg1;
+ (BOOL)gpuAvailable;
@property(nonatomic) NSUInteger renderPreviewMode; // @synthesize renderPreviewMode=_renderPreviewMode;
@property(nonatomic) __weak id <DKInkViewRenderDelegate> renderPreviewDelegate; // @synthesize renderPreviewDelegate=_renderPreviewDelegate;
@property(readonly, nonatomic) BOOL isRenderingPaused; // @synthesize isRenderingPaused=_isRenderingPaused;
@property(nonatomic) BOOL allowInput; // @synthesize allowInput=_allowInput;
@property(nonatomic) BOOL scaleDrawingToFitCanvas; // @synthesize scaleDrawingToFitCanvas=_scaleDrawingToFitCanvas;
@property(nonatomic) NSUInteger mode; // @synthesize mode=_mode;
@property(retain, nonatomic) NSUndoManager *strokeUndoManager; // @synthesize strokeUndoManager=_strokeUndoManager;
@property(retain, nonatomic) CADisplayLink *displayLink; // @synthesize displayLink=_displayLink;
@property(nonatomic) double drawingScale; // @synthesize drawingScale=_drawingScale;
@property(retain, nonatomic) NSMutableArray *computedAnimationFrames; // @synthesize computedAnimationFrames=_computedAnimationFrames;
@property(retain, nonatomic) NSMutableArray *cachedInterpolatedAnimationStrokes; // @synthesize cachedInterpolatedAnimationStrokes=_cachedInterpolatedAnimationStrokes;
@property(retain, nonatomic) NSMutableArray *cachedInterpolatedAnimationPoints; // @synthesize cachedInterpolatedAnimationPoints=_cachedInterpolatedAnimationPoints;
@property(nonatomic) NSUInteger animationType; // @synthesize animationType=_animationType;
@property(nonatomic) CGRect unionDrawingRect; // @synthesize unionDrawingRect=_unionDrawingRect;
@property(nonatomic) CGRect aggregateInvalid; // @synthesize aggregateInvalid=_aggregateInvalid;
@property(retain, nonatomic) DKPointSmoothing *inputFIFO; // @synthesize inputFIFO=_inputFIFO;
@property(nonatomic) MISSING_TYPE *lastVectorPoint; // @synthesize lastVectorPoint=_lastVectorPoint;
@property BOOL isAddingPointWithoutSmoothing; // @synthesize isAddingPointWithoutSmoothing=_isAddingPointWithoutSmoothing;
@property double strokeStartTime; // @synthesize strokeStartTime=_strokeStartTime;
@property CGPoint strokeLastLocation; // @synthesize strokeLastLocation=_strokeLastLocation;
@property CGPoint strokeStartLocation; // @synthesize strokeStartLocation=_strokeStartLocation;
@property NSUInteger totalPointsAdded; // @synthesize totalPointsAdded=_totalPointsAdded;
@property(nonatomic) double currentWeight; // @synthesize currentWeight=_currentWeight;
@property(retain, nonatomic) NSMutableArray *cachedInterpolatedBrushStrokes; // @synthesize cachedInterpolatedBrushStrokes=_cachedInterpolatedBrushStrokes;
@property(retain, nonatomic) NSMutableArray *currentInterpolatedBrushStroke; // @synthesize currentInterpolatedBrushStroke=_currentInterpolatedBrushStroke;
@property(retain, nonatomic) DKDrawingStroke *currentBrushStroke; // @synthesize currentBrushStroke=_currentBrushStroke;
@property(retain, nonatomic) UIView<DKInkRenderer> *renderer; // @synthesize renderer=_renderer;
@property(nonatomic) double maxThickness; // @synthesize maxThickness=_maxThickness;
@property(nonatomic) double minThickness; // @synthesize minThickness=_minThickness;
@property(nonatomic) double maxPressure; // @synthesize maxPressure=_maxPressure;
@property(nonatomic) double minPressure; // @synthesize minPressure=_minPressure;
@property(retain, nonatomic) UIColor *strokeColor; // @synthesize strokeColor=_strokeColor;
@property(readonly, nonatomic) BOOL trackingTouches; // @synthesize trackingTouches=_trackingTouches;
// - (void).cxx_destruct;
- (void)_updateVelocityWithTouch:(id)arg1 average:(BOOL)arg2;
- (MISSING_TYPE *)_vector4ForTouchSettingWeightAndVelocity:(id)arg1 average:(BOOL)arg2;
- (void)handleCoalescedTouches:(id)arg1 forTouch:(id)arg2 average:(BOOL)arg3;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (CGPoint)_velocityForTouch:(id)arg1;
- (double)weightForTouch:(id)arg1;
- (BOOL)ak_forceAvailableForTouch:(id)arg1;
- (double)weightForValue:(double)arg1;
- (void)terminateStroke;
- (void)_undoLastStroke:(id)arg1;
- (void)undoLastStroke;
- (void)inkDidCompleteRender:(id)arg1;
- (void)inkDidRender:(id)arg1;
- (void)_replayAnimationTick:(id)arg1;
- (void)_computeAnimationFramesFittingInMaxDuration:(double)arg1;
- (void)_setDrawingOnRendererWithReplayAnimation:(id)arg1;
- (void)_setDrawingOnRendererWithBleedAnimation:(id)arg1;
- (void)_setDrawingOnRenderer:(id)arg1;
- (void)_display;
- (void)_stopDisplayLink;
- (void)_startDisplayLink;
@property(readonly, nonatomic) BOOL canvasHasInk;
@property(readonly, nonatomic) long long countOfCurrentStroke;
- (void)setFrame:(CGRect)arg1;
- (void)clear;
- (double)interfaceScale;
- (void)_postTouchesEndedNotification:(CGPoint)arg1;
- (void)_postTouchesBeganNotification:(CGPoint)arg1;
- (void)_notifyRenderDelegate;
@property(readonly, nonatomic) CGRect inkBounds;
- (id)snapshotRendererState;
@property(copy, nonatomic) DKDrawing *currentDrawing; // @synthesize currentDrawing=_currentDrawing;
- (void)setCurrentDrawing:(id)arg1 scaleDrawingToFitBounds:(BOOL)arg2 withAnimationType:(NSUInteger)arg3 animationCompletionHandler:(CDUnknownBlockType)arg4;
- (void)resumeRendering;
- (void)pauseRendering;
- (void)teardown;
- (void)_renderEmittedPoints:(MISSING_TYPE *)arg1 count:(NSUInteger)arg2;
- (void)_addUninterpolatedPoints:(MISSING_TYPE *)arg1 controlPoint:(MISSING_TYPE *)arg2 count:(NSUInteger)arg3 flushing:(BOOL)arg4;
- (void)_commonInit;
- (BOOL)_deviceSupportsGL;
- (void)setupRenderer;
- (void)setHidden:(BOOL)arg1;
- (void)didMoveToWindow;
- (void)willMoveToWindow:(id)arg1;
- (void)didMoveToSuperview;
- (void)willMoveToSuperview:(id)arg1;
- (void)layoutSubviews;
- (void)dealloc;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(CGRect)arg1;

@end

