//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKitCore/_DUIClientSessionCommon-Protocol.h>

@class BKSAnimationFenceHandle, NSArray;

@protocol _DUIClientSessionSource <_DUIClientSessionCommon>
- (oneway void)dataTransferSessionFinished;
- (oneway void)dragFailed;
- (oneway void)dragEndedWithOperation:(NSUInteger)arg1;
- (oneway void)handOffCancelledItems:(NSArray *)arg1 withFence:(BKSAnimationFenceHandle *)arg2;
- (oneway void)checkCanHandOffCancelledItemsWithReply:(void (^)(BOOL))arg1;
@end

