//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//



@class AFBulletin, AFUISiriViewController, NSArray, NSString;

@protocol AFUISiriViewControllerDataSource 
- (NSArray *)contextAppInfosForSiriViewController:(AFUISiriViewController *)arg1;
- (unsigned long long)lockStateForSiriViewController:(AFUISiriViewController *)arg1;
- (AFBulletin *)siriViewController:(AFUISiriViewController *)arg1 bulletinWithIdentifier:(NSString *)arg2;
- (NSArray *)bulletinsForSiriViewController:(AFUISiriViewController *)arg1;

@optional
- (NSArray *)currentCarPlaySupportedOEMAppsForSiriViewController:(AFUISiriViewController *)arg1;
- (NSArray *)starkAppBundleIdentifierContextForSiriViewController:(AFUISiriViewController *)arg1;
@end
