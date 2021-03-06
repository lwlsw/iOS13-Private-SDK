//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@class MIStoreMetadata, NSArray, NSData, NSDictionary;

@interface MIInstallOptions : NSObject <NSSecureCoding, NSCopying>
{
    BOOL _developerInstall;
    BOOL _systemAppInstall;
    BOOL _userInitiated;
    BOOL _waitForDeletion;
    BOOL _skipWatchAppInstall;
    BOOL _skipBlacklist;
    BOOL _installForMigrator;
    BOOL _allowLocalProvisioned;
    BOOL _performAPFSClone;
    NSUInteger _installTargetType;
    NSUInteger _lsInstallType;
    MIStoreMetadata *_iTunesMetadata;
    NSData *_sinfData;
    NSData *_iTunesArtworkData;
    NSData *_geoJSONData;
    NSArray *_provisioningProfiles;
    NSUInteger _autoInstallOverride;
}

+ (BOOL)supportsSecureCoding;
@property(nonatomic) NSUInteger autoInstallOverride; // @synthesize autoInstallOverride=_autoInstallOverride;
@property(nonatomic) BOOL performAPFSClone; // @synthesize performAPFSClone=_performAPFSClone;
@property(nonatomic) BOOL allowLocalProvisioned; // @synthesize allowLocalProvisioned=_allowLocalProvisioned;
@property(nonatomic) BOOL installForMigrator; // @synthesize installForMigrator=_installForMigrator;
@property(nonatomic) BOOL skipBlacklist; // @synthesize skipBlacklist=_skipBlacklist;
@property(nonatomic) BOOL skipWatchAppInstall; // @synthesize skipWatchAppInstall=_skipWatchAppInstall;
@property(copy, nonatomic) NSArray *provisioningProfiles; // @synthesize provisioningProfiles=_provisioningProfiles;
@property(copy, nonatomic) NSData *geoJSONData; // @synthesize geoJSONData=_geoJSONData;
@property(copy, nonatomic) NSData *iTunesArtworkData; // @synthesize iTunesArtworkData=_iTunesArtworkData;
@property(copy, nonatomic) NSData *sinfData; // @synthesize sinfData=_sinfData;
@property(copy, nonatomic) MIStoreMetadata *iTunesMetadata; // @synthesize iTunesMetadata=_iTunesMetadata;
@property(nonatomic) NSUInteger lsInstallType; // @synthesize lsInstallType=_lsInstallType;
@property(nonatomic) BOOL waitForDeletion; // @synthesize waitForDeletion=_waitForDeletion;
@property(nonatomic, getter=isUserInitiated) BOOL userInitiated; // @synthesize userInitiated=_userInitiated;
@property(nonatomic, getter=isSystemAppInstall) BOOL systemAppInstall; // @synthesize systemAppInstall=_systemAppInstall;
@property(nonatomic, getter=isDeveloperInstall) BOOL developerInstall; // @synthesize developerInstall=_developerInstall;
@property(nonatomic) NSUInteger installTargetType; // @synthesize installTargetType=_installTargetType;
// - (void).cxx_destruct;
- (id)description;
- (BOOL)isEqual:(id)arg1;
@property(readonly, copy, nonatomic) NSDictionary *legacyOptionsDictionary;
// - (id)copyWithZone:(_NSZone )arg1;
- (id)initWithLegacyOptionsDictionary:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

