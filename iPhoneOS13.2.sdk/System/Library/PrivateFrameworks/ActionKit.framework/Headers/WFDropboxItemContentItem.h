//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ContentKit/WFGenericFileContentItem.h>

#import <ActionKit/WFContentItemClass-Protocol.h>

@interface WFDropboxItemContentItem : WFGenericFileContentItem <WFContentItemClass>
{
}

+ (id)countDescription;
+ (id)pluralTypeDescription;
+ (id)typeDescription;
+ (id)contentCategories;
+ (id)outputTypes;
+ (id)ownedTypes;
+ (BOOL)isAvailableOnPlatform:(long long)arg1;
+ (id)propertyBuilders;
- (BOOL)getListThumbnail:(CDUnknownBlockType)arg1 forSize:(CGSize)arg2;
- (BOOL)getListAltText:(CDUnknownBlockType)arg1;
- (BOOL)getListSubtitle:(CDUnknownBlockType)arg1;
- (id)richListTitle;
- (BOOL)canEncodeWithCoder:(id)arg1;
- (void)getPreferredFileExtension:(CDUnknownBlockType)arg1;
- (void)getPreferredFileSize:(CDUnknownBlockType)arg1;
- (id)representedFilename;
- (id)representedFileType;
- (id)overrideFilename;
- (id)outputTypes;
- (BOOL)hasStringOutput;
- (void)generateObjectRepresentation:(CDUnknownBlockType)arg1 options:(id)arg2 forClass:(Class)arg3;
- (void)generateFileRepresentation:(CDUnknownBlockType)arg1 options:(id)arg2 forType:(id)arg3;
- (id)metadata;

@end

