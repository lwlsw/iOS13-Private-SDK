//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <StoreKitUI/SKUIViewElement.h>

@class NSArray, NSString, SKUIActivityIndicatorViewElement, SKUINavigationBarViewElement;

__attribute__((visibility("hidden")))
@interface SKUIChartsTemplateViewElement : SKUIViewElement
{
    NSString *_type;
}

// - (void).cxx_destruct;
@property(readonly, nonatomic) NSString *type;
@property(readonly, nonatomic) SKUINavigationBarViewElement *navigationBarElement;
@property(readonly, nonatomic) NSArray *columns;
@property(readonly, nonatomic) SKUIActivityIndicatorViewElement *activityIndicator;
- (id)initWithDOMElement:(id)arg1 parent:(id)arg2 elementFactory:(id)arg3;

@end

