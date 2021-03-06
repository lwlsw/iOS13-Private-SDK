//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MapsSuggestions/MapsSuggestionsObject-Protocol.h>

@class CLLocation, NSDate, NSUUID;

@protocol MapsSuggestionsRoutineRequester <MapsSuggestionsObject>
- (void)clearAllVehicleEventsWithHandler:(void (^)(void))arg1;
- (void)stopMonitoringVehicleEvents;
- (BOOL)startMonitoringVehicleEventsWithHandler:(void (^)(NSArray *, NSError *))arg1;
- (BOOL)fetchRoutineModeFromLocation:(CLLocation *)arg1 handler:(void (^)(long long, NSError *))arg2;
- (BOOL)fetchLocationOfInterestWithIdentifier:(NSUUID *)arg1 handler:(void (^)(RTLocationOfInterest *, NSError *))arg2;
- (BOOL)fetchLocationsOfInterestVisitedSinceDate:(NSDate *)arg1 handler:(void (^)(NSArray *, NSError *))arg2;
- (BOOL)fetchLocationsOfInterestOfType:(long long)arg1 handler:(void (^)(NSArray *, NSError *))arg2;
- (BOOL)fetchNextPLOIsFromLocation:(CLLocation *)arg1 startDate:(NSDate *)arg2 timeInterval:(double)arg3 handler:(void (^)(NSArray *, NSError *))arg4;
@end

