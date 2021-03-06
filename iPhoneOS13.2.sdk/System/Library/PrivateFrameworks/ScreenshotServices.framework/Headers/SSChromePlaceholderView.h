//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//



@class NSArray, SSVellumOpacityControl, UIBarButtonItem, UINavigationBar, UINavigationItem;

@interface SSChromePlaceholderView : UIView <UINavigationBarDelegate>
{
    UINavigationItem *_managedNavigationItem;
    UIBarButtonItem *_shareItem;
    UIBarButtonItem *_doneItem;
    UIBarButtonItem *_deleteItem;
    UIBarButtonItem *_undoItem;
    UIBarButtonItem *_redoItem;
    UIBarButtonItem *_undoRedoSpacerItem;
    UIBarButtonItem *_opacityItem;
    SSVellumOpacityControl *_opacityControl;
    UIView *_opacityView;
    UINavigationBar *_topBar;
    UINavigationBar *_topBarBackground;
    UIView *_topBarSeparatorLine;
    NSArray *_barItems;
    double _contentAlpha;
}

@property(nonatomic) double contentAlpha; // @synthesize contentAlpha=_contentAlpha;
// - (void).cxx_destruct;
- (long long)positionForBar:(id)arg1;
- (void)_layoutTopBar;
- (void)_updateBarButtonItemPositionsAnimated:(BOOL)arg1;
- (void)_initializeBarButtonItems;
- (void)layoutSubviews;
- (void)safeAreaInsetsDidChange;
- (double)topBarHeight;
- (id)initWithFrame:(CGRect)arg1;

@end

