//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CoreHandwriting/CHRecurrentNeuralNetwork.h>

@class NSString;

@interface CHCutpointModel : CHRecurrentNeuralNetwork
{
    long long _distanceLeftFeatureIndex;
    long long _distanceRightFeatureIndex;
    long long _sinAngleLeftFeatureIndex;
    long long _cosAngleLeftFeatureIndex;
    long long _sinAngleRightFeatureIndex;
    long long _cosAngleRightFeatureIndex;
    long long _endpointFeatureIndex;
    NSString *_directionalFeaturesInputName;
    NSString *_cutpointProbabilityOutputName;
}

@property(readonly, retain, nonatomic) NSString *cutpointProbabilityOutputName; // @synthesize cutpointProbabilityOutputName=_cutpointProbabilityOutputName;
@property(readonly, retain, nonatomic) NSString *directionalFeaturesInputName; // @synthesize directionalFeaturesInputName=_directionalFeaturesInputName;
@property(readonly, nonatomic) long long endpointFeatureIndex; // @synthesize endpointFeatureIndex=_endpointFeatureIndex;
@property(readonly, nonatomic) long long cosAngleRightFeatureIndex; // @synthesize cosAngleRightFeatureIndex=_cosAngleRightFeatureIndex;
@property(readonly, nonatomic) long long sinAngleRightFeatureIndex; // @synthesize sinAngleRightFeatureIndex=_sinAngleRightFeatureIndex;
@property(readonly, nonatomic) long long cosAngleLeftFeatureIndex; // @synthesize cosAngleLeftFeatureIndex=_cosAngleLeftFeatureIndex;
@property(readonly, nonatomic) long long sinAngleLeftFeatureIndex; // @synthesize sinAngleLeftFeatureIndex=_sinAngleLeftFeatureIndex;
@property(readonly, nonatomic) long long distanceRightFeatureIndex; // @synthesize distanceRightFeatureIndex=_distanceRightFeatureIndex;
@property(readonly, nonatomic) long long distanceLeftFeatureIndex; // @synthesize distanceLeftFeatureIndex=_distanceLeftFeatureIndex;
- (id)_remappedCutpoints:(vector_cdf22482 *)arg1 pointMap:(vector_1dba4e4e *)arg2 originalDrawing:(id)arg3 excludingStrokeIDs:(const set_54c7c768 *)arg4;
- (vector_cdf22482)_detectedCutpoints:(vector_8f06c10f *)arg1 resampledDrawing:(id)arg2;
- (vector_f9ed6fc8)_extractFeaturesFromDrawing:(id)arg1 inputName:(id)arg2 interpointDistance:(double)arg3 error:(id *)arg4;
- (id)detectCutpointsInDrawing:(id)arg1 minimumDrawingSize:(struct CGSize)arg2 excludingStrokeIDs:(const set_54c7c768 *)arg3;
- (long long)windowOverlap;
- (long long)maxSequenceLength;
- (void)dealloc;
- (id)initWithModelName:(id)arg1;

@end
