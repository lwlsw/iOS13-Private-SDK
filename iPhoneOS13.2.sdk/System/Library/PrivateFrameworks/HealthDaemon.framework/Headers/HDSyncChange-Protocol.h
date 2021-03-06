//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class HDProfile, HDSyncEntityIdentifier, NSArray, NSNumber;
@protocol HDSyncAnchorMap;

@protocol HDSyncChange <NSObject>
@property(readonly, nonatomic) BOOL done;
@property(readonly, nonatomic) NSNumber *sequenceNumber;
// property(readonly, nonatomic) struct HDSyncAnchorRange syncAnchorRange;
@property(readonly, nonatomic, getter=isSpeculative) BOOL speculative;
- (id <HDSyncAnchorMap>)requiredAnchorMapWithProfile:(HDProfile *)arg1 error:(id )arg2;
- (void)setSequenceNumber:(long long)arg1 done:(BOOL)arg2;
- (NSArray *)decodedObjectsForProfile:(HDProfile *)arg1 error:(id )arg2;
//  (void)setObjects:(NSArray *)arg1 syncAnchorRange:(struct HDSyncAnchorRange)arg2 requiredAnchorMap:(id <HDSyncAnchorMap>)arg3;
- (Class)syncEntityClassForProfile:(HDProfile *)arg1;
- (HDSyncEntityIdentifier *)syncEntityIdentifier;
@end

