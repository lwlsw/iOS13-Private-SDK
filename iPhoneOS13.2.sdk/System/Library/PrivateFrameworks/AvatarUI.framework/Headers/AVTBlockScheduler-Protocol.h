//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class NSObject;
@protocol OS_dispatch_queue;

@protocol AVTBlockScheduler
- (void)performBlock:(void (^)(void))arg1 afterDelay:(double)arg2 onQueue:(NSObject<OS_dispatch_queue> *)arg3;
@end

