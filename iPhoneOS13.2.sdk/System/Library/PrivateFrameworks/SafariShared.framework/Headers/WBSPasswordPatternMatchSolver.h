//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSSet, NSString;

@interface WBSPasswordPatternMatchSolver : NSObject
{
    NSString *_password;
    NSSet *_patternMatches;
    NSMutableDictionary *_partialSolutions;
}

// - (void).cxx_destruct;
- (id)optimalEvaluation;
- (id)_exhaustiveSearchPatternWithStartIndex:(NSUInteger)arg1 endIndex:(NSUInteger)arg2;
- (void)_updateExhaustiveSearchPartialSolutionsAtEndIndex:(NSUInteger)arg1;
- (id)_unwindSolution;
- (void)_updatePartialSolutionsWithPatternMatch:(id)arg1 patternCount:(NSUInteger)arg2;
- (void)_enumeratePartialSolutionsWithEndIndex:(NSUInteger)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (void)_setPartialSolution:(id)arg1 withEndIndex:(NSUInteger)arg2 patternCount:(NSUInteger)arg3;
- (id)_partialSolutionWithEndIndex:(NSUInteger)arg1 patternCount:(NSUInteger)arg2;
- (id)initWithPassword:(id)arg1 patternMatches:(id)arg2;

@end

