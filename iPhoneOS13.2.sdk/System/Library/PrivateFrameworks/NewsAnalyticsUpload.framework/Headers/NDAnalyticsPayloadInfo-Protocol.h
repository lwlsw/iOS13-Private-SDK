//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class NSArray, NSDictionary, NSURL;

@protocol NDAnalyticsPayloadInfo <NSCopying>
@property(readonly, copy, nonatomic) NSDictionary *droppedEntriesByReason;
@property(readonly, copy, nonatomic) NSArray *entriesToUpload;
@property(readonly, copy, nonatomic) NSDictionary *valuesByHTTPHeaderField;
@property(readonly, copy, nonatomic) NSURL *endpointURL;
@end

