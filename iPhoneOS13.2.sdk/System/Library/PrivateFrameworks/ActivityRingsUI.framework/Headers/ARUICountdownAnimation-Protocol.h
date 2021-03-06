//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class ARUICountdownView, CAMediaTimingFunction, NSString;

@protocol ARUICountdownAnimation
+ (NSString *)identifier;
- (void)applyToCountdownView:(ARUICountdownView *)arg1 completion:(void (^)(void))arg2;
- (NSString *)identifier;
- (BOOL)cancelable;
- (CAMediaTimingFunction *)timingFunction;
- (double)duration;
- (double)delay;

@optional
- (NSUInteger)countdownStep;
@end

