//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <iWorkImport/TSPObject.h>

@class NSHashTable, TSPDataMetadataMap;

__attribute__((visibility("hidden")))
@interface TSPPasteboardMetadata : TSPObject
{
//     struct PasteboardMetadata _message;
    TSPDataMetadataMap *_identifierToDataMetadataMap;
    BOOL _isCrossAppPaste;
    BOOL _isCrossDocumentPaste;
    NSHashTable *_dataReferences;
}

+ (id)appNameAndVersion;
+ (id)bundleIdentifier;
@property(readonly, nonatomic) NSHashTable *dataReferences; // @synthesize dataReferences=_dataReferences;
@property(readonly, nonatomic) BOOL isCrossDocumentPaste; // @synthesize isCrossDocumentPaste=_isCrossDocumentPaste;
@property(readonly, nonatomic) BOOL isCrossAppPaste; // @synthesize isCrossAppPaste=_isCrossAppPaste;
- (id).cxx_construct;
// - (void).cxx_destruct;
- (long long)tsp_identifier;
// - (struct PasteboardMetadata )message;
- (void)saveToArchiver:(id)arg1;
- (void)loadFromUnarchiver:(id)arg1;
- (id)dataMetadataForDataIdentifier:(long long)arg1;
- (void)setDataMetadata:(id)arg1 forDataIdentifier:(long long)arg2;
- (id)initWithContext:(id)arg1 dataReferences:(id)arg2;
- (id)initWithContext:(id)arg1;

@end

