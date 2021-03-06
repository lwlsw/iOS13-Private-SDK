//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@class NSData, NSString;

@interface CSVoiceTriggerRTModel : NSObject <NSSecureCoding>
{
    NSData *_modelData;
    NSString *_modelLocale;
    NSString *_modelHash;
    NSData *_digest;
    NSData *_signature;
    NSData *_certificate;
}

+ (BOOL)supportsSecureCoding;
@property(readonly, nonatomic) NSData *certificate; // @synthesize certificate=_certificate;
@property(readonly, nonatomic) NSData *signature; // @synthesize signature=_signature;
@property(readonly, nonatomic) NSData *digest; // @synthesize digest=_digest;
@property(readonly, nonatomic) NSString *modelHash; // @synthesize modelHash=_modelHash;
@property(readonly, nonatomic) NSString *modelLocale; // @synthesize modelLocale=_modelLocale;
@property(readonly, nonatomic) NSData *modelData; // @synthesize modelData=_modelData;
// - (void).cxx_destruct;
- (id)description;
- (id)builtInRTModelDictionary;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithData:(id)arg1 hash:(id)arg2 locale:(id)arg3;
- (id)initWithHash:(id)arg1 locale:(id)arg2;
- (id)initWithData:(id)arg1 hash:(id)arg2 locale:(id)arg3 digest:(id)arg4 signature:(id)arg5 certificate:(id)arg6;

@end

