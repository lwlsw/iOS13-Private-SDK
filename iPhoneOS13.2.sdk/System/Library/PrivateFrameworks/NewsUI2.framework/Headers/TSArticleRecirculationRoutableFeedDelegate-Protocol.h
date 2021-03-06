//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class NSArray, UIViewController;
@protocol FCHeadlineProviding, TSAnimatedViewProperties, TSArticleRecirculationRoutedType;

@protocol TSArticleRecirculationRoutableFeedDelegate
- (UIViewController *)articleRecirculationRouted:(id <TSArticleRecirculationRoutedType>)arg1 previewingViewControllerForHeadline:(id <FCHeadlineProviding>)arg2 inSection:(long long)arg3 withHeadlines:(NSArray *)arg4;
- (void)articleRecirculationRouted:(id <TSArticleRecirculationRoutedType>)arg1 didSelectHeadline:(id <FCHeadlineProviding>)arg2 fromSection:(long long)arg3 withProperties:(id <TSAnimatedViewProperties>)arg4 inCollection:(NSArray *)arg5;
- (void)articleRecirculationRoutedDidSelectChannel:(id <TSArticleRecirculationRoutedType>)arg1;
@end

