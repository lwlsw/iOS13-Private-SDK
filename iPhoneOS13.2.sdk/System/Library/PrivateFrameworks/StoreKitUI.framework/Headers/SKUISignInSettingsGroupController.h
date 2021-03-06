//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <StoreKitUI/SKUISettingsGroupController.h>

@class NSMapTable, NSString;

__attribute__((visibility("hidden")))
@interface SKUISignInSettingsGroupController : SKUISettingsGroupController
{
    NSString *_accountName;
    BOOL _authenticating;
    NSMapTable *_keyMapping;
    NSString *_password;
    BOOL _valid;
}

// - (void).cxx_destruct;
- (void)_updateValidation;
- (id)_submitSettingDescription;
- (void)_signInSuccess:(id)arg1;
- (void)_signInFailed:(id)arg1 error:(id)arg2;
- (id)_settingDescriptionForKey:(id)arg1;
- (void)_resignFirstResponder;
- (id)_keyForSettingDescription:(id)arg1;
- (void)_becomeFirstResponderWithKey:(id)arg1;
- (void)_updateFieldsAuthenticating:(BOOL)arg1;
- (void)_attemptSignInWithAccountName:(id)arg1 password:(id)arg2;
- (id)valueForSettingDescription:(id)arg1;
- (void)submitSettingDescription:(id)arg1;
- (void)setValue:(id)arg1 forSettingDescription:(id)arg2;
- (void)returnInSettingDescription:(id)arg1;
- (BOOL)isAuthenticating;

@end

