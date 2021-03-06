//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MediaPlaybackCore/MPCPlayerCommand-Protocol.h>

@class MPCPlaybackIntent, MPCPlayerCommandRequest, NSArray;

@protocol MPCPlayerResetTracklistCommand <MPCPlayerCommand>
@property(readonly, nonatomic) NSArray *specializedIntents;
- (MPCPlayerCommandRequest *)replaceWithPlaybackIntent:(MPCPlaybackIntent *)arg1 replaceIntent:(long long)arg2;
- (MPCPlayerCommandRequest *)replaceWithPlaybackIntent:(MPCPlaybackIntent *)arg1;
- (MPCPlayerCommandRequest *)clear;
@end

