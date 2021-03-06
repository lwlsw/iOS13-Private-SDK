//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Navigation/MNSteppingLocationTracker.h>

@class GEORoadMatcher, GEOTransitRouteMatcher, MNLocation, NSDate;

__attribute__((visibility("hidden")))
@interface MNTransitLocationTracker : MNSteppingLocationTracker
{
    GEOTransitRouteMatcher *_transitRouteMatcher;
    GEORoadMatcher *_roadMatcher;
    NSDate *_lastLocationTimestamp;
    NSDate *_lastAccurateLocationDate;
    MNLocation *_lastMatchedLocation;
    NSDate *_startDate;
    BOOL _hasArrived;
    BOOL _debugSnapToTransitLines;
}

@property(nonatomic) BOOL debugSnapToTransitLines; // @synthesize debugSnapToTransitLines=_debugSnapToTransitLines;
// - (void).cxx_destruct;
- (BOOL)_isInaccurateLocation:(id)arg1;
- (double)_timeToDisplayStaleGPSLocation;
- (id)_roadMatchForOffRouteLocation:(id)arg1 routeMatch:(id)arg2;
- (id)_locationForInaccurateLocation:(id)arg1;
- (id)_correctedLocationForLocation:(id)arg1;
- (id)_matchedLocationForLocation:(id)arg1;
- (void)stopTracking;
- (void)startTracking;
- (int)transportType;
- (id)initWithNavigationSession:(id)arg1;

@end

