//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SAObjects/SASettingCommand.h>

@class NSNumber, NSString;

@interface SASettingShowPassword : SASettingCommand
{
}

+ (id)showPasswordWithDictionary:(id)arg1 context:(id)arg2;
+ (id)showPassword;
- (BOOL)requiresResponse;
@property(copy, nonatomic) NSString *spokenAppOrWebsiteName;
@property(copy, nonatomic) NSNumber *shouldPromptForAuthentication;
@property(copy, nonatomic) NSString *appOrWebsiteName;
@property(copy, nonatomic) NSString *appBundleId;
- (id)encodedClassName;
- (id)groupIdentifier;

@end

