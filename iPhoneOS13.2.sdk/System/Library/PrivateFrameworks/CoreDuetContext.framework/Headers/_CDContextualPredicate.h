//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@class NSOrderedSet, NSPredicate, NSSet;

@interface _CDContextualPredicate : NSObject <NSCopying, NSSecureCoding>
{
    BOOL _evaluateOnEveryKeyPathUpdate;
    NSSet *_keyPaths;
    NSPredicate *_predicate;
    NSPredicate *_predicateForPreviousState;
    double _minimumDurationInPreviousState;
    NSOrderedSet *_timeBasedPredicateEvaluationIntervals;
    NSSet *_circularLocationRegions;
}

+ (BOOL)supportsSecureCoding;
+ (id)orPredicateWithSubpredicates:(id)arg1;
+ (id)andPredicateWithSubpredicates:(id)arg1;
+ (id)notPredicateWithSubpredicate:(id)arg1;
+ (id)predicateForKeyPath:(id)arg1 withPredicate:(id)arg2 withPredicateForPreviousState:(id)arg3 withMinimumDurationInPreviousState:(double)arg4;
+ (id)predicateForKeyPath:(id)arg1 equalToValue:(id)arg2 withMinimumDurationInPreviousState:(double)arg3;
+ (id)predicateForChangeAtKeyPath:(id)arg1 withMinimumDurationInPreviousState:(double)arg2;
+ (id)predicateForKeyPath:(id)arg1 withFormat:(id)arg2;
+ (id)contextualPredicateForKeyPaths:(id)arg1 withPredicate:(id)arg2;
+ (id)predicateForKeyPath:(id)arg1 withPredicate:(id)arg2;
+ (id)predicateForKeyPath:(id)arg1 equalToValue:(id)arg2;
+ (id)predicateForChangeAtKeyPaths:(id)arg1;
+ (id)predicateForChangeAtKeyPath:(id)arg1;
@property(retain, nonatomic) NSSet *circularLocationRegions; // @synthesize circularLocationRegions=_circularLocationRegions;
@property(retain, nonatomic) NSOrderedSet *timeBasedPredicateEvaluationIntervals; // @synthesize timeBasedPredicateEvaluationIntervals=_timeBasedPredicateEvaluationIntervals;
@property(nonatomic) BOOL evaluateOnEveryKeyPathUpdate; // @synthesize evaluateOnEveryKeyPathUpdate=_evaluateOnEveryKeyPathUpdate;
@property(nonatomic) double minimumDurationInPreviousState; // @synthesize minimumDurationInPreviousState=_minimumDurationInPreviousState;
@property(retain, nonatomic) NSPredicate *predicateForPreviousState; // @synthesize predicateForPreviousState=_predicateForPreviousState;
@property(retain, nonatomic) NSPredicate *predicate; // @synthesize predicate=_predicate;
@property(copy, nonatomic) NSSet *keyPaths; // @synthesize keyPaths=_keyPaths;
// - (void).cxx_destruct;
- (id)description;
- (NSUInteger)hash;
- (BOOL)isEqual:(id)arg1;
// - (id)copyWithZone:(_NSZone )arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (BOOL)evaluateWithObject:(id)arg1;
@property(readonly, nonatomic) BOOL firesOnAnyChange;
- (id)initForChangeAtKeyPath:(id)arg1 equalToValue:(id)arg2;
- (id)initForChangeAtKeyPaths:(id)arg1;
- (id)initForChangeAtKeyPath:(id)arg1;

@end

