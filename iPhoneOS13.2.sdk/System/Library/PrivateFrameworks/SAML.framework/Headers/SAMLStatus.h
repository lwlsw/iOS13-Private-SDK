//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SAML/SAMLBaseElement.h>

@class NSString, SAMLStatusCode;

__attribute__((visibility("hidden")))
@interface SAMLStatus : SAMLBaseElement
{
}

+ (id)createElement:(id )arg1;
- (id)status;
@property(readonly, nonatomic) NSString *statusDetail;
@property(readonly, nonatomic) NSString *statusMessage;
@property(readonly, nonatomic) SAMLStatusCode *statusCode;

@end

