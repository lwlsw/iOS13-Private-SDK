//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class ASDCheckQueueRequestOptions, ASDClaimApplicationsRequestOptions, ASDManagedApplicationRequestOptions;

@protocol ASDStoreQueueProtocol <NSObject>
- (void)managedApplicationRequestWithOptions:(ASDManagedApplicationRequestOptions *)arg1 completionBlock:(void (^)(BOOL, NSDictionary *, long long, NSError *))arg2;
- (void)getDownloadQueueWithCompletionBlock:(void (^)(NSArray *, NSError *))arg1;
- (void)getAutomaticDownloadQueueWithCompletionBlock:(void (^)(NSArray *, NSError *))arg1;
- (void)claimApplicationsWithOptions:(ASDClaimApplicationsRequestOptions *)arg1 completionBlock:(void (^)(BOOL, NSArray *, NSError *))arg2;
- (void)checkQueueWithOptions:(ASDCheckQueueRequestOptions *)arg1 completionBlock:(void (^)(BOOL, NSError *))arg2;
@end

