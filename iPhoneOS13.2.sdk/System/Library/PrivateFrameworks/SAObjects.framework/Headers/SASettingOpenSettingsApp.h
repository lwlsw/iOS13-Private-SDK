//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SAObjects/SASettingOpenSettings.h>

#import <SAObjects/SASettingSettingsAction-Protocol.h>

@interface SASettingOpenSettingsApp : SASettingOpenSettings <SASettingSettingsAction>
{
}

+ (id)openSettingsAppWithDictionary:(id)arg1 context:(id)arg2;
+ (id)openSettingsApp;
- (BOOL)requiresResponse;
- (id)encodedClassName;
- (id)groupIdentifier;

@end

