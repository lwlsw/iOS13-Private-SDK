//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <NanoTimeKitCompanion/NTKAVListing-Protocol.h>

@class CLKDevice, CLKVideo, NSString, NTKPhotoAnalysis, UIImage;

@interface NTKTimelapseListing : NSObject <NSCopying, NTKAVListing>
{
    CLKDevice *_device;
    CLKVideo *_video;
    UIImage *_image;
    NSString *_videoName;
    NSString *_imageName;
    NTKPhotoAnalysis *_photoAnalysis;
    NSUInteger _theme;
    long long _videoIndex;
}

@property(readonly, nonatomic) NTKPhotoAnalysis *photoAnalysis; // @synthesize photoAnalysis=_photoAnalysis;
@property(readonly, nonatomic) long long videoIndex; // @synthesize videoIndex=_videoIndex;
@property(readonly, nonatomic) NSUInteger theme; // @synthesize theme=_theme;
// - (void).cxx_destruct;
- (void)discardAssets;
- (BOOL)snapshotDiffers:(id)arg1;
@property(readonly, nonatomic) UIImage *image;
@property(readonly, nonatomic) CLKVideo *video;
- (void)_setHasAssets;
- (BOOL)isSimilarTo:(id)arg1;
- (BOOL)isEqual:(id)arg1;
// - (id)copyWithZone:(_NSZone )arg1;
- (id)initForDevice:(id)arg1 withTheme:(NSUInteger)arg2 videoIndex:(long long)arg3 photoAnalysis:(id)arg4;

@end

