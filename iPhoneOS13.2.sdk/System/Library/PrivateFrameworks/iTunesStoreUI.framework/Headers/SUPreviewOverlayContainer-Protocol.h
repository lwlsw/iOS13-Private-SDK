//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class SUPreviewOverlayViewController;

@protocol SUPreviewOverlayContainer <NSObject>

@optional
- (BOOL)showPreviewOverlay:(SUPreviewOverlayViewController *)arg1 animated:(BOOL)arg2 completionBlock:(void (^)(void))arg3;
- (void)hidePreviewOverlay:(SUPreviewOverlayViewController *)arg1 animated:(BOOL)arg2 completionBlock:(void (^)(void))arg3;
- (BOOL)isShowingPreviewOverlay;
@end

