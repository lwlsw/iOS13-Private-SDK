//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class NSData, NSString;

@protocol GEONavigationServerListenerXPCInterface <NSObject>
- (void)currentRoadNameUpdated:(NSString *)arg1;
- (void)navigationUpdatedWithVoiceVolumeData:(NSData *)arg1;
- (void)routeSummaryUpdatedWithTrafficIncidentAlertDetailsData:(NSData *)arg1;
- (void)routeSummaryUpdatedWithPositionFromDestinationData:(NSData *)arg1;
- (void)routeSummaryUpdatedWithPositionFromManeuverData:(NSData *)arg1;
- (void)routeSummaryUpdatedWithPositionFromSignData:(NSData *)arg1;
- (void)routeSummaryUpdatedWithRideSelectionData:(NSData *)arg1;
- (void)routeSummaryUpdatedWithStepNameInfoData:(NSData *)arg1;
- (void)routeSummaryUpdatedWithStepIndexData:(NSData *)arg1;
- (void)routeSummaryUpdatedWithActiveRouteDetailsData:(NSData *)arg1;
- (void)routeSummaryUpdatedWithGuidanceStateData:(NSData *)arg1;
- (void)routeSummaryUpdatedWithTransitSummaryData:(NSData *)arg1;
- (void)routeSummaryUpdatedWithNavigationRouteSummaryData:(NSData *)arg1;
- (void)navigationStateChanged:(NSUInteger)arg1 transportType:(int)arg2;
@end

