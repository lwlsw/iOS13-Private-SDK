//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <VideosUI/VUILibraryProductLockupViewLayout-Protocol.h>

@class VUIMediaEntityType;

__attribute__((visibility("hidden")))
@interface VUILibraryProductLockupLayout : NSObject <VUILibraryProductLockupViewLayout>
{
    long long _type;
    VUIMediaEntityType *_entityType;
}

@property(readonly, nonatomic) VUIMediaEntityType *entityType; // @synthesize entityType=_entityType;
@property(readonly, nonatomic) long long type; // @synthesize type=_type;
// - (void).cxx_destruct;
- (id)contentDescriptionFont;
- (int)contentDescriptionNumberOfLines;
- (long long)downloadButtonPosition;
- (BOOL)shouldShowTitleLabel;
- (double)buttonModuleTopMargin;
- (double)contentDescriptionBottomMargin;
- (double)contentDescriptionTopMargin;
- (double)metadataTopMargin;
- (double)subtitleTopMargin;
- (double)titleTopMargin;
- (double)coverArtBottomPadding;
- (double)coverArtImageRightMargin;
- (CGSize)coverArtImageSize;
- (long long)layoutType;
- (id)initWithLayoutType:(long long)arg1 entityType:(id)arg2;

@end

