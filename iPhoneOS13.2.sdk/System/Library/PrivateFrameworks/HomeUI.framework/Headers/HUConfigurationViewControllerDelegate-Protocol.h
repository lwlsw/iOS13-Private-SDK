//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class NSDictionary, UIViewController;
@protocol HUConfigurationViewController;

@protocol HUConfigurationViewControllerDelegate <NSObject>
- (void)viewControllerDidGoBack:(UIViewController<HUConfigurationViewController> *)arg1;
- (void)viewController:(UIViewController<HUConfigurationViewController> *)arg1 didFinishWithConfigurationResults:(NSDictionary *)arg2;
- (void)viewControllerWillAppear:(UIViewController<HUConfigurationViewController> *)arg1;
@end

