//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Accounts/ACAccount.h>

@class NSArray, NSDate, NSDictionary, NSNumber, NSSet, NSString;

@interface ACAccount (ICAccountAdditions)
@property(readonly, copy, nonatomic) NSDictionary *ic_privateListeningEnabledForHomeUsers;
@property(copy, nonatomic, setter=ic_setPrivateListeningEnabled:) NSNumber *ic_privateListeningEnabled;
@property(copy, nonatomic, setter=ic_setAutomaticDownloadKinds:) NSSet *ic_automaticDownloadKinds;
@property(readonly, nonatomic, getter=ic_isManageable) BOOL ic_manageable;
@property(readonly, nonatomic, getter=ic_isLocalAccount) BOOL ic_localAccount;
@property(copy, nonatomic, setter=ic_setCloudLibraryStateReason:) NSDictionary *ic_cloudLibraryStateReason;
@property(readonly, copy, nonatomic) NSArray *ic_homeUserIdentifiers;
@property(nonatomic, getter=ic_isSubscriptionStatusEnabled, setter=ic_setSubscriptionStatusEnabled:) BOOL ic_subscriptionStatusEnabled;
@property(copy, nonatomic, setter=ic_setMergeWithCloudLibraryPreference:) NSNumber *ic_mergeWithCloudLibraryPreference;
@property(copy, nonatomic, setter=ic_setAgeVerificationExpirationDate:) NSDate *ic_ageVerificationExpirationDate;
@property(nonatomic, getter=ic_isManagedAppleID, setter=ic_setManagedAppleID:) BOOL ic_managedAppleID;
@property(readonly, nonatomic, getter=ic_isCloudBackupEnabled) BOOL ic_cloudBackupEnabled;
@property(nonatomic, getter=ic_isActiveLockerAccount, setter=ic_setActiveLockerAccount:) BOOL ic_activeLockerAccount;
@property(nonatomic, getter=ic_isSandboxed, setter=ic_setSandboxed:) BOOL ic_sandboxed;
@property(copy, nonatomic, setter=ic_setUniqueIdentifier:) NSNumber *ic_uniqueIdentifier;
@property(copy, nonatomic, setter=ic_setStorefront:) NSString *ic_storefront;
@property(copy, nonatomic, setter=ic_setLastName:) NSString *ic_lastName;
@property(copy, nonatomic, setter=ic_setFirstName:) NSString *ic_firstName;
@property(copy, nonatomic, setter=ic_setAltDSID:) NSString *ic_altDSID;
@property(copy, nonatomic, setter=ic_setDSID:) NSNumber *ic_DSID;
@end

