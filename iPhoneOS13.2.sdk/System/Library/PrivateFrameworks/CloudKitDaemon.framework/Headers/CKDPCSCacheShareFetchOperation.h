//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CloudKitDaemon/CKDPCSCacheFetchOperation.h>

@class CKDSharePCSData, CKRecordID;

__attribute__((visibility("hidden")))
@interface CKDPCSCacheShareFetchOperation : CKDPCSCacheFetchOperation
{
}

- (BOOL)_savePCSDataToCache;
- (BOOL)_decryptPCS;
- (BOOL)_fetchPCSDataFromServer;
- (BOOL)_fetchPCSDataFromDatabase;
- (void)_handlePCSDataFetched:(id)arg1 withError:(id)arg2;
- (BOOL)hasAllPCSData;
- (id)itemTypeName;
@property(retain, nonatomic) CKDSharePCSData *sharePCSData;
@property(readonly, nonatomic) CKRecordID *shareID;

@end

