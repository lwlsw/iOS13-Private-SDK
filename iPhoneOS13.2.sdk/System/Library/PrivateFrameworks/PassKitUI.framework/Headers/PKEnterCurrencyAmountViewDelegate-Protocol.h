//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class NSDecimalNumber, PKEnterCurrencyAmountView;

@protocol PKEnterCurrencyAmountViewDelegate <NSObject>
- (void)enterCurrencyAmountViewDidChangeAmount:(PKEnterCurrencyAmountView *)arg1;
- (BOOL)enterCurrencyAmountView:(PKEnterCurrencyAmountView *)arg1 shouldChangeAmountFrom:(NSDecimalNumber *)arg2 to:(NSDecimalNumber *)arg3;
@end

