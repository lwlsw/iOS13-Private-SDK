//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@protocol SBUIBackgroundStyleTransitioning <NSObject>
@property(readonly, nonatomic, getter=isTransitioningBackgroundStyle) BOOL transitioningBackgroundStyle;
@property(nonatomic) long long backgroundStyle;
- (void)completeTransitionToBackgroundStyle:(long long)arg1;
- (void)updateBackgroundStyleTransitionProgress:(double)arg1;
- (void)beginTransitionToBackgroundStyle:(long long)arg1;
@end

