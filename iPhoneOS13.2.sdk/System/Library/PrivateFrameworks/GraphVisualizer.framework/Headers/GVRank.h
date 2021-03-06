//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface GVRank : NSObject
{
    NSMutableArray *nodes;
    double separation;
    GVRank *prev;
    GVRank *next;
}

@property(nonatomic) GVRank *next; // @synthesize next;
@property(nonatomic) GVRank *prev; // @synthesize prev;
- (void)centerNode:(id)arg1 at:(double)arg2;
- (void)centerNodesWithRespectoTo:(id)arg1;
- (CGSize)sizeForDummy;
@property(readonly, nonatomic) double height;
@property(readonly, nonatomic) double width;
- (NSUInteger)outCrossings;
- (NSUInteger)inCrossings;
- (void)buildNodeIterators;
- (void)exchangeNodeAtIndex:(NSUInteger)arg1 withNodeAtIndex:(NSUInteger)arg2;
- (void)sortByIndex;
- (id)neighborsOfNode:(id)arg1;
- (void)removeNode:(id)arg1;
- (void)addNode:(id)arg1;
- (id)nodes;
- (void)dealloc;
- (id)initWithSeparation:(CGSize)arg1;

@end

