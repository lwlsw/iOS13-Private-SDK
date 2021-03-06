//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <QuartzCore/CALayer.h>

#import <UIKitCore/CALayerDelegate-Protocol.h>

@class NSArray, _UIVectorTextLayout;

__attribute__((visibility("hidden")))
@interface _UIVectorLabelLayer : CALayer <CALayerDelegate, CAAnimationDelegate>
{
    NSArray *_currentLayers;
    _UIVectorTextLayout *_currentTextLayout;
    NSUInteger _maxRenderedMoveDistance;
}

+ (void)initialize;
@property(nonatomic) NSUInteger maxRenderedMoveDistance; // @synthesize maxRenderedMoveDistance=_maxRenderedMoveDistance;
// - (void).cxx_destruct;
- (id)_layersForTextLayout:(id)arg1;
- (id)_findSimilarLayer:(id)arg1 inLayers:(id)arg2;
- (BOOL)_isPathCompatible:(CGPathRef)arg1 with:(CGPathRef)arg2;
- (void)_transitionWithSetup:(CDUnknownBlockType)arg1 target:(CDUnknownBlockType)arg2;
- (void)_applyTextLayoutChangeFrom:(id)arg1 to:(id)arg2;
- (void)_cleanupUnusedLayers;
- (id)actionForLayer:(id)arg1 forKey:(id)arg2;
- (void)didChangeValueForKey:(id)arg1;
- (void)willChangeValueForKey:(id)arg1;
- (id)init;

@end

