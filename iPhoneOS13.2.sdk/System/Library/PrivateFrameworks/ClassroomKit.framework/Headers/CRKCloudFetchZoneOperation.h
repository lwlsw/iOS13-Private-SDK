//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ClassroomKit/CRKCloudOperation.h>

#import <ClassroomKit/CRKCloudResetable-Protocol.h>

@class CKRecordZoneID;

@interface CRKCloudFetchZoneOperation : CRKCloudOperation <CRKCloudResetable>
{
    CKRecordZoneID *_zoneId;
}

@property(readonly, nonatomic) CKRecordZoneID *zoneId; // @synthesize zoneId=_zoneId;
// - (void).cxx_destruct;
- (id)resetOperation;
- (void)main;
- (id)initWithDatabase:(id)arg1 zoneId:(id)arg2;
- (id)initWithDatabase:(id)arg1;

@end

