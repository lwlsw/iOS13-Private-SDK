//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SpringBoardFoundation/SBFDateProviding-Protocol.h>

@class NSCalendar, NSMutableDictionary, NSTimer;

@interface SBFDefaultDateProvider : NSObject <SBFDateProviding>
{
    NSMutableDictionary *_minuteHandlers;
    NSUInteger _nextToken;
    NSTimer *_minuteTimer;
    NSCalendar *_calendar;
}

// - (void).cxx_destruct;
- (void)_minuteTimerFired;
- (void)_scheduleNextMinuteTimer;
- (void)_updateMinuteTimer;
- (void)removeMinuteUpdateHandler:(id)arg1;
- (id)observeMinuteUpdatesWithHandler:(CDUnknownBlockType)arg1;
- (id)date;
- (id)init;

@end

