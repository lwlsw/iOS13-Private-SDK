//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@protocol OS_dispatch_queue;

@interface PPQuickTypeMetrics : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;
}

+ (void)eventsMatches:(NSUInteger)arg1;
+ (void)contactMatchesWithContactsCount:(NSUInteger)arg1 foundInAppsCount:(NSUInteger)arg2;
+ (void)frameworkError:(id)arg1 errorCode:(long long)arg2;
+ (id)instance;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
// - (void).cxx_destruct;
- (id)init;

@end

