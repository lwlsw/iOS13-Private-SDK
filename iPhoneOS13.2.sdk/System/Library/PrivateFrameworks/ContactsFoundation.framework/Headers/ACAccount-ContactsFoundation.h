//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Accounts/ACAccount.h>

@class NSArray, NSNumber, NSString;

@interface ACAccount (ContactsFoundation)
- (void)setPropertiesFromDelegateInfo:(id)arg1;
@property(readonly, copy, nonatomic) NSArray *_cn_appleAccountAppleIDAliases;
@property(readonly, copy, nonatomic) NSString *_cn_appleAccountAppleID;
@property(readonly, nonatomic) BOOL _cn_isChildDelegateAccount;
@property(readonly, nonatomic) BOOL _cn_isCardDAV;
@property(readonly, nonatomic) BOOL _cn_isLDAP;
@property(readonly, nonatomic) BOOL _cn_isPrimaryAccount;
@property(copy, nonatomic) NSString *_cn_lastName;
@property(copy, nonatomic) NSString *_cn_firstName;
@property(copy, nonatomic) NSString *_cn_appleID;
@property(copy, nonatomic) NSString *_cn_principalPath;
@property(copy, nonatomic) NSString *_cn_altDSID;
@property(copy, nonatomic) NSNumber *_cn_dsid;
@end

