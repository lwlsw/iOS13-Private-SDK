//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class AALoginPluginManager, AASetupAssistantService, AAStorableLoginContext;

@interface BYAppleIDAccountsManager : NSObject
{
    AALoginPluginManager *_appleIDLoginPluginManager;
    AAStorableLoginContext *_storedLoginContext;
    AASetupAssistantService *_aaService;
}

+ (id)sharedManager;
@property(retain, nonatomic, setter=setAAService:) AASetupAssistantService *aaService; // @synthesize aaService=_aaService;
// - (void).cxx_destruct;
- (void)clearStoredLoginContext;
- (id)storedLoginContext;
- (void)performSilentICDPUpgrade;
- (void)attemptPostRestoreRenewForAccount:(id)arg1 loginContext:(id)arg2 allowFollowUp:(BOOL)arg3 completion:(CDUnknownBlockType)arg4;
- (void)repeatedlyAttemptPostRestoreRenewForAccount:(id)arg1 loginContext:(id)arg2 numberOfAttemptsAllowed:(NSUInteger)arg3 completion:(CDUnknownBlockType)arg4;
- (void)runPostRestoreRenewCredentialsIfNeeded;
- (void)enableDataClassesForAccount:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)loginDelegateAccountsWithUsername:(id)arg1 password:(id)arg2 rawPassword:(id)arg3 skipiTunes:(BOOL)arg4 onlyAppleIDPlugin:(BOOL)arg5 completion:(CDUnknownBlockType)arg6;
- (void)preloadDefaultLoginParametersWithBundleIDs:(id)arg1;
- (id)init;
- (id)initForDelegateBundleIDs:(id)arg1;

@end

