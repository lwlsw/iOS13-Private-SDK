//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IMDaemonCore/IMDCKMessageSyncController.h>

@class CKServerChangeToken;

@interface IMDCKInitialMessageSyncController : IMDCKMessageSyncController
{
    CKServerChangeToken *_syncToken;
}

@property(retain, nonatomic) CKServerChangeToken *syncToken; // @synthesize syncToken=_syncToken;
- (BOOL)_kickOffWriteIfNeededForSyncType:(long long)arg1 completion:(CDUnknownBlockType)arg2;
- (BOOL)_deviceConditionsAllowsMessageSyncForActivity:(id)arg1 deviceConditionsToCheck:(NSUInteger)arg2 currentBatchCount:(long long)arg3 maxBatchCount:(long long)arg4;
- (BOOL)_deviceConditionsAllowsMessageSyncForCurrentBatchCount:(long long)arg1 maxBatchCount:(long long)arg2;
- (id)latestSyncToken;
- (void)setLatestSyncToken:(id)arg1;
- (void)syncMessagesWithSyncType:(long long)arg1 deviceConditionsToCheck:(NSUInteger)arg2 activity:(id)arg3 completionBlock:(CDUnknownBlockType)arg4;
- (void)dealloc;

@end

