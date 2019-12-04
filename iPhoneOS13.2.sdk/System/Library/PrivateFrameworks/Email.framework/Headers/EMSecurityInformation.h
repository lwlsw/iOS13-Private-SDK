//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>



@class NSArray, NSError;

@interface EMSecurityInformation : NSObject <NSSecureCoding>
{
    _Bool _isEncrypted;
    _Bool _hasEncryptedDescendantPart;
    NSArray *_signers;
    NSError *_smimeError;
}

+ (_Bool)supportsSecureCoding;
@property(readonly, nonatomic) NSError *smimeError; // @synthesize smimeError=_smimeError;
@property(readonly, nonatomic) _Bool hasEncryptedDescendantPart; // @synthesize hasEncryptedDescendantPart=_hasEncryptedDescendantPart;
@property(readonly, nonatomic) NSArray *signers; // @synthesize signers=_signers;
@property(readonly, nonatomic) _Bool isEncrypted; // @synthesize isEncrypted=_isEncrypted;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)reevaluateTrustWithNetworkAccessAllowed;
@property(readonly, nonatomic) _Bool isSigned;
- (id)initWithSigners:(id)arg1 isEncrypted:(_Bool)arg2 hasEncryptedDescendantPart:(_Bool)arg3 smimeError:(id)arg4;

@end
