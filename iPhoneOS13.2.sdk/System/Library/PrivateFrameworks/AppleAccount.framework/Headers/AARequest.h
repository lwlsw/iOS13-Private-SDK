//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@class NSDictionary, NSString, NSURLRequest;

@interface AARequest : NSObject <NSURLSessionDataDelegate>
{
    id /* CDUnknownBlockType */ _handler;
    NSString *_initialURLString;
    BOOL _flushCache;
//    struct OpaqueCFHTTPCookieStorage _cookieStorage;
    NSString *_oneTimePassword;
    NSString *_machineId;
    NSDictionary *_customHeaders;
}

+ (id)protocolVersion;
+ (Class)responseClass;
@property(copy, nonatomic) NSDictionary *customHeaders; // @synthesize customHeaders=_customHeaders;
@property(nonatomic) BOOL flushCache; // @synthesize flushCache=_flushCache;
// - (void).cxx_destruct;
- (id)_redactedHeadersFromHTTPHeaders:(id)arg1;
- (id)redactedBodyStringWithPropertyList:(id)arg1;
- (void)dealloc;
- (void)_handleDataTaskCompletionWithData:(id)arg1 response:(id)arg2 error:(id)arg3;
- (void)performRequestWithHandler:(CDUnknownBlockType)arg1;
- (id)bodyDictionary;
- (id)urlCredential;
@property(readonly) NSURLRequest *urlRequest;
- (id)urlString;
- (void)setDeviceProvisioningMachineId:(id)arg1;
- (void)setDeviceProvisioningOneTimePassword:(id)arg1;
//  (void)setCookieStorage:(struct OpaqueCFHTTPCookieStorage )arg1;
- (id)initWithURLString:(id)arg1;

@end

