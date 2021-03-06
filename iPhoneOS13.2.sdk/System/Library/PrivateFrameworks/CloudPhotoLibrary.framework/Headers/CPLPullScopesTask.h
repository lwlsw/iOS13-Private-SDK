//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CloudPhotoLibrary/CPLEngineSyncTask.h>

@class CPLEngineScopeStorage, CPLEngineStore, NSError, NSString;
@protocol CPLEngineTransportFetchScopeListChangesTask;

@interface CPLPullScopesTask : CPLEngineSyncTask
{
    BOOL _ignoreNewChanges;
    CPLEngineStore *_store;
    CPLEngineScopeStorage *_scopes;
    NSString *_clientCacheIdentifier;
    id <CPLEngineTransportFetchScopeListChangesTask> _fetchChangesTask;
    NSError *_badError;
    NSUInteger _deletedScopeCount;
    NSUInteger _newScopeCount;
    NSUInteger _modifiedScopeCount;
}

// - (void).cxx_destruct;
- (void)cancel;
- (void)launch;
- (void)_handleFinalScopeListSyncAnchor:(NSData )arg1 error:(id)arg2;
- (void)_handleChangedOrNewScopes:(id)arg1 deletedScopeIdentifiers:(id)arg2 newScopeListSyncAnchor:(NSData )arg3;
- (BOOL)_checkShouldHandleBatchInTransaction:(id)arg1;
- (id)taskIdentifier;
- (id)initWithEngineLibrary:(id)arg1 session:(id)arg2;

@end

