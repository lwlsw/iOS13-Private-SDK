//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSNumber;

@interface BLTSectionInfoOverride : NSObject
{
    NSNumber *_grouping;
    NSNumber *_level;
    NSNumber *_sound;
    NSNumber *_criticalAlert;
}

@property(retain, nonatomic) NSNumber *criticalAlert; // @synthesize criticalAlert=_criticalAlert;
@property(retain, nonatomic) NSNumber *sound; // @synthesize sound=_sound;
@property(retain, nonatomic) NSNumber *level; // @synthesize level=_level;
@property(retain, nonatomic) NSNumber *grouping; // @synthesize grouping=_grouping;
// - (void).cxx_destruct;
- (id)initWithOverrides:(id)arg1;

@end

