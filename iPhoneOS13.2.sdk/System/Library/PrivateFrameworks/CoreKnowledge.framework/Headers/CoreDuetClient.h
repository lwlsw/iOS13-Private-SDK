//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface CoreDuetClient : NSObject
{
}

+ (id)interactionFromDuetEvent:(id)arg1;
+ (id)executeQuery:(id)arg1;
+ (id)recentInteractionEventsWithCutoffDate:(id)arg1 limit:(int)arg2 offset:(int)arg3;
+ (id)tombstonedIntentEventUUIDStringsSince:(id)arg1;

@end

