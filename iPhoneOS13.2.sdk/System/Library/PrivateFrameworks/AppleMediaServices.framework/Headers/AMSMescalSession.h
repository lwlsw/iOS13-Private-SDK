//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class AMSMescalFairPlay, AMSURLSession, NSData;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface AMSMescalSession : NSObject
{
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    NSData *_certificateData;
    AMSURLSession *_urlSession;
    AMSMescalFairPlay *_fairPlayContext;
    long long _mescalType;
    BOOL _primed;
}

+ (id)sessionWithType:(long long)arg1;
@property(nonatomic) BOOL primed; // @synthesize primed=_primed;
// - (void).cxx_destruct;
- (BOOL)_verifyPrimeResponse:(id)arg1 error:(id )arg2;
- (BOOL)_verifyEntitlements;
- (BOOL)_shouldRetryFairPlayForError:(id)arg1;
- (void)_resetSession;
- (id)_postExchangeData:(id)arg1 bag:(id)arg2 error:(id )arg3;
- (id)_loadCertificateDataWithBag:(id)arg1 error:(id )arg2;
- (id)_establishContextWithBag:(id)arg1 error:(id )arg2;
- (id)_cachedCertPath;
- (id)_cachedCertData;
- (BOOL)_cacheCertData:(id)arg1 expiration:(double)arg2;
- (BOOL)verifyData:(id)arg1 withSignature:(id)arg2 bag:(id)arg3 error:(id )arg4;
- (id)signData:(id)arg1 bag:(id)arg2 error:(id )arg3;
- (BOOL)primeTheConnectionWithBag:(id)arg1 error:(id )arg2;
- (id)initWithType:(long long)arg1;

@end

