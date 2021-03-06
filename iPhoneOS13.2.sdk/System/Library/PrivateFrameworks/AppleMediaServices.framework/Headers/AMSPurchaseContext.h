//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class ACAccount, AMSBuyParams, AMSProcessInfo, AMSPurchase, NSDictionary, NSMutableDictionary, NSString;
@protocol AMSPurchaseResponseProtocol;

@interface AMSPurchaseContext : NSObject
{
    BOOL _addKBSync;
    BOOL _hasRetriedOriginalOwnerAccount;
    BOOL _serverBatchCanceled;
    AMSBuyParams *_buyParams;
    NSString *_logUUID;
    ACAccount *_account;
    NSMutableDictionary *_additionalHeaders;
    AMSProcessInfo *_clientInfo;
    id <AMSPurchaseResponseProtocol> _delegate;
    NSDictionary *_dialog;
    NSString *_dialogId;
    AMSPurchase *_purchase;
    long long _retryCount;
}

@property(nonatomic) BOOL serverBatchCanceled; // @synthesize serverBatchCanceled=_serverBatchCanceled;
@property(nonatomic) long long retryCount; // @synthesize retryCount=_retryCount;
@property(readonly, nonatomic) AMSPurchase *purchase; // @synthesize purchase=_purchase;
@property(nonatomic) BOOL hasRetriedOriginalOwnerAccount; // @synthesize hasRetriedOriginalOwnerAccount=_hasRetriedOriginalOwnerAccount;
@property(retain, nonatomic) NSString *dialogId; // @synthesize dialogId=_dialogId;
@property(retain, nonatomic) NSDictionary *dialog; // @synthesize dialog=_dialog;
@property(retain, nonatomic) id <AMSPurchaseResponseProtocol> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) AMSProcessInfo *clientInfo; // @synthesize clientInfo=_clientInfo;
@property(nonatomic) BOOL addKBSync; // @synthesize addKBSync=_addKBSync;
@property(retain, nonatomic) NSMutableDictionary *additionalHeaders; // @synthesize additionalHeaders=_additionalHeaders;
@property(retain, nonatomic) ACAccount *account; // @synthesize account=_account;
@property(readonly, nonatomic) NSString *logUUID; // @synthesize logUUID=_logUUID;
@property(retain, nonatomic) AMSBuyParams *buyParams; // @synthesize buyParams=_buyParams;
// - (void).cxx_destruct;
- (id)_purchaseStringForType:(long long)arg1;
- (id)description;
- (id)initWithPurchase:(id)arg1;

@end

