//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SecurityFoundation/_SFAsymmetricKeySpecifier.h>

@interface _SFECKeySpecifier : _SFAsymmetricKeySpecifier
{
    id _ecKeySpecifierInternal;
}

+ (_Bool)supportsSecureCoding;
+ (Class)keyClass;
@property long long curve;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithCurve:(long long)arg1;

@end
