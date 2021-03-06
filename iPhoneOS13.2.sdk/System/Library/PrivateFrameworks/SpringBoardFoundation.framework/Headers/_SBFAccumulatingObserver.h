//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SpringBoardFoundation/SBFObserver-Protocol.h>

@class NSError, NSMutableArray;
@protocol OS_dispatch_semaphore;

@interface _SBFAccumulatingObserver : NSObject <SBFObserver>
{
    NSMutableArray *_results;
    NSError *_error;
    BOOL _didComplete;
    NSObject<OS_dispatch_semaphore> *_semaphore;
}

// - (void).cxx_destruct;
- (id)waitForResults:(id )arg1;
- (void)observerDidFailWithError:(id)arg1;
- (void)observerDidComplete;
- (void)observerDidReceiveResult:(id)arg1;
- (id)init;

@end

