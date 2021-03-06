//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSString;

@interface GKContentPropertyList : NSObject
{
    NSDictionary *_root;
    NSString *_bundleID;
    NSDictionary *_achievementsByIdentifier;
    NSDictionary *_leaderboardsByIdentifier;
    NSDictionary *_leaderboardSetsByIdentifier;
}

+ (id)localPropertyListForGameDescriptor:(id)arg1;
@property(retain) NSString *bundleID; // @synthesize bundleID=_bundleID;
@property(retain) NSDictionary *root; // @synthesize root=_root;
- (id)achievementDescriptions;
- (id)leaderboardSetDescriptionForIdentifier:(id)arg1;
- (id)leaderboardDescriptionForIdentifier:(id)arg1;
- (id)achievementDescriptionForIdentifier:(id)arg1;
- (id)leaderboardSetDescriptions;
- (id)leaderboardDescriptions;
- (id)_rootDictionary;
- (id)imageNameForDashboardLogo;
- (id)localizedStringForKey:(id)arg1;
- (id)localizedStringForKey:(id)arg1 forLocalization:(id)arg2;
- (id)_mainBundle;
- (void)dealloc;

@end

