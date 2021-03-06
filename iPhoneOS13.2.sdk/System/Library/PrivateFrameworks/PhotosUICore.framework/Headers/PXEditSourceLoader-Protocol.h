//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class NSError, NSNumber, NSProgress, NSString, PICompositionController, PLEditSource;

@protocol PXEditSourceLoader <NSObject>
@property(readonly, nonatomic) NSNumber *loadDuration;
@property(readonly, copy, nonatomic) NSString *contentIdentifier;
@property(readonly, nonatomic) NSError *error;
@property(readonly, nonatomic) long long baseVersion;
@property(readonly, copy, nonatomic) NSString *livePhotoPairingIdentifier;
@property(readonly, copy, nonatomic) PICompositionController *originalCompositionController;
@property(readonly, copy, nonatomic) PICompositionController *compositionController;
@property(readonly, nonatomic) PLEditSource *activeEditSource;
@property(readonly, nonatomic) PLEditSource *overcaptureEditSource;
@property(readonly, nonatomic) PLEditSource *editSource;
@property(readonly, nonatomic) NSProgress *progress;
- (void)beginLoading;
@end

