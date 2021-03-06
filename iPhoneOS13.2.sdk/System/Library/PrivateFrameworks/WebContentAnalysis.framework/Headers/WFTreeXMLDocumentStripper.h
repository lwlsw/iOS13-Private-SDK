//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <WebContentAnalysis/WFWebPageProtocol-Protocol.h>

@class NSMutableArray, NSMutableDictionary, NSString;

__attribute__((visibility("hidden")))
@interface WFTreeXMLDocumentStripper : NSObject <WFWebPageProtocol>
{
//     struct _xmlDoc xmlDocument;
    NSString *pageTitle;
    NSMutableDictionary *metaTagsLabeled;
    NSMutableArray *metaTagsUnlabeled;
    NSMutableArray *scriptBlocks;
    NSMutableArray *images;
    NSString *pageContent;
    NSMutableArray *links;
    BOOL hasFrameset;
    BOOL hasShortRefresh;
}

// + (id)treeStripperWithXMLDocument:(struct _xmlDoc )arg1;
- (void)dealloc;
- (id)description;
// - (id)processXMLDocument:(struct _xmlDoc )arg1 blockComments:(BOOL)arg2;
// - (void)processXMLDocument:(struct _xmlDoc )arg1;
- (void)strip;
- (BOOL)hasShortRefresh;
- (BOOL)hasFrameset;
- (id)links;
- (id)pageContent;
- (id)images;
- (id)scriptBlocks;
- (id)metaTagsUnlabeled;
- (id)metaTagsLabeled;
- (id)metaTagRating;
- (id)metaTagKeywords;
- (id)metaTagDescription;
- (id)pageTitle;
- (id)URLString;
- (void)setPageTitle:(id)arg1;
// - (void)setXMLDocument:(struct _xmlDoc )arg1;
// - (id)initWithXMLDocument:(struct _xmlDoc )arg1;

@end

