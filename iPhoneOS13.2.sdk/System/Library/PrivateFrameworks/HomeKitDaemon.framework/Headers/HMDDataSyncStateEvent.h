//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HomeKitDaemon/HMDLogEvent.h>

@interface HMDDataSyncStateEvent : HMDLogEvent
{
    NSUInteger _dataSyncState;
}

+ (id)dataSyncStateEstablished:(NSUInteger)arg1;
+ (id)uuid;
@property(nonatomic) NSUInteger dataSyncState; // @synthesize dataSyncState=_dataSyncState;
- (id)initWithDataSyncState:(NSUInteger)arg1;

@end

