//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class AVCapturePhoto, CAMCaptureCoordinationInfo, NSArray, NSDate, NSDictionary, NSError, NSString;

@interface CAMStillImageCaptureResult : NSObject
{
    BOOL _shouldPersistAdjustmentSidecar;
    BOOL _expectingPairedVideo;
    AVCapturePhoto *_capturePhoto;
    NSDate *_captureDate;
    NSDictionary *_metadata;
    NSError *_error;
    NSArray *_adjustmentFilters;
    NSString *_persistenceUUID;
    CAMCaptureCoordinationInfo *_coordinationInfo;
}

@property(readonly, nonatomic, getter=isExpectingPairedVideo) BOOL expectingPairedVideo; // @synthesize expectingPairedVideo=_expectingPairedVideo;
@property(readonly, nonatomic) CAMCaptureCoordinationInfo *coordinationInfo; // @synthesize coordinationInfo=_coordinationInfo;
@property(readonly, copy, nonatomic) NSString *persistenceUUID; // @synthesize persistenceUUID=_persistenceUUID;
@property(readonly, nonatomic) NSArray *adjustmentFilters; // @synthesize adjustmentFilters=_adjustmentFilters;
@property(readonly, nonatomic) BOOL shouldPersistAdjustmentSidecar; // @synthesize shouldPersistAdjustmentSidecar=_shouldPersistAdjustmentSidecar;
@property(readonly, nonatomic) NSError *error; // @synthesize error=_error;
@property(readonly, copy, nonatomic) NSDictionary *metadata; // @synthesize metadata=_metadata;
@property(readonly, nonatomic) NSDate *captureDate; // @synthesize captureDate=_captureDate;
@property(readonly, nonatomic) AVCapturePhoto *capturePhoto; // @synthesize capturePhoto=_capturePhoto;
// - (void).cxx_destruct;
- (id)description;
- (id)compactMetadataWithSecondaryMakerNote:(id)arg1;
@property(readonly, nonatomic) NSDictionary *compactMetadata;
@property(readonly, copy, nonatomic) NSString *imageGroupIdentifier;
- (id)_captureDateFromMetadata:(id)arg1;
- (void)dealloc;

@end

