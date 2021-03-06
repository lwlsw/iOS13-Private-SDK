//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <AuthKit/AKCredential-Protocol.h>

@class NSString;

@interface AKPasswordCredential : NSObject <AKCredential>
{
    NSString *_userIdentifier;
    NSString *_password;
}

+ (BOOL)supportsSecureCoding;
@property(readonly, copy, nonatomic) NSString *password; // @synthesize password=_password;
@property(readonly, copy, nonatomic) NSString *userIdentifier; // @synthesize userIdentifier=_userIdentifier;
// - (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithUser:(id)arg1 password:(id)arg2;

@end

