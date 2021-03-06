//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ManagedConfiguration/MCPayload.h>

@class NSNumber, NSString;

@interface MCGlobalHTTPProxyPayload : MCPayload
{
    BOOL _proxyPACFallbackAllowed;
    BOOL _proxyCaptiveLoginAllowed;
    int _proxyType;
    NSString *_proxyServer;
    NSNumber *_proxyServerPort;
    NSString *_proxyUsername;
    NSString *_proxyPassword;
    NSString *_proxyPACURLString;
    NSString *_credentialUUID;
    NSNumber *_proxyPACFallbackAllowedNum;
    NSNumber *_proxyCaptiveLoginAllowedNum;
}

+ (id)localizedPluralForm;
+ (id)localizedSingularForm;
+ (id)typeStrings;
@property(retain, nonatomic) NSNumber *proxyCaptiveLoginAllowedNum; // @synthesize proxyCaptiveLoginAllowedNum=_proxyCaptiveLoginAllowedNum;
@property(retain, nonatomic) NSNumber *proxyPACFallbackAllowedNum; // @synthesize proxyPACFallbackAllowedNum=_proxyPACFallbackAllowedNum;
@property(nonatomic) BOOL proxyCaptiveLoginAllowed; // @synthesize proxyCaptiveLoginAllowed=_proxyCaptiveLoginAllowed;
@property(nonatomic) BOOL proxyPACFallbackAllowed; // @synthesize proxyPACFallbackAllowed=_proxyPACFallbackAllowed;
@property(retain, nonatomic) NSString *credentialUUID; // @synthesize credentialUUID=_credentialUUID;
@property(retain, nonatomic) NSString *proxyPACURLString; // @synthesize proxyPACURLString=_proxyPACURLString;
@property(retain, nonatomic) NSString *proxyPassword; // @synthesize proxyPassword=_proxyPassword;
@property(retain, nonatomic) NSString *proxyUsername; // @synthesize proxyUsername=_proxyUsername;
@property(retain, nonatomic) NSNumber *proxyServerPort; // @synthesize proxyServerPort=_proxyServerPort;
@property(retain, nonatomic) NSString *proxyServer; // @synthesize proxyServer=_proxyServer;
@property(nonatomic) int proxyType; // @synthesize proxyType=_proxyType;
// - (void).cxx_destruct;
- (id)installationWarnings;
- (id)description;
- (id)payloadDescriptionKeyValueSections;
- (id)subtitle2Description;
- (id)subtitle2Label;
- (id)subtitle1Description;
- (id)subtitle1Label;
- (id)stubDictionary;
- (id)initWithDictionary:(id)arg1 profile:(id)arg2 outError:(id )arg3;

@end

