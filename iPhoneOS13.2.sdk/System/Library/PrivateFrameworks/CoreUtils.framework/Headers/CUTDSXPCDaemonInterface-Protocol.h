//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class CUTDSProvider, CUTDSSeeker, CUTDSSession;

@protocol CUTDSXPCDaemonInterface
- (void)xpcTDSSessionActivate:(CUTDSSession *)arg1 completion:(void (^)(NSError *))arg2;
- (void)xpcTDSSeekerActivate:(CUTDSSeeker *)arg1 completion:(void (^)(NSError *))arg2;
- (void)xpcTDSProviderActivate:(CUTDSProvider *)arg1 completion:(void (^)(NSError *))arg2;
@end

