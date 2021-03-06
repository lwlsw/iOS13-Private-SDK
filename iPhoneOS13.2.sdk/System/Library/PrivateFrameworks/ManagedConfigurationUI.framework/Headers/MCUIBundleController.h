//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Preferences/PSBundleController.h>

@class NPSDomainAccessor, PSListController, PSSpecifier;

@interface MCUIBundleController : PSBundleController
{
    PSListController *_parentController;
    PSSpecifier *_specifier;
    NPSDomainAccessor *_nanoDomainAccessor;
}

+ (id)provisioningProfiles;
+ (id)provisioningProfilesWithValidityCheck:(BOOL)arg1;
+ (id)configurationProfiles;
+ (id)sharedInstance;
+ (BOOL)isForPairedDevice;
@property(retain, nonatomic) NPSDomainAccessor *nanoDomainAccessor; // @synthesize nanoDomainAccessor=_nanoDomainAccessor;
@property(retain, nonatomic) PSSpecifier *specifier; // @synthesize specifier=_specifier;
@property(nonatomic) __weak PSListController *parentController; // @synthesize parentController=_parentController;
// - (void).cxx_destruct;
- (void)_unpairedNotification:(id)arg1;
- (void)updateUI:(id)arg1;
- (id)specifiersWithSpecifier:(id)arg1;
- (void)_updateSpecifierControllerClass;
- (void)_updateSpecifierProfileInfo;
- (id)_profileInfoForSpecifier:(id)arg1;
- (Class)_controllerClassForCurrentProfilesAndUpdatedUserInfo:(id)arg1;
- (void)decrementNanoProfileCount;
- (void)incrementNanoProfileCount;
@property(nonatomic) NSUInteger nanoProfileCount;
- (BOOL)_isProfileSectionEmpty;
- (id)_specifier;
- (void)unload;
- (void)load;
- (void)dealloc;
- (id)initWithParentListController:(id)arg1 properties:(id)arg2;

@end

