//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class CTCallForwardingValue, NSError, TPSCallForwardingController;

@protocol TPSCallForwardingControllerDelegate <NSObject>

@optional
- (void)callForwardingController:(TPSCallForwardingController *)arg1 didChangeValue:(CTCallForwardingValue *)arg2 error:(NSError *)arg3;
- (void)callForwardingController:(TPSCallForwardingController *)arg1 didChangeServiceType:(long long)arg2;
@end

