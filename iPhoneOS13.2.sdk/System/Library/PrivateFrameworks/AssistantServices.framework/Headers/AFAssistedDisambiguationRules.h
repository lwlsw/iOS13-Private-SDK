//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface AFAssistedDisambiguationRules : NSObject
{
}

+ (id)defaultRules;
@property(readonly, nonatomic) double maxPersistenceAge;
@property(readonly, nonatomic) NSUInteger maxPersistenceDepth;
- (double)weightForEvent:(id)arg1;
@property(readonly, nonatomic) double decisionThreshold;
@property(readonly, nonatomic) double decisionAge;
@property(readonly, nonatomic) NSUInteger decisionDepth;

@end

