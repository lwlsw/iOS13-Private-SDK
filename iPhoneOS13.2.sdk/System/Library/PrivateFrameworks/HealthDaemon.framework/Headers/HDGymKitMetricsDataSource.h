//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HealthDaemon/HDStandardTaskServer.h>

#import <HealthDaemon/HDMetricsCollectorObserver-Protocol.h>
#import <HealthDaemon/HDWorkoutDataSource-Protocol.h>
#import <HealthDaemon/HKDataFlowLinkProcessor-Protocol.h>

@class HKDataFlowLink, NSLock, NSMutableDictionary, NSUUID;

@interface HDGymKitMetricsDataSource : HDStandardTaskServer <HDMetricsCollectorObserver, HKDataFlowLinkProcessor, HDWorkoutDataSource>
{
    HKDataFlowLink *_workoutDataFlowLink;
    NSLock *_lock;
    NSMutableDictionary *_accumulatedMetadata;
}

+ (BOOL)validateConfiguration:(id)arg1 client:(id)arg2 error:(id )arg3;
+ (id)requiredEntitlements;
+ (id)taskIdentifier;
// - (void).cxx_destruct;
- (id)_metadataFromMetrics:(id)arg1;
- (void)_stopObservingMetrics;
- (void)_startObservingMetrics;
- (void)metricsCollector:(id)arg1 didCollectMetrics:(id)arg2;
- (void)remote_startTaskServerIfNeeded;
- (void)connectionInvalidated;
- (id)remoteInterface;
- (id)exportedInterface;
- (void)workoutDataDestination:(id)arg1 requestsFinalDataFrom:(id)arg2 to:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)workoutDataDestination:(id)arg1 didChangeFromState:(NSUInteger)arg2 toState:(NSUInteger)arg3;
- (void)workoutDataDestination:(id)arg1 requestsDataFrom:(id)arg2 to:(id)arg3;
@property(readonly, copy) NSUUID *workoutDataProcessorUUID;
@property(readonly) HKDataFlowLink *workoutDataFlowLink;
- (void)dealloc;
- (id)initWithUUID:(id)arg1 configuration:(id)arg2 client:(id)arg3 delegate:(id)arg4;

@end

