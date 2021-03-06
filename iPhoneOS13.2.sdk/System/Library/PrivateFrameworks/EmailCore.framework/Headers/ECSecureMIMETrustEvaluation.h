//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <EmailCore/EFLoggable-Protocol.h>

@class NSError, NSString;

@interface ECSecureMIMETrustEvaluation : NSObject <EFLoggable>
{
    unsigned int _trustResult;
//     struct __SecTrust _trust;
    NSString *_signerEmailAddress;
    NSUInteger _options;
    NSError *_error;
}

+ (void)setAnchorCertificatesForTesting:(id)arg1;
+ (id)anchorCertificatesForTesting;
+ (id)reevaluateWithNetworkAccessAllowed:(id)arg1;
// + (id)evaluateTrust:(struct __SecTrust )arg1 withOptions:(NSUInteger)arg2 signerEmailAddress:(id)arg3;
+ (id)log;
@property(readonly, nonatomic) unsigned int trustResult; // @synthesize trustResult=_trustResult;
@property(readonly, nonatomic) NSError *error; // @synthesize error=_error;
@property(readonly, nonatomic) NSUInteger options; // @synthesize options=_options;
@property(readonly, copy, nonatomic) NSString *signerEmailAddress; // @synthesize signerEmailAddress=_signerEmailAddress;
// @property(readonly, nonatomic) struct __SecTrust trust; // @synthesize trust=_trust;
// - (void).cxx_destruct;
@property(readonly, nonatomic) BOOL requiresReevaluationWithNetworkAccess;
- (void)_evaluate;
@property(readonly, copy) NSString *description;
- (void)dealloc;
// - (id)_initWithTrust:(struct __SecTrust )arg1 options:(NSUInteger)arg2 signerEmailAddress:(id)arg3;

@end

