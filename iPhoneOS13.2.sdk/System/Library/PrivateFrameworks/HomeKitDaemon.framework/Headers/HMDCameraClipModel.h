//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HomeKitBackingStore/HMBModel.h>

@interface HMDCameraClipModel : HMBModel
{
}

+ (id)countOfClipsBetweenDatesQuery;
+ (id)countOfClipsBeforeDateQuery;
+ (id)countOfClipsAfterDateQuery;
+ (id)countOfClipsQuery;
+ (id)clipsBetweenDatesQuery;
+ (id)clipsAfterDateQuery;
+ (id)clipsBeforeDateQuery;
+ (id)incompleteClipsQuery;
+ (id)sentinelParentUUID;
+ (id)hmbQueries;
+ (id)hmbExternalRecordType;
+ (id)hmbProperties;
- (id)createClipWithSignificantEvents:(id)arg1;
- (id)createClip;

@end

