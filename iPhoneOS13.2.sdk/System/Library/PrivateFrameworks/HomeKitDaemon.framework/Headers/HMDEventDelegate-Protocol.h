//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class HMDEvent, HMDEventTriggerDevice, HMDEventTriggerExecutionSession;

@protocol HMDEventDelegate <NSObject>
- (HMDEventTriggerExecutionSession *)didOccurEvent:(HMDEvent *)arg1 causingDevice:(HMDEventTriggerDevice *)arg2;
@end

