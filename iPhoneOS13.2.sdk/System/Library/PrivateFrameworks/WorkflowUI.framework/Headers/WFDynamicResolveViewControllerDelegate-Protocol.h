//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class INObject, NSError, WFDynamicResolveViewController;

@protocol WFDynamicResolveViewControllerDelegate <NSObject>
- (void)dynamicResolverViewController:(WFDynamicResolveViewController *)arg1 didFailToResolveWithError:(NSError *)arg2;
- (void)dynamicResolverViewController:(WFDynamicResolveViewController *)arg1 didFinishResolvingWithObject:(INObject *)arg2;
@end

