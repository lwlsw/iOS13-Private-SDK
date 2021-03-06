//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class UIView;

@interface TSKModalNavigationController : UINavigationController
{
    UIView *mTopSeparator;
    BOOL mShowTopSeparator;
    BOOL mIsFullscreenViewController;
}

@property(nonatomic) BOOL isFullscreenViewController; // @synthesize isFullscreenViewController=mIsFullscreenViewController;
@property(nonatomic) BOOL showTopSeparator; // @synthesize showTopSeparator=mShowTopSeparator;
- (long long)positionForBar:(id)arg1;
- (void)viewDidLoad;
- (void)layoutViews;
- (void)p_statusBarWillChange:(id)arg1;
- (void)dealloc;
- (id)initWithRootViewController:(id)arg1;

@end

