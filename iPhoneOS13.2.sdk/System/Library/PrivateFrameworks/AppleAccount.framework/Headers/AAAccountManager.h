//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class ACAccountStore, NSMutableArray;

@interface AAAccountManager : NSObject
{
    ACAccountStore *_accountStore;
    NSMutableArray *_accounts;
    NSMutableArray *_originalAccounts;
    id _accountStoreDidChangeObserver;
}

+ (id)sharedManager;
// - (void).cxx_destruct;
- (void)saveAllAccounts;
- (void)removeAccount:(id)arg1;
- (void)updateAccount:(id)arg1;
- (void)addAccount:(id)arg1;
- (id)accountWithIdentifier:(id)arg1;
- (id)accountWithPersonID:(id)arg1;
- (id)accountWithUsername:(id)arg1;
- (id)accountsEnabledForDataclass:(id)arg1;
- (id)primaryAccount;
- (void)reloadAccounts;
- (id)accounts;
- (void)_stopObservingAccountStoreDidChangeNotification;
- (void)_beginObservingAccountStoreDidChangeNotification;
- (id)_accountStore;
- (void)dealloc;

@end

