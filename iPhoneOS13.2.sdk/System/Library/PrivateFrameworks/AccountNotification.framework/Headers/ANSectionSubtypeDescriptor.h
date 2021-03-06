//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@class NSString;

@interface ANSectionSubtypeDescriptor : NSObject <NSSecureCoding>
{
    BOOL _allowsAddingToLockScreenWhenUnlocked;
    NSString *_accountTypeID;
    long long _subtype;
    NSString *_fullUnlockActionLabel;
}

+ (BOOL)supportsSecureCoding;
@property(copy, nonatomic) NSString *fullUnlockActionLabel; // @synthesize fullUnlockActionLabel=_fullUnlockActionLabel;
@property(nonatomic) BOOL allowsAddingToLockScreenWhenUnlocked; // @synthesize allowsAddingToLockScreenWhenUnlocked=_allowsAddingToLockScreenWhenUnlocked;
@property(nonatomic) long long subtype; // @synthesize subtype=_subtype;
@property(readonly, nonatomic) NSString *accountTypeID; // @synthesize accountTypeID=_accountTypeID;
// - (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initForAccountWithType:(id)arg1;
- (id)init;

@end

