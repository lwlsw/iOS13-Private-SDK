//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class NSSet, NSString;

@protocol SRAuthorizationPromptServiceInterface <NSObject>
- (void)deleteAllSamples;
- (void)showResearchData;
- (void)showStudyAuthorizationForBundlePath:(NSString *)arg1;
- (void)showAppsAndStudies;
- (void)showPendingAuthUIForBundlePath:(NSString *)arg1 services:(NSSet *)arg2;
- (void)requestAuthorizationForBundle:(NSString *)arg1 services:(NSSet *)arg2;
@end

