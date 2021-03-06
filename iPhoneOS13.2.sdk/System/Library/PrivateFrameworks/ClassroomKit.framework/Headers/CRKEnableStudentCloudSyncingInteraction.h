//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "CATOperation.h"

@class CATRemoteTaskOperation;
@protocol CRKEnableStudentCloudSyncingInteractionDelegate, CRKRequestPerformingProtocol;

@interface CRKEnableStudentCloudSyncingInteraction : CATOperation
{
    NSUInteger mLocalCourseCount;
    id <CRKRequestPerformingProtocol> mStudentDaemonProxy;
    id <CRKEnableStudentCloudSyncingInteractionDelegate> mDelegate;
    CATRemoteTaskOperation *mEnableSyncingOperation;
    BOOL mIsPrompting;
}

// - (void).cxx_destruct;
- (id)makeEnableSyncingRequest;
- (void)endOperationWithSyncingEnabledState:(BOOL)arg1;
- (void)processMergeDecision:(BOOL)arg1;
- (void)stopPromptingToMerge;
- (void)promptToMerge;
- (void)enableSyncingOperationDidFinish:(id)arg1;
- (void)enableSyncing;
- (void)run;
- (void)main;
- (void)cancel;
- (BOOL)isAsynchronous;
- (id)initWithLocalCourseCount:(NSUInteger)arg1 studentDaemonProxy:(id)arg2 delegate:(id)arg3;

@end

