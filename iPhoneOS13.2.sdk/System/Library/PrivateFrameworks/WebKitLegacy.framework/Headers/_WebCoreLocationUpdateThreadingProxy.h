//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <WebKitLegacy/WebGeolocationCoreLocationUpdateListener-Protocol.h>

@class WebGeolocationProviderIOS;

__attribute__((visibility("hidden")))
@interface _WebCoreLocationUpdateThreadingProxy : NSObject <WebGeolocationCoreLocationUpdateListener>
{
    WebGeolocationProviderIOS *_provider;
}

- (void)resetGeolocation;
- (void)errorOccurred:(id)arg1;
// - (void)positionChanged:(struct GeolocationPosition )arg1;
- (void)geolocationAuthorizationDenied;
- (void)geolocationAuthorizationGranted;
- (id)initWithProvider:(id)arg1;

@end

