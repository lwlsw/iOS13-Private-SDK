//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <RelevanceEngine/RERelevanceProviderManager.h>

#import <RelevanceEngine/REEngineLocationManagerObserver-Protocol.h>
#import <RelevanceEngine/RESharedLocationRelevanceProviderManagerProperties-Protocol.h>

@class CLLocation;

@interface RESharedLocationRelevanceProviderManager : RERelevanceProviderManager <REEngineLocationManagerObserver, RESharedLocationRelevanceProviderManagerProperties>
{
    CLLocation *_lastLocationUpdate;
}

+ (BOOL)_wantsSeperateRelevanceQueue;
// - (void).cxx_destruct;
- (void)locationManagerDidUpdateLocation:(id)arg1;
- (void)pause;
- (void)resume;
- (void)_queue_loadLocation:(id)arg1;
@property(readonly, nonatomic) CLLocation *currentLocation;

@end

