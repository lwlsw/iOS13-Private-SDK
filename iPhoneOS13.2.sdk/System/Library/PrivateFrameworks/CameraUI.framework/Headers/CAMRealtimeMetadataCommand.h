//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CameraUI/CAMCaptureCommand.h>

@class NSArray;

@interface CAMRealtimeMetadataCommand : CAMCaptureCommand
{
    NSArray *__desiredTypes;
}

@property(readonly, copy, nonatomic) NSArray *_desiredTypes; // @synthesize _desiredTypes=__desiredTypes;
// - (void).cxx_destruct;
- (id)_metadataObjectTypeForRealtimeMetadataType:(long long)arg1;
- (id)_metadataObjectTypesForRealtimeMetadataTypes:(id)arg1 withAvailableMetadataTypes:(id)arg2;
- (void)executeWithContext:(id)arg1;
// - (id)copyWithZone:(_NSZone )arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithTypes:(id)arg1;

@end

