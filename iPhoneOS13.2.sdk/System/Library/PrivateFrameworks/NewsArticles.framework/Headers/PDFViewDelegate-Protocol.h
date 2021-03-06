//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class NSURL, PDFActionRemoteGoTo, PDFView, UIViewController;

@protocol PDFViewDelegate <NSObject>

@optional
- (void)PDFViewOpenPDF:(PDFView *)arg1 forRemoteGoToAction:(PDFActionRemoteGoTo *)arg2;
- (void)PDFViewPerformGoToPage:(PDFView *)arg1;
- (void)PDFViewPerformFind:(PDFView *)arg1;
- (UIViewController *)PDFViewParentViewController;
- (void)PDFViewWillClickOnLink:(PDFView *)arg1 withURL:(NSURL *)arg2;
@end

