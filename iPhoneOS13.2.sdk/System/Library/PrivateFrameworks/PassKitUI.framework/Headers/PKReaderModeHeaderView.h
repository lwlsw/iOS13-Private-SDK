//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PassKitUI/PKTableHeaderView.h>

@class NSArray, NSDictionary, PKPaymentSetupProduct;

@interface PKReaderModeHeaderView : PKTableHeaderView
{
    PKPaymentSetupProduct *_product;
    NSArray *_resourceKeys;
    long long _context;
    NSDictionary *_readerModeResources;
    NSUInteger _state;
}

@property(nonatomic) NSUInteger state; // @synthesize state=_state;
// - (void).cxx_destruct;
- (void)layoutSubviews;
- (void)_configureForCurrentState;
- (id)_subtitleForState:(NSUInteger)arg1;
- (id)_titleForState:(NSUInteger)arg1;
- (id)initWithState:(NSUInteger)arg1 context:(long long)arg2 product:(id)arg3;

@end

