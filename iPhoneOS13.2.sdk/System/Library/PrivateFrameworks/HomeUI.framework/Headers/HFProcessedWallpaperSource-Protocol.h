//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class HFWallpaper, NSArray, UIImage;

@protocol HFProcessedWallpaperSource <NSObject>
@property(readonly, nonatomic) NSUInteger processVersionNumber;
@property(readonly, copy, nonatomic) NSArray *supportedVariants;
- (UIImage *)processedImageForVariant:(long long)arg1 wallpaper:(HFWallpaper *)arg2 image:(UIImage *)arg3;
@end

