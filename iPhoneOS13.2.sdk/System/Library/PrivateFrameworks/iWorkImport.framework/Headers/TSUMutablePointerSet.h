//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


__attribute__((visibility("hidden")))
@interface TSUMutablePointerSet : NSMutableSet
{
//    struct __CFSet mSet;
}

+ (Class)privateMutableClass;
+ (Class)privateNonMutableClass;
- (id)setByAddingObjectsFromArray:(id)arg1;
- (id)setByAddingObjectsFromSet:(id)arg1;
- (id)setByAddingObject:(id)arg1;
- (id)allObjects;
- (void)getObjects:(id )arg1;
- (void)removeAllObjects;
- (void)removeObject:(id)arg1;
- (void)addObject:(id)arg1;
- (id)objectEnumerator;
- (id)member:(id)arg1;
- (NSUInteger)count;
- (id)mutableCopyWithZone:(_NSZone )arg1;
// - (id)copyWithZone:(_NSZone )arg1;
//  (id)initWithCFSet:(struct __CFSet )arg1;
- (id)initWithObjects:(const id )arg1 count:(NSUInteger)arg2;
- (id)initWithCapacity:(NSUInteger)arg1;
- (id)init;
- (void)dealloc;

@end

