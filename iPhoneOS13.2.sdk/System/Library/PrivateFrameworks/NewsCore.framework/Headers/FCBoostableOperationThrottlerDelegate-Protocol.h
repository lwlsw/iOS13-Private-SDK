//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NewsCore/FCOperationThrottlerDelegate-Protocol.h>

@protocol FCOperationThrottler;

@protocol FCBoostableOperationThrottlerDelegate <FCOperationThrottlerDelegate>

@optional
- (void)operationThrottler:(id <FCOperationThrottler>)arg1 performAsyncOperationWithQualityOfService:(long long)arg2 completion:(void (^)(void))arg3;
@end

