//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class PFDispatchQueue;

@protocol PFBlockControlCommon <NSObject>
- (BOOL)blockWasCanceled;
- (BOOL)blockHasFinished;
- (BOOL)blockHasStarted;
- (void)waitForBlock;
- (void)notifyOnQueue:(PFDispatchQueue *)arg1 whenFinished:(void (^)(void))arg2;
@end

