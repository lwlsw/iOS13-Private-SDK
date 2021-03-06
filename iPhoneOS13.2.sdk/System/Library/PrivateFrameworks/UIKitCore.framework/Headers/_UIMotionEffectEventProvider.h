//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@protocol _UIMotionEffectEventConsumer;

__attribute__((visibility("hidden")))
@interface _UIMotionEffectEventProvider : NSObject
{
    id <_UIMotionEffectEventConsumer> _consumer;
}

@property id <_UIMotionEffectEventConsumer> consumer; // @synthesize consumer=_consumer;
- (double)slowUpdateIntervalForLogs;
- (double)fastUpdateIntervalForLogs;
- (BOOL)wantsSynchronizedUpdates;
- (BOOL)shouldLogEvents;
- (id)currentEvent;
- (void)setSlowUpdatesEnabled:(BOOL)arg1;
- (void)stopGeneratingEvents;
- (void)startGeneratingEvents;

@end

