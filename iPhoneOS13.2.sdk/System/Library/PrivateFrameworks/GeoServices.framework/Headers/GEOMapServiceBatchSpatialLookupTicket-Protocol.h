//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class GEOApplicationAuditToken, GEOMapServiceTraits, GEOSpatialLookupParameters, NSArray, NSObject;
@protocol OS_dispatch_queue;

@protocol GEOMapServiceBatchSpatialLookupTicket <NSObject>
@property(readonly, nonatomic) GEOMapServiceTraits *traits;
- (NSArray *)mapItemsForParameters:(GEOSpatialLookupParameters *)arg1;
- (void)cancel;
- (void)submitWithHandler:(void (^)(NSError *))arg1 auditToken:(GEOApplicationAuditToken *)arg2 networkActivity:(void (^)(BOOL))arg3 queue:(NSObject<OS_dispatch_queue> *)arg4;
- (void)submitWithHandler:(void (^)(NSError *))arg1 networkActivity:(void (^)(BOOL))arg2 queue:(NSObject<OS_dispatch_queue> *)arg3;
- (void)submitWithHandler:(void (^)(NSError *))arg1 auditToken:(GEOApplicationAuditToken *)arg2 networkActivity:(void (^)(BOOL))arg3;
- (void)submitWithHandler:(void (^)(NSError *))arg1 networkActivity:(void (^)(BOOL))arg2;
@end

