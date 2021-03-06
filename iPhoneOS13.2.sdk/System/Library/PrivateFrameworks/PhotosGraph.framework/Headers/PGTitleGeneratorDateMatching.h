//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDateInterval, NSSet, PGGraph, PGTitle;

@interface PGTitleGeneratorDateMatching : NSObject
{
    BOOL _isForHighlight;
    PGGraph *_graph;
    long long _type;
    NSDateInterval *_referenceDateInterval;
    NSSet *_dateNodes;
    NSSet *_momentNodes;
    NSUInteger _lineBreakBehavior;
}

+ (id)_typeMatchings;
+ (BOOL)type:(long long)arg1 isBetterThanType:(long long)arg2;
@property(readonly, nonatomic) NSUInteger lineBreakBehavior; // @synthesize lineBreakBehavior=_lineBreakBehavior;
@property(readonly, nonatomic) BOOL isForHighlight; // @synthesize isForHighlight=_isForHighlight;
@property(readonly, nonatomic) NSSet *momentNodes; // @synthesize momentNodes=_momentNodes;
@property(retain, nonatomic) NSSet *dateNodes; // @synthesize dateNodes=_dateNodes;
@property(readonly, nonatomic) NSDateInterval *referenceDateInterval; // @synthesize referenceDateInterval=_referenceDateInterval;
@property(readonly, nonatomic) long long type; // @synthesize type=_type;
@property(retain, nonatomic) PGGraph *graph; // @synthesize graph=_graph;
// - (void).cxx_destruct;
- (long long)_matchingTypeForDateNode:(id)arg1;
- (long long)_findBestType;
- (BOOL)_dateNodeIntersectsWithReferenceDateIntervalByIgnoringYear;
@property(readonly, nonatomic) NSUInteger allowedTimeTitleFormats;
@property(readonly, nonatomic) PGTitle *title;
- (id)initWithType:(long long)arg1 referenceDateInterval:(id)arg2 momentNodes:(id)arg3;
- (id)initWithType:(long long)arg1 referenceDateInterval:(id)arg2 highlightNode:(id)arg3;
- (id)initWithType:(long long)arg1 referenceDateInterval:(id)arg2 momentNodes:(id)arg3 lineBreakBehavior:(NSUInteger)arg4 isForHighlight:(BOOL)arg5;

@end

