//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@protocol PXWidget;

@protocol PXWidgetUnlockDelegate <NSObject>
- (void)widget:(id <PXWidget>)arg1 performAfterUnlockingDeviceIfNecessary:(void (^)(void))arg2 failurehandler:(void (^)(void))arg3;
- (BOOL)widgetDeviceIsUnlocked:(id <PXWidget>)arg1;
@end

