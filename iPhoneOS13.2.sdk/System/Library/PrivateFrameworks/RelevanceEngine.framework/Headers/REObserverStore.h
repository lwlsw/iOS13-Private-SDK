//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSHashTable;

@interface REObserverStore : NSObject
{
//    struct os_unfair_lock_s _lock;
    NSHashTable *_observers;
}

// - (void).cxx_destruct;
- (void)enumerateObserversWithBlock:(CDUnknownBlockType)arg1;
- (void)removeObserver:(id)arg1;
- (void)addObserver:(id)arg1;
@property(readonly, nonatomic) NSArray *allObservers;
@property(readonly, nonatomic) NSUInteger count;
- (id)initWithFunctionsOptions:(NSUInteger)arg1;
- (id)init;

@end

