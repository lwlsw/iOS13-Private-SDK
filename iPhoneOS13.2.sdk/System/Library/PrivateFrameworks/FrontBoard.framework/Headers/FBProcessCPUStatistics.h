//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class BSMachPortTaskNameRight;

@interface FBProcessCPUStatistics : NSObject
{
    BSMachPortTaskNameRight *_taskNameRight;
//    struct FBProcessTimes _times;
//    struct os_unfair_lock_s _lock;
}

// - (void).cxx_destruct;
- (double)_elapsedCPUTime;
- (void)_hostwideUserElapsedCPUTime:(out double )arg1 systemElapsedCPUTime:(out double )arg2 idleElapsedCPUTime:(out double )arg3;
- (void)_lock_getApplicationCPUTimesForUser:(out double )arg1 system:(out double )arg2 idle:(out double )arg3;
- (id)descriptionForCrashReport;
- (void)update;
@property(readonly, nonatomic) double totalElapsedIdleTime;
@property(readonly, nonatomic) double totalElapsedSystemTime;
@property(readonly, nonatomic) double totalElapsedUserTime;
@property(readonly, nonatomic) double totalElapsedTime;
- (void)dealloc;
- (id)initWithTaskNameRight:(id)arg1;

@end

