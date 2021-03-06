//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class CNContact, CNUICoreFamilyMemberContactItem, NSArray;
@protocol CNUICoreFamilyMemberContactsObserver;

@protocol CNUICoreFamilyMemberWhitelistedContactsDataSource <NSObject>
@property(readonly, nonatomic) BOOL familyMemberContainerIsEmpty;
@property(readonly, nonatomic) NSArray *familyMemberContactItems;
@property(readonly, nonatomic) long long fetchStatus;
@property(nonatomic) __weak id <CNUICoreFamilyMemberContactsObserver> observer;
- (void)finishWhitelistedContactsTasks;
- (CNContact *)contactRepresentingItem:(CNUICoreFamilyMemberContactItem *)arg1;
- (void)updateWhitelistByRemovingContacts:(NSArray *)arg1;
- (void)updateWhitelistByUpdatingContacts:(NSArray *)arg1;
- (void)updateWhitelistByAddingContacts:(NSArray *)arg1;
@end

