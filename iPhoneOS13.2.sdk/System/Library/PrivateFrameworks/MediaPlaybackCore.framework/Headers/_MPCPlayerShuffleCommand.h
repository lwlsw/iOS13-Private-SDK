//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MediaPlaybackCore/_MPCPlayerCommand.h>

#import <MediaPlaybackCore/MPCPlayerShuffleCommand-Protocol.h>

@class NSArray;

@interface _MPCPlayerShuffleCommand : _MPCPlayerCommand <MPCPlayerShuffleCommand>
{
    BOOL _supportsChangeShuffle;
    BOOL _supportsAdvanceShuffle;
    long long _currentShuffleType;
    NSArray *_supportedShuffleTypes;
}

@property(nonatomic) BOOL supportsAdvanceShuffle; // @synthesize supportsAdvanceShuffle=_supportsAdvanceShuffle;
@property(nonatomic) BOOL supportsChangeShuffle; // @synthesize supportsChangeShuffle=_supportsChangeShuffle;
@property(retain, nonatomic) NSArray *supportedShuffleTypes; // @synthesize supportedShuffleTypes=_supportedShuffleTypes;
@property(nonatomic) long long currentShuffleType; // @synthesize currentShuffleType=_currentShuffleType;
// - (void).cxx_destruct;
- (id)advance;
- (id)setShuffleType:(long long)arg1;

@end

