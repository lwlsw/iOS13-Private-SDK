//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <DataAccess/DAContainerProvider.h>

@class CNContactStore;

@interface _DAContactsContainerProvider : DAContainerProvider
{
    CNContactStore *_contactStore;
}

@property(readonly, nonatomic) CNContactStore *contactStore; // @synthesize contactStore=_contactStore;
// - (void).cxx_destruct;
- (BOOL)setLastSyncDateForContainer:(id)arg1;
- (void)setDefaultContainer:(id)arg1 withLocalDBHelper:(id)arg2 onlyIfNotSet:(BOOL)arg3;
- (id)createNewContainerWithType:(int)arg1 name:(id)arg2 externalIdentifier:(id)arg3 constraintsPath:(id)arg4 syncData:(id)arg5 contentReadonly:(BOOL)arg6 propertiesReadonly:(BOOL)arg7 forAccount:(id)arg8;
- (id)allContainersForAccountWithExternalIdentifier:(id)arg1;
- (id)allContainers;
- (id)containerWithExternalIdentifier:(id)arg1 forAccountWithExternalIdentifier:(id)arg2;
- (id)initWithContactStore:(id)arg1;

@end

