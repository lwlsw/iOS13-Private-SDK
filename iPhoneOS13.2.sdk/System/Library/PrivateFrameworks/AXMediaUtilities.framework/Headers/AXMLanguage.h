//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@class NSLocale, NSString;

@interface AXMLanguage : NSObject <NSSecureCoding>
{
    NSString *_primaryComponent;
    NSString *_secondaryComponent;
    NSString *_languageCode;
    NSLocale *_locale;
}

+ (BOOL)supportsSecureCoding;
+ (BOOL)languageInSet:(id)arg1 isSupertypeOfLanguage:(id)arg2;
+ (id)languageCodesForLanguages:(id)arg1;
+ (id)currentLocaleLanguage;
+ (id)currentSystemLanguage;
+ (void)_updateDefaultLanguages;
+ (void)initialize;
@property(retain, nonatomic) NSLocale *locale; // @synthesize locale=_locale;
@property(retain, nonatomic) NSString *languageCode; // @synthesize languageCode=_languageCode;
@property(retain, nonatomic) NSString *secondaryComponent; // @synthesize secondaryComponent=_secondaryComponent;
@property(retain, nonatomic) NSString *primaryComponent; // @synthesize primaryComponent=_primaryComponent;
// - (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (NSUInteger)hash;
- (BOOL)isEqualToAXMLanguage:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (id)description;
- (BOOL)isSupertypeOfLanguage:(id)arg1;
- (BOOL)isSubtypeOfLanguage:(id)arg1;
@property(readonly, nonatomic) NSString *languageDisplayName;
- (id)initWithLocale:(id)arg1;
- (id)initWithLanguageCode:(id)arg1;

@end

