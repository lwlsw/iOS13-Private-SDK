//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@protocol PBBridgeIDSReachabilityObserver;

@interface PBBridgeIDSReachabilityObserverWrapper : NSObject
{
    id <PBBridgeIDSReachabilityObserver> _observer;
}

@property(nonatomic) __weak id <PBBridgeIDSReachabilityObserver> observer; // @synthesize observer=_observer;
// - (void).cxx_destruct;
- (void)fireReachability:(id)arg1 deviceStatus:(id)arg2 devices:(id)arg3;

@end

