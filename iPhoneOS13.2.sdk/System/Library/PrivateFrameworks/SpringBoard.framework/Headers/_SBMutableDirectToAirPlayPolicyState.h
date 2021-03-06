//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SpringBoard/_SBDirectToAirPlayPolicyState.h>

@class NSSet, NSString;

@interface _SBMutableDirectToAirPlayPolicyState : _SBDirectToAirPlayPolicyState
{
}

@property(nonatomic) NSUInteger policyStateSerialNumber; // @dynamic policyStateSerialNumber;
@property(nonatomic) BOOL suppressStateChangesForObscured; // @dynamic suppressStateChangesForObscured;
@property(nonatomic) BOOL suppressReadyStateForLock; // @dynamic suppressReadyStateForLock;
@property(nonatomic) BOOL playingAppIsActivelyPlaying; // @dynamic playingAppIsActivelyPlaying;
@property(nonatomic) BOOL currentRouteIsWired; // @dynamic currentRouteIsWired;
@property(copy, nonatomic) NSSet *allPlayingBundleIDs; // @dynamic allPlayingBundleIDs;
@property(copy, nonatomic) NSSet *allForegroundBundleIDs; // @dynamic allForegroundBundleIDs;
@property(copy, nonatomic) NSSet *foregroundPlayingBundleIDs; // @dynamic foregroundPlayingBundleIDs;
@property(copy, nonatomic) NSSet *foregroundReadyBundleIDs; // @dynamic foregroundReadyBundleIDs;
@property(copy, nonatomic) NSSet *foregroundEligibleBundleIDs; // @dynamic foregroundEligibleBundleIDs;
@property(copy, nonatomic) NSSet *foregroundIneligibleBundleIDs; // @dynamic foregroundIneligibleBundleIDs;
@property(copy, nonatomic) NSString *routeName; // @dynamic routeName;

@end

