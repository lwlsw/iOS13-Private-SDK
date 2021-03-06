//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CloudPhotoLibrary/CPLEngineStorage.h>

#import <CloudPhotoLibrary/CPLAbstractObject-Protocol.h>

@class CPLRejectedRecords, NSMutableArray;

@interface CPLEngineQuarantinedRecords : CPLEngineStorage <CPLAbstractObject>
{
    CPLRejectedRecords *_rejectedRecords;
    NSUInteger _rejectedCount;
    BOOL _rejectedRecordsHasChanges;
    CPLRejectedRecords *_newRejectedRecords;
    NSMutableArray *_quarantineMessages;
    NSUInteger _newRejectedCount;
}

// - (void).cxx_destruct;
- (void)writeTransactionDidSucceed;
- (void)writeTransactionDidFail;
- (BOOL)resetRejectedRecordsWithError:(id )arg1;
- (BOOL)bumpRejectedRecords:(id)arg1 error:(id )arg2;
- (void)_sendQuarantineFeedbackWithRecordClass:(Class)arg1 reason:(id)arg2;
- (NSUInteger)countOfQuarantinedRecordsInScopeWithIdentifier:(id)arg1;
- (NSUInteger)countOfQuarantinedRecords;
- (BOOL)isRecordWithScopedIdentifierQuarantined:(id)arg1;
- (BOOL)removeQuarantinedRecordsWithScopedIdentifier:(id)arg1 notify:(BOOL)arg2 error:(id )arg3;
- (BOOL)addQuarantinedRecordsWithScopedIdentifier:(id)arg1 reason:(id)arg2 error:(id )arg3;
- (BOOL)deleteRecordsForScopeIndex:(long long)arg1 maxCount:(long long)arg2 deletedCount:(long long )arg3 error:(id )arg4;
- (NSUInteger)scopeType;

@end

