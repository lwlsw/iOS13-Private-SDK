//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <PassKitUI/PKDashboardItem-Protocol.h>

@class PKPassView, PKPaymentPass, PKTransitBalanceModel;

@interface PKDashboardPaymentProductsItem : NSObject <PKDashboardItem>
{
    PKPassView *_passView;
    PKTransitBalanceModel *_transitBalanceModel;
}

@property(retain, nonatomic) PKTransitBalanceModel *transitBalanceModel; // @synthesize transitBalanceModel=_transitBalanceModel;
// - (void).cxx_destruct;
@property(readonly, nonatomic) PKPaymentPass *pass;
- (id)initWithPassView:(id)arg1;

@end

