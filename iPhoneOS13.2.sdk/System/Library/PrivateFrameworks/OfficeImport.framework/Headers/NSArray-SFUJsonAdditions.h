//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@interface NSArray (SFUJsonAdditions)
+ (id)tsu_arrayWithNonNilObject:(id)arg1;
+ (id)tsu_arrayWithUIntegers:(const NSUInteger )arg1 count:(NSUInteger)arg2;
+ (id)tsu_arrayByUnioningArray:(id)arg1 withArray:(id)arg2;
+ (id)tsu_arrayWithInts:(const int )arg1 count:(NSUInteger)arg2;
+ (id)tsu_arrayWithCGFloats:(const double )arg1 count:(NSUInteger)arg2;
- (void)sfu_appendJsonStringToString:(id)arg1;
- (id)tsu_localizedList;
- (id)tsu_anyObject;
- (id)tsu_onlyObject;
- (id)tsu_uniqueObjects;
- (id)tsu_arrayByFlattening;
- (id)tsu_arrayByMappingObjectsUsingBlock:(CDUnknownBlockType)arg1;
- (id)tsu_arrayByTransformingWithBlock:(CDUnknownBlockType)arg1;
- (id)tsu_arrayOfObjectsPassingTest:(CDUnknownBlockType)arg1;
- (BOOL)tsu_isHomogeneousForClass:(Class)arg1;
- (BOOL)tsu_containsObjectPassingTest:(CDUnknownBlockType)arg1;
- (id)tsu_firstObjectPassingTest:(CDUnknownBlockType)arg1;
- (void)tsu_enumerateSnapshotObjectsUsingBlock:(CDUnknownBlockType)arg1;
- (id)tsu_arrayByRemovingFirstObject;
- (id)tsu_arrayByReversingOrder;
- (id)tsu_arrayByAddingNonContainedObjectsFromArray:(id)arg1;
- (id)tsu_arrayByRemovingObjectsIdenticalToObjectsInArray:(id)arg1;
- (id)tsu_intersectionWithArray:(id)arg1;
- (id)tsu_arrayWithObjectsInSet:(id)arg1;
- (id)tsu_indexesOfObjects:(id)arg1;
- (NSUInteger)tsu_indexOfSmallestObject;
- (id)tsu_objectPriorToObject:(id)arg1;
- (id)tsu_rangeCheckedObjectAtIndex:(NSUInteger)arg1;
- (id)tsu_initWithUIntegers:(const NSUInteger )arg1 count:(NSUInteger)arg2;
- (id)tsu_initWithInts:(const int )arg1 count:(NSUInteger)arg2;
- (id)tsu_initWithCGFloats:(const double )arg1 count:(NSUInteger)arg2;
@end

