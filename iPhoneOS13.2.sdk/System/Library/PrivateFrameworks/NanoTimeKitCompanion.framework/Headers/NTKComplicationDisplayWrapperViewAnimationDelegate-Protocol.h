//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class NTKComplicationDisplayWrapperView, UIView;

@protocol NTKComplicationDisplayWrapperViewAnimationDelegate <NSObject>
- (void)complicationDisplayWrapperView:(NTKComplicationDisplayWrapperView *)arg1 updateCustomDataAnimationFromEarlierView:(UIView *)arg2 laterView:(UIView *)arg3 isForward:(BOOL)arg4 animationType:(NSUInteger)arg5 animationDuration:(double)arg6 animationFraction:(float)arg7;
- (BOOL)complicationDisplayWrapperView:(NTKComplicationDisplayWrapperView *)arg1 shouldStartCustomDataAnimationFromEarlierView:(UIView *)arg2 laterView:(UIView *)arg3 isForward:(BOOL)arg4 animationType:(NSUInteger)arg5;
@end

