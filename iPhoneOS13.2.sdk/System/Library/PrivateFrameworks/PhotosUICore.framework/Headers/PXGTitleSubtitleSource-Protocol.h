//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosUICore/PXGLayoutContentSource-Protocol.h>

@class NSString, PXTitleSubtitleLabelSpec;

@protocol PXGTitleSubtitleSource <PXGLayoutContentSource>
- (PXTitleSubtitleLabelSpec *)titleSubtitleSpecForSpriteAtIndex:(unsigned int)arg1;
- (NSString *)subtitleForSpriteAtIndex:(unsigned int)arg1;
- (NSString *)titleForSpriteAtIndex:(unsigned int)arg1;

@optional
- (void)didRenderTitleAndSubtitleSpriteAtIndex:(unsigned int)arg1 layoutVersion:(long long)arg2 withLastBaseline:(double)arg3;
@end

