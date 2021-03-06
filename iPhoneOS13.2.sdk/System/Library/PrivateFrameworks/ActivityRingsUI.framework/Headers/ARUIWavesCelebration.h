//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ActivityRingsUI/ARUICelebration.h>

@class CAMediaTimingFunction;
@protocol MTLBuffer;

__attribute__((visibility("hidden")))
@interface ARUIWavesCelebration : ARUICelebration
{
    BOOL _active;
    CAMediaTimingFunction *_timingFunction;
    float _transitionDuration;
    float _completionBeginTime;
    float _completionEndTime;
    id /* CDUnknownBlockType */ _completion;
    float _revealPercent;
    unsigned int _waveCount;
    unsigned int _pointCount;
    unsigned int _computeCount;
    id <MTLBuffer> _waveVertexBuffer;
    id <MTLBuffer> _waveIndexBuffer;
    NSUInteger _numWaveIndicies;
    id <MTLBuffer> _waveComputeUniforms;
    id <MTLBuffer> _wavePoints;
    id <MTLBuffer> _waveFragmentUniforms;
}

@property(readonly, nonatomic) id <MTLBuffer> waveFragmentUniforms; // @synthesize waveFragmentUniforms=_waveFragmentUniforms;
@property(readonly, nonatomic) id <MTLBuffer> wavePoints; // @synthesize wavePoints=_wavePoints;
@property(readonly, nonatomic) unsigned int computeCount; // @synthesize computeCount=_computeCount;
@property(readonly, nonatomic) unsigned int pointCount; // @synthesize pointCount=_pointCount;
@property(readonly, nonatomic) unsigned int waveCount; // @synthesize waveCount=_waveCount;
@property(readonly, nonatomic) id <MTLBuffer> waveComputeUniforms; // @synthesize waveComputeUniforms=_waveComputeUniforms;
@property(readonly, nonatomic) float revealPercent; // @synthesize revealPercent=_revealPercent;
@property(readonly, nonatomic) NSUInteger numWaveIndicies; // @synthesize numWaveIndicies=_numWaveIndicies;
@property(readonly, nonatomic) id <MTLBuffer> waveIndexBuffer; // @synthesize waveIndexBuffer=_waveIndexBuffer;
@property(readonly, nonatomic) id <MTLBuffer> waveVertexBuffer; // @synthesize waveVertexBuffer=_waveVertexBuffer;
// - (void).cxx_destruct;
- (void)storeCelebration:(id)arg1 withRing:(id)arg2;
- (NSUInteger)waveFragmentOffsetForWaveAtIndex:(unsigned int)arg1;
- (NSUInteger)wavePointsOffsetForWaveAtIndex:(unsigned int)arg1;
- (void)_setupWavePoints;
- (NSUInteger)waveComputeUniformsOffsetForType:(NSUInteger)arg1;
- (void)_updateComputeUniforms;
- (void)endWithCompletion:(CDUnknownBlockType)arg1;
- (void)update:(double)arg1;
- (NSUInteger)type;
- (id)init;

@end

