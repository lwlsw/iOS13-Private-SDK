//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MobileTimer/MTStateMachineEventHandler-Protocol.h>

@class NSDate;

@protocol MTBedtimeDNDStateMachineEventHandler <MTStateMachineEventHandler>
- (void)userWokeUp;
- (void)bedtimeDNDEnabled:(BOOL)arg1 userRequested:(BOOL)arg2 date:(NSDate *)arg3;
- (void)updateState:(BOOL)arg1;
@end

