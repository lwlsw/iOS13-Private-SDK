//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSMutableDictionary;

@interface MapsSuggestionsLimitedDictionary : NSObject
{
    NSUInteger _maxCapacity;
    NSMutableDictionary *_dict;
    NSMutableDictionary *_hits;
    NSMutableArray *_order;
    NSUInteger _totalHits;
    NSUInteger _totalMisses;
}

// - (void).cxx_destruct;
- (id)description;
- (double)totalHitRatio;
- (NSUInteger)hitsOnKey:(id)arg1;
- (NSUInteger)count;
- (void)removeAllObjects;
- (void)removeObjectForKey:(id)arg1;
- (void)setObject:(id)arg1 forKeyedSubscript:(id)arg2;
- (id)objectForKeyedSubscript:(id)arg1;
- (id)initWithMaximumCapacity:(NSUInteger)arg1;

@end

