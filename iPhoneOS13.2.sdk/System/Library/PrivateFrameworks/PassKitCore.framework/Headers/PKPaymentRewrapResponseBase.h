//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PassKitCore/PKPaymentWebServiceResponse.h>

@class NSData;

@interface PKPaymentRewrapResponseBase : PKPaymentWebServiceResponse
{
    NSData *_rewrappedPaymentData;
}

@property(copy, nonatomic) NSData *rewrappedPaymentData; // @synthesize rewrappedPaymentData=_rewrappedPaymentData;
// - (void).cxx_destruct;
- (id)initWithData:(id)arg1;

@end

