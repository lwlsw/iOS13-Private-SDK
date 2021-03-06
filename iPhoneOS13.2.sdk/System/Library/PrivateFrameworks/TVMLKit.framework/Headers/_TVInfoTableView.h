//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TVMLKit/_TVFocusRedirectView.h>

#import <TVMLKit/TVAppTemplateImpressionable-Protocol.h>

@class NSArray, UIView;

__attribute__((visibility("hidden")))
@interface _TVInfoTableView : _TVFocusRedirectView <TVAppTemplateImpressionable>
{
    UIView *_headerView;
    NSArray *_infoViews;
    UIView *_footerView;
}

+ (id)infoTableViewWithElement:(id)arg1 existingView:(id)arg2;
@property(retain, nonatomic) UIView *footerView; // @synthesize footerView=_footerView;
@property(retain, nonatomic) NSArray *infoViews; // @synthesize infoViews=_infoViews;
@property(retain, nonatomic) UIView *headerView; // @synthesize headerView=_headerView;
// - (void).cxx_destruct;
- (double)_normalizedInfoHeaderWidth;
- (id)impressionableElementsContainedInDocument:(id)arg1;
- (void)layoutSubviews;
- (CGSize)sizeThatFits:(CGSize)arg1;

@end

