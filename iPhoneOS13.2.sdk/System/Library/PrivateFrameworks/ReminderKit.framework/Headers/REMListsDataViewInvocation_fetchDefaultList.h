//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ReminderKit/REMStoreInvocation.h>


@interface REMListsDataViewInvocation_fetchDefaultList : REMStoreInvocation <NSSecureCoding>
{
    BOOL _keepDefaultOnly;
}

+ (BOOL)supportsSecureCoding;
@property(readonly, nonatomic) BOOL keepDefaultOnly; // @synthesize keepDefaultOnly=_keepDefaultOnly;
// - (id)copyWithZone:(_NSZone )arg1;
- (NSUInteger)hash;
- (BOOL)isEqual:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithKeepDefaultOnly:(BOOL)arg1;

@end

