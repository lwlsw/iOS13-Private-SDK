//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@protocol OS_dispatch_semaphore;

@interface TSTMergeRangeSortedSet : NSObject
{
//     struct set<TSTMergeRangeElem, TSTMergeRangeElemCompare, std::__1::allocator<TSTMergeRangeElem>> mSet;
    struct __tree_const_iterator<TSTMergeRangeElem, std::__1::__tree_node<TSTMergeRangeElem, void *>*, long> {
//         struct __tree_end_node<std::__1::__tree_node_base<void *>*> __ptr_;
    } mIter;
    NSObject<OS_dispatch_semaphore> *mSem;
}

- (id).cxx_construct;
- (void)reset;
- (UIEdgeInsets)getPaddingInsets;
- (BOOL)isCheckbox;
- (CGSize)getSize;
// - (CDStruct_5f1f7aa9)iter;
// - (CDStruct_5f1f7aa9)begin;
- (NSUInteger)count;
// - (void)addRange:(CDStruct_5f1f7aa9)arg1 andSize:(CGSize)arg2 andPaddingInsets:(UIEdgeInsets)arg3 andIsCheckbox:(BOOL)arg4;
- (void)dealloc;
- (id)init;

@end

