//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


#import <TSReading/TSWPTextMagnifier-Protocol.h>
#import <TSReading/TSWPTextMagnifierRendererDelegate-Protocol.h>

@class NSString, TSWPRep, TSWPTextMagnifierRenderer, TSWPTextMagnifierTimeWeightedPoint;

@interface TSWPTextMagnifierCaret : UIView <TSWPTextMagnifier, TSWPTextMagnifierRendererDelegate>
{
    TSWPRep *_target;
    CGPoint _magnificationPoint;
    CGPoint _offset;
    TSWPTextMagnifierTimeWeightedPoint *_weightedPoint;
    double _yOffset;
    TSWPTextMagnifierRenderer *_magnifierRenderer;
}

+ (id)sharedCaretMagnifier;
@property(nonatomic) CGPoint animationPoint; // @synthesize animationPoint=_magnificationPoint;
@property(nonatomic) double yOffset; // @synthesize yOffset=_yOffset;
@property(nonatomic) CGPoint offset; // @synthesize offset=_offset;
@property(retain, nonatomic) TSWPRep *target; // @synthesize target=_target;
- (void)drawMagnifierClippedCanvasLayer:(id)arg1 inContext:(CGContextRef )arg2;
- (BOOL)shouldHideCanvasLayer;
@property(readonly, nonatomic) NSString *maskImageName;
@property(readonly, nonatomic) NSString *overlayImageName;
@property(readonly, nonatomic) NSString *underlayImageName;
- (void)stopMagnifying:(BOOL)arg1;
- (void)beginMagnifyingTarget:(id)arg1 magnificationPoint:(CGPoint)arg2 offset:(CGPoint)arg3 animated:(BOOL)arg4;
- (void)updateFrameAndOffset;
- (void)remove;
- (void)zoomDownAnimation;
- (void)zoomUpAnimation;
- (void)autoscrollWillNotStart;
- (void)setAutoscrollDirections:(int)arg1;
- (void)postAutoscrollPoint:(CGPoint)arg1;
@property(readonly, nonatomic) BOOL terminalPointPlacedCarefully;
@property(readonly, nonatomic) CGPoint terminalPoint;
@property(nonatomic) CGPoint magnificationPoint;
- (void)setNeedsDisplay;
- (void)setFrame:(CGRect)arg1;
- (void)dealloc;
- (id)initWithDefaultFrame;

@end

