//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TVMLKit/_TVFocusRedirectView.h>

#import <TVMLKit/TVAppTemplateImpressionable-Protocol.h>

@class NSArray, UIView;

__attribute__((visibility("hidden")))
@interface _TVProductInfoView : _TVFocusRedirectView <TVAppTemplateImpressionable>
{
    NSArray *_viewsAboveInfoSection;
    NSArray *_infoSectionViews;
    NSArray *_viewsBelowInfoSection;
    UIView *_defaultFocusView;
}

+ (id)productInfoViewWithElement:(id)arg1 existingView:(id)arg2;
@property(retain, nonatomic) UIView *defaultFocusView; // @synthesize defaultFocusView=_defaultFocusView;
@property(retain, nonatomic) NSArray *viewsBelowInfoSection; // @synthesize viewsBelowInfoSection=_viewsBelowInfoSection;
@property(retain, nonatomic) NSArray *infoSectionViews; // @synthesize infoSectionViews=_infoSectionViews;
@property(retain, nonatomic) NSArray *viewsAboveInfoSection; // @synthesize viewsAboveInfoSection=_viewsAboveInfoSection;
// - (void).cxx_destruct;
- (id)impressionableElementsContainedInDocument:(id)arg1;
- (void)layoutSubviews;
- (CGSize)sizeThatFits:(CGSize)arg1;
- (id)preferredFocusEnvironments;
- (BOOL)canBecomeFocused;

@end

