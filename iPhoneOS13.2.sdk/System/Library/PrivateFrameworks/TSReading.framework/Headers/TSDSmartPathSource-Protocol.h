//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class NSString;

@protocol TSDSmartPathSource
@property(readonly) NSUInteger numberOfControlKnobs;
- (CGPathRef)newFeedbackPathForKnob:(NSUInteger)arg1;
- (NSString *)getFeedbackStringForKnob:(NSUInteger)arg1;
- (CGPoint)getControlKnobPosition:(NSUInteger)arg1;
- (void)setControlKnobPosition:(NSUInteger)arg1 toPoint:(CGPoint)arg2;

@optional
- (CGPoint)fixedPointForControlKnobChange;
@end

