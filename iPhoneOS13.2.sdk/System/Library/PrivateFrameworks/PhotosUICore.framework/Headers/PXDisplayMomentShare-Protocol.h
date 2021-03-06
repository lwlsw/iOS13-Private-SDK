//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosUICore/PXDisplayAssetCollection-Protocol.h>
#import <PhotosUICore/PXMediaTypeAggregating-Protocol.h>

@class NSDate, NSString, NSURL;

@protocol PXDisplayMomentShare <PXDisplayAssetCollection, PXMediaTypeAggregating>
@property(readonly, nonatomic) long long px_momentShareType;
@property(readonly, nonatomic) NSDate *endDate;
@property(readonly, nonatomic) NSDate *startDate;
@property(readonly, nonatomic) NSString *localizedTitle;
@property(readonly, nonatomic) NSDate *expiryDate;
@property(readonly, nonatomic) NSURL *shareURL;
@property(readonly, nonatomic) NSUInteger uploadedVideosCount;
@property(readonly, nonatomic) NSUInteger uploadedPhotosCount;
@property(readonly, nonatomic) NSUInteger videosCount;
@property(readonly, nonatomic) NSUInteger photosCount;
@property(readonly, nonatomic) NSUInteger assetCount;
@property(readonly, nonatomic) unsigned short status;
@end

