//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface TSWPRangeMap : NSObject
{
    NSRange * _subRange;
//     struct vector<_TSWPCharIndexAndAffinity, std::__1::allocator<_TSWPCharIndexAndAffinity>> _unmappedIndexes;
//     struct vector<_TSWPCharIndexAndAffinity, std::__1::allocator<_TSWPCharIndexAndAffinity>> _mappedIndexes;
}

- (id).cxx_construct;
// - (void).cxx_destruct;
- (void)adjustByDelta:(long long)arg1;
- (NSRange *)unmappedCharRange:(NSRange *)arg1;
- (NSRange *)mappedCharRange:(NSRange *)arg1;
- (NSUInteger)p_extendRightMappedIndex:(NSUInteger)arg1;
- (NSUInteger)p_extendLeftMappedIndex:(NSUInteger)arg1;
- (NSUInteger)unmappedCharIndex:(NSUInteger)arg1;
- (NSUInteger)mappedCharIndex:(NSUInteger)arg1;
- (id)initWithSubRange:(NSRange *)arg1 unmappedIndexes:(const vector_06e666a8 )arg2 affinity:(int)arg3;
- (id)initWithSubRange:(NSRange *)arg1 unmappedPairIndexes:(const vector_06e666a8 )arg2;

@end

