//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


#import <PencilKit/PKDrawingGestureRecognizerDelegate-Protocol.h>
#import <PencilKit/PKDrawingGestureTarget-Protocol.h>

@class NSMutableArray, PKDrawingGestureRecognizer, PKInk, PKPaintAreaViewSurface;
@protocol PKPaintAreaViewDelegate;

@interface PKPaintAreaView : UIView <PKDrawingGestureRecognizerDelegate, PKDrawingGestureTarget>
{
    PKDrawingGestureRecognizer *_drawingGestureRecognizer;
    PKPaintAreaViewSurface *_currentPaintSurfaceObject;
    NSMutableArray *_liveSurfaces;
    BOOL _switchSurfacesDuringStrokes;
    BOOL _fingerDrawingEnabled;
    id <PKPaintAreaViewDelegate> _delegate;
    PKInk *_ink;
}

@property(retain, nonatomic) PKInk *ink; // @synthesize ink=_ink;
@property(nonatomic) BOOL fingerDrawingEnabled; // @synthesize fingerDrawingEnabled=_fingerDrawingEnabled;
@property(nonatomic) BOOL switchSurfacesDuringStrokes; // @synthesize switchSurfacesDuringStrokes=_switchSurfacesDuringStrokes;
@property(nonatomic) __weak id <PKPaintAreaViewDelegate> delegate; // @synthesize delegate=_delegate;
// - (void).cxx_destruct;
- (void)drawingEstimatedPropertiesUpdated:(id)arg1;
- (void)drawingCancelled;
- (void)drawingEnded:(id)arg1;
- (void)drawingMoved:(id)arg1 withEvent:(id)arg2;
- (void)drawingBegan:(id)arg1;
// - (CDStruct_f17e9403)drawingInputPoint:(CGPoint)arg1 forTouch:(id)arg2 predicted:(BOOL)arg3;
- (void)vsync:(double)arg1;
- (CGPoint)applyTransformToTouchLocation:(CGPoint)arg1 previousPoint:(CGPoint)arg2 newSurface:(id )arg3;
- (CGPoint)applyTransformToTouchLocation:(CGPoint)arg1;
- (id)hitSurface:(CGPoint)arg1;
- (void)switchToNewPaintSurface:(id)arg1;
- (BOOL)canAddStroke;
- (id)hitTest:(CGPoint)arg1 withEvent:(id)arg2;
@property(readonly, nonatomic) CGAffineTransform strokeTransform;
- (void)_commonInit;
- (id)initWithFrame:(CGRect)arg1;
- (id)initWithCoder:(id)arg1;

@end

