//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@class AKUserInformation;

@interface AKAuthorizationScopesUserSelection : NSObject <NSSecureCoding>
{
    BOOL _makePrivateEmail;
    AKUserInformation *_userInformation;
}

+ (BOOL)supportsSecureCoding;
@property(nonatomic) BOOL makePrivateEmail; // @synthesize makePrivateEmail=_makePrivateEmail;
@property(copy, nonatomic) AKUserInformation *userInformation; // @synthesize userInformation=_userInformation;
// - (void).cxx_destruct;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

