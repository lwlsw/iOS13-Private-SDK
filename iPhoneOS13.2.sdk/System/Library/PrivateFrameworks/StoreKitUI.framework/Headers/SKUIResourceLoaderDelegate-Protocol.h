//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class SKUIResourceLoader;

@protocol SKUIResourceLoaderDelegate <NSObject>

@optional
- (void)resourceLoader:(SKUIResourceLoader *)arg1 didLoadAllForReason:(long long)arg2;
- (void)resourceLoaderDidIdle:(SKUIResourceLoader *)arg1;
- (void)resourceLoaderDidBeginLoading:(SKUIResourceLoader *)arg1;
@end

