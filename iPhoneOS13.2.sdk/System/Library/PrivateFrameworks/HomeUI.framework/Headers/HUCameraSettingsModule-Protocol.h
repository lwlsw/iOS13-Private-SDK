//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class HFItem, NAFuture, UIViewController;

@protocol HUCameraSettingsModule <NSObject>
- (BOOL)isItemHeader:(HFItem *)arg1;

@optional
@property(retain, nonatomic) UIViewController *presentingViewController;
@property(readonly, nonatomic) NSUInteger displayStyle;
- (NAFuture *)didSelectItem:(HFItem *)arg1;
@end

