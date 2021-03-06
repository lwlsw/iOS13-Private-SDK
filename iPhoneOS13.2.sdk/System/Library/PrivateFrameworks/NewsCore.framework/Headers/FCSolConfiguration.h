//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface FCSolConfiguration : NSObject
{
    NSUInteger _maxArticleCombos;
    NSUInteger _heuristicSampleSize;
    NSUInteger _searchBranchMultiplier;
    double _searchBranchDecay;
    double _searchTimeLimit;
    double _tagSizeCoeff;
    double _tagFavoritedCoeff;
    double _tagAutoFavoritedCoeff;
    double _tagGroupableCoeff;
    double _tagArticleScoreCoeff;
    double _tagPersonalizationCoeff;
    double _tagSpecificityCoeff;
    double _optionalTagSpecificityScore;
    long long _heuristicOption;
}

+ (id)configurationWithTreatment:(id)arg1 deviceIsiPad:(BOOL)arg2;
@property(readonly, nonatomic) long long heuristicOption; // @synthesize heuristicOption=_heuristicOption;
@property(readonly, nonatomic) double optionalTagSpecificityScore; // @synthesize optionalTagSpecificityScore=_optionalTagSpecificityScore;
@property(readonly, nonatomic) double tagSpecificityCoeff; // @synthesize tagSpecificityCoeff=_tagSpecificityCoeff;
@property(readonly, nonatomic) double tagPersonalizationCoeff; // @synthesize tagPersonalizationCoeff=_tagPersonalizationCoeff;
@property(readonly, nonatomic) double tagArticleScoreCoeff; // @synthesize tagArticleScoreCoeff=_tagArticleScoreCoeff;
@property(readonly, nonatomic) double tagGroupableCoeff; // @synthesize tagGroupableCoeff=_tagGroupableCoeff;
@property(readonly, nonatomic) double tagAutoFavoritedCoeff; // @synthesize tagAutoFavoritedCoeff=_tagAutoFavoritedCoeff;
@property(readonly, nonatomic) double tagFavoritedCoeff; // @synthesize tagFavoritedCoeff=_tagFavoritedCoeff;
@property(readonly, nonatomic) double tagSizeCoeff; // @synthesize tagSizeCoeff=_tagSizeCoeff;
@property(readonly, nonatomic) double searchTimeLimit; // @synthesize searchTimeLimit=_searchTimeLimit;
@property(readonly, nonatomic) double searchBranchDecay; // @synthesize searchBranchDecay=_searchBranchDecay;
@property(readonly, nonatomic) NSUInteger searchBranchMultiplier; // @synthesize searchBranchMultiplier=_searchBranchMultiplier;
@property(readonly, nonatomic) NSUInteger heuristicSampleSize; // @synthesize heuristicSampleSize=_heuristicSampleSize;
@property(readonly, nonatomic) NSUInteger maxArticleCombos; // @synthesize maxArticleCombos=_maxArticleCombos;
- (id)initWithHeuristicSampleSize:(NSUInteger)arg1 searchBranchMultiplier:(NSUInteger)arg2 searchBranchDecay:(double)arg3 searchTimeLimit:(double)arg4 tagSizeCoeff:(double)arg5 tagFavoritedCoeff:(double)arg6 tagAutoFavoritedCoeff:(double)arg7 tagGroupableCoeff:(double)arg8 tagArticleScoreCoeff:(double)arg9 tagPersonalizationCoeff:(double)arg10 tagSpecificityCoeff:(double)arg11 optionalTagSpecificityScore:(double)arg12 heuristicOption:(long long)arg13;

@end

