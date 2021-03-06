//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <RelevanceEngine/REMLExplanation.h>

@class REFeatureSet;

@interface _REMLFeatureExplanation : REMLExplanation
{
    REFeatureSet *_features;
    float _mean;
    float _variance;
}

+ (id)combinedExplanationsFromExplanations:(id)arg1;
// - (void).cxx_destruct;
- (id)explanationWithStyle:(NSUInteger)arg1;
- (long long)_rankExplanationToSimilarExplanation:(id)arg1;
- (BOOL)_canCombineWithSimilarExplanation:(id)arg1;
- (id)explanationByCombiningWithExplanation:(id)arg1;
- (BOOL)shouldProvideExplanation;
- (id)initWithFeature:(id)arg1 mean:(float)arg2 variance:(float)arg3;

@end

