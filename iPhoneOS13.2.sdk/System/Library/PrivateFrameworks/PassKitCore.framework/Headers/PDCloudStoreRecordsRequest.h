//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class CKQuery, CKRecordZone, NSArray, NSMutableArray, NSString;

@interface PDCloudStoreRecordsRequest : NSObject
{
    BOOL _storeChangesInDatabase;
    BOOL _returnRecords;
    BOOL _useLastChangeToken;
    BOOL _shouldSaveToken;
    NSString *_groupName;
    NSString *_groupNameSuffix;
    long long _qualityOfService;
    NSUInteger _requestType;
    CKRecordZone *_zone;
    CKQuery *_ckQuery;
    NSArray *_recordsToSave;
    NSArray *_recordIDs;
    NSMutableArray *_completionHandlers;
}

@property(retain, nonatomic) NSMutableArray *completionHandlers; // @synthesize completionHandlers=_completionHandlers;
@property(retain, nonatomic) NSArray *recordIDs; // @synthesize recordIDs=_recordIDs;
@property(retain, nonatomic) NSArray *recordsToSave; // @synthesize recordsToSave=_recordsToSave;
@property(retain, nonatomic) CKQuery *ckQuery; // @synthesize ckQuery=_ckQuery;
@property(retain, nonatomic) CKRecordZone *zone; // @synthesize zone=_zone;
@property(nonatomic) BOOL shouldSaveToken; // @synthesize shouldSaveToken=_shouldSaveToken;
@property(nonatomic) BOOL useLastChangeToken; // @synthesize useLastChangeToken=_useLastChangeToken;
@property(nonatomic) NSUInteger requestType; // @synthesize requestType=_requestType;
@property(nonatomic) long long qualityOfService; // @synthesize qualityOfService=_qualityOfService;
@property(retain, nonatomic) NSString *groupNameSuffix; // @synthesize groupNameSuffix=_groupNameSuffix;
@property(retain, nonatomic) NSString *groupName; // @synthesize groupName=_groupName;
@property(nonatomic) BOOL returnRecords; // @synthesize returnRecords=_returnRecords;
@property(nonatomic) BOOL storeChangesInDatabase; // @synthesize storeChangesInDatabase=_storeChangesInDatabase;
// - (void).cxx_destruct;
- (id)description;
- (id)initWithRequestType:(NSUInteger)arg1 storeChanges:(BOOL)arg2 returnRecords:(BOOL)arg3 qualityOfService:(long long)arg4 groupName:(id)arg5 groupNameSuffix:(id)arg6;

@end

