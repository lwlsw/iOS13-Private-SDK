//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//



@class NSIndexSet, NSSet, NSString, _UICollectionPreferredSize;
@protocol _UICollectionLayoutAuxillaryOffsets, _UICollectionPreferredSizes;

@protocol _UICollectionPreferredSizes 
@property(readonly, nonatomic) NSSet *elementKinds;
@property(readonly, nonatomic) NSIndexSet *indexes;
- (id <_UICollectionPreferredSizes>)preferredSizesApplyingFrameOffset:(long long)arg1 supplementaryBaseOffsets:(id <_UICollectionLayoutAuxillaryOffsets>)arg2;
- (_Bool)containsSupplementaryOffsets:(id <_UICollectionLayoutAuxillaryOffsets>)arg1;
- (id <_UICollectionPreferredSizes>)objectForKeyedSubscript:(NSString *)arg1;
- (_UICollectionPreferredSize *)objectAtIndexedSubscript:(long long)arg1;
- (_Bool)hasSizes;
@end
