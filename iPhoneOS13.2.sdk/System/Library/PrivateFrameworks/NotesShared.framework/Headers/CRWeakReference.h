//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <NotesShared/CRCoding-Protocol.h>
#import <NotesShared/CRDataType-Protocol.h>

@class CRDocument, NSString, NSUUID;

@interface CRWeakReference : NSObject <CRDataType, CRCoding>
{
    NSUUID *_identifier;
    CRDocument *_document;
}

@property(nonatomic) __weak CRDocument *document; // @synthesize document=_document;
@property(retain, nonatomic) NSUUID *identifier; // @synthesize identifier=_identifier;
// - (void).cxx_destruct;
@property(readonly, copy) NSString *description;
- (id)tombstone;
- (void)realizeLocalChangesIn:(id)arg1;
- (void)walkGraph:(CDUnknownBlockType)arg1;
- (id)deltaSince:(id)arg1 in:(id)arg2;
- (void)mergeWith:(id)arg1;
@property(readonly, nonatomic) id contents;
- (void)encodeWithCRCoder:(id)arg1;
- (id)initWithCRCoder:(id)arg1;
- (id)initWithIdentifier:(id)arg1 document:(id)arg2;
- (id)initWithContents:(id)arg1 document:(id)arg2;
- (id)initWithContents:(id)arg1;

@end

