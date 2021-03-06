//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class ACAccount, ACAccountStore;

@interface _KSiCloudDeviceListMonitor : NSObject
{
    ACAccountStore *_accountStore;
    ACAccount *_account;
    long long _majorVersForCloudKitSyncMacOS;
    long long _minorVersForCloudKitSyncMacOS;
    long long _minorSubversionForCloudKitSyncMacOS;
    long long _majorVersForCloudKitSynciOS;
    long long _minorVersForCloudKitSynciOS;
}

+ (id)iCloudDeviceListMonitor;
@property(nonatomic) long long minorVersForCloudKitSynciOS; // @synthesize minorVersForCloudKitSynciOS=_minorVersForCloudKitSynciOS;
@property(nonatomic) long long majorVersForCloudKitSynciOS; // @synthesize majorVersForCloudKitSynciOS=_majorVersForCloudKitSynciOS;
@property(nonatomic) long long minorSubversionForCloudKitSyncMacOS; // @synthesize minorSubversionForCloudKitSyncMacOS=_minorSubversionForCloudKitSyncMacOS;
@property(nonatomic) long long minorVersForCloudKitSyncMacOS; // @synthesize minorVersForCloudKitSyncMacOS=_minorVersForCloudKitSyncMacOS;
@property(nonatomic) long long majorVersForCloudKitSyncMacOS; // @synthesize majorVersForCloudKitSyncMacOS=_majorVersForCloudKitSyncMacOS;
@property(retain, nonatomic) ACAccount *account; // @synthesize account=_account;
@property(retain, nonatomic) ACAccountStore *accountStore; // @synthesize accountStore=_accountStore;
// - (void).cxx_destruct;
- (void)isAccountCompatibleForCloudKitSyncingWithCompletionBlock:(CDUnknownBlockType)arg1;
- (void)queryMigrationState;
- (void)fetchICloudDevicesWithCompletionBlock:(CDUnknownBlockType)arg1;
- (void)fetchCloudKitDevicesWithCompletionBlock:(CDUnknownBlockType)arg1;
- (BOOL)canMigrateToCloudKit;
- (BOOL)isSWVersionCloudKitSyncCompatible:(id)arg1;
- (void)resetDataNoAccount;
- (void)dealloc;
- (id)init;

@end

