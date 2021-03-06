//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ActivityRingsUI/ARUICountdownDefaultAnimation.h>

#import <ActivityRingsUI/ARUICountdownAnimation-Protocol.h>

__attribute__((visibility("hidden")))
@interface ARUICountdownCountdown : ARUICountdownDefaultAnimation <ARUICountdownAnimation>
{
    NSUInteger _step;
    BOOL _cancelable;
    double _percent;
}

+ (id)identifier;
@property(nonatomic) double percent; // @synthesize percent=_percent;
- (NSUInteger)countdownStep;
- (void)applyToCountdownView:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)description;
- (id)identifier;
- (BOOL)cancelable;
- (id)timingFunction;
- (double)duration;
- (double)delay;
- (id)initWithPercent:(double)arg1 andStep:(NSUInteger)arg2 cancelable:(BOOL)arg3;

@end

