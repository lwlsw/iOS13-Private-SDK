//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class HDProfile, NSDate, NSString, NSUUID;

@interface HDCloudSyncEvent : NSObject
{
    BOOL _cloudKitManateeEnabled;
    BOOL _internalSettingManateeEnabled;
    unsigned int _pcsReportManateeStatus;
    long long _operation;
    long long _reason;
    NSUInteger _options;
    NSString *_syncCirclePrefix;
    NSString *_containerIdentifier;
    NSUUID *_syncID;
    NSUUID *_operationID;
    NSString *_cloudKitIdentifer;
    HDProfile *_profile;
    NSDate *_eventTime;
}

@property(readonly, copy, nonatomic) NSDate *eventTime; // @synthesize eventTime=_eventTime;
@property(readonly, nonatomic) __weak HDProfile *profile; // @synthesize profile=_profile;
@property(readonly, nonatomic) unsigned int pcsReportManateeStatus; // @synthesize pcsReportManateeStatus=_pcsReportManateeStatus;
@property(readonly, nonatomic) BOOL internalSettingManateeEnabled; // @synthesize internalSettingManateeEnabled=_internalSettingManateeEnabled;
@property(readonly, nonatomic) BOOL cloudKitManateeEnabled; // @synthesize cloudKitManateeEnabled=_cloudKitManateeEnabled;
@property(readonly, copy, nonatomic) NSString *cloudKitIdentifer; // @synthesize cloudKitIdentifer=_cloudKitIdentifer;
@property(readonly, copy, nonatomic) NSUUID *operationID; // @synthesize operationID=_operationID;
@property(readonly, copy, nonatomic) NSUUID *syncID; // @synthesize syncID=_syncID;
@property(readonly, copy, nonatomic) NSString *containerIdentifier; // @synthesize containerIdentifier=_containerIdentifier;
@property(readonly, copy, nonatomic) NSString *syncCirclePrefix; // @synthesize syncCirclePrefix=_syncCirclePrefix;
@property(readonly, nonatomic) NSUInteger options; // @synthesize options=_options;
@property(readonly, nonatomic) long long reason; // @synthesize reason=_reason;
@property(readonly, nonatomic) long long operation; // @synthesize operation=_operation;
// - (void).cxx_destruct;
- (id)description;
- (id)codableEventForAWDSubmission;
- (id)initWithProfile:(id)arg1 operation:(long long)arg2 reason:(long long)arg3 options:(NSUInteger)arg4 syncCirclePrefix:(id)arg5 containerID:(id)arg6 cloudKitIdentifier:(id)arg7 syncID:(id)arg8 operationID:(id)arg9 cloudKitManateeEnabled:(BOOL)arg10 internalSettingManateeEnabled:(BOOL)arg11;

@end

