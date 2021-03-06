//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CloudPhotoLibrary/CPLEngineStorage.h>

#import <CloudPhotoLibrary/CPLAbstractObject-Protocol.h>

@class NSMutableArray;

@interface CPLEngineTransientRepository : CPLEngineStorage <CPLAbstractObject>
{
    NSUInteger _popState;
    NSMutableArray *_remainingClassesToBePopped;
    NSUInteger _maximumCountOfRecordsInBatches;
}

+ (id)orderedClassesForChangesForLargeSync;
+ (id)orderedClassesForChanges;
+ (id)orderedClassesForDelete;
@property(nonatomic) NSUInteger maximumCountOfRecordsInBatches; // @synthesize maximumCountOfRecordsInBatches=_maximumCountOfRecordsInBatches;
// - (void).cxx_destruct;
- (BOOL)openWithError:(id )arg1;
- (BOOL)resetTransientRepositoryForScopeWithIdentifier:(id)arg1 error:(id )arg2;
- (NSUInteger)countOfUnmingledRecords;
- (BOOL)deleteMingledRecordsForScopeWithIdentifier:(id)arg1 error:(id )arg2;
- (BOOL)resetMingledRecordsWithScopeFilter:(id)arg1 error:(id )arg2;
- (BOOL)resetMingledRecordsForScopeWithIdentifier:(id)arg1 error:(id )arg2;
- (BOOL)hasUnmingledRecordsForScopeWithIdentifier:(id)arg1;
- (BOOL)hasMingledRecordsForScopeWithIdentifier:(id)arg1;
- (BOOL)popChangeBatch:(id )arg1 error:(id )arg2;
- (BOOL)_popChangeBatchOfChangedRecords:(id )arg1 maximumCount:(NSUInteger)arg2 stop:(BOOL )arg3 error:(id )arg4;
- (BOOL)_popChangeBatchOfDeletedRecords:(id )arg1 maximumCount:(NSUInteger)arg2 error:(id )arg3;
- (BOOL)prepareForMinglingWithScopeFilter:(id)arg1 error:(id )arg2;
- (BOOL)appendBatch:(id)arg1 alreadyMingled:(BOOL)arg2 error:(id )arg3;
- (BOOL)_appendBatchToStorage:(id)arg1 alreadyMingled:(BOOL)arg2 error:(id )arg3;
- (id)changeWithScopedIdentifier:(id)arg1;
- (NSUInteger)countOfAssetChanges;
- (BOOL)hasRecordWithScopedIdentifier:(id)arg1;
- (BOOL)deleteRecordsForScopeIndex:(long long)arg1 maxCount:(long long)arg2 deletedCount:(long long )arg3 error:(id )arg4;
- (NSUInteger)scopeType;
- (id)initWithEngineStore:(id)arg1 name:(id)arg2;

@end

