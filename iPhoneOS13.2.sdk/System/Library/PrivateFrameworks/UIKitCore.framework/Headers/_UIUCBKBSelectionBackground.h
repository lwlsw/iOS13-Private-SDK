//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "UIView.h"

@class UIKBKeyView;

__attribute__((visibility("hidden")))
@interface _UIUCBKBSelectionBackground : UIView
{
    UIKBKeyView *_backgroundProvidingView;
    BOOL _showButtonShape;
}

@property(nonatomic) BOOL showButtonShape; // @synthesize showButtonShape=_showButtonShape;
// - (void).cxx_destruct;
- (CGSize)intrinsicContentSize;
- (void)layoutSubviews;
- (void)_updateBackgroundProvidingView;
- (id)_makeBackgroundView;
- (id)initWithFrame:(CGRect)arg1;

@end

