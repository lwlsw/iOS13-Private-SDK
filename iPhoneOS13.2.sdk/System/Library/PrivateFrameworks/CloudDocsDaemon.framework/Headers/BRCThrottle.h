//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CloudDocsDaemon/BRCThrottleBase.h>

@class BRCMinHeap, NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface BRCThrottle : BRCThrottleBase
{
    NSMutableDictionary *_retryCounters;
    BRCMinHeap *_retryHeap;
}

+ (long long)throttleHashBytes:(void )arg1 length:(NSUInteger)arg2;
+ (long long)throttleHashFormat:(id)arg1;
// - (void).cxx_destruct;
- (void)reset;
- (long long)nsecsToNextRetry:(long long)arg1 now:(long long)arg2 increment:(BOOL)arg3;
- (void)incrementRetryCount:(long long)arg1;
- (void)_cleanupStaleCounters:(long long)arg1;
- (id)initWithName:(id)arg1 andParameters:(id)arg2;

@end

