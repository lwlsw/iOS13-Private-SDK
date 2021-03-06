//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SilexVideo/SVVideoAdActionAvailabilityObserverFactory-Protocol.h>

@protocol SVVideoLoadingStateObserverFactory, SVVideoProviderProviding;

@interface SVVideoAdActionAvailabilityObserverFactory : NSObject <SVVideoAdActionAvailabilityObserverFactory>
{
    id <SVVideoProviderProviding> _videoProviderProvider;
    id <SVVideoLoadingStateObserverFactory> _loadingStateObserverFactory;
}

@property(readonly, nonatomic) id <SVVideoLoadingStateObserverFactory> loadingStateObserverFactory; // @synthesize loadingStateObserverFactory=_loadingStateObserverFactory;
@property(readonly, nonatomic) id <SVVideoProviderProviding> videoProviderProvider; // @synthesize videoProviderProvider=_videoProviderProvider;
// - (void).cxx_destruct;
- (id)createActionAvailabilityObserverForVideo:(id)arg1;
- (id)initWithVideoProviderProvider:(id)arg1 loadingStateObserverFactory:(id)arg2;

@end

