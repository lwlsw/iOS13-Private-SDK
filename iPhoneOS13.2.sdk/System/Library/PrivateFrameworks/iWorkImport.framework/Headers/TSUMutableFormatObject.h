//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <iWorkImport/TSUFormatObject.h>

#import <iWorkImport/TSCHCustomFormatUpdateSupport-Protocol.h>

__attribute__((visibility("hidden")))
@interface TSUMutableFormatObject : TSUFormatObject <TSCHCustomFormatUpdateSupport>
{
}

// - (id)copyWithZone:(_NSZone )arg1;
// @property(nonatomic) CDStruct_b1066b25 formatStruct; // @dynamic formatStruct;
- (void)remapCustomFormatKeysWithOldToNewKeyMap:(id)arg1;
- (void)upgradePreU2_0CustomFormatsForDocumentRoot:(id)arg1;
- (void)updateAfterPasteForDocumentRoot:(id)arg1 pasteboardCustomFormatList:(id)arg2;

@end

