//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class TIKeyboardActivityContext;

@protocol TIKeyboardActivityObserving <NSObject>
- (void)keyboardActivityDidTransition:(TIKeyboardActivityContext *)arg1;

@optional
- (void)handleMemoryPressureLevel:(NSUInteger)arg1 excessMemoryInBytes:(NSUInteger)arg2;
@end

