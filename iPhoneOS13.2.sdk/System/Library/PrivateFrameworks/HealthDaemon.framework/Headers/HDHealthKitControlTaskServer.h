//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HealthDaemon/HDStandardTaskServer.h>

@interface HDHealthKitControlTaskServer : HDStandardTaskServer
{
}

+ (BOOL)validateConfiguration:(id)arg1 client:(id)arg2 error:(id )arg3;
+ (Class)configurationClass;
+ (id)requiredEntitlements;
+ (id)taskIdentifier;
- (id)remoteInterface;
- (id)exportedInterface;
- (void)remote_condensableWorkoutsWithCompletion:(CDUnknownBlockType)arg1;
- (void)remote_condensedWorkoutsWithCompletion:(CDUnknownBlockType)arg1;
- (void)remote_condenseWorkoutWithUUID:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)remote_condenseWorkoutsForReason:(long long)arg1 workoutBatchLimit:(long long)arg2 completion:(CDUnknownBlockType)arg3;

@end

