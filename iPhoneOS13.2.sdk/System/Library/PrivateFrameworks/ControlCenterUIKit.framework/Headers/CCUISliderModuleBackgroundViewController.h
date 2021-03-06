//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


#import <ControlCenterUIKit/CCUIContentModuleBackgroundViewController-Protocol.h>

@class CCUICAPackageView, MTVisualStylingProvider, UIImageView;

@interface CCUISliderModuleBackgroundViewController : UIViewController <CCUIContentModuleBackgroundViewController>
{
    UIImageView *_headerImageView;
    CCUICAPackageView *_packageView;
    MTVisualStylingProvider *_visualStylingProvider;
}

// - (void).cxx_destruct;
- (void)_updateHeaderGlyphVisualStyling;
- (CGPoint)_headerCenterForBounds:(CGRect)arg1;
- (CGRect)effectiveContentFrameForContainerFrame:(CGRect)arg1;
- (void)setGlyphState:(id)arg1;
- (void)setGlyphPackageDescription:(id)arg1;
- (void)setGlyphImage:(id)arg1;
- (void)viewDidMoveToWindow:(id)arg1 shouldAppearOrDisappear:(BOOL)arg2;
- (void)viewWillLayoutSubviews;
- (void)viewDidLoad;

@end

