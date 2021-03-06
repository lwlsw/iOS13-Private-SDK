//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSNumber;

@interface TUCallSoundPlayerDescriptor : NSObject
{
    long long _soundType;
    NSNumber *_sound;
    NSUInteger _iterations;
    double _pauseDuration;
}

@property(nonatomic) double pauseDuration; // @synthesize pauseDuration=_pauseDuration;
@property(nonatomic) NSUInteger iterations; // @synthesize iterations=_iterations;
@property(retain, nonatomic) NSNumber *sound; // @synthesize sound=_sound;
@property(nonatomic) long long soundType; // @synthesize soundType=_soundType;
// - (void).cxx_destruct;
- (id)description;
- (id)initWithSoundType:(long long)arg1 provider:(id)arg2 video:(BOOL)arg3 region:(long long)arg4;
- (id)initWithSoundType:(long long)arg1 call:(id)arg2;
- (id)initWithSoundType:(long long)arg1 sound:(id)arg2 iterations:(NSUInteger)arg3 pauseDuration:(double)arg4;

@end

