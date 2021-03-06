//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@class NSDictionary, NSURLSession, PKPass, PKValueAddedServiceTransaction;

@interface PKValueAddedServiceWebService : NSObject <NSURLConnectionDataDelegate>
{
    PKValueAddedServiceTransaction *_valueAddedTransaction;
    NSURLSession *_urlSession;
    NSDictionary *_merchantPayload;
    PKPass *_pass;
}

@property(readonly, nonatomic) PKPass *pass; // @synthesize pass=_pass;
@property(readonly, nonatomic) NSDictionary *merchantPayload; // @synthesize merchantPayload=_merchantPayload;
// - (void).cxx_destruct;
- (void)downloadPassWithCompletion:(CDUnknownBlockType)arg1;
- (void)downloadMerchantPayloadWithCompletion:(CDUnknownBlockType)arg1;
- (id)initWithValueAddedServiceTransaction:(id)arg1;

@end

