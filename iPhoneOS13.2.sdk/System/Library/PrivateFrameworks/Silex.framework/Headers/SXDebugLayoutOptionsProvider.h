//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Silex/SXDebugLayoutOptionsProviding-Protocol.h>

@class NSHashTable;

@interface SXDebugLayoutOptionsProvider : NSObject <SXDebugLayoutOptionsProviding>
{
    NSUInteger _viewingLocation;
    long long _bundleSubscriptionStatus;
    long long _channelSubscriptionStatus;
    NSHashTable *_observers;
}

@property(readonly, nonatomic) NSHashTable *observers; // @synthesize observers=_observers;
@property(nonatomic) long long channelSubscriptionStatus; // @synthesize channelSubscriptionStatus=_channelSubscriptionStatus;
@property(nonatomic) long long bundleSubscriptionStatus; // @synthesize bundleSubscriptionStatus=_bundleSubscriptionStatus;
@property(nonatomic) NSUInteger viewingLocation; // @synthesize viewingLocation=_viewingLocation;
// - (void).cxx_destruct;
- (void)notifyObservers;
- (void)removeObserver:(id)arg1;
- (void)addObserver:(id)arg1;
- (long long)overrideChannelSubscriptionStatus:(long long)arg1;
- (long long)overrideBundleSubscriptionStatus:(long long)arg1;
- (NSUInteger)overrideViewingLocation:(NSUInteger)arg1;
- (id)init;

@end

