//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@interface AKSparseMutableControllerArray : NSMutableArray
{
    NSMutableArray *_backendArray;
}

// - (void).cxx_destruct;
- (void)removeObjectAtIndex:(NSUInteger)arg1;
- (void)removeAllObjects;
- (void)removeLastObject;
- (void)removeObject:(id)arg1;
- (NSUInteger)count;
- (void)replaceObjectAtIndex:(NSUInteger)arg1 withObject:(id)arg2;
- (void)insertObject:(id)arg1 atIndex:(NSUInteger)arg2;
- (void)_backFillUntilCount:(NSUInteger)arg1;
- (void)addObject:(id)arg1;
- (id)initWithCapacity:(NSUInteger)arg1;
- (id)objectsAtIndexes:(id)arg1;
- (id)objectAtIndex:(NSUInteger)arg1;
- (BOOL)containsAnyObjects:(id)arg1;

@end

