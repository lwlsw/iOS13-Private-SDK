//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@class AFAccount, NSNumber, NSString;

@interface AFUISiriSessionInfo : NSObject <NSSecureCoding, NSCopying>
{
    NSString *_identifier;
    NSString *_assistantVersion;
    AFAccount *_activeAccount;
    NSNumber *_userAccountCount;
}

+ (BOOL)supportsSecureCoding;
@property(copy, nonatomic) NSNumber *userAccountCount; // @synthesize userAccountCount=_userAccountCount;
@property(copy, nonatomic) AFAccount *activeAccount; // @synthesize activeAccount=_activeAccount;
@property(copy, nonatomic) NSString *assistantVersion; // @synthesize assistantVersion=_assistantVersion;
@property(readonly, copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
// - (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
// - (id)copyWithZone:(_NSZone )arg1;
- (id)description;
- (BOOL)isEqual:(id)arg1;
- (id)_initWithIdentifier:(id)arg1;
- (id)init;
- (id)_strippedInfo;
- (BOOL)applyInfo:(id)arg1;
- (id)_setPropertyValue:(id)arg1 withSelector:(SEL)arg2;
- (id)setUserAccountCountGenerateLightweightInfo:(long long)arg1;
- (id)setActiveAccountAndGenerateLightweightInfo:(id)arg1;
- (id)setAssistantVersionAndGenerateLightweightInfo:(id)arg1;

@end

