//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class AKAppleIDAuthenticationContext;

@interface AKGrandSlamResponseHandler : NSObject
{
    AKAppleIDAuthenticationContext *_context;
}

@property(retain, nonatomic) AKAppleIDAuthenticationContext *context; // @synthesize context=_context;
// - (void).cxx_destruct;
- (void)_revokeDeviceTrust;
- (void)_handleInvalidMasterTokenWithSubErrorCode:(long long)arg1;
- (void)handleResponseError:(id)arg1;
- (id)initWithContext:(id)arg1;

@end

