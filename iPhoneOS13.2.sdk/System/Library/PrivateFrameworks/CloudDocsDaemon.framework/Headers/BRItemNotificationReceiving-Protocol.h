//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CloudDocsDaemon/BRCancellable-Protocol.h>

@class NSArray, NSDictionary;

@protocol BRItemNotificationReceiving <BRCancellable>
- (void)receiveProgressUpdates:(NSArray *)arg1 reply:(void (^)(void))arg2;
- (void)receiveUpdates:(NSArray *)arg1 logicalExtensions:(NSDictionary *)arg2 physicalExtensions:(NSDictionary *)arg3 reply:(void (^)(void))arg4;
@end

