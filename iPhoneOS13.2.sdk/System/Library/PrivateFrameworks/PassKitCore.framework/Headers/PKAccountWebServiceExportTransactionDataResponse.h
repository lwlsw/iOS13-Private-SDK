//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PassKitCore/PKAccountWebServiceResponse.h>

@class NSData, NSString;

@interface PKAccountWebServiceExportTransactionDataResponse : PKAccountWebServiceResponse
{
    NSData *_transactionData;
    NSString *_transactionDataFilename;
    NSString *_transactionDataHash;
}

@property(readonly, copy, nonatomic) NSString *transactionDataHash; // @synthesize transactionDataHash=_transactionDataHash;
@property(readonly, copy, nonatomic) NSString *transactionDataFilename; // @synthesize transactionDataFilename=_transactionDataFilename;
@property(readonly, copy, nonatomic) NSData *transactionData; // @synthesize transactionData=_transactionData;
// - (void).cxx_destruct;
- (id)initWithData:(id)arg1;

@end

