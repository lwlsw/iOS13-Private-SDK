//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosUICore/PXActionMenuDelegate-Protocol.h>

@class PXAssetCollectionActionPerformer, PXPhotoDetailsActionMenuController;
@protocol PXDisplayAssetCollection;

@protocol PXPhotosDetailsActionMenuDelegate <PXActionMenuDelegate>

@optional
- (void)actionMenu:(PXPhotoDetailsActionMenuController *)arg1 assetCollectionActionPerformer:(PXAssetCollectionActionPerformer *)arg2 playMovieForAssetCollection:(id <PXDisplayAssetCollection>)arg3;
@end

