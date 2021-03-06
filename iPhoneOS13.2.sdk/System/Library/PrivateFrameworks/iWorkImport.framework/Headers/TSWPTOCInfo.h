//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <iWorkImport/TSWPShapeInfo.h>

#import <iWorkImport/TSWPTextualEquivalentProvider-Protocol.h>

@class NSArray, NSSet, TSWPTOCPartitioner, TSWPTOCSettings;

__attribute__((visibility("hidden")))
@interface TSWPTOCInfo : TSWPShapeInfo <TSWPTextualEquivalentProvider>
{
    TSWPTOCPartitioner *_partitioner;
    BOOL _shouldSyncTOCSettingsWithTOCNavigator;
    NSArray *_tocEntries;
    TSWPTOCSettings *_tocSettings;
    NSArray *_pageNumberRanges;
}

+ (BOOL)canPartitionInline;
@property(retain, nonatomic) NSArray *pageNumberRanges; // @synthesize pageNumberRanges=_pageNumberRanges;
@property(nonatomic) BOOL shouldSyncTOCSettingsWithTOCNavigator; // @synthesize shouldSyncTOCSettingsWithTOCNavigator=_shouldSyncTOCSettingsWithTOCNavigator;
@property(retain, nonatomic, setter=setTOCSettings:) TSWPTOCSettings *tocSettings; // @synthesize tocSettings=_tocSettings;
@property(retain, nonatomic, setter=setTOCEntries:) NSArray *tocEntries; // @synthesize tocEntries=_tocEntries;
// - (void).cxx_destruct;
- (id)textualEquivalent;
//  (void)saveTOCInfoMessage:(struct TOCInfoArchive )arg1 archiver:(id)arg2;
- (void)saveToArchiver:(id)arg1;
//  (void)loadTOCInfoMessage:(const struct TOCInfoArchive )arg1 unarchiver:(id)arg2;
- (void)loadFromUnarchiver:(id)arg1;
- (BOOL)supportsAttachedComments;
- (void)acceptVisitor:(id)arg1;
- (id)referencedStyles;
- (void)adoptStylesheet:(id)arg1 withMapper:(id)arg2;
- (void)regenerateStorageContent;
- (BOOL)p_startingTOCIsRTLForEntries:(id)arg1;
- (id)containedStorageFormattedUsingParagraphStyles;
- (id)containedStorageFormattedUsingParagraphStyle:(id)arg1;
@property(readonly, nonatomic) NSSet *paragraphStylesShownInTOC;
@property(readonly, nonatomic) NSArray *visibleTOCEntries;
- (id)partitioner;
- (BOOL)textIsVertical;
- (BOOL)wantsPositionFixedWhenCopying;
- (int)elementKind;
- (BOOL)isSelectable;
- (Class)editorClass;
- (Class)repClass;
- (id)copyWithContext:(id)arg1;

@end

