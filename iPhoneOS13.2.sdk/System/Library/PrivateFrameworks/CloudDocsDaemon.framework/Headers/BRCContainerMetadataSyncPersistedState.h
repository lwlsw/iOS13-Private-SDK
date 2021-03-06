//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CloudDocsDaemon/BRCPersistedState.h>

@class CKOperationGroup, CKServerChangeToken, NSDate;

__attribute__((visibility("hidden")))
@interface BRCContainerMetadataSyncPersistedState : BRCPersistedState
{
    BOOL _needsContainerMetadataSyncDown;
    BOOL _needsSharedDBSyncDown;
    CKServerChangeToken *_serverChangeToken;
    NSDate *_lastSyncDate;
    CKOperationGroup *_ckGroup;
}

+ (BOOL)supportsSecureCoding;
+ (id)loadFromClientStateInSession:(id)arg1 options:(id)arg2;
@property(retain, nonatomic) CKOperationGroup *ckGroup; // @synthesize ckGroup=_ckGroup;
@property(nonatomic) BOOL needsSharedDBSyncDown; // @synthesize needsSharedDBSyncDown=_needsSharedDBSyncDown;
@property(nonatomic) BOOL needsContainerMetadataSyncDown; // @synthesize needsContainerMetadataSyncDown=_needsContainerMetadataSyncDown;
@property(retain) NSDate *lastSyncDate; // @synthesize lastSyncDate=_lastSyncDate;
@property(retain, nonatomic) CKServerChangeToken *serverChangeToken; // @synthesize serverChangeToken=_serverChangeToken;
// - (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)init;
- (id)description;

@end

