//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FrontBoardServices/FBSSettingsDiff.h>

@interface FBSSceneSettingsDiff : FBSSettingsDiff
{
}

+ (id)diffFromSettings:(id)arg1 toSettings:(id)arg2;
- (id)valueDescriptionForFlag:(long long)arg1 object:(id)arg2 ofSetting:(NSUInteger)arg3;
- (id)keyDescriptionForSetting:(NSUInteger)arg1;
- (id)settingsByApplyingToMutableCopyOfSettings:(id)arg1;
- (void)evaluateWithInspector:(id)arg1 context:(void )arg2;

@end

