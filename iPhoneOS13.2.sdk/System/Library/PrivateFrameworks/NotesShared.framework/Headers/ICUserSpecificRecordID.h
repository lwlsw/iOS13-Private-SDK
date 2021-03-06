//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class CKRecordID, NSString;

@interface ICUserSpecificRecordID : NSObject
{
    NSString *_recordType;
    NSString *_shareOwnerName;
    long long _databaseScope;
    NSString *_zoneName;
    NSString *_userSpecificOwnerName;
    NSString *_sharedRecordName;
}

+ (BOOL)isUserSpecificRecordID:(id)arg1;
+ (BOOL)isUserSpecificRecordType:(id)arg1;
+ (id)userSpecificRecordTypeFromSharedRecordType:(id)arg1;
@property(retain, nonatomic) NSString *sharedRecordName; // @synthesize sharedRecordName=_sharedRecordName;
@property(retain, nonatomic) NSString *userSpecificOwnerName; // @synthesize userSpecificOwnerName=_userSpecificOwnerName;
@property(retain, nonatomic) NSString *zoneName; // @synthesize zoneName=_zoneName;
@property(nonatomic) long long databaseScope; // @synthesize databaseScope=_databaseScope;
@property(retain, nonatomic) NSString *shareOwnerName; // @synthesize shareOwnerName=_shareOwnerName;
@property(retain, nonatomic) NSString *recordType; // @synthesize recordType=_recordType;
// - (void).cxx_destruct;
@property(readonly, nonatomic) CKRecordID *sharedRecordID;
@property(readonly, nonatomic) NSString *sharedRecordType;
@property(readonly, nonatomic) CKRecordID *recordID;
@property(readonly, nonatomic) NSString *recordName;
- (id)initWithRecordName:(id)arg1;
- (id)initWithRecordType:(id)arg1 shareOwnerName:(id)arg2 databaseScope:(long long)arg3 zoneName:(id)arg4 userSpecificOwnerName:(id)arg5 sharedRecordName:(id)arg6;

@end

