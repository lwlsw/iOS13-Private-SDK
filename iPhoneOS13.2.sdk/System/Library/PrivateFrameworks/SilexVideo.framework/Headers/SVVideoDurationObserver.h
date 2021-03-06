//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SilexVideo/SVVideoDurationObserving-Protocol.h>

@class SVKeyValueObserver;
@protocol SVPlayerItemObserving;

@interface SVVideoDurationObserver : NSObject <SVVideoDurationObserving>
{
    id /* CDUnknownBlockType */ changeBlock;
    id <SVPlayerItemObserving> _playerItemObserver;
    SVKeyValueObserver *_playerItemDurationObserver;
    double _duration;
}

@property(nonatomic) double duration; // @synthesize duration=_duration;
@property(retain, nonatomic) SVKeyValueObserver *playerItemDurationObserver; // @synthesize playerItemDurationObserver=_playerItemDurationObserver;
@property(readonly, nonatomic) id <SVPlayerItemObserving> playerItemObserver; // @synthesize playerItemObserver=_playerItemObserver;
@property(copy, nonatomic, setter=onChange:) id /* CDUnknownBlockType */ changeBlock; // @synthesize changeBlock;
// - (void).cxx_destruct;
// - (void)updateDuration:(CDStruct_198678f7)arg1;
- (id)initWithPlayerItemObserver:(id)arg1;

@end

