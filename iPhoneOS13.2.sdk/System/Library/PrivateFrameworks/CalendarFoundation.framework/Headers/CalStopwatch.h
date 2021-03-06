//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

@interface CalStopwatch : NSObject
{
    BOOL _isRunning;
    NSUInteger _lastStartTime;
    NSUInteger _elapsedTime;
    BOOL _hasValidElapsedTime;
    NSMutableDictionary *_events;
    BOOL _usesSignalFlags;
}

@property BOOL usesSignalFlags; // @synthesize usesSignalFlags=_usesSignalFlags;
// - (void).cxx_destruct;
- (double)markEventEnd:(id)arg1;
- (double)markEventSplit:(id)arg1;
- (void)markEventStart:(id)arg1;
- (id)elapsedTimeAsString:(int)arg1;
- (NSUInteger)elapsedTimeAsNumber:(int)arg1;
- (NSUInteger)elapsedTimeInNanoseconds;
- (void)reset;
- (void)stop;
- (void)start;
- (id)description;
- (id)init;

@end

