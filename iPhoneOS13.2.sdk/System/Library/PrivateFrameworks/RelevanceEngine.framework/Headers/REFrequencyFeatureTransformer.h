//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <RelevanceEngine/REFeatureTransformer.h>

@interface REFrequencyFeatureTransformer : REFeatureTransformer
{
}

+ (id)frequencyTransformWithCount:(NSUInteger)arg1 minimumValidCount:(long long)arg2;
+ (id)frequencyTransformWithCount:(NSUInteger)arg1;
// - (id)copyWithZone:(_NSZone )arg1;
- (void)increaseCountForFeatureValue:(id)arg1;

@end

