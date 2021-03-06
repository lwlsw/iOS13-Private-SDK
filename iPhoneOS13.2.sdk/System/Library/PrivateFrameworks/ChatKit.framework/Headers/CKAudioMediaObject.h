//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ChatKit/CKAVMediaObject.h>

@class NSArray;

@interface CKAudioMediaObject : CKAVMediaObject
{
}

+ (id)generateThumbnailForWidth:(double)arg1 color:(id)arg2 powerLevels:(id)arg3 fileURL:(id)arg4;
+ (id)_cachedPowerLevelsForKey:(id)arg1;
+ (void)_cachePowerLevels:(id)arg1 forKey:(id)arg2;
+ (BOOL)shouldUseTranscoderGeneratedPreviewSize;
+ (id)attachmentSummary:(NSUInteger)arg1;
+ (id)fallbackFilenamePrefix;
+ (id)UTITypes;
+ (Class)__ck_attachmentItemClass;
- (id)generatePlaceholderThumbnailForWidth:(double)arg1;
- (id)previewItemTitle;
- (id)generateThumbnailForWidth:(double)arg1 orientation:(BOOL)arg2;
- (id)savedPreviewFromURL:(id)arg1 forOrientation:(BOOL)arg2;
- (void)savePreview:(id)arg1 toURL:(id)arg2 forOrientation:(BOOL)arg3;
- (id)previewFilenameExtension;
- (id)generatePreviewFromThumbnail:(id)arg1 width:(double)arg2 orientation:(BOOL)arg3;
- (id)composeWaveformForWidth:(double)arg1 orientation:(BOOL)arg2;
- (id)waveformForWidth:(double)arg1 orientation:(BOOL)arg2;
- (void)export:(id)arg1;
- (BOOL)canExport;
- (Class)coloredBalloonViewClass;
- (BOOL)isLikeAudioMessage;
@property(retain, nonatomic) NSArray *powerLevels; // @dynamic powerLevels;
- (BOOL)shouldBeQuickLooked;
- (int)mediaType;

@end

