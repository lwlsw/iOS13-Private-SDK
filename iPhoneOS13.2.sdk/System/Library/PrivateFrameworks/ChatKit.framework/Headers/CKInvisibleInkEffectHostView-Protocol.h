//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class UIImage;

@protocol CKInvisibleInkEffectHostView
@property(readonly, nonatomic) UIImage *imageForInvisibleInkEffectView;
@property(readonly, nonatomic) Class invisibleInkEffectViewClass;
- (void)invisibleInkEffectViewWasResumed;
- (void)invisibleInkEffectViewWasSuspended;
- (void)invisibleInkEffectViewWasUncovered;
- (void)detachInvisibleInkEffectView;
- (void)attachInvisibleInkEffectView;
@end

