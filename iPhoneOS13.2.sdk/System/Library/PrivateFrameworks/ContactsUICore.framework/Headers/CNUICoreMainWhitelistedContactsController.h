//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <ContactsUICore/CNUICoreFamilyMemberWhitelistedContactsDataSource-Protocol.h>

@class CNFuture, NSArray;
@protocol CNCancelable, CNScheduler, CNSchedulerProvider, CNUICoreContactStoreFacade, CNUICoreFamilyMemberContactsModelFetching, CNUICoreFamilyMemberContactsObserver;

@interface CNUICoreMainWhitelistedContactsController : NSObject <CNUICoreFamilyMemberWhitelistedContactsDataSource>
{
    NSArray *_familyMemberContactItems;
    id <CNUICoreFamilyMemberContactsObserver> _observer;
    id <CNUICoreFamilyMemberContactsModelFetching> _modelFetcher;
    id <CNUICoreContactStoreFacade> _mainContactStoreFacade;
    id <CNSchedulerProvider> _schedulerProvider;
    CNFuture *_familyMemberContactItemsFuture;
    CNFuture *_addContactsToWhitelistFuture;
    CNFuture *_updateContactsInWhitelistFuture;
    CNFuture *_deleteContactsFromWhitelistFuture;
    id <CNCancelable> _contactStoreDidChangeToken;
}

+ (id)controllerWithOptions:(id)arg1 schedulerProvider:(id)arg2;
@property(readonly, nonatomic) id <CNCancelable> contactStoreDidChangeToken; // @synthesize contactStoreDidChangeToken=_contactStoreDidChangeToken;
@property(retain, nonatomic) CNFuture *deleteContactsFromWhitelistFuture; // @synthesize deleteContactsFromWhitelistFuture=_deleteContactsFromWhitelistFuture;
@property(retain, nonatomic) CNFuture *updateContactsInWhitelistFuture; // @synthesize updateContactsInWhitelistFuture=_updateContactsInWhitelistFuture;
@property(retain, nonatomic) CNFuture *addContactsToWhitelistFuture; // @synthesize addContactsToWhitelistFuture=_addContactsToWhitelistFuture;
@property(retain, nonatomic) CNFuture *familyMemberContactItemsFuture; // @synthesize familyMemberContactItemsFuture=_familyMemberContactItemsFuture;
@property(readonly, nonatomic) id <CNSchedulerProvider> schedulerProvider; // @synthesize schedulerProvider=_schedulerProvider;
@property(readonly, nonatomic) id <CNUICoreContactStoreFacade> mainContactStoreFacade; // @synthesize mainContactStoreFacade=_mainContactStoreFacade;
@property(readonly, nonatomic) id <CNUICoreFamilyMemberContactsModelFetching> modelFetcher; // @synthesize modelFetcher=_modelFetcher;
@property(nonatomic) __weak id <CNUICoreFamilyMemberContactsObserver> observer; // @synthesize observer=_observer;
// - (void).cxx_destruct;
- (void)finishWhitelistedContactsTasks;
- (id)contactRepresentingItem:(id)arg1;
- (void)updateWhitelistByRemovingContacts:(id)arg1;
- (void)updateWhitelistByUpdatingContacts:(id)arg1;
- (void)updateWhitelistByAddingContacts:(id)arg1;
- (id)contactItemFutureFromFetcher;
- (void)cancelContactItemsFetch;
- (void)triggerContactItemsFetch;
@property(retain, nonatomic) NSArray *familyMemberContactItems; // @synthesize familyMemberContactItems=_familyMemberContactItems;
@property(readonly, nonatomic) BOOL familyMemberContainerIsEmpty;
@property(readonly, nonatomic) long long fetchStatus;
@property(readonly, nonatomic) id <CNScheduler> backgroundOrImmediateScheduler;
- (void)dealloc;
- (void)setupChangeNotificationResponse;
- (id)initWithModelFetcher:(id)arg1 mainContactStoreFacade:(id)arg2 schedulerProvider:(id)arg3;
- (id)initWiththOptions:(id)arg1 mainContactStoreFacade:(id)arg2 schedulerProvider:(id)arg3;
- (id)init;

@end

