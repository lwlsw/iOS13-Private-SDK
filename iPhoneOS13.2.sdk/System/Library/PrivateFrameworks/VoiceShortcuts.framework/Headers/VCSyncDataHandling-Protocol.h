//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <VoiceShortcuts/VCIncomingSyncDataHandling-Protocol.h>
#import <VoiceShortcuts/VCOutgoingSyncDataHandling-Protocol.h>

@protocol VCShortcutSyncService;

@protocol VCSyncDataHandling <VCOutgoingSyncDataHandling, VCIncomingSyncDataHandling>
- (void)deregisterSyncService:(id <VCShortcutSyncService>)arg1;
- (void)registerSyncService:(id <VCShortcutSyncService>)arg1;
@end

